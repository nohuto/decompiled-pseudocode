/*
 * XREFs of hCreateKernelEvent @ 0x1C005D500
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 */

void *__fastcall hCreateKernelEvent(EVENT_TYPE EventType, BOOLEAN a2)
{
  NTSTATUS v2; // eax
  int v3; // edx
  struct _OBJECT_ATTRIBUTES v5; // [rsp+30h] [rbp-38h] BYREF
  void *v6; // [rsp+80h] [rbp+18h] BYREF

  memset(&v5.Length + 1, 0, 20);
  memset(&v5.Attributes + 1, 0, 20);
  v6 = 0LL;
  v5.Length = 48;
  v5.Attributes = 512;
  v2 = ZwCreateEvent(&v6, 0x1F0003u, &v5, EventType, a2);
  if ( v2 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v3,
      17,
      10,
      (__int64)&WPP_c375c14636bd34c1ee492b0bbe3963bc_Traceguids,
      v2);
  }
  return v6;
}
