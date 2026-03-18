/*
 * XREFs of CmpUnlockKcbStackFlusherLocksExclusive @ 0x14036BA64
 * Callers:
 *     CmSaveKey @ 0x14072513C (CmSaveKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1405F3B6C (CmpGetKcbAtLayerHeight.c)
 *     HvUnlockHiveFlusherExclusive @ 0x14064CF54 (HvUnlockHiveFlusherExclusive.c)
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
