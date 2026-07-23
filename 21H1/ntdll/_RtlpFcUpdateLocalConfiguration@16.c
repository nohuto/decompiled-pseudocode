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

NTSTATUS __fastcall RtlpFcUpdateLocalConfiguration(PRTL_SRWLOCK SRWLock, char a2, unsigned __int64 a3)
{
  NTSTATUS v3; // esi
  unsigned int v5; // eax
  unsigned int Value; // edx
  unsigned int v7; // eax
  unsigned int i; // edi
  __int64 v9; // rax
  int v10; // ebx
  PVOID *v11; // edi
  int v12; // eax
  HANDLE *v13; // edi
  size_t v15; // [esp-4h] [ebp-ACh]
  size_t v16; // [esp-4h] [ebp-ACh]
  int v17; // [esp+0h] [ebp-A8h]
  int v18; // [esp+4h] [ebp-A4h]
  _DWORD v20[3]; // [esp+14h] [ebp-94h] BYREF
  _DWORD v21[8]; // [esp+20h] [ebp-88h] BYREF
  _DWORD SystemInformation[2]; // [esp+40h] [ebp-68h] BYREF
  _BYTE v23[48]; // [esp+48h] [ebp-60h] BYREF
  _BYTE v24[44]; // [esp+78h] [ebp-30h] BYREF

  LODWORD(v15) = 56;
  v3 = 0;
  memset(&v21[6], 0, v15);
  LODWORD(v16) = 48;
  memset(&v23[40], 0, v16);
  if ( byte_4B3A5DA8 )
  {
    v3 = -1073741058;
  }
  else
  {
    if ( a2 )
    {
      RtlAcquireSRWLockExclusive(SRWLock);
    }
    else if ( _interlockedbittestandset((volatile signed __int32 *)SRWLock, 0) )
    {
      v3 = -1073741608;
      goto LABEL_14;
    }
    v5 = SRWLock[2].Value & 1;
    Value = SRWLock[2 * v5 + 30].Value;
    v7 = SRWLock[2 * v5 + 31].Value;
    v20[1] = Value;
    v20[2] = v7;
    if ( __PAIR64__(v7, Value) < a3 )
    {
      RtlpFcBufferManagerReferenceBuffers(v20);
      memset(v21, 0, 0x18u);
      for ( i = 0; i < 3; ++i )
      {
        v9 = RtlpFcSectionTypeToBufferType(i);
        v21[2 * i] = *(_DWORD *)(HIDWORD(v9) + 16 * v9);
        v21[2 * i + 1] = *(_DWORD *)(HIDWORD(v9) + 16 * v9 + 4);
      }
      RtlpFcBufferManagerDereferenceBuffers(v17, v18);
      v3 = ZwQuerySystemInformationEx(
             SystemFeatureConfigurationSectionInformation,
             &v21[2],
             0x18u,
             SystemInformation,
             0x38u,
             0);
      if ( v3 >= 0 )
      {
        v3 = RtlpFcMapBuffers((int)SystemInformation, (int)v24);
        if ( v3 >= 0 )
          RtlpFcBufferManagerUpdateBuffers(&SRWLock[2], v24, SystemInformation[0], SystemInformation[1]);
      }
    }
    RtlReleaseSRWLockExclusive(SRWLock);
  }
LABEL_14:
  v10 = 3;
  v11 = (PVOID *)v24;
  v20[0] = 3;
  v12 = 3;
  do
  {
    if ( *v11 )
    {
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, *v11);
      v12 = v20[0];
    }
    v11 += 4;
    v20[0] = --v12;
  }
  while ( v12 );
  v13 = (HANDLE *)v23;
  do
  {
    if ( *v13 )
      NtClose(*v13);
    v13 += 4;
    --v10;
  }
  while ( v10 );
  return v3;
}
