/*
 * XREFs of hCreateKernelTimer @ 0x1C011E600
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 */

void *__fastcall hCreateKernelTimer(TIMER_TYPE TimerType)
{
  NTSTATUS v1; // eax
  int v2; // edx
  struct _OBJECT_ATTRIBUTES v4; // [rsp+30h] [rbp-38h] BYREF
  void *v5; // [rsp+78h] [rbp+10h] BYREF

  memset(&v4.Length + 1, 0, 20);
  memset(&v4.Attributes + 1, 0, 20);
  v5 = 0LL;
  v4.Length = 48;
  v4.Attributes = 512;
  v1 = ZwCreateTimer(&v5, 0x1F0003u, &v4, TimerType);
  if ( v1 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v2,
      17,
      11,
      (__int64)&WPP_c375c14636bd34c1ee492b0bbe3963bc_Traceguids,
      v1);
  }
  return v5;
}
