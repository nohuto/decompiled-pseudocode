/*
 * XREFs of _RtlDeleteCriticalSection@4 @ 0x4B2AFB90
 * Callers:
 *     _RtlDeleteResource@4 @ 0x4B2A9DF0 (_RtlDeleteResource@4.c)
 *     _RtlDestroyHeap@4 @ 0x4B2AF870 (_RtlDestroyHeap@4.c)
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 *     _EtwpFreeLoggerContext@4 @ 0x4B2EE335 (_EtwpFreeLoggerContext@4.c)
 *     _RtlTraceDatabaseDestroy@4 @ 0x4B36A2A0 (_RtlTraceDatabaseDestroy@4.c)
 * Callees:
 *     _RtlDeleteCriticalSection@4 @ 0x4B2AFB90 (_RtlDeleteCriticalSection@4.c)
 *     _RtlpFreeDebugInfo@4 @ 0x4B2AFCE0 (_RtlpFreeDebugInfo@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _RtlStdReleaseStackTrace@8 @ 0x4B369090 (_RtlStdReleaseStackTrace@8.c)
 */

NTSTATUS __stdcall RtlDeleteCriticalSection(int *a1)
{
  int v1; // eax
  NTSTATUS result; // eax
  int v3; // ebx
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // edx
  unsigned int v7; // ecx
  _DWORD *v8; // ecx
  NTSTATUS v9; // [esp+1Ch] [ebp-20h]
  int v10; // [esp+20h] [ebp-1Ch]

  v1 = a1[4];
  if ( !v1 || v1 == -1 )
    result = 0;
  else
    result = NtClose((HANDLE)a1[4]);
  v9 = result;
  v3 = *a1;
  if ( *a1 && v3 != -1 )
  {
    v10 = a1[5] & 0x4000000;
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
    v4 = v3 + 8;
    v5 = *(_DWORD *)(v3 + 8);
    if ( v5 )
    {
      v6 = *(_DWORD **)(v3 + 12);
      if ( *(_DWORD *)(v5 + 4) != v4 || *v6 != v4 )
        __fastfail(3u);
      *v6 = v5;
      *(_DWORD *)(v5 + 4) = v6;
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    v7 = *(unsigned __int16 *)(v3 + 2) + (*(unsigned __int16 *)(v3 + 28) << 16);
    if ( RtlpStackTraceDatabase )
    {
      if ( v7 )
      {
        if ( v7 <= *(_DWORD *)(RtlpStackTraceDatabase + 96) )
        {
          v8 = (_DWORD *)(*(_DWORD *)(RtlpStackTraceDatabase + 100) - 4 * v7);
          if ( *v8 )
          {
            if ( RtlpStackTraceDatabase )
              RtlStdReleaseStackTrace(RtlpStackTraceDatabase, *v8);
          }
        }
      }
    }
    memset((void *)v3, 0, 0x20u);
    if ( !v10 )
      RtlpFreeDebugInfo(v3);
    result = v9;
  }
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  return result;
}
