/*
 * XREFs of ?RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C01A74F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Reset(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  struct RawInputManagerDeviceObject *v3; // [rsp+28h] [rbp-10h]

  if ( a2 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      3,
      20,
      (__int64)&WPP_f3c7c3b8e3c935fa60aa5d5f3732d730_Traceguids,
      v3);
  }
  return 0LL;
}
