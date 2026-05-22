/*
 * XREFs of ?IdleTelemetry@MPCHeadMovementDetector@@AEAAXXZ @ 0x18008C9A8
 * Callers:
 *     ?OnTimerCallback@MPCHeadMovementDetector@@AEAAXXZ @ 0x18008CB44 (-OnTimerCallback@MPCHeadMovementDetector@@AEAAXXZ.c)
 * Callees:
 *     ?LogIdleTelemetry@ISMTracing@@SAXKKK@Z @ 0x18008CA98 (-LogIdleTelemetry@ISMTracing@@SAXKKK@Z.c)
 */

void __fastcall MPCHeadMovementDetector::IdleTelemetry(MPCHeadMovementDetector *this)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // rax
  DWORD ActiveScheme; // eax
  unsigned int OutputBuffer; // [rsp+40h] [rbp+10h] BYREF
  DWORD DcValueIndex; // [rsp+48h] [rbp+18h] BYREF
  DWORD AcValueIndex; // [rsp+50h] [rbp+20h] BYREF
  GUID *ActivePolicyGuid; // [rsp+58h] [rbp+28h] BYREF

  v1 = *((_QWORD *)this + 5);
  if ( v1 >= *((_QWORD *)this + 21) )
  {
    v2 = *((unsigned int *)this + 44);
    AcValueIndex = 0;
    DcValueIndex = 0;
    ActivePolicyGuid = 0LL;
    *((_QWORD *)this + 21) = v1 + v2;
    ActiveScheme = PowerGetActiveScheme(0LL, &ActivePolicyGuid);
    OutputBuffer = 0;
    if ( !ActiveScheme
      && !PowerReadACValueIndex(
            0LL,
            ActivePolicyGuid,
            &GUID_VIDEO_SUBGROUP,
            &GUID_VIDEO_POWERDOWN_TIMEOUT,
            &AcValueIndex)
      && !PowerReadDCValueIndex(
            0LL,
            ActivePolicyGuid,
            &GUID_VIDEO_SUBGROUP,
            &GUID_VIDEO_POWERDOWN_TIMEOUT,
            &DcValueIndex)
      && !CallNtPowerInformation(SystemExecutionState, 0LL, 0, &OutputBuffer, 4u) )
    {
      ISMTracing::LogIdleTelemetry(AcValueIndex, DcValueIndex, OutputBuffer);
    }
  }
}
