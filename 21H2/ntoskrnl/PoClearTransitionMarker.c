/*
 * XREFs of PoClearTransitionMarker @ 0x140791984
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14079167C (CmCompleteRegistryInitialization.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x14021FAD0 (RtlComputeCrc32.c)
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     ExIsSoftBoot @ 0x14039B5C0 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     Feature_PdttSupport__private_ReportDeviceUsage @ 0x1403F7EA8 (Feature_PdttSupport__private_ReportDeviceUsage.c)
 *     RtlLockBootStatusData @ 0x14077F730 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x14078C870 (RtlUnlockBootStatusData.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x140791B94 (PopRecordLongPowerButtonPressDetected.c)
 *     RtlpSystemBootStatusRequest @ 0x140791C7C (RtlpSystemBootStatusRequest.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x140791CC8 (RtlInitializeBootStatusDataBlackBox.c)
 */

void PoClearTransitionMarker()
{
  unsigned int v0; // ebx
  ULONG32 v1; // eax
  char v2; // [rsp+20h] [rbp-19h] BYREF
  HANDLE FileHandle; // [rsp+28h] [rbp-11h] BYREF
  int v4; // [rsp+30h] [rbp-9h] BYREF
  __int128 *v5; // [rsp+38h] [rbp-1h]
  int v6; // [rsp+40h] [rbp+7h]
  int v7; // [rsp+48h] [rbp+Fh]
  __int128 *v8; // [rsp+50h] [rbp+17h]
  int v9; // [rsp+58h] [rbp+1Fh]
  int v10; // [rsp+60h] [rbp+27h]
  char *v11; // [rsp+68h] [rbp+2Fh]
  int v12; // [rsp+70h] [rbp+37h]

  FileHandle = 0LL;
  v2 = 0;
  if ( RtlLockBootStatusData(&FileHandle) >= 0 )
  {
    RtlInitializeBootStatusDataBlackBox(FileHandle);
    RtlUnlockBootStatusData(FileHandle);
  }
  v4 = 7;
  v5 = &PopBsdPowerTransition;
  v0 = 2;
  v6 = 32;
  v8 = &PopBsdPowerTransitionExtension;
  v7 = 16;
  v9 = 32;
  if ( ExIsSoftBoot() )
  {
    v10 = 5;
    v11 = &v2;
    v0 = 3;
    v12 = 1;
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  PopBsdPowerTransition = 0LL;
  BYTE8(PopBsdPowerTransition) = 1;
  xmmword_140C505A8 = 0LL;
  PopBsdPowerTransitionExtension = 0LL;
  xmmword_140C50798 = 0LL;
  HIDWORD(xmmword_140C505A8) = MEMORY[0xFFFFF780000002C4];
  BYTE1(PopBsdPowerTransitionExtension) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 1)) & 0xF3;
  BYTE11(PopBsdPowerTransition) = -64;
  dword_140C2096C = 3;
  *(_QWORD *)&xmmword_140C505A8 = MEMORY[0xFFFFF78000000014];
  v1 = RtlComputeCrc32(0, &xmmword_140C505A8, 8u);
  BYTE14(PopBsdPowerTransition) &= ~0x10u;
  DWORD2(xmmword_140C505A8) = v1;
  RtlpSystemBootStatusRequest(32LL, &v4, v0, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  PopRecordLongPowerButtonPressDetected(0LL);
  Feature_PdttSupport__private_ReportDeviceUsage();
  PopAcpiPdttSupportEnabled = 0;
}
