/*
 * XREFs of ?_GetMonitorForAppSwitch@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@PEBGPEAPEAU2@@Z @ 0x1803CBDC0
 * Callers:
 *     ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEBGPEAPEAU2@@Z @ 0x1803CC0C0 (-_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonito_ea_1803CC0C0.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180010000 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007B66C (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?FindAllApplicationsByAppID@CallerIdentity@@YAJPEAUIUnknown@@PEBGPEAPEAUIObjectArray@@@Z @ 0x18046A124 (-FindAllApplicationsByAppID@CallerIdentity@@YAJPEAUIUnknown@@PEBGPEAPEAUIObjectArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CSwitchController::_GetMonitorForAppSwitch(
        CallerIdentity **this,
        struct IImmersiveMonitor *a2,
        struct IUnknown *a3,
        struct IImmersiveMonitor **a4)
{
  struct IObjectArray **v8; // r9
  HRESULT v9; // ebx
  unsigned int v10; // esi
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, struct IImmersiveMonitor **); // rdi
  void *v15; // rbx
  __int64 (__fastcall *v16)(void *, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rdi
  struct IImmersiveMonitor *v17; // rax
  struct IImmersiveMonitor *v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int16 v21[4]; // [rsp+40h] [rbp-10h] BYREF
  void *ppvOut; // [rsp+80h] [rbp+30h] BYREF
  int v23; // [rsp+98h] [rbp+48h] BYREF

  *a4 = 0LL;
  v19 = 0LL;
  *(_QWORD *)v21 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
  if ( (int)CallerIdentity::FindAllApplicationsByAppID(this[2], a3, v21, v8) < 0 )
    goto LABEL_13;
  v9 = (*(__int64 (__fastcall **)(_QWORD, void **))(**(_QWORD **)v21 + 24LL))(*(_QWORD *)v21, &ppvOut);
  v10 = 0;
  if ( v9 < 0 )
    goto LABEL_13;
  while ( v10 < (unsigned int)ppvOut )
  {
    v20 = 0LL;
    v11 = *(_QWORD *)v21;
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(**(_QWORD **)v21 + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    v9 = v12(v11, v10, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v20);
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 64LL))(v20, &v23);
      if ( v9 >= 0 )
      {
        if ( v23 )
        {
          v13 = v20;
          v14 = *(__int64 (__fastcall **)(__int64, struct IImmersiveMonitor **))(*(_QWORD *)v20 + 232LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
          v9 = v14(v13, &v19);
          if ( v9 >= 0 )
          {
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
            break;
          }
        }
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    ++v10;
    if ( v9 < 0 )
      break;
  }
  if ( v9 < 0 || !v19 )
  {
LABEL_13:
    if ( a2 )
    {
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)&v19, (__int64)a2);
      v9 = 0;
LABEL_19:
      v17 = v19;
      v19 = 0LL;
      *a4 = v17;
      goto LABEL_20;
    }
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
    v9 = IUnknown_QueryService(
           (IUnknown *)this[2],
           (const GUID *const)&SID_IImmersiveMonitorService,
           &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
           &ppvOut);
    if ( v9 >= 0 )
    {
      v15 = ppvOut;
      v16 = *(__int64 (__fastcall **)(void *, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)ppvOut
                                                                                                  + 72LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
      v9 = v16(v15, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v19);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
  }
  if ( v9 >= 0 )
    goto LABEL_19;
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  return (unsigned int)v9;
}
