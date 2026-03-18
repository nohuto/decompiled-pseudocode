/*
 * XREFs of ?RemoveParentMenu@@YGXABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x1CE5E
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PAU_UNICODE_STRING@@PAH@Z @ 0x1E646 (-SetLPITEMInfoNoRedraw@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PA.c)
 *     ?UnlockSubMenu@@YGPAUtagMENU@@ABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x1EA7C (-UnlockSubMenu@@YGPAUtagMENU@@ABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RemoveParentMenu(int **a1, int a2)
{
  int v2; // edx
  _DWORD **i; // edx
  int *v4; // eax
  _DWORD **v5; // [esp-4h] [ebp-8h]

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 )
  {
    for ( i = (_DWORD **)(v2 + 64); *i; i = (_DWORD **)*i )
    {
      v4 = a1[2];
      if ( !v4 )
        v4 = (int *)**a1;
      if ( (int *)(*i)[1] == v4 )
      {
        v5 = (_DWORD **)*i;
        *i = (_DWORD *)**i;
        Win32FreePool(v5);
        return;
      }
    }
  }
}
