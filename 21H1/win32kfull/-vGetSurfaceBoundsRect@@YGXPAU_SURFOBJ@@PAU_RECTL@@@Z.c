/*
 * XREFs of ?vGetSurfaceBoundsRect@@YGXPAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x4E2CC
 * Callers:
 *     ?bClipSrcDstRectsAndValidate@@YG_NPAU_SURFOBJ@@0PAVDCOBJ@@1PAU_CLIPOBJ@@PAU_RECTL@@3@Z @ 0x4E1BE (-bClipSrcDstRectsAndValidate@@YG_NPAU_SURFOBJ@@0PAVDCOBJ@@1PAU_CLIPOBJ@@PAU_RECTL@@3@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vGetSurfaceBoundsRect(_DWORD *a1, _DWORD *a2)
{
  int v2; // esi
  int v3; // edi
  _DWORD *v4; // eax

  *a2 = 0;
  a2[1] = 0;
  v2 = 0;
  v3 = 0;
  if ( (int)a1[14] < 0 )
  {
    v4 = (_DWORD *)a1[3];
    if ( v4 )
    {
      if ( ((unsigned int)&loc_20000 & v4[6]) != 0 )
      {
        v2 = v4[459];
        *a2 = v2;
        v3 = v4[460];
        a2[1] = v3;
      }
    }
  }
  a2[2] = v2 + a1[4];
  a2[3] = v3 + a1[5];
}
