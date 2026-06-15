/*
 * XREFs of ?UpdateSpatialSessionState@CExclusiveModeListener@@AEAAJW4SpatialRendererSelectionMode@@@Z @ 0x18010EDC8
 * Callers:
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x18010ED30 (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18010C82C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSelectionMode@@@Z @ 0x18010E8E8 (-SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSel.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CExclusiveModeListener::UpdateSpatialSessionState(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v16; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v17; // [rsp+58h] [rbp+28h] BYREF
  __int64 v18; // [rsp+60h] [rbp+30h] BYREF

  v6 = *(_DWORD *)(a1 + 152);
  if ( (unsigned int)dword_18019D350 > 5 )
  {
    v17 = *(_DWORD *)(a1 + 152);
    LODWORD(v16) = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_18019D350,
      byte_18016A8B5,
      a3,
      a4,
      (__int64)&v16,
      (__int64)&v17);
    v6 = *(_DWORD *)(a1 + 152);
  }
  if ( a2 == v6 )
    return 0LL;
  *(_DWORD *)(a1 + 152) = a2;
  v16 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 56) + 24LL))(
         *(_QWORD *)(a1 + 56),
         0LL,
         1LL,
         &v16);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v17 = 0;
    v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v16 + 24LL))(v16, &v17);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 395LL;
      goto LABEL_8;
    }
    v10 = 0;
    if ( v17 )
    {
      while ( 1 )
      {
        v18 = 0LL;
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v16 + 32LL))(v16, v10, &v18);
        v8 = v11;
        if ( v11 < 0 )
          break;
        v11 = CExclusiveModeListener::SetDeviceRendererSelectionMode(v12, v18, a2);
        v8 = v11;
        if ( v11 < 0 )
        {
          v14 = 401LL;
          goto LABEL_17;
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
        if ( ++v10 >= v17 )
          goto LABEL_13;
      }
      v14 = 400LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
        (const char *)(unsigned int)v11);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
      goto LABEL_18;
    }
LABEL_13:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
    return 0LL;
  }
  v9 = 392LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
    (const char *)(unsigned int)v7);
LABEL_18:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
  return v8;
}
