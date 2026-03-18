/*
 * XREFs of CmpStartKcbStackForTopLayerKcb @ 0x14066FBB0
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1404EB788 (CmDeleteLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405D5580 (CmpEnumerateLayeredKey.c)
 *     CmpSetKeySecurity @ 0x1405E0AE4 (CmpSetKeySecurity.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405F3F40 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpDoWritethroughReparse @ 0x14060C070 (CmpDoWritethroughReparse.c)
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14061CB10 (CmpGetSymbolicLinkTarget.c)
 *     CmDeleteValueKey @ 0x14066C6F4 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x14066E7B0 (CmSetValueKey.c)
 *     CmpQueryKeySecurity @ 0x14066F1E0 (CmpQueryKeySecurity.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14066FA70 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpPerformUnloadKey @ 0x1406A26DC (CmpPerformUnloadKey.c)
 *     CmpReportNotify @ 0x1406A456C (CmpReportNotify.c)
 *     CmpCheckKeyBodyAccess @ 0x1406C3268 (CmpCheckKeyBodyAccess.c)
 *     CmpStartSiloRegistryNamespace @ 0x1406E3CDC (CmpStartSiloRegistryNamespace.c)
 *     CmDeleteKey @ 0x1407022EC (CmDeleteKey.c)
 *     CmSaveKey @ 0x14072513C (CmSaveKey.c)
 *     CmpAssignKeySecurity @ 0x1407CC190 (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x14086BE40 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14086E630 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14086E904 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14087047C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140870938 (CmSetLastWriteTimeKey.c)
 *     CmpDoBuildVirtualStack @ 0x14087276C (CmpDoBuildVirtualStack.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140204C50 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmpSetKcbAtLayerHeight @ 0x1405D3CAC (CmpSetKcbAtLayerHeight.c)
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
