/*
 * XREFs of ??4?$SharedPointerFieldlpstr@G@tagITEM@@QAEPAGPAG@Z @ 0x1E9E6
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PAU_UNICODE_STRING@@PAH@Z @ 0x1E646 (-SetLPITEMInfoNoRedraw@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PA.c)
 * Callees:
 *     <none>
 */

int __thiscall tagITEM::SharedPointerFieldlpstr<unsigned short>::operator=(_DWORD *this, int a2)
{
  int v2; // edi
  int v3; // eax
  int result; // eax

  v2 = *(this - 3);
  if ( a2 )
    v3 = a2 + *(this - 2) - v2;
  else
    v3 = 0;
  *(_DWORD *)(v2 + 24) = v3;
  result = a2;
  *this = a2;
  return result;
}
