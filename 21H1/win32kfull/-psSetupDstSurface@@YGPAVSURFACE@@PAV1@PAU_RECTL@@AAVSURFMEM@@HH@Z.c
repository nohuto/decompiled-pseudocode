/*
 * XREFs of ?psSetupDstSurface@@YGPAVSURFACE@@PAV1@PAU_RECTL@@AAVSURFMEM@@HH@Z @ 0x5304E
 * Callers:
 *     _EngAlphaBlend@28 @ 0x526B0 (_EngAlphaBlend@28.c)
 *     _EngGradientFill@40 @ 0xBE83A (_EngGradientFill@40.c)
 *     _EngTransparentBlt@32 @ 0xCAC46 (_EngTransparentBlt@32.c)
 * Callees:
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

struct SURFACE *__userpurge psSetupDstSurface@<eax>(
        _DWORD *a1@<edx>,
        int a2@<ecx>,
        SURFACE **a3,
        struct _RECTL *a4,
        struct SURFMEM *a5,
        int a6,
        int a7)
{
  int v9; // ecx
  struct SURFACE *result; // eax
  int v11; // ecx
  int *v12; // eax
  int DIB; // edx
  struct _SURFOBJ *v14; // eax
  int (__stdcall *v15)(struct _SURFOBJ *, int, _DWORD, XLATEOBJ *const, int *, _DWORD *); // edx
  SURFACE **v16; // eax
  _DWORD v17[4]; // [esp+10h] [ebp-44h] BYREF
  int v18; // [esp+20h] [ebp-34h]
  int v19; // [esp+24h] [ebp-30h]
  _DWORD v20[2]; // [esp+28h] [ebp-2Ch] BYREF
  int v21; // [esp+30h] [ebp-24h]
  int v22; // [esp+34h] [ebp-20h]
  SURFACE **v23; // [esp+38h] [ebp-1Ch]
  int v24; // [esp+3Ch] [ebp-18h] BYREF
  int v25; // [esp+40h] [ebp-14h]
  int v26; // [esp+44h] [ebp-10h]
  int v27; // [esp+48h] [ebp-Ch]

  v23 = a3;
  v9 = a1[2] - *a1;
  v22 = a1[3] - a1[1];
  result = 0;
  v21 = v9;
  if ( a2 )
  {
    if ( a4 || *(_WORD *)(a2 + 64) )
    {
      v17[1] = v9;
      v17[2] = v22;
      v17[0] = *(_DWORD *)(a2 + 60);
      v11 = *(_DWORD *)(a2 + 72) & 0x40000;
      v17[3] = 0;
      v12 = *(int **)(a2 + 88);
      v19 = v11;
      v18 = 0;
      if ( v12 )
        v18 = *v12;
      DIB = SURFMEM::bCreateDIB((SURFMEM *)a3, (struct _DEVBITMAPINFO *)v17, 0, 0, 0, 0, 0, 0, 1, 0, 0);
      if ( !DIB )
        return 0;
      *((_DWORD *)*v23 + 7) = *(_DWORD *)(a2 + 28);
      v24 = 0;
      v25 = 0;
      v26 = v21;
      v27 = v22;
      if ( a5 )
      {
        v20[0] = *a1;
        v20[1] = a1[1];
        v14 = SURFACE::pSurfobj(*v23);
        DIB = v15(v14, a2 + 16, 0, xloIdent, &v24, v20);
      }
      if ( DIB )
      {
        v16 = v23;
        *a1 = v24;
        a1[1] = v25;
        a1[2] = v26;
        a1[3] = v27;
        return *v16;
      }
      else
      {
        return 0;
      }
    }
    return (struct SURFACE *)a2;
  }
  return result;
}
