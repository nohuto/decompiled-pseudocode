/*
 * XREFs of CmpUnlockKcbStackFlusherLocksExclusive @ 0x140200008
 * Callers:
 *     CmSaveKey @ 0x14065A44C (CmSaveKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x140721CE0 (CmpGetKcbAtLayerHeight.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AB41E0 (HvUnlockHiveFlusherExclusive.c)
 */

void __fastcall CmpUnlockKcbStackFlusherLocksExclusive(__int64 a1)
{
  __int16 i; // bx
  __int64 KcbAtLayerHeight; // rax

  for ( i = *(_WORD *)(a1 + 2); i >= 0; --i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, (unsigned __int16)i);
    HvUnlockHiveFlusherExclusive(*(_QWORD *)(KcbAtLayerHeight + 32));
  }
}
