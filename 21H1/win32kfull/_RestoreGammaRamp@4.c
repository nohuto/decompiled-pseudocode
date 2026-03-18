/*
 * XREFs of _RestoreGammaRamp@4 @ 0xCE8E0
 * Callers:
 *     _xxxSwitchDesktopWithFade@20 @ 0xAF188 (_xxxSwitchDesktopWithFade@20.c)
 * Callees:
 *     _GreSetDeviceGammaRamp@16 @ 0xCEB1A (_GreSetDeviceGammaRamp@16.c)
 */

int __stdcall RestoreGammaRamp(unsigned int *a1)
{
  unsigned int v1; // ebx
  _DWORD *v2; // edi

  v1 = 0;
  if ( *a1 )
  {
    v2 = a1 + 385;
    do
    {
      if ( *v2 )
      {
        GreSetDeviceGammaRamp(0, (void *)1);
        GreDeleteDC(*v2);
      }
      ++v1;
      v2 += 385;
    }
    while ( v1 < *a1 );
  }
  return Win32FreePool(a1);
}
