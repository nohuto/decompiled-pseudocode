/*
 * XREFs of CmpStartKcbStackForTopLayerKcb @ 0x1407C05F4
 * Callers:
 *     CmQueryLayeredKey @ 0x140226200 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x14053F5E8 (CmDeleteLayeredKey.c)
 *     CmSaveKey @ 0x14065A44C (CmSaveKey.c)
 *     CmpSetKeySecurity @ 0x140677810 (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x14067E1BC (CmDeleteKey.c)
 *     CmpDoWritethroughReparse @ 0x140680100 (CmpDoWritethroughReparse.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406803C0 (CmpGetSymbolicLinkTarget.c)
 *     CmpStartSiloRegistryNamespace @ 0x140690978 (CmpStartSiloRegistryNamespace.c)
 *     CmpPerformUnloadKey @ 0x14069E98C (CmpPerformUnloadKey.c)
 *     CmpReportNotify @ 0x14069EF78 (CmpReportNotify.c)
 *     CmDeleteValueKey @ 0x140714E58 (CmDeleteValueKey.c)
 *     CmpIsKeyDeleted @ 0x14071A6D4 (CmpIsKeyDeleted.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x140720E20 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeySecurity @ 0x140721254 (CmpQueryKeySecurity.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1407F6698 (CmEnumerateValueFromLayeredKey.c)
 *     CmpCheckKeyBodyAccess @ 0x1407F7AD0 (CmpCheckKeyBodyAccess.c)
 *     CmpAssignKeySecurity @ 0x14085BE8C (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x1408812B0 (CmCallbackGetKeyObjectID.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x14090E160 (CmOpenKeyForBugCheckRecovery.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14091210C (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140913964 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140913E28 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140914324 (CmpEnumerateLayeredKey.c)
 *     CmpDoBuildVirtualStack @ 0x140916918 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     CmpPopulateKcbStack @ 0x1407C063C (CmpPopulateKcbStack.c)
 *     CmpStartKcbStack @ 0x1407C07F4 (CmpStartKcbStack.c)
 */

__int64 __fastcall CmpStartKcbStackForTopLayerKcb(__int64 a1, __int64 a2)
{
  int started; // ebx

  started = CmpStartKcbStack(a1, *(unsigned __int16 *)(a2 + 66));
  if ( started >= 0 )
    CmpPopulateKcbStack(a1, a2);
  return (unsigned int)started;
}
