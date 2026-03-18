/*
 * XREFs of MiReplacePfnWithGapMapping @ 0x1403B5C7C
 * Callers:
 *     MiPfnRangeIsZero @ 0x1403B5918 (MiPfnRangeIsZero.c)
 * Callees:
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1402F26B0 (MiInsertRecursiveTbFlushEntries.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402FB584 (MiInsertLargeTbFlushEntry.c)
 *     MiTransformValidPteInPlace @ 0x1403760AC (MiTransformValidPteInPlace.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

void __fastcall MiReplacePfnWithGapMapping(volatile signed __int64 *a1, signed int a2, __int64 a3, __int64 a4)
{
  char v6; // al
  unsigned __int64 v7; // rbx
  int v8; // esi
  _KPROCESS *v9; // rdx
  bool v10; // zf
  unsigned __int64 ValidPte; // rax
  _QWORD v12[24]; // [rsp+20h] [rbp-D8h] BYREF

  if ( qword_140C4ED08 != (PVOID)qword_140C4ED10 )
  {
    ValidPte = MiMakeValidPte(
                 (unsigned __int64)a1,
                 (__int64)*(&qword_140C4ED08 + a2),
                 a2 != 0 ? -1476395004 : 536870913,
                 a4);
    MiTransformValidPteInPlace(a1, (__int64)a1, ValidPte, a2);
    return;
  }
  memset(v12, 0, 0xB8uLL);
  v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  v12[3] = 0LL;
  LODWORD(v12[1]) = 20;
  if ( a2 && v6 < 0 )
    MiInsertLargeTbFlushEntry((__int64)v12, a2, (unsigned __int64)a1);
  else
    MiInsertRecursiveTbFlushEntries((__int64)v12, a2, (unsigned __int64)a1);
  v7 = ZeroPte;
  v8 = 0;
  if ( MiPteInShadowRange((unsigned __int64)a1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v8 = 1;
      if ( HIBYTE(word_140C4DF48) )
        goto LABEL_5;
      v10 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_5;
      v10 = (ZeroPte & 1) == 0;
    }
    if ( !v10 )
      v7 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_5:
  *a1 = v7;
  if ( v8 )
    MiWritePteShadow((__int64)a1, v7);
  MiFlushTbList((__int64)v12, v9);
}
