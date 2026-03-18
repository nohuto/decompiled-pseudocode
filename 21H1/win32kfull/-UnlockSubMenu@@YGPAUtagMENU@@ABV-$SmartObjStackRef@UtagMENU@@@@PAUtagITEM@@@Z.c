/*
 * XREFs of ?UnlockSubMenu@@YGPAUtagMENU@@ABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x1EA7C
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PAU_UNICODE_STRING@@PAH@Z @ 0x1E646 (-SetLPITEMInfoNoRedraw@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PA.c)
 *     _MNFreeItem@12 @ 0x1EA10 (_MNFreeItem@12.c)
 * Callees:
 *     ?RemoveParentMenu@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x1CE5E (-RemoveParentMenu@@YGXABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 */

int __fastcall UnlockSubMenu(int **a1, int a2)
{
  int v2; // esi

  v2 = a2 + 8;
  if ( !*(_DWORD *)(a2 + 8) )
    return 0;
  RemoveParentMenu(a1, a2);
  *(_DWORD *)(*(_DWORD *)(v2 - 8) + 12) = 0;
  return HMAssignmentUnlock(v2);
}
