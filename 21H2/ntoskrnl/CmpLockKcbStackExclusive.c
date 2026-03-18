/*
 * XREFs of CmpLockKcbStackExclusive @ 0x14067E974
 * Callers:
 *     CmDeleteLayeredKey @ 0x14053F5E8 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x14067E1BC (CmDeleteKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x140690978 (CmpStartSiloRegistryNamespace.c)
 *     CmpAssignKeySecurity @ 0x14085BE8C (CmpAssignKeySecurity.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x140721CE0 (CmpGetKcbAtLayerHeight.c)
 *     CmpLockKcbExclusive @ 0x1407C0854 (CmpLockKcbExclusive.c)
 */

void __fastcall CmpLockKcbStackExclusive(__int64 a1)
{
  unsigned __int16 i; // bx
  __int64 KcbAtLayerHeight; // rax

  for ( i = 0; i <= *(_WORD *)(a1 + 2); ++i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, i);
    CmpLockKcbExclusive(KcbAtLayerHeight);
  }
}
