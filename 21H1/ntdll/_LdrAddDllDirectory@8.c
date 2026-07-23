/*
 * XREFs of _LdrAddDllDirectory@8 @ 0x4B33CA10
 * Callers:
 *     _LdrpInitializePerUserWindowsDirectory@4 @ 0x4B2EC686 (_LdrpInitializePerUserWindowsDirectory@4.c)
 * Callees:
 *     _RtlDetermineDosPathNameType_U@4 @ 0x4B2B3480 (_RtlDetermineDosPathNameType_U@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpDosPathNameToRelativeNtPathName@28 @ 0x4B2C5860 (_RtlpDosPathNameToRelativeNtPathName@28.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpInvalidatePathCache@4 @ 0x4B2ED502 (_RtlpInvalidatePathCache@4.c)
 *     _ZwQueryAttributesFile@8 @ 0x4B2F2D50 (_ZwQueryAttributesFile@8.c)
 *     __local_unwind4 @ 0x4B2F6EA0 (__local_unwind4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _LdrAddDllDirectory@8 @ 0x4B33CA10 (_LdrAddDllDirectory@8.c)
 */

NTSTATUS __cdecl LdrAddDllDirectory(PUNICODE_STRING NewDirectory, PDLL_DIRECTORY_COOKIE Cookie)
{
  RTL_PATH_TYPE v2; // eax
  NTSTATUS v3; // esi
  _WORD *Heap; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // ebx
  SIZE_T v8; // [esp-4h] [ebp-8Ch]
  size_t v9; // [esp-4h] [ebp-8Ch]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+14h] [ebp-74h] BYREF
  _UNICODE_STRING Destination; // [esp+2Ch] [ebp-5Ch] BYREF
  _WORD *v12; // [esp+34h] [ebp-54h]
  PDLL_DIRECTORY_COOKIE v13; // [esp+38h] [ebp-50h]
  PVOID v14; // [esp+3Ch] [ebp-4Ch]
  _FILE_BASIC_INFORMATION FileInformation; // [esp+40h] [ebp-48h] BYREF
  CPPEH_RECORD ms_exc; // [esp+70h] [ebp-18h] BYREF

  v13 = Cookie;
  v14 = Cookie;
  if ( (LdrpPolicyBits & 4) == 0 )
    return -1073741811;
  v2 = RtlDetermineDosPathNameType_U((PCWSTR)NewDirectory->Buffer);
  if ( v2 == RtlPathTypeUnknown || v2 == RtlPathTypeDriveRelative || v2 == RtlPathTypeRelative )
    return -1073741811;
  v3 = RtlpDosPathNameToRelativeNtPathName(0, NewDirectory, 0, &Destination, 0, 0, 0);
  if ( v3 < 0 )
    return v3;
  ObjectAttributes.Length = 24;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  v3 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Destination.Buffer);
  if ( v3 < 0 )
    return v3;
  LODWORD(v8) = NewDirectory->Length + 10;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
  v12 = Heap;
  if ( !Heap )
    return -1073741801;
  LODWORD(v9) = NewDirectory->Length;
  memcpy(Heap + 5, NewDirectory->Buffer, v9);
  Heap[4] = NewDirectory->Length;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  ms_exc.registration.TryLevel = 0;
  if ( NewDirectory->Length + (unsigned int)(unsigned __int16)word_4B3A33E0 + 2 <= 0xFFFE )
  {
    word_4B3A33E0 += NewDirectory->Length + 2;
    v6 = LdrpUserDllDirectories;
    if ( *((_UNKNOWN ***)LdrpUserDllDirectories + 1) != &LdrpUserDllDirectories )
      __fastfail(3u);
    *(_DWORD *)Heap = LdrpUserDllDirectories;
    *((_DWORD *)Heap + 1) = &LdrpUserDllDirectories;
    v6[1] = Heap;
    LdrpUserDllDirectories = Heap;
    ms_exc.registration.TryLevel = -2;
    v7 = v13;
    RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
    RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
    v14 = (PVOID)RtlpInvalidatePathCache(&RtlpDllSearchPathWithOptions);
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
    if ( v14 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
    *v7 = Heap;
    return 0;
  }
  else
  {
    _local_unwind4(&__security_cookie, (int)&ms_exc.registration, 0xFFFFFFFE);
    return -1073741562;
  }
}
