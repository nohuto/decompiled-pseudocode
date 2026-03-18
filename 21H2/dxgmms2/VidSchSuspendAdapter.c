/*
 * XREFs of VidSchSuspendAdapter @ 0x1C00A6140
 * Callers:
 *     VidSchiDeferredVisibilityThread @ 0x1C001C3A0 (VidSchiDeferredVisibilityThread.c)
 * Callees:
 *     VidSchWaitForEvents @ 0x1C0002F70 (VidSchWaitForEvents.c)
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C0013860 (VidSchiSuspendResumeDevicesForPowerTransition.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     VidSchFlushDevice @ 0x1C009A0D0 (VidSchFlushDevice.c)
 *     VidSchSubmitGlobalCommand @ 0x1C00A6478 (VidSchSubmitGlobalCommand.c)
 */

__int64 __fastcall VidSchSuspendAdapter(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  int v5; // ecx
  __int64 v7; // rcx
  __int128 v8; // [rsp+30h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v10[10]; // [rsp+60h] [rbp+7h] BYREF
  struct _KEVENT *p_Event; // [rsp+C0h] [rbp+67h] BYREF

  v3 = *(_DWORD *)(a1 + 724);
  v5 = *(_DWORD *)(a1 + 736);
  if ( v3 || v5 )
  {
    if ( !a3 )
      VidSchiSuspendResumeDevicesForPowerTransition(a1, 1);
    v7 = *(_QWORD *)(a1 + 256);
    v8 = 0LL;
    LODWORD(v8) = 1;
    VidSchFlushDevice(v7, (int *)&v8, 0xFFFFFFFD, 0LL);
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    memset(v10, 0, sizeof(v10));
    LODWORD(v10[0]) = 0;
    v10[3] = VidSchiDrainFlipQueue;
    LODWORD(v10[5]) = 8;
    v10[4] = &Event;
    v10[6] = a1;
    VidSchSubmitGlobalCommand(a1, v10);
    p_Event = &Event;
    VidSchWaitForEvents((struct _VIDSCH_GLOBAL *)a1, 1u, (PVOID *)&p_Event, 0LL, 0);
  }
  return 0LL;
}
