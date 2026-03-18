/*
 * XREFs of _CcdLazyRetrieveSetIdFromRegistry @ 0x1C01AF59C
 * Callers:
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C01AF568 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C01B7DB0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C01B7FB8 (-GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOP.c)
 * Callees:
 *     _CcdRetrieveSetIdFromRegistry @ 0x1C01AF234 (_CcdRetrieveSetIdFromRegistry.c)
 */

__int64 __fastcall CcdLazyRetrieveSetIdFromRegistry(void *a1, const WCHAR *a2, __int64 a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(int *)a3 < 0 || !*(_WORD *)(a3 + 8) )
    return CcdRetrieveSetIdFromRegistry(a1, a2, a3);
  return result;
}
