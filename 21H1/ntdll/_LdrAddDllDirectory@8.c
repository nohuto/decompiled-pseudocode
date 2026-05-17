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

int __stdcall LdrAddDllDirectory(__int16 **a1, int a2)
{
  int v2; // eax
  int AttributesFile; // esi
  int Heap; // esi
  _DWORD *v6; // eax
  int *v7; // ebx
  _DWORD v8[6]; // [esp+14h] [ebp-74h] BYREF
  unsigned __int16 v9; // [esp+2Ch] [ebp-5Ch] BYREF
  int v10; // [esp+30h] [ebp-58h]
  int v11; // [esp+34h] [ebp-54h]
  int *v12; // [esp+38h] [ebp-50h]
  int v13; // [esp+3Ch] [ebp-4Ch]
  char v14[48]; // [esp+40h] [ebp-48h] BYREF
  CPPEH_RECORD ms_exc; // [esp+70h] [ebp-18h] BYREF

  v12 = (int *)a2;
  v13 = a2;
  if ( (LdrpPolicyBits & 4) == 0 )
    return -1073741811;
  v2 = RtlDetermineDosPathNameType_U(a1[1]);
  if ( !v2 || v2 == 3 || v2 == 5 )
    return -1073741811;
  AttributesFile = RtlpDosPathNameToRelativeNtPathName(0, (int *)a1, 0, &v9, 0, 0, 0);
  if ( AttributesFile < 0 )
    return AttributesFile;
  v8[0] = 24;
  v8[1] = 0;
  v8[3] = 64;
  v8[2] = &v9;
  v8[4] = 0;
  v8[5] = 0;
  AttributesFile = ZwQueryAttributesFile((int)v8, (int)v14);
  RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v10);
  if ( AttributesFile < 0 )
    return AttributesFile;
  Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, *(unsigned __int16 *)a1 + 10);
  v11 = Heap;
  if ( !Heap )
    return -1073741801;
  memcpy((void *)(Heap + 10), a1[1], *(unsigned __int16 *)a1);
  *(_WORD *)(Heap + 8) = *(_WORD *)a1;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  ms_exc.registration.TryLevel = 0;
  if ( *(unsigned __int16 *)a1 + (unsigned int)(unsigned __int16)word_4B3A33E0 + 2 <= 0xFFFE )
  {
    word_4B3A33E0 += *(_WORD *)a1 + 2;
    v6 = LdrpUserDllDirectories;
    if ( *((_UNKNOWN ***)LdrpUserDllDirectories + 1) != &LdrpUserDllDirectories )
      __fastfail(3u);
    *(_DWORD *)Heap = LdrpUserDllDirectories;
    *(_DWORD *)(Heap + 4) = &LdrpUserDllDirectories;
    v6[1] = Heap;
    LdrpUserDllDirectories = (_UNKNOWN *)Heap;
    ms_exc.registration.TryLevel = -2;
    v7 = v12;
    RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
    RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
    v13 = RtlpInvalidatePathCache(&RtlpDllSearchPathWithOptions);
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
    if ( v13 )
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v13);
    *v7 = Heap;
    return 0;
  }
  else
  {
    _local_unwind4(&__security_cookie, (int)&ms_exc.registration, 0xFFFFFFFE);
    return -1073741562;
  }
}
