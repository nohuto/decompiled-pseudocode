/*
 * XREFs of ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ @ 0x1800816C0
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSurfaceUpdates@CGlobalSurfaceManager@@AEAAJPEAIPEAH@Z @ 0x180081810 (-GetSurfaceUpdates@CGlobalSurfaceManager@@AEAAJPEAIPEAH@Z.c)
 *     ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800819E0 (-ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ??4?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionSurfaceInfo@@@Z @ 0x1800C7988 (--4-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompo.c)
 *     ?GetCompositionSurfaceInfoByLuid@CCompositionSurfaceManager@@QEAAPEAVCCompositionSurfaceInfo@@U_LUID@@@Z @ 0x1800C7BB0 (-GetCompositionSurfaceInfoByLuid@CCompositionSurfaceManager@@QEAAPEAVCCompositionSurfaceInfo@@U_.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801117F6 (McTemplateU0qq_EventWriteTransfer.c)
 */

__int64 __fastcall CGlobalSurfaceManager::ProcessSurfaceUpdates(CGlobalSurfaceManager *this)
{
  unsigned int v2; // r14d
  unsigned int v3; // edi
  int v4; // eax
  CGlobalSurfaceManager *v5; // rcx
  __int64 v6; // r8
  int SurfaceUpdates; // ebx
  unsigned int i; // esi
  __int64 v10; // r15
  struct CCompositionSurfaceInfo *CompositionSurfaceInfoByLuid; // rax
  int v12; // eax
  __int64 v13; // rcx
  void *v14; // rcx
  unsigned int v15; // [rsp+30h] [rbp-20h] BYREF
  int v16; // [rsp+34h] [rbp-1Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+38h] [rbp-18h] BYREF

  v15 = 0;
  v2 = 0;
  v16 = 0;
  v3 = 0;
  v4 = CGlobalSurfaceManager::ProcessLegacyTokens(this);
  SurfaceUpdates = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v5, 0LL, 0LL, v4, 0xB4u);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McGenEventWrite_EventWriteTransfer(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSSURFACEUPDATES_Start,
        v6,
        1u,
        &v17);
    while ( 1 )
    {
      SurfaceUpdates = CGlobalSurfaceManager::GetSurfaceUpdates(v5, &v15, &v16);
      if ( SurfaceUpdates < 0 )
        break;
      for ( i = 0; i < v15; ++i )
      {
        v17.Ptr = 0LL;
        v10 = *((_QWORD *)this + 13) + 224LL * i;
        CompositionSurfaceInfoByLuid = CCompositionSurfaceManager::GetCompositionSurfaceInfoByLuid(
                                         (CGlobalSurfaceManager *)((char *)this + 16),
                                         *(struct _LUID *)(v10 + 4));
        wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::operator=(
          &v17,
          CompositionSurfaceInfoByLuid);
        if ( v17.Ptr )
        {
          v12 = (*(__int64 (__fastcall **)(ULONGLONG, __int64))(*(_QWORD *)v17.Ptr + 120LL))(v17.Ptr, v10);
          if ( v12 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0xCFu);
          ++v3;
        }
        v14 = *(void **)(v10 + 32);
        if ( (unsigned __int64)v14 >= 2 )
          DeleteObject(v14);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
      }
      if ( !v16 )
        break;
      ++v2;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0qq_EventWriteTransfer(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSSURFACEUPDATES_Stop,
        v3,
        v2);
    dword_1803D31EC += v3;
  }
  return (unsigned int)SurfaceUpdates;
}
