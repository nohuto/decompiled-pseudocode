/*
 * XREFs of SleepstudyHelper_UnregisterComponent @ 0x1C0052AD4
 * Callers:
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0077140 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 SleepstudyHelper_UnregisterComponent()
{
  unsigned int v0; // ebx
  unsigned int v1; // eax

  v0 = 0;
  if ( qword_1C0062AD8 )
    v1 = qword_1C0062AD8();
  else
    v1 = -1073741637;
  if ( v1 != -1073741637 )
    return v1;
  return v0;
}
