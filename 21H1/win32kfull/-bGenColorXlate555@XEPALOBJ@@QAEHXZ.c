/*
 * XREFs of ?bGenColorXlate555@XEPALOBJ@@QAEHXZ @ 0x222EB1
 * Callers:
 *     ?pGetRGBXlate@XEPALOBJ@@QAEPAEXZ @ 0x222F44 (-pGetRGBXlate@XEPALOBJ@@QAEPAEXZ.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?MakeITable@@YGHPAEPAURGBX@@H@Z @ 0xB7744 (-MakeITable@@YGHPAEPAURGBX@@H@Z.c)
 */

int __usercall XEPALOBJ::bGenColorXlate555@<eax>(XEPALOBJ *this@<ecx>, unsigned int *a2@<ebx>)
{
  int v3; // edi
  int v4; // edx
  unsigned __int8 *v5; // ecx
  void *v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  struct RGBX *v11; // [esp+0h] [ebp-8h]
  int v12; // [esp+4h] [ebp-4h]

  v3 = 0;
  v4 = *(_DWORD *)this;
  v5 = *(unsigned __int8 **)(*(_DWORD *)this + 72);
  if ( !v5 || v5 == gpRGBXlate )
  {
    *(_DWORD *)(*(_DWORD *)this + 72) = PALLOCMEM2(0x8000u, 1650946631, 0);
    v4 = *(_DWORD *)this;
  }
  v6 = *(void **)(v4 + 72);
  if ( v6 )
  {
    MakeITable(*(_DWORD *)(v4 + 76), v6, a2, *(unsigned __int8 **)(v4 + 20), v11, v12);
    v7 = *(_DWORD *)this;
    v3 = 1;
    v8 = *(_DWORD *)(*(_DWORD *)this + 80);
    if ( v8 == *(_DWORD *)this )
      v9 = *(_DWORD *)(v7 + 24);
    else
      v9 = *(_DWORD *)(v8 + 24);
    *(_DWORD *)(v7 + 28) = v9;
  }
  return v3;
}
