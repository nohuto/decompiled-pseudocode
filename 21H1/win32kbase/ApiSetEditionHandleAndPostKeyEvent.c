/*
 * XREFs of ApiSetEditionHandleAndPostKeyEvent @ 0x1C00616A4
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C0060A60 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0061864 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C0061EA0 (EditionHandleAndPostKeyEvent.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionHandleAndPostKeyEvent(
        int a1,
        int a2,
        int a3,
        int a4,
        char a5,
        int a6,
        __int16 a7,
        __int16 a8,
        __int16 a9,
        __int16 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        __int64 a14,
        __int16 a15,
        __int64 a16)
{
  int v18; // ebx
  __int64 *v20; // rax
  int v21; // edx
  unsigned int v22; // edi
  int v23; // eax
  __int64 v25; // [rsp+20h] [rbp-88h]
  __int64 v26; // [rsp+28h] [rbp-80h]
  __int64 v27; // [rsp+80h] [rbp-28h] BYREF

  v18 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      416,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  v27 = 0LL;
  if ( gpqForeground )
  {
    v20 = *(__int64 **)(gpqForeground + 112);
    if ( v20 || (v20 = *(__int64 **)(gpqForeground + 120)) != 0LL )
      v27 = *v20;
  }
  InputExtensibilityCallout::CoreMsgSendMessage(gpqForeground, 4LL, &v27, 8LL, v25, v26);
  v22 = 0;
  if ( qword_1C02593D8 )
    v23 = qword_1C02593D8();
  else
    v23 = -1073741637;
  if ( v23 >= 0 )
    v22 = EditionHandleAndPostKeyEvent(a1, v18, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v21) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v21,
      10,
      417,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v22;
}
