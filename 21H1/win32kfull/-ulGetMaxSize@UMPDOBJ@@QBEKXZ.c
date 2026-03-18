/*
 * XREFs of ?ulGetMaxSize@UMPDOBJ@@QBEKXZ @ 0x210133
 * Callers:
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAH@Z @ 0x20FDCC (-bSendLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z @ 0x20FF60 (-bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall UMPDOBJ::ulGetMaxSize(UMPDOBJ *this)
{
  int v1; // ecx
  unsigned int v2; // eax
  unsigned int v3; // ecx

  v1 = *((_DWORD *)this + 52);
  if ( v1 && (v2 = *(_DWORD *)(v1 + 16), v3 = *(_DWORD *)(v1 + 28), v2 > v3) )
    return v2 - v3;
  else
    return 0;
}
