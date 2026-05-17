/*
 * XREFs of _RtlpFcUpdateLocalConfiguration@16 @ 0x4B2E4FCD
 * Callers:
 *     _RtlpFcReferenceFeatureConfigurationBuffers@16 @ 0x4B2E5255 (_RtlpFcReferenceFeatureConfigurationBuffers@16.c)
 *     _RtlpFcWnfCallback@28 @ 0x4B369980 (_RtlpFcWnfCallback@28.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpFcMapBuffers@8 @ 0x4B2E4F70 (_RtlpFcMapBuffers@8.c)
 *     _RtlpFcBufferManagerDereferenceBuffers@8 @ 0x4B2E5160 (_RtlpFcBufferManagerDereferenceBuffers@8.c)
 *     _RtlpFcBufferManagerReferenceBuffers@12 @ 0x4B2E5302 (_RtlpFcBufferManagerReferenceBuffers@12.c)
 *     _RtlpFcBufferManagerUpdateBuffers@16 @ 0x4B2E5386 (_RtlpFcBufferManagerUpdateBuffers@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _ZwQuerySystemInformationEx@24 @ 0x4B2F3F90 (_ZwQuerySystemInformationEx@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpFcSectionTypeToBufferType@4 @ 0x4B3A10ED (_RtlpFcSectionTypeToBufferType@4.c)
 */

int __fastcall RtlpFcUpdateLocalConfiguration(int a1, char a2, unsigned __int64 a3)
{
  int SystemInformation; // esi
  int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // eax
  unsigned int i; // edi
  __int64 v9; // rax
  int v10; // ebx
  _DWORD *v11; // edi
  int v12; // eax
  HANDLE *v13; // edi
  int v15; // [esp+0h] [ebp-A8h]
  int v16; // [esp+4h] [ebp-A4h]
  _DWORD v17[3]; // [esp+14h] [ebp-94h] BYREF
  _DWORD v18[33]; // [esp+20h] [ebp-88h] BYREF

  SystemInformation = 0;
  memset(&v18[6], 0, 104);
  if ( byte_4B3A5DA8 )
  {
    SystemInformation = -1073741058;
  }
  else
  {
    if ( a2 )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1);
    }
    else if ( _interlockedbittestandset((volatile signed __int32 *)a1, 0) )
    {
      SystemInformation = -1073741608;
      goto LABEL_14;
    }
    v5 = *(_DWORD *)(a1 + 8) & 1;
    v6 = *(_DWORD *)(a1 + 8 + 8 * v5 + 112);
    v7 = *(_DWORD *)(a1 + 8 + 8 * v5 + 116);
    v17[1] = v6;
    v17[2] = v7;
    if ( __PAIR64__(v7, v6) < a3 )
    {
      RtlpFcBufferManagerReferenceBuffers(v17);
      memset(v18, 0, 0x18u);
      for ( i = 0; i < 3; ++i )
      {
        v9 = RtlpFcSectionTypeToBufferType(i);
        v18[2 * i] = *(_DWORD *)(HIDWORD(v9) + 16 * v9);
        v18[2 * i + 1] = *(_DWORD *)(HIDWORD(v9) + 16 * v9 + 4);
      }
      RtlpFcBufferManagerDereferenceBuffers(v15, v16);
      SystemInformation = ZwQuerySystemInformationEx(211, &v18[2], 24, &v18[8], 56, 0);
      if ( SystemInformation >= 0 )
      {
        SystemInformation = RtlpFcMapBuffers((int)&v18[8], (int)&v18[22]);
        if ( SystemInformation >= 0 )
          RtlpFcBufferManagerUpdateBuffers(v18[8], v18[9]);
      }
    }
    RtlReleaseSRWLockExclusive((volatile signed __int32 *)a1);
  }
LABEL_14:
  v10 = 3;
  v11 = &v18[22];
  v17[0] = 3;
  v12 = 3;
  do
  {
    if ( *v11 )
    {
      NtUnmapViewOfSection(-1, *v11);
      v12 = v17[0];
    }
    v11 += 4;
    v17[0] = --v12;
  }
  while ( v12 );
  v13 = (HANDLE *)&v18[10];
  do
  {
    if ( *v13 )
      NtClose(*v13);
    v13 += 4;
    --v10;
  }
  while ( v10 );
  return SystemInformation;
}
