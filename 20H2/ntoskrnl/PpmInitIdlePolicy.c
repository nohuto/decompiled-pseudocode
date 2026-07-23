/*
 * XREFs of PpmInitIdlePolicy @ 0x140A6F724
 * Callers:
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     PpmConvertTime @ 0x14033E54C (PpmConvertTime.c)
 *     ZwQueryLicenseValue @ 0x1403FABF0 (ZwQueryLicenseValue.c)
 */

NTSTATUS PpmInitIdlePolicy()
{
  ULONGLONG v0; // rax
  ULONGLONG *v1; // rbx
  __int64 v2; // rdi
  ULONGLONG v3; // rcx
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG ResultDataSize; // [rsp+60h] [rbp+20h] BYREF
  ULONG Type; // [rsp+68h] [rbp+28h] BYREF
  int Data; // [rsp+70h] [rbp+30h] BYREF

  dword_140C1EDE0 = 50000;
  dword_140C1F890 = 50000;
  v0 = 2 * PopQpcFrequency;
  Data = 0;
  PopIdleTransitionTimeout = 2 * PopQpcFrequency;
  ResultDataSize = 0;
  Type = 0;
  DestinationString = 0LL;
  word_140C1EDDC = 0;
  word_140C1F88C = 0;
  word_140C1EDE5 = 60;
  word_140C1F895 = 60;
  byte_140C1EDE4 = 40;
  byte_140C1F894 = 40;
  if ( !KdPitchDebugger )
    v0 = 90 * PopQpcFrequency;
  PopCoordinatedIdleExitTimeout = v0;
  v1 = (ULONGLONG *)&PpmIdleIntervalLimits;
  v2 = 26LL;
  do
  {
    v3 = v1[1];
    if ( v3 != -1LL )
      *v1 = PpmConvertTime(v3, 10000000LL, PopQpcFrequency);
    v1 += 3;
    --v2;
  }
  while ( v2 );
  RtlInitUnicodeString(&DestinationString, L"Power-IdleStatesMax-Enabled");
  result = ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize);
  if ( result >= 0 && ResultDataSize == 4 && Type == 4 )
    PpmIdleRespectIdleStateMax = Data != 0;
  if ( PpmIdleDisableStatesAtBoot == -1 )
    PpmIdleDisableStatesAtBoot = 0;
  return result;
}
