/*
 * XREFs of MiReplacePfnWithGapMapping @ 0x1403B954C
 * Callers:
 *     MiPfnRangeIsZero @ 0x1403B91E8 (MiPfnRangeIsZero.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140301C90 (MiInsertRecursiveTbFlushEntries.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x140319B24 (MiInsertLargeTbFlushEntry.c)
 *     MiTransformValidPteInPlace @ 0x140378E4C (MiTransformValidPteInPlace.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

void __fastcall MiReplacePfnWithGapMapping(volatile signed __int64 *a1, signed int a2, __int64 a3, __int64 a4)
{
  char v6; // al
  unsigned __int64 v7; // rbx
  int v8; // esi
  _KPROCESS *v9; // rdx
  __int64 v10; // r8
  bool v11; // zf
  unsigned __int64 ValidPte; // rax
  _QWORD v13[24]; // [rsp+20h] [rbp-D8h] BYREF

  if ( qword_140C4EC48 != (PVOID)qword_140C4EC50 )
  {
    ValidPte = MiMakeValidPte(
                 (unsigned __int64)a1,
                 (__int64)*(&qword_140C4EC48 + a2),
                 a2 != 0 ? -1476395004 : 536870913,
                 a4);
    MiTransformValidPteInPlace(a1, (__int64)a1, ValidPte, a2);
    return;
  }
  memset(v13, 0, 0xB8uLL);
  v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  v13[3] = 0LL;
  LODWORD(v13[1]) = 20;
  if ( a2 && v6 < 0 )
    MiInsertLargeTbFlushEntry((__int64)v13, a2, (unsigned __int64)a1);
  else
    MiInsertRecursiveTbFlushEntries((__int64)v13, a2, (unsigned __int64)a1);
  v7 = ZeroPte;
  v8 = 0;
  if ( MiPteInShadowRange((unsigned __int64)a1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v8 = 1;
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_5;
      v11 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_5;
      v11 = (ZeroPte & 1) == 0;
    }
    if ( !v11 )
      v7 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_5:
  *a1 = v7;
  if ( v8 )
    MiWritePteShadow((__int64)a1, v7, v10);
  MiFlushTbList((unsigned int *)v13, v9);
}
