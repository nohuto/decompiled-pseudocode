/*
 * XREFs of VidSchSuspendAdapter @ 0x1C0088160
 * Callers:
 *     <none>
 * Callees:
 *     VidSchWaitForEvents @ 0x1C0011214 (VidSchWaitForEvents.c)
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C00121B8 (VidSchiSuspendResumeDevicesForPowerTransition.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     VidSchFlushDevice @ 0x1C0080520 (VidSchFlushDevice.c)
 *     VidSchSubmitGlobalCommand @ 0x1C008ABB4 (VidSchSubmitGlobalCommand.c)
 */

__int64 __fastcall VidSchSuspendAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int v6; // ecx
  __int64 v8; // rcx
  __int128 v9; // [rsp+30h] [rbp-69h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v11[18]; // [rsp+60h] [rbp-39h] BYREF
  struct _KEVENT *p_Event; // [rsp+100h] [rbp+67h] BYREF

  v4 = *(_DWORD *)(a1 + 716);
  v6 = *(_DWORD *)(a1 + 728);
  if ( v4 || v6 )
  {
    if ( !(_BYTE)a3 )
      VidSchiSuspendResumeDevicesForPowerTransition(a1, 1);
    v8 = *(_QWORD *)(a1 + 248);
    v9 = 0LL;
    LODWORD(v9) = 1;
    VidSchFlushDevice(v8, (int *)&v9, a3, a4);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    memset(v11, 0, 0x88uLL);
    LODWORD(v11[0]) = 0;
    v11[3] = VidSchiDrainFlipQueue;
    LODWORD(v11[5]) = 8;
    v11[4] = &Event;
    v11[6] = a1;
    VidSchSubmitGlobalCommand(a1, v11);
    p_Event = &Event;
    VidSchWaitForEvents(a1, 1u, (PVOID *)&p_Event, 0LL, 0);
  }
  return 0LL;
}
