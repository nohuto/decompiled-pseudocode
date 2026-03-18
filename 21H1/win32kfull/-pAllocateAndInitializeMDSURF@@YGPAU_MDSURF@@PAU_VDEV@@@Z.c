/*
 * XREFs of ?pAllocateAndInitializeMDSURF@@YGPAU_MDSURF@@PAU_VDEV@@@Z @ 0x206598
 * Callers:
 *     ?MulCreateDeviceBitmap@@YGPAUHBITMAP__@@PAUDHPDEV__@@UtagSIZE@@K@Z @ 0x2028BF (-MulCreateDeviceBitmap@@YGPAUHBITMAP__@@PAUDHPDEV__@@UtagSIZE@@K@Z.c)
 *     ?MulCreateDeviceBitmapEx@@YGPAUHBITMAP__@@PAUDHPDEV__@@UtagSIZE@@KKPAUDHSURF__@@KKPAPAX@Z @ 0x2029FA (-MulCreateDeviceBitmapEx@@YGPAUHBITMAP__@@PAUDHPDEV__@@UtagSIZE@@KKPAUDHSURF__@@KKPAPAX@Z.c)
 * Callees:
 *     <none>
 */

struct _MDSURF *__thiscall pAllocateAndInitializeMDSURF(_DWORD *this)
{
  unsigned int v1; // eax
  _DWORD *v2; // edx
  unsigned int v3; // eax
  _DWORD *v4; // eax

  v1 = this[2];
  v2 = 0;
  if ( v1 <= 0x3FFFFFFF )
  {
    v3 = 4 * v1;
    if ( v3 + 12 >= v3 )
    {
      v4 = EngAllocMem(1u, v3 + 12, 0x66735647u);
      v2 = v4;
      if ( v4 )
        v4[1] = v4 + 3;
    }
  }
  return (struct _MDSURF *)v2;
}
