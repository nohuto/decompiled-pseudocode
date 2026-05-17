/*
 * XREFs of RtlpFcUpdateLocalConfiguration @ 0x18005C7DC
 * Callers:
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x18005CC2C (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcWnfCallback @ 0x180101C80 (RtlpFcWnfCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpFcMapBuffers @ 0x18005C9B0 (RtlpFcMapBuffers.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x18005CA18 (RtlpFcBufferManagerUpdateBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18005CAF4 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x18005CCEC (RtlpFcBufferManagerReferenceBuffers.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18009D350 (NtUnmapViewOfSection.c)
 *     NtQuerySystemInformationEx @ 0x18009FA20 (NtQuerySystemInformationEx.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 *     RtlpFcSectionTypeToBufferType @ 0x18011A15C (RtlpFcSectionTypeToBufferType.c)
 */

__int64 __fastcall RtlpFcUpdateLocalConfiguration(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // r14
  int SystemInformation; // ebx
  __int64 v11; // rdx
  unsigned int v12; // r9d
  __int64 v13; // r8
  int v14; // r9d
  _QWORD *v15; // r10
  _QWORD *v16; // rdi
  __int64 v17; // rsi
  HANDLE *v18; // rdi
  unsigned __int64 v20; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v21[5]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v22[10]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v23[80]; // [rsp+B8h] [rbp-50h] BYREF

  memset(v22, 0, sizeof(v22));
  memset(v23, 0, 0x48uLL);
  v9 = 3LL;
  if ( byte_18016A508 )
  {
    SystemInformation = -1073741058;
  }
  else
  {
    if ( a3 )
    {
      RtlAcquireSRWLockExclusive(a1, v6, v7, v8);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    {
      SystemInformation = -1073741608;
      goto LABEL_15;
    }
    v20 = *(_QWORD *)(a1 + 8 + 8 * (*(_QWORD *)(a1 + 8) & 1LL) + 168);
    if ( v20 < a2 )
    {
      RtlpFcBufferManagerReferenceBuffers(a1 + 8, &v20, v21);
      v11 = v21[0];
      v12 = 0;
      memset(&v21[1], 0, 24);
      do
      {
        v13 = (unsigned int)RtlpFcSectionTypeToBufferType(v12, v11);
        v12 = v14 + 1;
        *v15 = *(_QWORD *)(v11 + 24 * v13);
      }
      while ( v12 < 3 );
      RtlpFcBufferManagerDereferenceBuffers(a1 + 8);
      SystemInformation = NtQuerySystemInformationEx(211LL, &v21[1], 24LL, v22, 80, 0LL);
      if ( SystemInformation >= 0 )
      {
        SystemInformation = RtlpFcMapBuffers(v22, v23);
        if ( SystemInformation >= 0 )
          RtlpFcBufferManagerUpdateBuffers(a1 + 8, v22[0], v23);
      }
    }
    else
    {
      SystemInformation = 0;
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  }
LABEL_15:
  v16 = &v23[8];
  v17 = 3LL;
  do
  {
    if ( *v16 )
      NtUnmapViewOfSection(-1LL, *v16);
    v16 += 3;
    --v17;
  }
  while ( v17 );
  v18 = (HANDLE *)&v22[2];
  do
  {
    if ( *v18 )
      NtClose(*v18);
    v18 += 3;
    --v9;
  }
  while ( v9 );
  return (unsigned int)SystemInformation;
}
