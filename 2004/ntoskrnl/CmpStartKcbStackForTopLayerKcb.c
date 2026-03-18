/*
 * XREFs of CmpStartKcbStackForTopLayerKcb @ 0x1405E55D0
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1404E7EF8 (CmDeleteLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405CF0D0 (CmpEnumerateLayeredKey.c)
 *     CmDeleteValueKey @ 0x1405DDB38 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1405E3F50 (CmSetValueKey.c)
 *     CmpQueryKeySecurity @ 0x1405E4A10 (CmpQueryKeySecurity.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1405E5670 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405E6CF0 (CmpGetSymbolicLinkTarget.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405ECE00 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     CmpSetKeySecurity @ 0x14063D900 (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x140643F58 (CmDeleteKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x14064F8D0 (CmpStartSiloRegistryNamespace.c)
 *     CmpPerformUnloadKey @ 0x1406503FC (CmpPerformUnloadKey.c)
 *     CmpReportNotify @ 0x1406547E8 (CmpReportNotify.c)
 *     CmpDoWritethroughReparse @ 0x1406932A0 (CmpDoWritethroughReparse.c)
 *     CmpCheckKeyBodyAccess @ 0x1406DCBB4 (CmpCheckKeyBodyAccess.c)
 *     CmSaveKey @ 0x14071717C (CmSaveKey.c)
 *     CmpAssignKeySecurity @ 0x1407BD900 (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x140866420 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140868C10 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140868EE4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14086AA28 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086AEE4 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x1402036A0 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpSetKcbAtLayerHeight @ 0x1405CD840 (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpStartKcbStackForTopLayerKcb(__int64 a1, __int64 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  int v4; // esi
  PVOID v5; // rbp
  __int16 v8; // dx
  __int64 i; // r10
  __int64 v11; // r10
  __int16 v12; // dx
  SIZE_T v13; // r14
  PVOID TransientPoolWithTag; // rax

  v4 = *(__int16 *)(a2 + 66);
  v5 = 0LL;
  if ( v4 >= 2 )
  {
    v13 = 8LL * (unsigned int)(v4 - 1);
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, v13, 0x35364D43u, a4);
    v5 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
      return 3221225626LL;
    memset(TransientPoolWithTag, 0, v13);
  }
  *(_WORD *)a1 = v4;
  *(_WORD *)(a1 + 2) = -1;
  *(_QWORD *)(a1 + 24) = v5;
  *(_WORD *)(a1 + 2) = *(_WORD *)(a2 + 66);
  v8 = *(_WORD *)(a2 + 66);
  if ( v8 )
  {
    for ( i = *(_QWORD *)(a2 + 192); i; v8 = v12 - 1 )
    {
      CmpSetKcbAtLayerHeight(a1, v8, *(_QWORD *)(i + 16));
      i = *(_QWORD *)(v11 + 24);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 8) = a2;
  }
  return 0LL;
}
