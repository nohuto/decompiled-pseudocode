/*
 * XREFs of ?GetMenuDepth@@YGIABV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C058
 * Callers:
 *     ?GetMenuDepth@@YGIABV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C058 (-GetMenuDepth@@YGIABV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PAU_UNICODE_STRING@@PAH@Z @ 0x1E646 (-SetLPITEMInfoNoRedraw@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PA.c)
 * Callees:
 *     ?GetMenuDepth@@YGIABV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C058 (-GetMenuDepth@@YGIABV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 */

int __fastcall GetMenuDepth(int a1, int a2)
{
  unsigned int v2; // ebx
  int v3; // esi
  _DWORD *v4; // edi
  _BYTE v6[8]; // [esp+Ch] [ebp-14h] BYREF
  int v7; // [esp+14h] [ebp-Ch]
  unsigned int MenuDepth; // [esp+18h] [ebp-8h]
  int v9; // [esp+1Ch] [ebp-4h]

  v2 = 0;
  v9 = a2;
  if ( !a2 )
    return 25;
  v3 = *(_DWORD *)(*(_DWORD *)(**(_DWORD **)a1 + 20) + 24);
  if ( v3 )
  {
    v4 = (_DWORD *)(*(_DWORD *)(**(_DWORD **)a1 + 56) + 8);
    do
    {
      --v3;
      if ( *v4 )
      {
        SmartObjStackRefBase<tagMENU>::Init(*v4);
        v7 = 0;
        MenuDepth = GetMenuDepth(v6, v9 - 1);
        SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v6);
        if ( MenuDepth > v2 )
        {
          if ( MenuDepth >= 0x19 )
            return 25;
          v2 = MenuDepth;
        }
      }
      v4 += 20;
    }
    while ( v3 );
  }
  return v2 + 1;
}
