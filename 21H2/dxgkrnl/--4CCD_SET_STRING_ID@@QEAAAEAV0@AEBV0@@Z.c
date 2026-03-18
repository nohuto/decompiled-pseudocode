/*
 * XREFs of ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C01ADB54
 * Callers:
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C01AD6E8 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C01ADD3C (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     _CcdRetrieveSetIdFromRegistry @ 0x1C01AF234 (_CcdRetrieveSetIdFromRegistry.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C01AF5C4 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x1C01B0660 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C01B6AE8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ??0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C01B7240 (--0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C01B7DB0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C01BB308 (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C01AD9E8 (-_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z @ 0x1C01ADC74 (-_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C01B71EC (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

CCD_SET_STRING_ID *__fastcall CCD_SET_STRING_ID::operator=(CCD_SET_STRING_ID *this, __int64 a2)
{
  int v4; // eax
  unsigned __int16 v5; // ax
  void *v6; // rcx
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  __int64 v9; // rax

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
        if ( (!*(_QWORD *)(a2 + 24) || !*(_WORD *)(a2 + 32)) && (WdLogSingleEntry0(1LL), !*(_QWORD *)(a2 + 24))
          || (v5 = *(_WORD *)(a2 + 32)) == 0 )
        {
          CCD_SET_STRING_ID::_ParseMonitorDescriptors(this);
          return this;
        }
        if ( v5 <= *((_WORD *)this + 16) )
          goto LABEL_11;
        v6 = (void *)*((_QWORD *)this + 3);
        *((_WORD *)this + 16) = 0;
        operator delete[](v6);
        v8 = 8LL * *(unsigned __int16 *)(a2 + 32);
        if ( !is_mul_ok(*(unsigned __int16 *)(a2 + 32), 8uLL) )
          v8 = -1LL;
        v9 = operator new[](v8, 0x63644356u, 256LL, v7);
        *((_QWORD *)this + 3) = v9;
        if ( v9 )
        {
LABEL_11:
          memmove(*((void **)this + 3), *(const void **)(a2 + 24), 8LL * *(unsigned __int16 *)(a2 + 32));
          *((_WORD *)this + 16) = *(_WORD *)(a2 + 32);
          return this;
        }
        WdLogSingleEntry1(6LL, 8LL * *(unsigned __int16 *)(a2 + 32));
        *(_DWORD *)this = -1073741801;
      }
    }
    CCD_SET_STRING_ID::_Cleanup(this);
  }
  return this;
}
