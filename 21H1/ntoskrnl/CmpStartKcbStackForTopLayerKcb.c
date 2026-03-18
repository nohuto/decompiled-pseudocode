/*
 * XREFs of CmpStartKcbStackForTopLayerKcb @ 0x14061ABF0
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1404E78C8 (CmDeleteLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405CDD00 (CmpEnumerateLayeredKey.c)
 *     CmpDoWritethroughReparse @ 0x1405E9D60 (CmpDoWritethroughReparse.c)
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     CmpQueryKeySecurity @ 0x14061A030 (CmpQueryKeySecurity.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14061AC90 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpGetSymbolicLinkTarget @ 0x14061C310 (CmpGetSymbolicLinkTarget.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140622420 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     CmpReportNotify @ 0x1406581E4 (CmpReportNotify.c)
 *     CmpPerformUnloadKey @ 0x14065A0C0 (CmpPerformUnloadKey.c)
 *     CmpSetKeySecurity @ 0x14068AE1C (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x140692448 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1406941D8 (CmDeleteValueKey.c)
 *     CmpCheckKeyBodyAccess @ 0x1406BB974 (CmpCheckKeyBodyAccess.c)
 *     CmpStartSiloRegistryNamespace @ 0x1406ED80C (CmpStartSiloRegistryNamespace.c)
 *     CmSaveKey @ 0x140714DEC (CmSaveKey.c)
 *     CmpAssignKeySecurity @ 0x1407BA790 (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x140865100 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1408678C0 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140867B94 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1408696D8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140869B94 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14025C5C0 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmpSetKcbAtLayerHeight @ 0x1405CC470 (CmpSetKcbAtLayerHeight.c)
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
