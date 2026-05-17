/*
 * XREFs of _RtlDeregisterSecureMemoryCacheCallback@4 @ 0x4B35E440
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

char __stdcall RtlDeregisterSecureMemoryCacheCallback(void *a1)
{
  _UNKNOWN **v1; // esi
  bool v3; // zf
  _DWORD *v4; // eax
  void **v5; // ecx

  RtlAcquireSRWLockExclusive(&RtlpSecMemLock);
  v1 = (_UNKNOWN **)RtlpSecMemListHead;
  if ( RtlpSecMemListHead == (_UNKNOWN *)&RtlpSecMemListHead )
  {
LABEL_4:
    RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
    return 0;
  }
  else
  {
    while ( v1[3] != a1 )
    {
      v1 = (_UNKNOWN **)*v1;
      if ( v1 == &RtlpSecMemListHead )
        goto LABEL_4;
    }
    v3 = v1[2] == (_UNKNOWN *)1;
    v1[2] = (_UNKNOWN *)((char *)v1[2] - 1);
    if ( v3 )
    {
      v4 = *v1;
      if ( *((_UNKNOWN ***)*v1 + 1) != v1 || (v5 = (void **)v1[1], *v5 != v1) )
        __fastfail(3u);
      *v5 = v4;
      v4[1] = v5;
      RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v1);
    }
    else
    {
      RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
    }
    return 1;
  }
}
