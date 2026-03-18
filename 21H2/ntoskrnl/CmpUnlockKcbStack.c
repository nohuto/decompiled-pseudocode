/*
 * XREFs of CmpUnlockKcbStack @ 0x140721BAC
 * Callers:
 *     CmQueryLayeredKey @ 0x140226200 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x14053F5E8 (CmDeleteLayeredKey.c)
 *     CmSaveKey @ 0x14065A44C (CmSaveKey.c)
 *     CmpSetKeySecurity @ 0x140677810 (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x14067E1BC (CmDeleteKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406803C0 (CmpGetSymbolicLinkTarget.c)
 *     CmpStartSiloRegistryNamespace @ 0x140690978 (CmpStartSiloRegistryNamespace.c)
 *     CmDeleteValueKey @ 0x140714E58 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x140720E20 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeySecurity @ 0x140721254 (CmpQueryKeySecurity.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x1407C83F0 (CmQueryValueKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1407F6698 (CmEnumerateValueFromLayeredKey.c)
 *     CmpAssignKeySecurity @ 0x14085BE8C (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x1408812B0 (CmCallbackGetKeyObjectID.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x14090E160 (CmOpenKeyForBugCheckRecovery.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14091210C (CmQueryMultipleValueForLayeredKey.c)
 *     CmSetKeyFlags @ 0x140913964 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140913E28 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140914324 (CmpEnumerateLayeredKey.c)
 *     CmpDoBuildVirtualStack @ 0x140916918 (CmpDoBuildVirtualStack.c)
 *     CmpPromoteKey @ 0x1409226E0 (CmpPromoteKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x140721CE0 (CmpGetKcbAtLayerHeight.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 */

void __fastcall CmpUnlockKcbStack(__int64 a1)
{
  unsigned __int16 i; // bx
  __int64 KcbAtLayerHeight; // rax

  for ( i = 0; i <= *(_WORD *)(a1 + 2); ++i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, i);
    CmpUnlockKcb(KcbAtLayerHeight);
  }
}
