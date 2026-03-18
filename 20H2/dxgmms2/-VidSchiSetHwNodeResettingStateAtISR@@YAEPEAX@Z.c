/*
 * XREFs of ?VidSchiSetHwNodeResettingStateAtISR@@YAEPEAX@Z @ 0x1C0038380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VidSchiSetHwNodeResettingStateAtISR(LARGE_INTEGER *a1)
{
  LONGLONG QuadPart; // rdx

  QuadPart = a1->QuadPart;
  a1[2].LowPart = *(_DWORD *)(a1->QuadPart + 1704);
  a1[2].HighPart = *(_DWORD *)(*(_QWORD *)(QuadPart + 24) + 64LL);
  a1[1] = KeQueryPerformanceCounter(0LL);
  return 1;
}
