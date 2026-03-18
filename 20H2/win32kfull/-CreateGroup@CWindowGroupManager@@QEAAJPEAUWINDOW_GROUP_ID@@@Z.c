/*
 * XREFs of ?CreateGroup@CWindowGroupManager@@QEAAJPEAUWINDOW_GROUP_ID@@@Z @ 0x1C023FD18
 * Callers:
 *     NtUserCreateWindowGroup @ 0x1C01F7430 (NtUserCreateWindowGroup.c)
 * Callees:
 *     _anonymous_namespace_::HashTableAllocator @ 0x1C02401F0 (_anonymous_namespace_--HashTableAllocator.c)
 *     _anonymous_namespace_::HashTableDeallocator @ 0x1C0240214 (_anonymous_namespace_--HashTableDeallocator.c)
 */

__int64 __fastcall CWindowGroupManager::CreateGroup(CWindowGroupManager *this, struct WINDOW_GROUP_ID *a2)
{
  struct CWindowGroupManager *v2; // r15
  unsigned int v3; // edi
  struct WINDOW_GROUP_ID *v4; // r14
  unsigned int v5; // r13d
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  char *v8; // r8
  char v9; // cl
  unsigned __int64 v10; // rcx
  __int64 v11; // r10
  __int64 v12; // r14
  _QWORD *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  unsigned int v21; // edi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v25; // [rsp+60h] [rbp+40h]
  __int64 v26; // [rsp+60h] [rbp+40h]

  v2 = `anonymous namespace'::g_windowGroupManager;
  v3 = 0;
  v4 = a2;
  v5 = -1073741801;
  v6 = (unsigned __int64)`anonymous namespace'::g_windowGroupManager + 16;
  v7 = (unsigned int)(2 * (*((_DWORD *)`anonymous namespace'::g_windowGroupManager + 5) >> 5));
  if ( *((_DWORD *)`anonymous namespace'::g_windowGroupManager + 4) >= (unsigned int)v7 )
  {
    if ( (unsigned int)v7 < 4 )
      v7 = 4LL;
    v8 = (char *)anonymous_namespace_::HashTableAllocator(8LL * (unsigned int)v7, 0LL);
    if ( v8 )
    {
      if ( (((_DWORD)v7 - 1) & (unsigned int)v7) != 0 )
      {
        v9 = -1;
        do
        {
          ++v9;
          LODWORD(v7) = (unsigned int)v7 >> 1;
        }
        while ( (_DWORD)v7 );
        v7 = (unsigned int)(1 << v9);
      }
      if ( (unsigned int)v7 > 0x4000000 )
        v7 = 0x4000000LL;
      v10 = (unsigned int)v7;
      if ( v8 > &v8[8 * v7] )
        v10 = 0LL;
      if ( v10 )
      {
        memset64(v8, v6 | 1, v10);
        v3 = 0;
      }
      v11 = -1LL << (*(_BYTE *)(v6 + 4) & 0x1F);
      if ( (*(_DWORD *)(v6 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v12 = *(_QWORD *)(v6 + 8);
          while ( 1 )
          {
            v13 = *(_QWORD **)(v12 + 8LL * v3);
            if ( ((unsigned __int8)v13 & 1) != 0 )
              break;
            *(_QWORD *)(v12 + 8LL * v3) = *v13;
            v25 = v11 & v13[1];
            v14 = (37
                 * (BYTE6(v25)
                  + 37
                  * (BYTE5(v25)
                   + 37
                   * (BYTE4(v25)
                    + 37 * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))
                 + HIBYTE(v25)) & (unsigned int)(v7 - 1);
            *v13 = *(_QWORD *)&v8[8 * v14];
            *(_QWORD *)&v8[8 * v14] = v13;
          }
          ++v3;
        }
        while ( v3 < *(_DWORD *)(v6 + 4) >> 5 );
        v4 = a2;
      }
      v15 = *(_QWORD *)(v6 + 8);
      v16 = (32 * v7) | *(_DWORD *)(v6 + 4) & 0x1F;
      *(_QWORD *)(v6 + 8) = v8;
      *(_DWORD *)(v6 + 4) = v16;
      if ( v15 )
        anonymous_namespace_::HashTableDeallocator(v15, 0LL);
    }
    else if ( *(_DWORD *)(v6 + 4) < 0x20u )
    {
      return v5;
    }
  }
  v17 = *((unsigned int *)v2 + 2);
  v18 = Win32AllocPool(56LL, 1836541781LL);
  v19 = v18;
  if ( v18 )
  {
    *(_OWORD *)v18 = 0LL;
    *(_DWORD *)(v18 + 20) = 0;
    *(_DWORD *)(v18 + 16) = v17;
    *(_OWORD *)(v18 + 24) = 0LL;
    *(_OWORD *)(v18 + 40) = 0LL;
    *(_DWORD *)(v18 + 24) = 0;
    *(_QWORD *)(v18 + 32) = 0LL;
    *(_DWORD *)(v18 + 28) = 0;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v19 )
  {
    v20 = v17;
    v5 = 0;
    *(_QWORD *)(v19 + 8) = v17;
    v21 = *(_DWORD *)(v6 + 4);
    v26 = v20 & (-1LL << (v21 & 0x1F));
    v22 = *(_QWORD *)(v6 + 8);
    v23 = (37
         * (BYTE6(v26)
          + 37
          * (BYTE5(v26)
           + 37
           * (BYTE4(v26)
            + 37 * (BYTE3(v26) + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v26 + 11623883)))))))
         + HIBYTE(v26)) & ((v21 >> 5) - 1);
    *(_QWORD *)v19 = *(_QWORD *)(v22 + 8 * v23);
    *(_QWORD *)(v22 + 8 * v23) = v19;
    ++*(_DWORD *)v6;
    *(_DWORD *)v4 = *(_DWORD *)(v19 + 16);
    ++*((_DWORD *)v2 + 2);
  }
  return v5;
}
