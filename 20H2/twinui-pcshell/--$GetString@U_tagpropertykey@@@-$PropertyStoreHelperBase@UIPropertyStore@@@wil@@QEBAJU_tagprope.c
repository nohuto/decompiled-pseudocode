/*
 * XREFs of ??$GetString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x18046CA98
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x18046E294 (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 *     ImmersiveIcons::GetPackageFullNameForAppsFolderItem @ 0x18046F398 (ImmersiveIcons--GetPackageFullNameForAppsFolderItem.c)
 * Callees:
 *     ??$GetFailIfEmpty@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1801A3C88 (--$GetFailIfEmpty@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpro.c)
 */

__int64 __fastcall wil::PropertyStoreHelperBase<IPropertyStore>::GetString<_tagpropertykey>(
        _QWORD *a1,
        __int128 *a2,
        _QWORD *a3)
{
  int v4; // eax
  int FailIf; // ebx
  bool v6; // zf
  __int128 v8; // [rsp+20h] [rbp-48h] BYREF
  int v9; // [rsp+30h] [rbp-38h]
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  v8 = *a2;
  LOWORD(pvar[0]) = 0;
  v4 = *((_DWORD *)a2 + 4);
  *a3 = 0LL;
  v9 = v4;
  FailIf = CPropertyStoreHelperBase<IPropertyStore>::GetFailIfEmpty<_tagpropertykey>(a1, (__int64)&v8, pvar);
  if ( FailIf >= 0 )
  {
    v6 = LOWORD(pvar[0]) == 31;
    *a3 = 0LL;
    if ( v6 && pvar[1] )
    {
      *a3 = pvar[1];
      *(_OWORD *)pvar = 0LL;
      v11 = 0LL;
    }
    else
    {
      FailIf = -2147352571;
    }
  }
  PropVariantClear(pvar);
  return (unsigned int)FailIf;
}
