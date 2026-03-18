/*
 * XREFs of ?XLATEOBJ_RGB16_565ToPalSurf@@YGEPAU_XLATEOBJ@@PBEK@Z @ 0x2259FC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __stdcall XLATEOBJ_RGB16_565ToPalSurf(struct _XLATEOBJ *a1, const unsigned __int8 *a2, unsigned int a3)
{
  ULONG *pulXlate; // esi
  unsigned __int8 v4; // cl
  FLONG flXlate; // edx
  int v6; // eax

  pulXlate = a1[2].pulXlate;
  v4 = a2[a3 & 0x1F | (a3 >> 1) & 0x7FE0];
  if ( ((unsigned __int16)pulXlate & 0x800) != 0 )
  {
    flXlate = a1[2].flXlate;
    if ( (struct PALETTE *)flXlate == ppalDefault )
    {
      if ( v4 >= 0xAu )
        v4 -= 20;
    }
    else
    {
      if ( ((unsigned __int16)pulXlate & 0x1000) != 0 )
        v6 = *(_DWORD *)(flXlate + 56);
      else
        v6 = *(_DWORD *)(flXlate + 52);
      return *(_BYTE *)(v6 + v4 + 4);
    }
  }
  return v4;
}
