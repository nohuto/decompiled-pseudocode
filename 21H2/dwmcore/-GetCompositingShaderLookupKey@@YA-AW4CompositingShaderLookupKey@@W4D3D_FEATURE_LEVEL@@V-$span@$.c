/*
 * XREFs of ?GetCompositingShaderLookupKey@@YA?AW4CompositingShaderLookupKey@@W4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18026A2D0
 * Callers:
 *     ?GetCompositingPixelShaderNoRef@CD3DDevice@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x18023F6D8 (-GetCompositingPixelShaderNoRef@CD3DDevice@@AEAAJV-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI_.c)
 * Callees:
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x180053140 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall GetCompositingShaderLookupKey(int a1, _QWORD *a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // r10
  __int64 v5; // rax
  int *v6; // r8
  __int64 v7; // r10
  int ColorChannelDepth; // eax
  _DWORD *v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  _BOOL8 v12; // rcx
  int *v13; // r11

  v3 = 0LL;
  if ( *a2 == 2LL )
    v3 = 32LL;
  v4 = v3 | a3 & 0x1F;
  v5 = 0LL;
  if ( a1 >= 37632 )
    v5 = 64LL;
  v6 = (int *)a2[1];
  v7 = v5 | v4;
  if ( v6 != &v6[3 * *a2] )
  {
    do
    {
      ColorChannelDepth = GetColorChannelDepth(*v6);
      v11 = 2 * ((32 * v10) | v9[2] & 0x1F);
      v12 = v9[1] == 3;
      v6 = v9 + 3;
      v7 = (2 * (v12 | v11)) | (ColorChannelDepth == 8);
    }
    while ( v6 != v13 );
  }
  return v7;
}
