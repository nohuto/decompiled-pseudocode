/*
 * XREFs of ?ConvertToDxgi1@@YAJPEAU_D3DKMDT_GAMMA_RAMP@@0@Z @ 0x1C005FC64
 * Callers:
 *     ColorSpaceTransformConvert @ 0x1C0008838 (ColorSpaceTransformConvert.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertToDxgi1(struct _D3DKMDT_GAMMA_RAMP *a1, struct _D3DKMDT_GAMMA_RAMP *a2)
{
  unsigned int v2; // r8d
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *pRgb256x3x16; // rax
  __int64 v4; // rbx
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v5; // r10
  int v6; // edx
  float *v7; // r9
  unsigned int v8; // ecx
  __int64 v9; // r11
  unsigned int v10; // edi
  __int64 v11; // rcx
  float v12; // xmm2_4
  float v13; // xmm1_4
  unsigned int v14; // eax

  v2 = 0;
  if ( a1->Type == D3DDDI_GAMMARAMP_RGB256x3x16 )
  {
    pRgb256x3x16 = a2->Data.pRgb256x3x16;
    v4 = 1025LL;
    v5 = a1->Data.pRgb256x3x16;
    v6 = 0;
    *(_DWORD *)pRgb256x3x16->Red = 1065353216;
    v7 = (float *)&pRgb256x3x16->Red[14];
    *(_DWORD *)&pRgb256x3x16->Red[2] = 1065353216;
    *(_QWORD *)&pRgb256x3x16->Red[4] = 1065353216LL;
    v8 = 0;
    *(_QWORD *)&pRgb256x3x16->Red[8] = 0LL;
    do
    {
      v9 = v8;
      v10 = v8;
      if ( v6 )
      {
        v11 = v8 + 1;
        v12 = (float)(1024 - v6);
        *(v7 - 1) = (float)((float)((float)(v6 * v5->Red[v11]) + (float)((float)v5->Red[v9] * v12)) * 0.0009765625)
                  / 65535.0;
        *v7 = (float)((float)((float)(v6 * v5->Green[v11]) + (float)((float)v5->Green[v9] * v12)) * 0.0009765625)
            / 65535.0;
        v13 = (float)((float)(v6 * v5->Blue[v11]) + (float)((float)v5->Blue[v9] * v12)) * 0.0009765625;
      }
      else
      {
        *(v7 - 1) = (float)v5->Red[v8] / 65535.0;
        *v7 = (float)v5->Green[v8] / 65535.0;
        v13 = (float)v5->Blue[v8];
      }
      v14 = v6 + 255;
      v8 = v10 + 1;
      v7[1] = v13 / 65535.0;
      v7 += 3;
      v6 += (unsigned int)(v6 + 255) < 0x400 ? 255 : -769;
      if ( v14 < 0x400 )
        v8 = v10;
      --v4;
    }
    while ( v4 );
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
