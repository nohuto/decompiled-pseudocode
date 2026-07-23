/*
 * XREFs of MmInitializeMemoryLimits @ 0x140A3B6AC
 * Callers:
 *     IopInitializeResourceMap @ 0x140A3B34C (IopInitializeResourceMap.c)
 *     MiInitNucleus @ 0x140A43F34 (MiInitNucleus.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140A6DE38 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MmInitializeMemoryLimits(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r14
  unsigned int v3; // esi
  _QWORD *v4; // rax
  __int64 v6; // rcx
  _DWORD *Pool; // rax
  _QWORD *v8; // rbx
  unsigned int v9; // edi
  _QWORD *v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // rax
  char *v14; // rax
  _QWORD *v15; // rsi
  _QWORD *result; // rax
  __int64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rax

  v2 = (_QWORD *)(a1 + 32);
  v3 = 0;
  v4 = *(_QWORD **)(a1 + 32);
  if ( v4 == (_QWORD *)(a1 + 32) )
    return 0LL;
  do
  {
    v4 = (_QWORD *)*v4;
    v6 = v3++;
  }
  while ( v4 != v2 );
  if ( !v3 )
    return 0LL;
  Pool = MiAllocatePool(64, 16 * (v6 + 2), 0x6C4D6D4Du);
  v8 = Pool;
  if ( !Pool )
    return 0LL;
  *Pool = v3;
  v9 = 0;
  v10 = (_QWORD *)*v2;
  v11 = 0LL;
  v12 = -1LL;
  if ( (_QWORD *)*v2 == v2 )
    goto LABEL_19;
  do
  {
    v13 = *((int *)v10 + 4);
    if ( (int)v13 < 41 && *(_BYTE *)(v13 + a2) )
    {
      v17 = v10[4];
      v18 = v10[3];
      v11 += v17;
      if ( v18 == v12 && v9 )
      {
        v8[2 * v9 + 1] += v17;
        v12 += v10[4];
      }
      else
      {
        v19 = 2LL * v9++;
        v8[v19 + 2] = v18;
        v20 = v10[4];
        v8[v19 + 3] = v20;
        v12 = v20 + v18;
      }
    }
    v10 = (_QWORD *)*v10;
  }
  while ( v10 != v2 );
  if ( !v9 )
  {
LABEL_19:
    v8[2] = 0LL;
    v8[3] = 0LL;
  }
  else if ( v3 > v9 )
  {
    v14 = (char *)MiAllocatePool(64, 16 * (v9 - 1 + 2LL), 0x6C4D6D4Du);
    v15 = v14;
    if ( v14 )
    {
      memmove(v14 + 16, v8 + 2, 16LL * v9);
      ExFreePoolWithTag(v8, 0);
      v8 = v15;
    }
  }
  *(_DWORD *)v8 = v9;
  result = v8;
  v8[1] = v11;
  return result;
}
