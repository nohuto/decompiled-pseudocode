/*
 * XREFs of _EtwUnregisterTraceGuids@8 @ 0x4B2D9960
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _EtwNotificationUnregister@12 @ 0x4B2D99D0 (_EtwNotificationUnregister@12.c)
 *     _RtlSetLastWin32Error@4 @ 0x4B2DAB00 (_RtlSetLastWin32Error@4.c)
 */

LONG __stdcall EtwUnregisterTraceGuids(REGHANDLE RegHandle)
{
  LONG v1; // eax
  LONG v2; // esi
  PVOID Context; // [esp+4h] [ebp-4h] BYREF

  Context = 0;
  v1 = EtwNotificationUnregister(RegHandle, &Context);
  v2 = v1;
  if ( v1 )
    RtlSetLastWin32Error(v1);
  else
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Context);
  return v2;
}
