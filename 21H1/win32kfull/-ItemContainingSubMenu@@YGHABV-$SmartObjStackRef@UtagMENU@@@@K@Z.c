/*
 * XREFs of ?ItemContainingSubMenu@@YGHABV?$SmartObjStackRef@UtagMENU@@@@K@Z @ 0x1A6ADA
 * Callers:
 *     ?UT_FindTopLevelMenuIndex@@YGHABV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0xC35C0 (-UT_FindTopLevelMenuIndex@@YGHABV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     ?ItemContainingSubMenu@@YGHABV?$SmartObjStackRef@UtagMENU@@@@K@Z @ 0x1A6ADA (-ItemContainingSubMenu@@YGHABV-$SmartObjStackRef@UtagMENU@@@@K@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     ?ItemContainingSubMenu@@YGHABV?$SmartObjStackRef@UtagMENU@@@@K@Z @ 0x1A6ADA (-ItemContainingSubMenu@@YGHABV-$SmartObjStackRef@UtagMENU@@@@K@Z.c)
 */

int __fastcall ItemContainingSubMenu(int **a1, int a2)
{
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // esi
  int *i; // edi
  int v8; // eax
  bool v9; // bl
  _DWORD v10[3]; // [esp+8h] [ebp-10h] BYREF
  int v11; // [esp+14h] [ebp-4h]

  v2 = a2;
  v3 = **a1;
  v11 = a2;
  v4 = *(_DWORD *)(v3 + 20);
  v5 = *(_DWORD *)(v4 + 24) - 1;
  if ( !*(_DWORD *)(v4 + 24) )
    return v5 | v4;
  for ( i = (int *)(*(_DWORD *)(**a1 + 56) + 80 * v5); v5 >= 0; --v5 )
  {
    v8 = i[2];
    if ( v8 )
    {
      if ( v8 == v2 )
        return v5;
      SmartObjStackRefBase<tagMENU>::Init(v10, i[2]);
      v10[2] = 0;
      v9 = ItemContainingSubMenu(v10) != -1;
      SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v10);
      if ( v9 )
        return v5;
      v2 = v11;
    }
    else if ( *(_DWORD *)(*i + 8) == v2 )
    {
      return v5;
    }
    i -= 20;
  }
  return v5;
}
