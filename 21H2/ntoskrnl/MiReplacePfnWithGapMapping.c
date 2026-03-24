/*
 * XREFs of MiReplacePfnWithGapMapping @ 0x1403B9F4C
 * Callers:
 *     MiPfnRangeIsZero @ 0x1403B9BE8 (MiPfnRangeIsZero.c)
 * Callees:
 *     MiInsertRecursiveTbFlushEntries @ 0x1402974A8 (MiInsertRecursiveTbFlushEntries.c)
 *     MiInsertLargeTbFlushEntry @ 0x14029A7DC (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiTransformValidPteInPlace @ 0x140379058 (MiTransformValidPteInPlace.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 */

void __fastcall MiReplacePfnWithGapMapping(volatile signed __int64 *a1, signed int a2)
{
  char v4; // al
  unsigned __int64 v5; // rbx
  int v6; // esi
  _KPROCESS *v7; // rdx
  __int64 v8; // r8
  bool v9; // zf
  unsigned __int64 ValidPte; // rax
  _QWORD v11[24]; // [rsp+20h] [rbp-D8h] BYREF

  if ( qword_140C4EDC8 != (PVOID)qword_140C4EDD0 )
  {
    ValidPte = MiMakeValidPte(
                 (unsigned __int64)a1,
                 (__int64)*(&qword_140C4EDC8 + a2),
                 a2 != 0 ? -1476395004 : 536870913);
    MiTransformValidPteInPlace(a1, (__int64)a1, ValidPte, a2);
    return;
  }
  memset(v11, 0, 0xB8uLL);
  v4 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  v11[3] = 0LL;
  LODWORD(v11[1]) = 20;
  if ( a2 && v4 < 0 )
    MiInsertLargeTbFlushEntry((__int64)v11, a2, (__int64)a1);
  else
    MiInsertRecursiveTbFlushEntries((__int64)v11, a2, (__int64)a1);
  v5 = ZeroPte;
  v6 = 0;
  if ( MiPteInShadowRange((unsigned __int64)a1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v6 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_5;
      v9 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_5;
      v9 = (ZeroPte & 1) == 0;
    }
    if ( !v9 )
      v5 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_5:
  *a1 = v5;
  if ( v6 )
    MiWritePteShadow((__int64)a1, v5, v8);
  MiFlushTbList((__int64)v11, v7);
}
