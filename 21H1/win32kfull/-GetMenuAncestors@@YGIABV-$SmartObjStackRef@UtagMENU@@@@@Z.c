/*
 * XREFs of ?GetMenuAncestors@@YGIABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0D8
 * Callers:
 *     ?GetMenuAncestors@@YGIABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0D8 (-GetMenuAncestors@@YGIABV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PAU_UNICODE_STRING@@PAH@Z @ 0x1E646 (-SetLPITEMInfoNoRedraw@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PA.c)
 * Callees:
 *     ?GetMenuAncestors@@YGIABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0D8 (-GetMenuAncestors@@YGIABV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 */

unsigned int __thiscall GetMenuAncestors(void *this)
{
  unsigned int v1; // edi
  _DWORD *i; // esi
  unsigned int MenuAncestors; // ebx
  _BYTE v5[8]; // [esp+8h] [ebp-Ch] BYREF
  int v6; // [esp+10h] [ebp-4h]

  v1 = 0;
  for ( i = *(_DWORD **)(**(_DWORD **)this + 64); i; i = (_DWORD *)*i )
  {
    SmartObjStackRefBase<tagMENU>::Init(i[1]);
    v6 = 0;
    MenuAncestors = GetMenuAncestors(v5);
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v5);
    if ( MenuAncestors > v1 )
      v1 = MenuAncestors;
  }
  return v1 + 1;
}
