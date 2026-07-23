/*
 * XREFs of KiInsertNewDpcRuntime @ 0x140522E58
 * Callers:
 *     KiExecuteAllDpcs @ 0x1402EBB00 (KiExecuteAllDpcs.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     KiDpcRuntimeHistoryHashTableAllocate @ 0x140522E34 (KiDpcRuntimeHistoryHashTableAllocate.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall KiInsertNewDpcRuntime(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char *v7; // r8
  char v8; // cl
  unsigned __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // r14
  _QWORD *v13; // r10
  __int64 v14; // rdx
  struct _PRIVILEGE_SET *v15; // rcx
  int v16; // ebx
  _QWORD *result; // rax
  _QWORD *v18; // r8
  unsigned int v19; // edi
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // [rsp+50h] [rbp+30h]
  __int64 v23; // [rsp+50h] [rbp+30h]

  v3 = (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5));
  if ( *(_DWORD *)a1 >= (unsigned int)v3 )
  {
    if ( (unsigned int)v3 < 4 )
      v3 = 4LL;
    v7 = (char *)KiDpcRuntimeHistoryHashTableAllocate(8LL * (unsigned int)v3);
    if ( v7 )
    {
      if ( (((_DWORD)v3 - 1) & (unsigned int)v3) != 0 )
      {
        v8 = -1;
        do
        {
          ++v8;
          LODWORD(v3) = (unsigned int)v3 >> 1;
        }
        while ( (_DWORD)v3 );
        v3 = (unsigned int)(1 << v8);
      }
      if ( (unsigned int)v3 > 0x4000000 )
        v3 = 0x4000000LL;
      v9 = (unsigned int)v3;
      if ( v7 > &v7[8 * v3] )
        v9 = 0LL;
      if ( v9 )
        memset64(v7, a1 | 1, v9);
      v10 = 0;
      v11 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
      if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v12 = *(_QWORD *)(a1 + 8);
          while ( 1 )
          {
            v13 = *(_QWORD **)(v12 + 8LL * v10);
            if ( ((unsigned __int8)v13 & 1) != 0 )
              break;
            *(_QWORD *)(v12 + 8LL * v10) = *v13;
            v22 = v11 & v13[1];
            v14 = (37
                 * (BYTE6(v22)
                  + 37
                  * (BYTE5(v22)
                   + 37
                   * (BYTE4(v22)
                    + 37 * (BYTE3(v22) + 37 * (BYTE2(v22) + 37 * (BYTE1(v22) + 37 * ((unsigned __int8)v22 + 11623883)))))))
                 + HIBYTE(v22)) & (unsigned int)(v3 - 1);
            *v13 = *(_QWORD *)&v7[8 * v14];
            *(_QWORD *)&v7[8 * v14] = v13;
          }
          ++v10;
        }
        while ( v10 < *(_DWORD *)(a1 + 4) >> 5 );
      }
      v15 = *(struct _PRIVILEGE_SET **)(a1 + 8);
      v16 = *(_DWORD *)(a1 + 4) & 0x1F | (32 * v3);
      *(_QWORD *)(a1 + 8) = v7;
      *(_DWORD *)(a1 + 4) = v16;
      if ( v15 )
        CmSiFreeMemory(v15);
    }
  }
  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x74687244u);
  v18 = result;
  if ( result )
  {
    result[1] = a2;
    result[2] = a3;
    *((_BYTE *)result + 24) = 1;
    v19 = *(_DWORD *)(a1 + 4);
    v23 = a2 & (-1LL << (v19 & 0x1F));
    v20 = *(_QWORD *)(a1 + 8);
    v21 = (37
         * (BYTE6(v23)
          + 37
          * (BYTE5(v23)
           + 37
           * (BYTE4(v23)
            + 37 * (BYTE3(v23) + 37 * (BYTE2(v23) + 37 * (BYTE1(v23) + 37 * ((unsigned __int8)v23 + 11623883)))))))
         + HIBYTE(v23)) & ((v19 >> 5) - 1);
    result = *(_QWORD **)(v20 + 8 * v21);
    *v18 = result;
    *(_QWORD *)(v20 + 8 * v21) = v18;
    ++*(_DWORD *)a1;
  }
  return result;
}
