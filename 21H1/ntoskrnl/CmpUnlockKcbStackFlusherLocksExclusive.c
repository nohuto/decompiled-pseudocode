/*
 * XREFs of CmpUnlockKcbStackFlusherLocksExclusive @ 0x1403690C4
 * Callers:
 *     CmSaveKey @ 0x140714DEC (CmSaveKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x14061CD58 (CmpGetKcbAtLayerHeight.c)
 *     HvUnlockHiveFlusherExclusive @ 0x14068847C (HvUnlockHiveFlusherExclusive.c)
 */

void __fastcall CmpUnlockKcbStackFlusherLocksExclusive(__int64 a1)
{
  __int16 i; // bx
  __int64 KcbAtLayerHeight; // rax

  for ( i = *(_WORD *)(a1 + 2); i >= 0; --i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
    HvUnlockHiveFlusherExclusive(*(_QWORD *)(KcbAtLayerHeight + 32));
  }
}
