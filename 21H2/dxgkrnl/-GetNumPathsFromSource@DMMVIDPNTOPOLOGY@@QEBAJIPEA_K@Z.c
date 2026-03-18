/*
 * XREFs of ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C01BB920
 * Callers:
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C01B0B38 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B85D0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C01B9F4C (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 *     ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1C01C5AA0 (-DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z.c)
 *     ?GetNumPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEA_K@Z @ 0x1C01E62F0 (-GetNumPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C039A6D8 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C039D724 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C039E358 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C03A478C (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C03A5958 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 *     ?GetNumPathsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEA_K@Z @ 0x1C03A7030 (-GetNumPathsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IP.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C03A7788 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C00114BC (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::GetNumPathsFromSource(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rbx
  __int64 Container; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  DMMVIDPNTOPOLOGY *v9; // r9
  char *v10; // r9
  unsigned __int64 v11; // rax
  DMMVIDPNTOPOLOGY *v12; // rax
  __int64 v14; // rax

  v3 = a2;
  if ( a3 )
  {
    *a3 = 0LL;
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
    if ( IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v3) )
    {
      v8 = 0LL;
      v9 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
      if ( v9 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
        goto LABEL_12;
      v10 = (char *)v9 - 8;
      if ( !v10 )
        goto LABEL_12;
      do
      {
        v7 = *(unsigned int *)(*((_QWORD *)v10 + 11) + 24LL);
        v11 = v8 + 1;
        if ( (_DWORD)v7 != (_DWORD)v3 )
          v11 = v8;
        v8 = v11;
        v12 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v10 + 1);
        v10 = (char *)v12 - 8;
        if ( v12 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
          v10 = 0LL;
      }
      while ( v10 );
      if ( v8 )
      {
        *a3 = v8;
        return 0LL;
      }
      else
      {
LABEL_12:
        v14 = WdLogNewEntry5_WdTrace(v7, v8);
        *(_QWORD *)(v14 + 24) = v3;
        *(_QWORD *)(v14 + 32) = this;
        return 3223192377LL;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v3);
      return 3223192324LL;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, a2);
    return 3221225485LL;
  }
}
