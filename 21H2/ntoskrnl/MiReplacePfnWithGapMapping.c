/*
 * XREFs of MiReplacePfnWithGapMapping @ 0x1403C92F4
 * Callers:
 *     MiPfnRangeIsZero @ 0x1403C8EF8 (MiPfnRangeIsZero.c)
 * Callees:
 *     MiTransformValidPteInPlace @ 0x1402270B8 (MiTransformValidPteInPlace.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402285E8 (MiInsertLargeTbFlushEntry.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140228BCC (MiInsertRecursiveTbFlushEntries.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall MiReplacePfnWithGapMapping(volatile signed __int64 *a1, signed int a2)
{
  unsigned __int64 ValidPte; // rax
  char v5; // al
  unsigned __int64 v6; // rbx
  int v7; // esi
  bool v8; // zf
  _QWORD v9[24]; // [rsp+20h] [rbp-D8h] BYREF

  if ( qword_140C532D8 != (PVOID)qword_140C532E0 )
  {
    ValidPte = MiMakeValidPte(
                 (unsigned __int64)a1,
                 (__int64)*(&qword_140C532D8 + a2),
                 a2 != 0 ? -1476395004 : 536870913);
    MiTransformValidPteInPlace(a1, (unsigned __int64)a1, ValidPte, a2);
    return;
  }
  memset(v9, 0, 0xB8uLL);
  v5 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  v9[3] = 0LL;
  LODWORD(v9[1]) = 20;
  if ( a2 && v5 < 0 )
    MiInsertLargeTbFlushEntry((__int64)v9, a2, (__int64)a1);
  else
    MiInsertRecursiveTbFlushEntries((__int64)v9, a2, (__int64)a1);
  v6 = ZeroPte;
  v7 = 0;
  if ( MiPteInShadowRange((unsigned __int64)a1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v7 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
        v8 = (ZeroPte & 1) == 0;
        goto LABEL_13;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v8 = (ZeroPte & 1) == 0;
LABEL_13:
      if ( !v8 )
        v6 = ZeroPte | 0x8000000000000000uLL;
    }
  }
  *a1 = v6;
  if ( v7 )
    MiWritePteShadow((__int64)a1, v6);
  MiFlushTbList((__int64)v9);
}
