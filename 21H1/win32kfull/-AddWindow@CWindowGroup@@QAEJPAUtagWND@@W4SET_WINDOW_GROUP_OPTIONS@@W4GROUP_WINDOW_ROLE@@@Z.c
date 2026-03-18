/*
 * XREFs of ?AddWindow@CWindowGroup@@QAEJPAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x19EB05
 * Callers:
 *     ?SetWindowGroup@WindowGroupingWindowManagement@@YGJABUWINDOW_GROUP_ID@@PAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x19F490 (-SetWindowGroup@WindowGroupingWindowManagement@@YGJABUWINDOW_GROUP_ID@@PAUtagWND@@W4SET_WINDOW_G.c)
 * Callees:
 *     _RtlULongLongToULong@12 @ 0xAB66C (_RtlULongLongToULong@12.c)
 *     _anonymous_namespace_::HashTableAllocator @ 0x19F271 (_anonymous_namespace_--HashTableAllocator.c)
 *     _anonymous_namespace_::HashTableDeallocator @ 0x19F288 (_anonymous_namespace_--HashTableDeallocator.c)
 *     ?_UpdateWindowInternal@CWindowGroup@@AAE_NPAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x19F7F7 (-_UpdateWindowInternal@CWindowGroup@@AAE_NPAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OP.c)
 */

int __fastcall CWindowGroup::AddWindow(_DWORD *a1, int a2, int *a3, int a4, int a5)
{
  unsigned int v5; // edi
  unsigned int v6; // edx
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  int *v9; // edx
  unsigned int i; // ebx
  unsigned int v11; // ebx
  int v12; // edx
  _DWORD *v13; // ecx
  unsigned int v14; // edx
  int v15; // ecx
  _DWORD *v16; // esi
  int v17; // eax
  int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // edx
  int v21; // ecx
  ULONG *v23; // [esp+0h] [ebp-2Ch]
  _DWORD *v25; // [esp+10h] [ebp-1Ch]
  int j; // [esp+14h] [ebp-18h]
  int v27; // [esp+18h] [ebp-14h]
  unsigned int v28; // [esp+1Ch] [ebp-10h]

  v5 = (unsigned int)(a1 + 4);
  v6 = a1[5] >> 5;
  v25 = a1 + 4;
  if ( a1[4] >= 2 * v6 && RtlULongLongToULong(2LL * v6, v23) >= 0 )
  {
    v7 = anonymous_namespace_::HashTableAllocator(16, 0);
    v28 = v7;
    if ( v7 )
    {
      v8 = v7 + 16 >= v7 ? 4 : 0;
      if ( v8 )
      {
        v9 = (int *)v7;
        for ( i = 0; i < v8; ++i )
          *v9++ = v5 | 1;
      }
      v11 = 0;
      v27 = -1 << (*(_BYTE *)(v5 + 4) & 0x1F);
      if ( (*(_DWORD *)(v5 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v12 = *(_DWORD *)(v5 + 8);
          for ( j = v12; ; v12 = j )
          {
            v13 = *(_DWORD **)(v12 + 4 * v11);
            if ( ((unsigned __int8)v13 & 1) != 0 )
              break;
            *(_DWORD *)(v12 + 4 * v11) = *v13;
            v14 = ((((unsigned int)v27 & v13[1]) >> 24)
                 + 37
                 * ((unsigned __int8)(((unsigned int)v27 & v13[1]) >> 16)
                  + 37
                  * ((unsigned __int8)((unsigned __int16)(v27 & v13[1]) >> 8)
                   + 37 * ((unsigned __int8)(v27 & v13[1]) + 11623883)))) & 3;
            *v13 = *(_DWORD *)(v28 + 4 * v14);
            *(_DWORD *)(v28 + 4 * v14) = v13;
          }
          v5 = (unsigned int)v25;
          ++v11;
        }
        while ( v11 < v25[1] >> 5 );
      }
      v15 = *(_DWORD *)(v5 + 8);
      *(_DWORD *)(v5 + 8) = v28;
      *(_DWORD *)(v5 + 4) = *(_DWORD *)(v5 + 4) & 0x1F | 0x80;
      if ( v15 )
        anonymous_namespace_::HashTableDeallocator(v15, 0);
    }
    else if ( *(_DWORD *)(v5 + 4) < 0x20u )
    {
      return -1073741801;
    }
  }
  v16 = (_DWORD *)Win32AllocPool(16, 1836541781);
  if ( v16 )
  {
    v17 = *a3;
    *v16 = 0;
    v16[1] = 0;
    v16[2] = v17;
    v16[3] = 0;
  }
  else
  {
    v16 = 0;
  }
  if ( v16 )
  {
    v18 = (unsigned __int16)v16[2];
    v16[1] = v18;
    v19 = *(_DWORD *)(v5 + 4);
    v20 = (((v18 & (unsigned int)(-1 << (v19 & 0x1F))) >> 24)
         + 37
         * ((unsigned __int8)((v18 & (unsigned int)(-1 << (v19 & 0x1F))) >> 16)
          + 37
          * ((unsigned __int8)((unsigned __int16)(v18 & (-1 << (v19 & 0x1F))) >> 8)
           + 37 * ((unsigned __int8)(v18 & (-1 << (v19 & 0x1F))) + 11623883)))) & ((v19 >> 5) - 1);
    v21 = *(_DWORD *)(v5 + 8);
    *v16 = *(_DWORD *)(v21 + 4 * v20);
    *(_DWORD *)(v21 + 4 * v20) = v16;
    ++*(_DWORD *)v5;
    a3[45] = a1[2];
    return (unsigned __int8)CWindowGroup::_UpdateWindowInternal(a1, v16, a5, a4) != 0 ? 0 : -1073741823;
  }
  return -1073741801;
}
