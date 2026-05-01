/*
 * XREFs of ?EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1803D1AA8
 * Callers:
 *     ?DisplaySettingsChange@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1803D19B0 (-DisplaySettingsChange@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISP.c)
 *     ?GetPhysicalChromeOffsets@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@PEAUtagRECT@@@Z @ 0x1803D2040 (-GetPhysicalChromeOffsets@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___ @ 0x180032C20 (wil--ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowSizeConverter::EnsureEntry(struct IImmersiveMonitor **this, struct IImmersiveMonitor *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  struct IImmersiveMonitor **v5[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IImmersiveMonitor *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v5[1] = this;
  v5[0] = &v7;
  v2 = wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___(v5);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1FD,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
