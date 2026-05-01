/*
 * XREFs of ?SwitchToDesktop@CApplicationManager@@UEAAJPEBUtagPOINT@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x18012F320
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x18012F3D0 (-SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SwitchToDesktop(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rdi
  void (__fastcall *v8)(__int64, __int64, GUID *, GUID *, __int64 *); // rbx
  unsigned int v9; // ebx
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0LL;
  v11 = 0LL;
  if ( a2 )
  {
    v7 = *(_QWORD *)(a1 + 408);
    v8 = *(void (__fastcall **)(__int64, __int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v7 + 96LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v8(v7, a2, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v11);
    v6 = v11;
  }
  v9 = CApplicationManager::SwitchToDesktopOnMonitor(a1, v6, a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return v9;
}
