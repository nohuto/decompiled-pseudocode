/*
 * XREFs of _EtwUnregisterTraceGuids@8 @ 0x4B2D9960
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _EtwNotificationUnregister@12 @ 0x4B2D99D0 (_EtwNotificationUnregister@12.c)
 *     _RtlSetLastWin32Error@4 @ 0x4B2DAB00 (_RtlSetLastWin32Error@4.c)
 */

int __stdcall EtwUnregisterTraceGuids(int a1, __int16 a2)
{
  int v2; // eax
  int v3; // esi
  int v5; // [esp+4h] [ebp-4h] BYREF

  v5 = 0;
  v2 = EtwNotificationUnregister(a1, a2, &v5);
  v3 = v2;
  if ( v2 )
    RtlSetLastWin32Error(v2);
  else
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v5);
  return v3;
}
