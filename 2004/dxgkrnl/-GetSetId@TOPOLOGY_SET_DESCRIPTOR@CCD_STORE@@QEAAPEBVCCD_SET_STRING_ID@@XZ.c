/*
 * XREFs of ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C012CDF0
 * Callers:
 *     ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C0142940 (-_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@C.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C01429D8 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C015B840 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 * Callees:
 *     _CcdLazyRetrieveSetIdFromRegistry @ 0x1C012CE30 (_CcdLazyRetrieveSetIdFromRegistry.c)
 */

const struct CCD_SET_STRING_ID *__fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this)
{
  int SetIdFromRegistry; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  _QWORD *v7; // rax

  SetIdFromRegistry = CcdLazyRetrieveSetIdFromRegistry(*((_QWORD *)this + 8), L"SetId", this);
  v5 = SetIdFromRegistry;
  if ( SetIdFromRegistry >= 0 )
    return this;
  v7 = (_QWORD *)WdLogNewEntry5_WdError(v4, v3);
  v7[3] = v5;
  v7[4] = this;
  v7[5] = *((_QWORD *)this + 8);
  WdLogEvent5_WdError(v7);
  return 0LL;
}
