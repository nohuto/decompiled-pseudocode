/*
 * XREFs of ?vCopy_cmykquad@XEPALOBJ@@QAEXPBKKK@Z @ 0x223482
 * Callers:
 *     _GreSetDIBitsToDeviceInternal@64 @ 0x4E312 (_GreSetDIBitsToDeviceInternal@64.c)
 *     _GreStretchDIBitsInternal@64 @ 0x75662 (_GreStretchDIBitsInternal@64.c)
 *     _GreCreateDIBitmapReal@52 @ 0x76A92 (_GreCreateDIBitmapReal@52.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __thiscall XEPALOBJ::vCopy_cmykquad(XEPALOBJ *this, void *Src, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // edx
  void *v6; // ecx
  unsigned int v7; // eax
  signed __int32 v8; // ecx
  int v9; // edx

  v5 = *(_DWORD *)(*(_DWORD *)this + 20);
  v6 = *(void **)(*(_DWORD *)this + 76);
  v7 = a4;
  if ( a4 > v5 )
    v7 = v5;
  memcpy(v6, Src, 4 * v7);
  v8 = _InterlockedIncrement((volatile signed __int32 *)ulXlatePalUnique);
  *(_DWORD *)(*(_DWORD *)this + 24) = v8;
  v9 = *(_DWORD *)(*(_DWORD *)this + 80);
  if ( v9 != *(_DWORD *)this )
    *(_DWORD *)(v9 + 24) = v8;
}
