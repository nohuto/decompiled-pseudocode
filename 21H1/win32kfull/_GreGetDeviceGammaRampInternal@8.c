/*
 * XREFs of _GreGetDeviceGammaRampInternal@8 @ 0xD1014
 * Callers:
 *     _GreGetDeviceGammaRamp@8 @ 0xD0F8E (_GreGetDeviceGammaRamp@8.c)
 * Callees:
 *     <none>
 */

int __fastcall GreGetDeviceGammaRampInternal(int a1, _WORD *a2)
{
  unsigned int v2; // edi
  int v3; // eax
  const void *v4; // esi
  _WORD *v5; // ecx
  __int16 v6; // ax

  v2 = 0;
  if ( a1 )
  {
    if ( (*(_BYTE *)(a1 + 24) & 1) != 0 )
    {
      v3 = *(_DWORD *)(a1 + 1404);
      if ( v3 == 6 || v3 == 3 || v3 == 4 || v3 == 5 )
      {
        v4 = *(const void **)(a1 + 1048);
        if ( v4 )
        {
          qmemcpy(a2, v4, 0x600u);
        }
        else
        {
          v5 = a2 + 256;
          do
          {
            v6 = (_WORD)v2++ << 8;
            v5[256] = v6;
            *v5 = v6;
            *(v5 - 256) = v6;
            ++v5;
          }
          while ( v2 < 0x100 );
        }
        return 1;
      }
    }
  }
  return v2;
}
