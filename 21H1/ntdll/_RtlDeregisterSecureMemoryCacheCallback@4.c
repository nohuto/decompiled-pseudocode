/*
 * XREFs of _RtlDeregisterSecureMemoryCacheCallback@4 @ 0x4B35E440
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

NTSTATUS __cdecl RtlDeregisterSecureMemoryCacheCallback(PRTL_SECURE_MEMORY_CACHE_CALLBACK Callback)
{
  PRTL_SECURE_MEMORY_CACHE_CALLBACK *v1; // esi
  NTSTATUS result; // eax
  bool v3; // zf
  PRTL_SECURE_MEMORY_CACHE_CALLBACK v4; // eax
  PVOID *v5; // ecx

  RtlAcquireSRWLockExclusive(&RtlpSecMemLock);
  v1 = (PRTL_SECURE_MEMORY_CACHE_CALLBACK *)RtlpSecMemListHead;
  if ( RtlpSecMemListHead == &RtlpSecMemListHead )
  {
LABEL_4:
    RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
    LOBYTE(result) = 0;
  }
  else
  {
    while ( v1[3] != Callback )
    {
      v1 = (PRTL_SECURE_MEMORY_CACHE_CALLBACK *)*v1;
      if ( v1 == (PRTL_SECURE_MEMORY_CACHE_CALLBACK *)&RtlpSecMemListHead )
        goto LABEL_4;
    }
    v3 = v1[2] == (PRTL_SECURE_MEMORY_CACHE_CALLBACK)1;
    v1[2] = (PRTL_SECURE_MEMORY_CACHE_CALLBACK)((char *)v1[2] - 1);
    if ( v3 )
    {
      v4 = *v1;
      if ( *((PRTL_SECURE_MEMORY_CACHE_CALLBACK **)*v1 + 1) != v1 || (v5 = (PVOID *)v1[1], *v5 != v1) )
        __fastfail(3u);
      *v5 = v4;
      *((_DWORD *)v4 + 1) = v5;
      RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
      result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
    }
    else
    {
      RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
    }
    LOBYTE(result) = 1;
  }
  return result;
}
