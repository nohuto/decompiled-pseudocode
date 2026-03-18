/*
 * XREFs of ?vCopy_rgbquad@XEPALOBJ@@QAEXPAUtagRGBQUAD@@KK@Z @ 0xF98E0
 * Callers:
 *     _GreSetDIBitsToDeviceInternal@64 @ 0x4E312 (_GreSetDIBitsToDeviceInternal@64.c)
 *     _GreStretchDIBitsInternal@64 @ 0x75662 (_GreStretchDIBitsInternal@64.c)
 *     _GreCreateDIBitmapReal@52 @ 0x76A92 (_GreCreateDIBitmapReal@52.c)
 *     _GreSetDIBColorTable@16 @ 0xC11D0 (_GreSetDIBColorTable@16.c)
 * Callees:
 *     <none>
 */

void __thiscall XEPALOBJ::vCopy_rgbquad(XEPALOBJ *this, struct tagRGBQUAD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // edx
  _DWORD *v8; // edi
  unsigned int i; // ecx
  unsigned __int32 v10; // edx
  signed __int32 v11; // ecx
  int v12; // edx
  unsigned int v13; // [esp+18h] [ebp+Ch]

  v6 = *(_DWORD *)(*(_DWORD *)this + 20);
  v13 = *(_DWORD *)(*(_DWORD *)this + 76) + 4 * a3;
  if ( a3 + a4 > v6 )
    a4 = v6 - a3;
  v8 = (_DWORD *)v13;
  for ( i = a4 >> 1; i; --i )
  {
    v10 = _byteswap_ulong(*(_DWORD *)&a2[1]) >> 8;
    *v8 = _byteswap_ulong((unsigned int)*a2) >> 8;
    v8[1] = v10;
    a2 += 2;
    v8 += 2;
  }
  if ( (a4 & 1) != 0 )
    *v8 = _byteswap_ulong((unsigned int)*a2) >> 8;
  v11 = _InterlockedIncrement((volatile signed __int32 *)ulXlatePalUnique);
  *(_DWORD *)(*(_DWORD *)this + 24) = v11;
  v12 = *(_DWORD *)(*(_DWORD *)this + 80);
  if ( v12 != *(_DWORD *)this )
    *(_DWORD *)(v12 + 24) = v11;
}
