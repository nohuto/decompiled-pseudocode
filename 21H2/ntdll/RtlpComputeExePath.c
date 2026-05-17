/*
 * XREFs of RtlpComputeExePath @ 0x18006D490
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputePath @ 0x18006D800 (RtlpComputePath.c)
 *     Feature_SearchPackagePaths__private_IsEnabledDeviceUsage @ 0x18009BC90 (Feature_SearchPackagePaths__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall RtlpComputeExePath(__int64 a1)
{
  unsigned __int64 EnvironmentVersion; // rdi
  int v3; // edx
  unsigned int v4; // eax
  void *v5; // rcx
  __int64 v6; // rdx
  __int64 result; // rax

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( (unsigned int)Feature_SearchPackagePaths__private_IsEnabledDeviceUsage() )
  {
    v3 = 0;
    v4 = 5;
  }
  else
  {
    v3 = 1;
    v4 = 4;
  }
  if ( a1 )
  {
    v5 = &unk_1801264B0;
    if ( !v3 )
      v5 = &unk_1801264E8;
    v6 = (v3 ^ 1u) + 3;
  }
  else
  {
    v5 = &unk_1801264C0;
    v6 = v4;
  }
  result = RtlpComputePath(v5, v6, 0LL, 0LL);
  if ( result )
  {
    *(_QWORD *)(result + 88) = EnvironmentVersion;
    *(_BYTE *)(result + 116) = 0;
  }
  return result;
}
