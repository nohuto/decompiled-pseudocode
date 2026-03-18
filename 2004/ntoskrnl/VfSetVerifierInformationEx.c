/*
 * XREFs of VfSetVerifierInformationEx @ 0x1409E9CD4
 * Callers:
 *     NtSetSystemInformation @ 0x1406AA390 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x140284E90 (KeReleaseMutex.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     VfDriverLock @ 0x1409BF5B8 (VfDriverLock.c)
 *     VfProbeAndCaptureUnicodeString @ 0x1409C3174 (VfProbeAndCaptureUnicodeString.c)
 *     VfSetVerifierRunningMode @ 0x1409D67F0 (VfSetVerifierRunningMode.c)
 *     VfWdSetCancelTimeout @ 0x1409DDCE0 (VfWdSetCancelTimeout.c)
 */

__int64 __fastcall VfSetVerifierInformationEx(int *a1)
{
  unsigned int v2; // edx
  int v3; // ecx
  int v4; // ebx
  __m128i v5; // xmm6
  __int128 v7; // [rsp+28h] [rbp-40h] BYREF
  PVOID P[2]; // [rsp+38h] [rbp-30h]

  v7 = 0LL;
  v2 = a1[6];
  v3 = *a1;
  if ( !v3 || (v4 = VfSetVerifierRunningMode(v3), v4 >= 0) )
  {
    if ( !v2 )
      goto LABEL_7;
    if ( v2 == -1 )
      v2 = 0;
    v4 = VfWdSetCancelTimeout(v2);
    if ( v4 >= 0 )
    {
LABEL_7:
      ++dword_140C2A658;
      v4 = VfProbeAndCaptureUnicodeString((__int64)&v7, (unsigned __int64)(a1 + 2), 512LL);
      if ( v4 >= 0 )
      {
        VfDriverLock();
        v5 = (__m128i)xmmword_140C2A660;
        *(_OWORD *)P = xmmword_140C2A660;
        xmmword_140C2A660 = v7;
        ViDriversLoadLockOwner = 0LL;
        KeReleaseMutex((PRKMUTEX)&ViDriversLoadLock, 0);
        if ( (unsigned __int16)_mm_cvtsi128_si32(v5) )
          ExFreePoolWithTag(P[1], 0);
      }
    }
  }
  return (unsigned int)v4;
}
