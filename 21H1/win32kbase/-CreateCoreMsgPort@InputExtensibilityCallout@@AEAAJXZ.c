/*
 * XREFs of ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C003AADC
 * Callers:
 *     UserSetMITInputCallbacks @ 0x1C003AA14 (UserSetMITInputCallbacks.c)
 * Callees:
 *     CoreMsgCreatePort @ 0x1C003ABA8 (CoreMsgCreatePort.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InputExtensibilityCallout::CreateCoreMsgPort(InputExtensibilityCallout *this)
{
  InputExtensibilityCallout *v1; // rbx
  int v2; // edx
  int Port; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // edx
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = this;
  v1 = gpInputExtensibilityCallout;
  if ( *((_QWORD *)gpInputExtensibilityCallout + 3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  P = 0LL;
  Port = SeConvertStringSecurityDescriptorToSecurityDescriptor(
           L"D:(A;;GA;;;SY)(A;;0x001F0003;;;WD)(A;;0x001F0003;;;AC)",
           1LL,
           &P);
  if ( Port < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v2,
        3,
        11,
        (__int64)&WPP_ac405ce05974327b4be542fd5221b831_Traceguids,
        Port);
    }
  }
  else
  {
    RIMLockExclusive((char *)v1 + 8);
    Port = CoreMsgCreatePort(v4, P, v5, (char *)v1 + 24);
    if ( Port < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v6,
        3,
        10,
        (__int64)&WPP_ac405ce05974327b4be542fd5221b831_Traceguids,
        Port);
    }
    *((_QWORD *)v1 + 2) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v1 + 8, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)Port;
}
