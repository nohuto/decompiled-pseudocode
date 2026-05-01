/*
 * XREFs of ?DisplaySettingsChange@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1803D19B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003F5B8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     wil::ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214___ @ 0x1803D0A9C (wil--ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214___.c)
 *     ?EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1803D1AA8 (-EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z @ 0x1803D1AFC (-EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z.c)
 *     ?GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@Z @ 0x1803D1E3C (-GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowSizeConverter::DisplaySettingsChange(__int64 a1, struct IImmersiveMonitor *a2, char a3)
{
  WindowSizeConverter *v6; // rcx
  struct IApplicationFrame *v8; // [rsp+50h] [rbp+20h] BYREF
  char v9; // [rsp+68h] [rbp+38h] BYREF

  if ( !(unsigned int)SHIsSameObject((struct IUnknown *)a2, *(struct IUnknown **)(a1 + 24)) && *(_DWORD *)(a1 + 56) )
  {
    if ( (a3 & 0x20) != 0
      && (*(int (__fastcall **)(struct IImmersiveMonitor *, struct IApplicationFrame **))(*(_QWORD *)a2 + 48LL))(
           a2,
           &v8) >= 0 )
    {
      if ( (_DWORD)v8 )
      {
        WindowSizeConverter::EnsureEntry((WindowSizeConverter *)(a1 - 96), a2);
      }
      else if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, char *))(*(_QWORD *)a2 + 24LL))(a2, &v9) >= 0 )
      {
        wil::ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214___();
      }
    }
    if ( (a3 & 0x10) != 0 )
    {
      v8 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
      if ( (int)WindowSizeConverter::GetFrameForMonitor((WindowSizeConverter *)(a1 - 96), a2, &v8) >= 0 )
        WindowSizeConverter::EnsurePosition(v6, a2, v8);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
    }
  }
  return 0LL;
}
