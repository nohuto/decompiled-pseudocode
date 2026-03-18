/*
 * XREFs of ?AddWindow@CWindowGroup@@QEAAJPEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C023F8F8
 * Callers:
 *     ?SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C02404AC (-SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW.c)
 * Callees:
 *     _anonymous_namespace_::HashTableAllocator @ 0x1C02401F0 (_anonymous_namespace_--HashTableAllocator.c)
 *     _anonymous_namespace_::HashTableDeallocator @ 0x1C0240214 (_anonymous_namespace_--HashTableDeallocator.c)
 *     ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C02409FC (-_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_.c)
 */

__int64 __fastcall CWindowGroup::AddWindow(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  __int64 v7; // rbx
  __int64 v8; // r14
  unsigned int v9; // r15d
  char *v10; // r8
  char v11; // cl
  unsigned __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // r14
  _QWORD *v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // edi
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v26; // [rsp+20h] [rbp-10h]
  __int64 v28; // [rsp+70h] [rbp+40h]

  v4 = a1 + 24;
  v5 = 0;
  v7 = (unsigned int)(2 * (*(_DWORD *)(a1 + 28) >> 5));
  v8 = a1;
  v9 = -1073741801;
  if ( *(_DWORD *)(a1 + 24) >= (unsigned int)v7 )
  {
    if ( (unsigned int)v7 < 4 )
      v7 = 4LL;
    v10 = (char *)anonymous_namespace_::HashTableAllocator(8LL * (unsigned int)v7, 0LL);
    if ( v10 )
    {
      if ( (((_DWORD)v7 - 1) & (unsigned int)v7) != 0 )
      {
        v11 = -1;
        do
        {
          ++v11;
          LODWORD(v7) = (unsigned int)v7 >> 1;
        }
        while ( (_DWORD)v7 );
        v7 = (unsigned int)(1 << v11);
      }
      if ( (unsigned int)v7 > 0x4000000 )
        v7 = 0x4000000LL;
      v12 = (unsigned int)v7;
      if ( v10 > &v10[8 * v7] )
        v12 = 0LL;
      if ( v12 )
      {
        memset64(v10, v4 | 1, v12);
        v5 = 0;
      }
      v13 = -1LL << (*(_BYTE *)(v4 + 4) & 0x1F);
      if ( (*(_DWORD *)(v4 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v14 = *(_QWORD *)(v4 + 8);
          while ( 1 )
          {
            v15 = *(_QWORD **)(v14 + 8LL * v5);
            if ( ((unsigned __int8)v15 & 1) != 0 )
              break;
            *(_QWORD *)(v14 + 8LL * v5) = *v15;
            v26 = v13 & v15[1];
            v16 = (37
                 * (BYTE6(v26)
                  + 37
                  * (BYTE5(v26)
                   + 37
                   * (BYTE4(v26)
                    + 37 * (BYTE3(v26) + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v26 + 11623883)))))))
                 + HIBYTE(v26)) & (unsigned int)(v7 - 1);
            *v15 = *(_QWORD *)&v10[8 * v16];
            *(_QWORD *)&v10[8 * v16] = v15;
          }
          ++v5;
        }
        while ( v5 < *(_DWORD *)(v4 + 4) >> 5 );
        v8 = a1;
      }
      v17 = *(_QWORD *)(v4 + 8);
      v18 = (32 * v7) | *(_DWORD *)(v4 + 4) & 0x1F;
      *(_QWORD *)(v4 + 8) = v10;
      *(_DWORD *)(v4 + 4) = v18;
      if ( v17 )
        anonymous_namespace_::HashTableDeallocator(v17, 0LL);
    }
    else if ( *(_DWORD *)(v4 + 4) < 0x20u )
    {
      return v9;
    }
  }
  v19 = Win32AllocPool(32LL, 1836541781LL);
  if ( v19 )
  {
    v20 = *a2;
    *(_OWORD *)v19 = 0LL;
    *(_QWORD *)(v19 + 16) = v20;
    *(_DWORD *)(v19 + 24) = 0;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v19 )
  {
    v21 = (unsigned __int16)*(_DWORD *)(v19 + 16);
    *(_QWORD *)(v19 + 8) = v21;
    v22 = *(_DWORD *)(v4 + 4);
    v28 = v21 & (-1LL << (v22 & 0x1F));
    v23 = *(_QWORD *)(v4 + 8);
    v24 = (37
         * (BYTE6(v28)
          + 37
          * (BYTE5(v28)
           + 37
           * (BYTE4(v28)
            + 37 * (BYTE3(v28) + 37 * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * ((unsigned __int8)v28 + 11623883)))))))
         + HIBYTE(v28)) & ((v22 >> 5) - 1);
    *(_QWORD *)v19 = *(_QWORD *)(v23 + 8 * v24);
    *(_QWORD *)(v23 + 8 * v24) = v19;
    ++*(_DWORD *)v4;
    *((_DWORD *)a2 + 77) = *(_DWORD *)(v8 + 16);
    return (unsigned __int8)CWindowGroup::_UpdateWindowInternal(v8, v19, a4, a3) == 0 ? 0xC0000001 : 0;
  }
  return v9;
}
