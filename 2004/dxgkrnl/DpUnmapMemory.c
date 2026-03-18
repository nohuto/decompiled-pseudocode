/*
 * XREFs of DpUnmapMemory @ 0x1C0197FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpUnmapMemory(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 *v5; // rdi
  char v6; // r14
  __int64 v7; // rsi
  __int64 *v8; // rax
  __int64 *v9; // rcx
  __int64 *v11; // rcx
  __int64 **v12; // rdx
  __int64 v14; // rax
  __int64 v15; // rax

  v3 = 0;
  v5 = 0LL;
  v6 = 0;
  if ( a1
    && a2
    && (v7 = *(_QWORD *)(a1 + 64)) != 0
    && *(_DWORD *)(v7 + 16) == 1953656900
    && (unsigned int)(*(_DWORD *)(v7 + 20) - 2) <= 1 )
  {
    if ( KeGetCurrentIrql() )
    {
      v14 = WdLogNewEntry5_WdWarning(a1, a2, a3);
      *(_QWORD *)(v14 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v14);
    }
    KeWaitForSingleObject((PVOID)(v7 + 2520), Executive, 0, 0, 0LL);
    v8 = *(__int64 **)(v7 + 2504);
    v9 = v8;
    if ( (__int64 *)*v8 != v8 )
    {
      while ( 1 )
      {
        v5 = v8;
        if ( v8[8] == a2 )
          break;
        v8 = (__int64 *)*v8;
        if ( (__int64 *)*v8 == v9 )
          goto LABEL_14;
      }
      if ( (*((_DWORD *)v8 + 6))-- == 1 )
      {
        v11 = (__int64 *)*v8;
        if ( *(__int64 **)(*v8 + 8) != v8 || (v12 = (__int64 **)v8[1], *v12 != v8) )
          __fastfail(3u);
        *v12 = v11;
        v6 = 1;
        v11[1] = (__int64)v12;
      }
    }
LABEL_14:
    KeReleaseMutex((PRKMUTEX)(v7 + 2520), 0);
    if ( v6 == 1 )
    {
      if ( *((_BYTE *)v5 + 72) == 1 )
      {
        if ( *((_BYTE *)v5 + 45) == 1 )
          v3 = ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID)v5[8]);
        else
          MmUnmapIoSpace((PVOID)v5[8], *((unsigned int *)v5 + 10));
      }
      ExFreePoolWithTag(v5, 0x74727044u);
    }
  }
  else
  {
    v3 = -1073741811;
    v15 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v15);
  }
  return v3;
}
