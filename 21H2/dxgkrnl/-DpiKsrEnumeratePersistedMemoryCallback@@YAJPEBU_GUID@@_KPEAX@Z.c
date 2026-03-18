/*
 * XREFs of ?DpiKsrEnumeratePersistedMemoryCallback@@YAJPEBU_GUID@@_KPEAX@Z @ 0x1C03938B0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall DpiKsrEnumeratePersistedMemoryCallback(const struct _GUID *a1, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // eax
  unsigned int v5; // ecx
  size_t v7; // rbx
  char *PoolWithTag; // rax
  char *v9; // rsi

  v3 = *a3;
  v5 = a3[1];
  if ( *a3 >= v5 )
  {
    v7 = 8 * v5;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 16 * v5 + 128, 0x74727044u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
    {
      WdLogSingleEntry1(2LL, -1073741801LL);
      return 3221225495LL;
    }
    memmove(PoolWithTag, a3, v7);
    memset(&v9[v7], 0, 0x80uLL);
    v3 = *a3;
  }
  *(_QWORD *)(*((_QWORD *)a3 + 33) + 8LL * v3) = a2;
  ++*a3;
  return 0LL;
}
