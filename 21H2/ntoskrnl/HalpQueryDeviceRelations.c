/*
 * XREFs of HalpQueryDeviceRelations @ 0x1407D0EB0
 * Callers:
 *     HalpDispatchPnp @ 0x140765140 (HalpDispatchPnp.c)
 * Callees:
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HalpQueryDeviceRelations(_QWORD *Object, int a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rbx
  unsigned int v7; // esi
  __int64 v9; // rax
  _DWORD *v10; // rax
  _DWORD *v11; // r14
  __int64 v12; // rsi
  void *v13; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v15; // rbx

  v3 = Object[8];
  if ( *(_DWORD *)v3 == 193 )
    v6 = *(_QWORD *)(v3 + 8);
  else
    v6 = 0LL;
  v7 = 0;
  if ( a2 )
  {
    if ( a2 != 4 || !v6 )
      return 3221225659LL;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x206C6148u);
    v15 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_DWORD *)PoolWithTag = 1;
      PoolWithTag[1] = Object;
      ObfReferenceObject(Object);
      *a3 = v15;
      return 0LL;
    }
  }
  else
  {
    if ( !v6 )
      return 3221225659LL;
    v9 = v6;
    do
    {
      v9 = *(_QWORD *)(v9 + 8);
      ++v7;
    }
    while ( v9 );
    v10 = ExAllocatePoolWithTag(PagedPool, 16LL * v7, 0x206C6148u);
    v11 = v10;
    if ( v10 )
    {
      *v10 = v7;
      v12 = 0LL;
      do
      {
        v13 = *(void **)(v6 + 16);
        *(_QWORD *)&v11[2 * v12 + 2] = v13;
        ObfReferenceObject(v13);
        v6 = *(_QWORD *)(v6 + 8);
        v12 = (unsigned int)(v12 + 1);
      }
      while ( v6 );
      *a3 = v11;
      return 0LL;
    }
  }
  return 3221225626LL;
}
