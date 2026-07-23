/*
 * XREFs of PoClearTransitionMarker @ 0x140790C64
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407909DC (CmCompleteRegistryInitialization.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402FD704 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     RtlComputeCrc32 @ 0x140305E80 (RtlComputeCrc32.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     ExIsSoftBoot @ 0x1403A7820 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     RtlLockBootStatusData @ 0x14077B790 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x1407888D0 (RtlUnlockBootStatusData.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x140790E74 (PopRecordLongPowerButtonPressDetected.c)
 *     RtlpSystemBootStatusRequest @ 0x140790F5C (RtlpSystemBootStatusRequest.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x140790FA8 (RtlInitializeBootStatusDataBlackBox.c)
 */

__int64 (__fastcall *PoClearTransitionMarker())(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  unsigned int v0; // ebx
  ULONG32 v1; // eax
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  int v3; // [rsp+30h] [rbp-29h]
  char v4; // [rsp+40h] [rbp-19h] BYREF
  HANDLE FileHandle; // [rsp+48h] [rbp-11h] BYREF
  int v6; // [rsp+50h] [rbp-9h] BYREF
  __int128 *v7; // [rsp+58h] [rbp-1h]
  int v8; // [rsp+60h] [rbp+7h]
  int v9; // [rsp+68h] [rbp+Fh]
  __int128 *v10; // [rsp+70h] [rbp+17h]
  int v11; // [rsp+78h] [rbp+1Fh]
  int v12; // [rsp+80h] [rbp+27h]
  char *v13; // [rsp+88h] [rbp+2Fh]
  int v14; // [rsp+90h] [rbp+37h]

  FileHandle = 0LL;
  v4 = 0;
  if ( RtlLockBootStatusData(&FileHandle) >= 0 )
  {
    RtlInitializeBootStatusDataBlackBox(FileHandle);
    RtlUnlockBootStatusData(FileHandle);
  }
  v6 = 7;
  v7 = &PopBsdPowerTransition;
  v0 = 2;
  v8 = 32;
  v10 = &PopBsdPowerTransitionExtension;
  v9 = 16;
  v11 = 32;
  if ( ExIsSoftBoot() )
  {
    v12 = 5;
    v13 = &v4;
    v0 = 3;
    v14 = 1;
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  PopBsdPowerTransition = 0LL;
  BYTE8(PopBsdPowerTransition) = 1;
  xmmword_140C50418 = 0LL;
  PopBsdPowerTransitionExtension = 0LL;
  xmmword_140C505D8 = 0LL;
  HIDWORD(xmmword_140C50418) = MEMORY[0xFFFFF780000002C4];
  BYTE1(PopBsdPowerTransitionExtension) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 1)) & 0xF3;
  BYTE11(PopBsdPowerTransition) = -64;
  dword_140C207EC = 3;
  *(_QWORD *)&xmmword_140C50418 = MEMORY[0xFFFFF78000000014];
  v1 = RtlComputeCrc32(0, &xmmword_140C50418, 8u);
  BYTE14(PopBsdPowerTransition) &= ~0x10u;
  DWORD2(xmmword_140C50418) = v1;
  RtlpSystemBootStatusRequest(32LL, &v6, v0, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  PopRecordLongPowerButtonPressDetected(0LL);
  result = wil_details_FeatureReporting_ReportUsageToService(
             (int)&Feature_PdttSupport__private_reporting,
             0xF68A0Du,
             0,
             0,
             (__int64)&Feature_PdttSupport_logged_traits,
             0,
             v3);
  PopAcpiPdttSupportEnabled = 0;
  return result;
}
