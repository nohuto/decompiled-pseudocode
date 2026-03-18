/*
 * XREFs of GreGetDeviceGammaRampInternal @ 0x1C0115214
 * Callers:
 *     GreGetDeviceGammaRamp @ 0x1C0115164 (GreGetDeviceGammaRamp.c)
 * Callees:
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

__int64 __fastcall GreGetDeviceGammaRampInternal(__int64 a1, _WORD *a2)
{
  unsigned int v2; // r8d
  const void *v3; // rax
  _WORD *v4; // rcx
  __int16 v5; // ax

  v2 = 0;
  if ( a1 && (*(_DWORD *)(a1 + 40) & 1) != 0 && (unsigned int)(*(_DWORD *)(a1 + 2108) - 3) <= 3 )
  {
    v3 = *(const void **)(a1 + 1688);
    if ( v3 )
    {
      memmove(a2, v3, 0x600uLL);
    }
    else
    {
      v4 = a2 + 256;
      do
      {
        v5 = v2++;
        v5 <<= 8;
        v4[256] = v5;
        *v4 = v5;
        *(v4 - 256) = v5;
        ++v4;
      }
      while ( v2 < 0x100 );
    }
    return 1;
  }
  return v2;
}
