/*
 * XREFs of ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00EA404
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00E3080 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x1C00E6AC8 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 *     _CcdRetrieveSetIdFromRegistry @ 0x1C00E72D8 (_CcdRetrieveSetIdFromRegistry.c)
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00E8E60 (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00E9F98 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0139394 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ??0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C0139B18 (--0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C013ABE0 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C013BDA4 (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00EA298 (-_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z @ 0x1C00EA50C (-_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0139AC4 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

CCD_SET_STRING_ID *__fastcall CCD_SET_STRING_ID::operator=(CCD_SET_STRING_ID *this, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int16 v8; // ax
  void *v9; // rcx
  SIZE_T v10; // rax
  PVOID v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rax
  __int64 v18; // rax

  if ( this != (CCD_SET_STRING_ID *)a2 )
  {
    if ( *(_WORD *)(a2 + 8) )
    {
      *((_DWORD *)this + 10) = 0;
      operator delete[](*((void **)this + 6));
      *((_QWORD *)this + 6) = 0LL;
      v4 = CCD_SET_STRING_ID::_CopyString((struct _STRING *)((char *)this + 8), (const struct _STRING *)(a2 + 8));
      *(_DWORD *)this = v4;
      if ( v4 >= 0 )
      {
        v7 = *(_QWORD *)(a2 + 24);
        if ( !v7 || !*(_WORD *)(a2 + 32) )
        {
          v17 = WdLogNewEntry5_WdAssertion(v6, v5);
          WdLogEvent5_WdAssertion(v17);
          v7 = *(_QWORD *)(a2 + 24);
        }
        if ( !v7 || (v8 = *(_WORD *)(a2 + 32)) == 0 )
        {
          CCD_SET_STRING_ID::_ParseMonitorDescriptors(this, v5);
          return this;
        }
        if ( v8 <= *((_WORD *)this + 16) )
          goto LABEL_12;
        v9 = (void *)*((_QWORD *)this + 3);
        *((_WORD *)this + 16) = 0;
        operator delete[](v9);
        v10 = 8LL * *(unsigned __int16 *)(a2 + 32);
        if ( !is_mul_ok(*(unsigned __int16 *)(a2 + 32), 8uLL) )
          v10 = -1LL;
        v11 = operator new[](v10, 0x63644356u, PagedPool);
        *((_QWORD *)this + 3) = v11;
        if ( v11 )
        {
LABEL_12:
          memmove(*((void **)this + 3), *(const void **)(a2 + 24), 8LL * *(unsigned __int16 *)(a2 + 32));
          *((_WORD *)this + 16) = *(_WORD *)(a2 + 32);
          return this;
        }
        v18 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
        *(_QWORD *)(v18 + 24) = 8LL * *(unsigned __int16 *)(a2 + 32);
        WdLogEvent5_WdLowResource(v18);
        *(_DWORD *)this = -1073741801;
      }
    }
    CCD_SET_STRING_ID::_Cleanup(this);
  }
  return this;
}
