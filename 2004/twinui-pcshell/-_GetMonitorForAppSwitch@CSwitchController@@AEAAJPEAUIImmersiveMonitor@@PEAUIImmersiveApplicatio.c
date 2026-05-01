/*
 * XREFs of ?_GetMonitorForAppSwitch@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@PEAUIImmersiveApplication@@PEAPEAU2@@Z @ 0x1803CBC18
 * Callers:
 *     ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEAUIImmersiveApplication@@PEAPEAU2@@Z @ 0x1803CBFF4 (-_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATI.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180010000 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180015480 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007B66C (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSwitchController::_GetMonitorForAppSwitch(
        IUnknown **this,
        struct IImmersiveMonitor *a2,
        struct IImmersiveApplication *a3,
        struct IImmersiveMonitor **a4)
{
  HRESULT v8; // edi
  int (__fastcall *v9)(struct IImmersiveApplication *, __int64 *); // rbx
  void *v10; // rbx
  __int64 (__fastcall *v11)(void *, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rdi
  struct IImmersiveMonitor *v12; // rax
  struct IImmersiveMonitor *v14; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+38h] [rbp-8h] BYREF
  int v16; // [rsp+80h] [rbp+40h] BYREF
  void *ppvOut; // [rsp+88h] [rbp+48h] BYREF

  *a4 = 0LL;
  v14 = 0LL;
  v8 = -2147023728;
  (*(void (__fastcall **)(struct IImmersiveApplication *, int *))(*(_QWORD *)a3 + 64LL))(a3, &v16);
  if ( !v16 && a2 )
    goto LABEL_9;
  v15 = 0LL;
  v9 = *(int (__fastcall **)(struct IImmersiveApplication *, __int64 *))(*(_QWORD *)a3 + 232LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  if ( v9(a3, &v15) >= 0
    && (*(int (__fastcall **)(__int64, void **))(*(_QWORD *)v15 + 48LL))(v15, &ppvOut) >= 0
    && (_DWORD)ppvOut )
  {
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v14, &v15);
    v8 = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  if ( v8 >= 0 )
    goto LABEL_14;
  if ( a2 )
  {
LABEL_9:
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)&v14, (__int64)a2);
    v8 = 0;
  }
  if ( v8 >= 0 )
    goto LABEL_14;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
  v8 = IUnknown_QueryService(
         this[2],
         (const GUID *const)&SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         &ppvOut);
  if ( v8 >= 0 )
  {
    v10 = ppvOut;
    v11 = *(__int64 (__fastcall **)(void *, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)ppvOut
                                                                                                + 72LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    v8 = v11(v10, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v14);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
  if ( v8 >= 0 )
  {
LABEL_14:
    v12 = v14;
    v14 = 0LL;
    *a4 = v12;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  return (unsigned int)v8;
}
