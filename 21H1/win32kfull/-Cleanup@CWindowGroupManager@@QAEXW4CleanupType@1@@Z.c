/*
 * XREFs of ?Cleanup@CWindowGroupManager@@QAEXW4CleanupType@1@@Z @ 0x19ED5D
 * Callers:
 *     ?FreeEmptyGroups@WindowGroupingManagement@@YGXK@Z @ 0xD3976 (-FreeEmptyGroups@WindowGroupingManagement@@YGXK@Z.c)
 *     ?Uninitialize@CWindowGroupManager@@SGXXZ @ 0x19F638 (-Uninitialize@CWindowGroupManager@@SGXXZ.c)
 * Callees:
 *     ?RemoveAll@CWindowGroup@@QAEXXZ @ 0x19F3A8 (-RemoveAll@CWindowGroup@@QAEXXZ.c)
 */

unsigned int __stdcall CWindowGroupManager::Cleanup(int a1)
{
  struct CWindowGroupManager *v1; // ebx
  CWindowGroup *v2; // edx
  CWindowGroup *v3; // esi
  CWindowGroup *v4; // ecx
  unsigned int result; // eax
  unsigned int v6; // ecx
  CWindowGroup *v7; // edi
  bool v8; // al
  CWindowGroup *i; // ecx
  CWindowGroup *v10; // [esp+Ch] [ebp-4h]

  v1 = `anonymous namespace'::g_windowGroupManager;
  v2 = (CWindowGroup *)*((_DWORD *)`anonymous namespace'::g_windowGroupManager + 4);
  v3 = v2;
  v10 = v2;
  while ( 1 )
  {
    if ( !v3 )
      goto LABEL_7;
    v4 = *(CWindowGroup **)v3;
    result = *(_DWORD *)v3 & 0x80000002;
    if ( result == -2147483646 )
    {
      result = MEMORY[0];
      v4 = *(CWindowGroup **)v3;
    }
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
LABEL_7:
      v2 = (CWindowGroup *)((char *)v2 + 4);
      result = *((_DWORD *)v1 + 4);
      v6 = result + 4 * (*((_DWORD *)v1 + 3) >> 5);
      while ( 1 )
      {
        if ( (unsigned int)v2 >= v6 )
        {
          v2 = v10;
          v4 = 0;
          goto LABEL_12;
        }
        result = *(_DWORD *)v2;
        if ( (*(_DWORD *)v2 & 1) == 0 )
          break;
        v2 = (CWindowGroup *)((char *)v2 + 4);
      }
      v3 = *(CWindowGroup **)v2;
      v10 = v2;
      v4 = *(CWindowGroup **)v2;
    }
    else
    {
      v3 = v4;
    }
LABEL_12:
    if ( !v4 )
      return result;
    v7 = v3;
    if ( !a1 )
    {
      v8 = 1;
      goto LABEL_18;
    }
    if ( a1 == 1 )
    {
      v8 = *((_DWORD *)v3 + 4) == 0;
LABEL_18:
      if ( v8 )
      {
        for ( i = v2; (*(_DWORD *)i & 1) == 0; i = *(CWindowGroup **)i )
        {
          if ( *(CWindowGroup **)i == v3 )
          {
            *(_DWORD *)i = *(_DWORD *)v3;
            --*((_DWORD *)v1 + 2);
            *(_DWORD *)v3 |= 0x80000002;
            v3 = i;
            break;
          }
        }
        CWindowGroup::RemoveAll(v7);
        if ( *((_DWORD *)v7 + 6) )
          Win32FreePool(*((_DWORD *)v7 + 6));
        Win32FreePool(v7);
        v2 = v10;
      }
    }
  }
}
