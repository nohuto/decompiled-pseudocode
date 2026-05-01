/*
 * XREFs of ?RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180033EA8
 * Callers:
 *     ?RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18000D210 (-RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 * Callees:
 *     CempHeapFreeForHashTable @ 0x180037820 (CempHeapFreeForHashTable.c)
 */

void __fastcall RmpPsmAppFamilyTableAdd(struct _RM_SERVICE_GLOBALS *a1, struct _RM_PSM_APP_FAMILY *a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rbx
  struct _PEB *v5; // rcx
  char *Heap; // r8
  char v7; // cl
  unsigned __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // r9
  __int64 v11; // r15
  _QWORD *v12; // r10
  __int64 v13; // rdx
  unsigned int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // [rsp+60h] [rbp+40h]
  __int64 v19; // [rsp+68h] [rbp+48h]

  v2 = (unsigned __int64)a1 + 2544;
  v4 = (unsigned int)(2 * (*((_DWORD *)a1 + 637) >> 5));
  if ( *((_DWORD *)a1 + 636) >= (unsigned int)v4 )
  {
    v5 = NtCurrentPeb();
    if ( (unsigned int)v4 < 4 )
      v4 = 4LL;
    Heap = (char *)RtlAllocateHeap(v5->ProcessHeap, 0, 8LL * (unsigned int)v4);
    if ( Heap )
    {
      if ( (((_DWORD)v4 - 1) & (unsigned int)v4) != 0 )
      {
        v7 = -1;
        do
        {
          ++v7;
          LODWORD(v4) = (unsigned int)v4 >> 1;
        }
        while ( (_DWORD)v4 );
        v4 = (unsigned int)(1 << v7);
      }
      if ( (unsigned int)v4 > 0x4000000 )
        v4 = 0x4000000LL;
      v8 = (unsigned int)v4;
      if ( Heap > &Heap[8 * v4] )
        v8 = 0LL;
      if ( v8 )
        memset64(Heap, v2 | 1, v8);
      v9 = 0;
      v10 = -1LL << (*(_BYTE *)(v2 + 4) & 0x1F);
      if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v11 = *(_QWORD *)(v2 + 8);
          while ( 1 )
          {
            v12 = *(_QWORD **)(v11 + 8LL * v9);
            if ( ((unsigned __int8)v12 & 1) != 0 )
              break;
            *(_QWORD *)(v11 + 8LL * v9) = *v12;
            v18 = v10 & v12[1];
            v13 = (37
                 * (BYTE6(v18)
                  + 37
                  * (BYTE5(v18)
                   + 37
                   * (BYTE4(v18)
                    + 37 * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 11623883)))))))
                 + HIBYTE(v18)) & (unsigned int)(v4 - 1);
            *v12 = *(_QWORD *)&Heap[8 * v13];
            *(_QWORD *)&Heap[8 * v13] = v12;
          }
          ++v9;
        }
        while ( v9 < *(_DWORD *)(v2 + 4) >> 5 );
      }
      *(_DWORD *)(v2 + 4) &= 0x1Fu;
      v17 = *(_QWORD *)(v2 + 8);
      *(_DWORD *)(v2 + 4) |= 32 * v4;
      *(_QWORD *)(v2 + 8) = Heap;
      if ( v17 )
        CempHeapFreeForHashTable(v17, 0LL);
    }
  }
  v14 = *(_DWORD *)(v2 + 4);
  v19 = *((_QWORD *)a2 + 1) & (-1LL << (v14 & 0x1F));
  v15 = *(_QWORD *)(v2 + 8);
  v16 = (37
       * (BYTE6(v19)
        + 37
        * (BYTE5(v19)
         + 37
         * (BYTE4(v19)
          + 37 * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 11623883)))))))
       + HIBYTE(v19)) & ((v14 >> 5) - 1);
  *(_QWORD *)a2 = *(_QWORD *)(v15 + 8 * v16);
  *(_QWORD *)(v15 + 8 * v16) = a2;
  ++*(_DWORD *)v2;
}
