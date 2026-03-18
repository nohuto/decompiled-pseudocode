/*
 * XREFs of ESM_LogUnhandledEvent @ 0x1C004F298
 * Callers:
 *     ESM_FindAndSetTargetState @ 0x1C0009140 (ESM_FindAndSetTargetState.c)
 * Callees:
 *     WPP_RECORDER_SF_qdd @ 0x1C0015C18 (WPP_RECORDER_SF_qdd.c)
 */

char __fastcall ESM_LogUnhandledEvent(__int64 a1, int a2)
{
  int v2; // ebx
  char result; // al
  char v5; // [rsp+30h] [rbp-18h]

  v2 = a2;
  if ( *(_DWORD *)(a1 + 976) == 2000 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_qdd(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        17,
        10,
        (__int64)&WPP_98a83f24598b3525d75ef9dd6ca2eaeb_Traceguids,
        *(_QWORD *)(a1 + 960),
        v2,
        *(_DWORD *)(a1 + 852));
    }
    if ( !KdRefreshDebuggerNotPresent() )
      DbgPrint(
        "ESM 0x%p: is not handling Event %u, Current Top Level State is %u\n",
        *(const void **)(a1 + 960),
        v2,
        *(_DWORD *)(a1 + 852));
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = a2;
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_qdd(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      17,
      11,
      (__int64)&WPP_98a83f24598b3525d75ef9dd6ca2eaeb_Traceguids,
      *(_QWORD *)(a1 + 960),
      v5,
      *(_DWORD *)(a1 + 852));
  }
  result = KdRefreshDebuggerNotPresent();
  if ( !result )
  {
    result = DbgPrint("Unhandled event in USBXHCI Endpoint State Machine\n");
    __debugbreak();
  }
  return result;
}
