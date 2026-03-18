/*
 * XREFs of Amd64InitializeUncoreStatus @ 0x14052C0C8
 * Callers:
 *     Amd64InitializeCacheStatus @ 0x14052BCA0 (Amd64InitializeCacheStatus.c)
 *     Amd64InitializeDataFabricStatus @ 0x14052BE78 (Amd64InitializeDataFabricStatus.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x1403B1F04 (HalpMmAllocCtxAlloc.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall Amd64InitializeUncoreStatus(__int64 a1, __int64 *a2, int a3, int a4)
{
  __int64 v4; // rbx
  int v8; // r15d
  _OWORD *v9; // rax
  size_t v10; // r14
  void *v11; // rax
  __int64 v12; // rcx
  void *v13; // rsi
  __int64 *v14; // rax

  v4 = *a2;
  v8 = a1;
  if ( (__int64 *)*a2 == a2 )
    goto LABEL_6;
  while ( *(_DWORD *)(v4 + 20) != a3 )
  {
    v4 = *(_QWORD *)v4;
    if ( (__int64 *)v4 == a2 )
      goto LABEL_6;
  }
  if ( !v4 )
  {
LABEL_6:
    v9 = (_OWORD *)HalpMmAllocCtxAlloc(a1, 32LL);
    v4 = (__int64)v9;
    if ( v9 )
    {
      *v9 = 0LL;
      v9[1] = 0LL;
      v10 = (unsigned int)(40 * a4);
      v11 = (void *)HalpMmAllocCtxAlloc(v10, v10);
      v13 = v11;
      if ( v11 )
      {
        memset(v11, 0, v10);
        *(_DWORD *)(v4 + 20) = a3;
        *(_DWORD *)(v4 + 16) = v8;
        *(_QWORD *)(v4 + 24) = v13;
        v14 = (__int64 *)a2[1];
        if ( (__int64 *)*v14 != a2 )
          __fastfail(3u);
        *(_QWORD *)v4 = a2;
        *(_QWORD *)(v4 + 8) = v14;
        *v14 = v4;
        a2[1] = v4;
      }
      else
      {
        HalpMmAllocCtxFree(v12, v4);
        return 0LL;
      }
    }
  }
  return v4;
}
