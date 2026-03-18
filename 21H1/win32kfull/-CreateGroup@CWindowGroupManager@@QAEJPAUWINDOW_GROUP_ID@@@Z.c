/*
 * XREFs of ?CreateGroup@CWindowGroupManager@@QAEJPAUWINDOW_GROUP_ID@@@Z @ 0x19EE4C
 * Callers:
 *     _NtUserCreateWindowGroup@4 @ 0x160894 (_NtUserCreateWindowGroup@4.c)
 * Callees:
 *     _RtlULongLongToULong@12 @ 0xAB66C (_RtlULongLongToULong@12.c)
 *     ??0CWindowGroup@@QAE@ABUWINDOW_GROUP_ID@@@Z @ 0x19E957 (--0CWindowGroup@@QAE@ABUWINDOW_GROUP_ID@@@Z.c)
 *     _anonymous_namespace_::HashTableAllocator @ 0x19F271 (_anonymous_namespace_--HashTableAllocator.c)
 *     _anonymous_namespace_::HashTableDeallocator @ 0x19F288 (_anonymous_namespace_--HashTableDeallocator.c)
 */

int __thiscall CWindowGroupManager::CreateGroup(CWindowGroupManager *this, struct WINDOW_GROUP_ID *a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ecx
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  unsigned int *v6; // edx
  unsigned int i; // ebx
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // edx
  _DWORD *v11; // ecx
  _DWORD *v12; // edi
  int v13; // edx
  char *v14; // ecx
  int v15; // ecx
  unsigned int v16; // esi
  CWindowGroup *v17; // eax
  CWindowGroup *v18; // ebx
  unsigned int v19; // edx
  int v20; // edx
  int v21; // ecx
  ULONG *v23; // [esp+0h] [ebp-2Ch]
  char *v24; // [esp+Ch] [ebp-20h] BYREF
  int j; // [esp+10h] [ebp-1Ch]
  int v26; // [esp+14h] [ebp-18h]
  int v27; // [esp+18h] [ebp-14h]
  struct CWindowGroupManager *v28; // [esp+1Ch] [ebp-10h]
  char *v29; // [esp+20h] [ebp-Ch]
  _DWORD *v30; // [esp+24h] [ebp-8h]
  int v31; // [esp+28h] [ebp-4h]

  v31 = 0;
  v2 = (unsigned int)`anonymous namespace'::g_windowGroupManager + 8;
  v28 = `anonymous namespace'::g_windowGroupManager;
  v3 = *((_DWORD *)`anonymous namespace'::g_windowGroupManager + 3) >> 5;
  v27 = -1073741801;
  v24 = (char *)`anonymous namespace'::g_windowGroupManager + 8;
  if ( *((_DWORD *)`anonymous namespace'::g_windowGroupManager + 2) >= 2 * v3 && RtlULongLongToULong(2LL * v3, v23) >= 0 )
  {
    v4 = anonymous_namespace_::HashTableAllocator(16, 0);
    v29 = (char *)v4;
    if ( v4 )
    {
      v31 = 0;
      v30 = (_DWORD *)v4;
      v5 = v4 + 16 >= v4 ? 4 : 0;
      if ( v5 )
      {
        v6 = (unsigned int *)v4;
        for ( i = v31; i < v5; ++i )
          *v6++ = v2 | 1;
      }
      v8 = *(_DWORD *)(v2 + 4);
      v9 = 0;
      v26 = -1 << (*(_BYTE *)(v2 + 4) & 0x1F);
      if ( (v8 & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v10 = *(_DWORD *)(v2 + 8);
          for ( j = v10; ; v10 = j )
          {
            v11 = *(_DWORD **)(v10 + 4 * v9);
            v30 = v11;
            if ( ((unsigned __int8)v11 & 1) != 0 )
              break;
            *(_DWORD *)(v10 + 4 * v9) = *v11;
            v12 = v30;
            v31 = v26 & v11[1];
            v13 = (HIBYTE(v31) + 37 * (BYTE2(v31) + 37 * (BYTE1(v31) + 37 * ((unsigned __int8)v31 + 11623883)))) & 3;
            v14 = v29;
            *v30 = *(_DWORD *)&v29[4 * v13];
            *(_DWORD *)&v14[4 * v13] = v12;
          }
          v2 = (unsigned int)v24;
          ++v9;
        }
        while ( v9 < *((_DWORD *)v24 + 1) >> 5 );
      }
      v15 = *(_DWORD *)(v2 + 8);
      *(_DWORD *)(v2 + 8) = v29;
      *(_DWORD *)(v2 + 4) = *(_DWORD *)(v2 + 4) & 0x1F | 0x80;
      if ( v15 )
        anonymous_namespace_::HashTableDeallocator(v15, 0);
    }
    else if ( *(_DWORD *)(v2 + 4) < 0x20u )
    {
      return v27;
    }
  }
  v16 = *((_DWORD *)v28 + 1);
  v24 = (char *)v16;
  v17 = (CWindowGroup *)Win32AllocPool(36, 1836541781);
  if ( v17 )
    v18 = CWindowGroup::CWindowGroup(v17, (const struct WINDOW_GROUP_ID *)&v24);
  else
    v18 = 0;
  if ( v18 )
  {
    *((_DWORD *)v18 + 1) = v16;
    v19 = *(_DWORD *)(v2 + 4);
    v27 = 0;
    v24 = (char *)(v16 & (-1 << (v19 & 0x1F)));
    v29 = v24;
    v20 = (HIBYTE(v24) + 37 * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * ((unsigned __int8)v24 + 11623883)))) & ((v19 >> 5) - 1);
    v21 = *(_DWORD *)(v2 + 8);
    *(_DWORD *)v18 = *(_DWORD *)(v21 + 4 * v20);
    *(_DWORD *)(v21 + 4 * v20) = v18;
    ++*(_DWORD *)v2;
    *(_DWORD *)a2 = *((_DWORD *)v18 + 2);
    ++*((_DWORD *)v28 + 1);
  }
  return v27;
}
