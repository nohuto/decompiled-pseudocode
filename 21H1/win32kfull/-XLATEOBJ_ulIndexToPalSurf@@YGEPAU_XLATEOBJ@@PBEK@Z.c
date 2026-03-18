/*
 * XREFs of ?XLATEOBJ_ulIndexToPalSurf@@YGEPAU_XLATEOBJ@@PBEK@Z @ 0x225B0C
 * Callers:
 *     _XLATEOBJ_iXlate@8 @ 0xC5A04 (_XLATEOBJ_iXlate@8.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __stdcall XLATEOBJ_ulIndexToPalSurf(
        struct _XLATEOBJ *pulXlate,
        const unsigned __int8 *a2,
        unsigned int a3)
{
  struct _XLATEOBJ *v3; // esi
  unsigned int v4; // eax
  ULONG *v5; // edi
  unsigned __int8 v6; // cl
  FLONG flXlate; // edx
  int v8; // eax

  v3 = pulXlate;
  pulXlate = (struct _XLATEOBJ *)pulXlate[1].pulXlate;
  v4 = XEPALOBJ::ulIndexToRGB((XEPALOBJ *)&pulXlate, a3);
  v5 = v3[2].pulXlate;
  v6 = a2[(BYTE2(v4) >> 3) | (4 * ((32 * (v4 & 0xF8)) | (v4 >> 8) & 0xF8))];
  if ( ((unsigned __int16)v5 & 0x800) != 0 )
  {
    flXlate = v3[2].flXlate;
    if ( (struct PALETTE *)flXlate == ppalDefault )
    {
      if ( v6 >= 0xAu )
        v6 -= 20;
    }
    else
    {
      if ( ((unsigned __int16)v5 & 0x1000) != 0 )
        v8 = *(_DWORD *)(flXlate + 56);
      else
        v8 = *(_DWORD *)(flXlate + 52);
      return *(_BYTE *)(v8 + v6 + 4);
    }
  }
  return v6;
}
