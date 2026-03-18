/*
 * XREFs of ?XLATEOBJ_BGR32ToPalSurf@@YGEPAU_XLATEOBJ@@PBEK@Z @ 0x225931
 * Callers:
 *     ?vConvertAndSaveBGRATo4@@YGXPAEPBKJJPAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x22BCF1 (-vConvertAndSaveBGRATo4@@YGXPAEPBKJJPAU_XLATEOBJ@@VXEPALOBJ@@3@Z.c)
 *     ?vConvertAndSaveBGRATo8@@YGXPAEPBKJJPAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x22BDBD (-vConvertAndSaveBGRATo8@@YGXPAEPBKJJPAU_XLATEOBJ@@VXEPALOBJ@@3@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __stdcall XLATEOBJ_BGR32ToPalSurf(struct _XLATEOBJ *a1, const unsigned __int8 *a2, unsigned int a3)
{
  unsigned __int8 v3; // cl
  ULONG *pulXlate; // esi
  FLONG flXlate; // edx
  int v6; // eax

  v3 = a2[((unsigned __int8)a3 >> 3) | (4 * ((a3 >> 8) & 0xF8 | (32 * (HIWORD(a3) & 0xF8))))];
  pulXlate = a1[2].pulXlate;
  if ( ((unsigned __int16)pulXlate & 0x800) != 0 )
  {
    flXlate = a1[2].flXlate;
    if ( (struct PALETTE *)flXlate == ppalDefault )
    {
      if ( v3 >= 0xAu )
        v3 -= 20;
    }
    else
    {
      if ( ((unsigned __int16)pulXlate & 0x1000) != 0 )
        v6 = *(_DWORD *)(flXlate + 56);
      else
        v6 = *(_DWORD *)(flXlate + 52);
      return *(_BYTE *)(v6 + v3 + 4);
    }
  }
  return v3;
}
