/*
 * XREFs of ??8?$SmartObjStackRef@UtagMENU@@@@QBE_NABV0@@Z @ 0x1C032
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PAU_UNICODE_STRING@@PAH@Z @ 0x1E646 (-SetLPITEMInfoNoRedraw@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PA.c)
 *     _xxxInsertMenuItem@20 @ 0x42D14 (_xxxInsertMenuItem@20.c)
 *     ?UT_FindTopLevelMenuIndex@@YGHABV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0xC35C0 (-UT_FindTopLevelMenuIndex@@YGHABV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     _xxxMNInvertItem@20 @ 0x1A9C22 (_xxxMNInvertItem@20.c)
 * Callees:
 *     <none>
 */

bool __thiscall SmartObjStackRef<tagMENU>::operator==(_DWORD *this, int a2)
{
  int v2; // edx

  v2 = this[2];
  if ( v2 )
    return v2 == *(_DWORD *)(a2 + 8);
  else
    return *(_DWORD *)*this == **(_DWORD **)a2;
}
