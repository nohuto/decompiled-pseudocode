/*
 * XREFs of ?PublishChangeNotification@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBGK@Z @ 0x1801132F4
 * Callers:
 *     ?ClearPerProcessRouting@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x180112678 (-ClearPerProcessRouting@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x1801134C4 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?MmeOnDefaultDeviceChanged@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x1800F8360 (-MmeOnDefaultDeviceChanged@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_i.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PublishChangeNotification(unsigned int a1, unsigned int a2, __int64 a3, int a4)
{
  int Instance; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  LPVOID v12[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v12[0] = 0LL;
  Instance = CoCreateInstance(
               &GUID_06cca63e_9941_441b_b004_39f999ada412,
               0LL,
               0x17u,
               &GUID_4d809b8a_96c4_4f77_9bb7_76bd429c16bb,
               v12);
  v9 = Instance;
  if ( Instance >= 0 )
  {
    Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64, int, _DWORD))(*(_QWORD *)v12[0] + 96LL))(
                 v12[0],
                 a1,
                 a2,
                 a3,
                 a4,
                 0);
    v9 = Instance;
    if ( Instance >= 0 )
    {
      Instance = MmeOnDefaultDeviceChanged(a1, a2, a3);
      v9 = Instance;
      if ( Instance >= 0 )
      {
        v9 = 0;
        goto LABEL_9;
      }
      v10 = 44LL;
    }
    else
    {
      v10 = 40LL;
    }
  }
  else
  {
    v10 = 39LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
    (const char *)(unsigned int)Instance);
LABEL_9:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v12);
  return v9;
}
