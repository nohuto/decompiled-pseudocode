/*
 * XREFs of VidSchiWaitForCompletePreemption @ 0x1C00D19A4
 * Callers:
 *     VidSchiSwitchFromSuspendedDevices @ 0x1C0016830 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchiCompletePreemption @ 0x1C002F0BC (VidSchiCompletePreemption.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C003C6B0 (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000A480 (VidSchiProfilePerformanceTick.c)
 *     memset @ 0x1C00185C0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0069B80 (VidSchWaitForCompletionEvent.c)
 */

__int64 __fastcall VidSchiWaitForCompletePreemption(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  int v3; // eax
  _DWORD v5[42]; // [rsp+40h] [rbp-A8h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v2 = a1;
  memset(v5, 0, 0xA0uLL);
  v3 = *(unsigned __int16 *)(v2 + 4);
  v5[8] |= 0x41u;
  v5[4] = 2;
  v5[5] = 1;
  v5[12] = v3;
  VidSchiProfilePerformanceTick(18LL, v1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  LODWORD(v2) = VidSchWaitForCompletionEvent(v1, (__int64)v5, 0xFFFFFFFFLL);
  VidSchiProfilePerformanceTick(19LL, v1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  return (unsigned int)v2;
}
