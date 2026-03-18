/*
 * XREFs of ?DpiKsrEnumeratePersistedMemoryCallback@@YAJPEBU_GUID@@_KPEAX@Z @ 0x1C02D2170
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 */

__int64 __fastcall DpiKsrEnumeratePersistedMemoryCallback(const struct _GUID *a1, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // eax
  unsigned int v5; // ecx
  size_t v7; // rbx
  char *PoolWithTag; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  char *v11; // rsi
  __int64 v12; // rax

  v3 = *a3;
  v5 = a3[1];
  if ( *a3 >= v5 )
  {
    v7 = 8 * v5;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 16 * v5 + 128, 0x74727044u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v12 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v12 + 24) = -1073741801LL;
      WdLogEvent5_WdError(v12);
      return 3221225495LL;
    }
    memmove(PoolWithTag, a3, v7);
    memset(&v11[v7], 0, 0x80uLL);
    v3 = *a3;
  }
  *(_QWORD *)(*((_QWORD *)a3 + 33) + 8LL * v3) = a2;
  ++*a3;
  return 0LL;
}
