/*
 * XREFs of ?ConvertMonochromeToColor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@@Z @ 0x1C027D3B4
 * Callers:
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C0121810 (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 * Callees:
 *     <none>
 */

void __fastcall ConvertMonochromeToColor(
        const struct _DXGKARG_SETPOINTERSHAPE *a1,
        struct _DXGKARG_SETPOINTERSHAPE *a2)
{
  UINT Height; // r15d
  UINT v3; // edi
  UINT Pitch; // r14d
  _BYTE *pPixels; // r12
  UINT Width; // r8d
  char *v7; // r15
  UINT v8; // eax
  UINT i; // ebp
  int v10; // r10d
  __int64 v11; // r8
  unsigned int *v12; // r9

  Height = a1->Height;
  v3 = 0;
  Pitch = a1->Pitch;
  pPixels = a1->pPixels;
  Width = a1->Width;
  a2->Width = Width;
  a2->Height = a1->Height;
  a2->Pitch = 4 * Width;
  a2->Flags.Value = 4;
  a2->XHot = a1->XHot;
  a2->YHot = a1->YHot;
  a2->VidPnSourceId = a1->VidPnSourceId;
  v7 = &pPixels[Pitch * Height];
  if ( a1->Height )
  {
    v8 = a1->Width;
    do
    {
      for ( i = 0; i < v8; v8 = a1->Width )
      {
        v10 = 128 >> (i & 7);
        v11 = Pitch * v3 + (i >> 3);
        v12 = (unsigned int *)((char *)a2->pPixels + 4 * i++ + (unsigned __int64)(v3 * a2->Pitch));
        *v12 = (((unsigned __int8)v10 & pPixels[v11]) != 0 ? 0xFF000000 : 0) | (((unsigned __int8)v10 & (unsigned __int8)v7[v11]) != 0
                                                                              ? 0xFFFFFF
                                                                              : 0);
      }
      ++v3;
    }
    while ( v3 < a1->Height );
  }
}
