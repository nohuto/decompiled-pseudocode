/*
 * XREFs of ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C0047A2C
 * Callers:
 *     UserSetMITInputCallbacks @ 0x1C0047964 (UserSetMITInputCallbacks.c)
 * Callees:
 *     CoreMsgCreatePort @ 0x1C0047AF8 (CoreMsgCreatePort.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InputExtensibilityCallout::CreateCoreMsgPort(
        InputExtensibilityCallout *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  InputExtensibilityCallout *v4; // rbx
  int v5; // edx
  int Port; // edi
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // edx
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = this;
  v4 = gpInputExtensibilityCallout;
  if ( *((_QWORD *)gpInputExtensibilityCallout + 3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  P = 0LL;
  Port = SeConvertStringSecurityDescriptorToSecurityDescriptor(
           L"D:(A;;GA;;;SY)(A;;0x001F0003;;;WD)(A;;0x001F0003;;;AC)",
           1LL,
           &P);
  if ( Port < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v5,
        3,
        11,
        (__int64)&WPP_ac405ce05974327b4be542fd5221b831_Traceguids,
        Port);
    }
  }
  else
  {
    RIMLockExclusive((char *)v4 + 8);
    Port = CoreMsgCreatePort(v7, P, v8, (char *)v4 + 24);
    if ( Port < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v9,
        3,
        10,
        (__int64)&WPP_ac405ce05974327b4be542fd5221b831_Traceguids,
        Port);
    }
    *((_QWORD *)v4 + 2) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v4 + 8, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)Port;
}
