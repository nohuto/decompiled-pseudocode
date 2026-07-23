/*
 * XREFs of MiReplacePfnWithGapMapping @ 0x1403BA0BC
 * Callers:
 *     MiPfnRangeIsZero @ 0x1403B9D58 (MiPfnRangeIsZero.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x1402199E0 (MiInsertLargeTbFlushEntry.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x14021B470 (MiInsertRecursiveTbFlushEntries.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiTransformValidPteInPlace @ 0x140378BA8 (MiTransformValidPteInPlace.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

void __fastcall MiReplacePfnWithGapMapping(volatile signed __int64 *a1, signed int a2)
{
  char v4; // al
  unsigned __int64 v5; // rbx
  int v6; // esi
  _KPROCESS *v7; // rdx
  bool v8; // zf
  unsigned __int64 ValidPte; // rax
  _QWORD v10[24]; // [rsp+20h] [rbp-D8h] BYREF

  if ( qword_140C4EE08 != (PVOID)qword_140C4EE10 )
  {
    ValidPte = MiMakeValidPte(
                 (unsigned __int64)a1,
                 (__int64)*(&qword_140C4EE08 + a2),
                 a2 != 0 ? -1476395004 : 536870913);
    MiTransformValidPteInPlace(a1, (__int64)a1, ValidPte, a2);
    return;
  }
  memset(v10, 0, 0xB8uLL);
  v4 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  v10[3] = 0LL;
  LODWORD(v10[1]) = 20;
  if ( a2 && v4 < 0 )
    MiInsertLargeTbFlushEntry((__int64)v10, a2, (__int64)a1);
  else
    MiInsertRecursiveTbFlushEntries((__int64)v10, a2, (__int64)a1);
  v5 = ZeroPte;
  v6 = 0;
  if ( MiPteInShadowRange((unsigned __int64)a1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v6 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_5;
      v8 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_5;
      v8 = (ZeroPte & 1) == 0;
    }
    if ( !v8 )
      v5 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_5:
  *a1 = v5;
  if ( v6 )
    MiWritePteShadow((__int64)a1, v5);
  MiFlushTbList((__int64)v10, v7);
}
