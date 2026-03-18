/*
 * XREFs of ?GetCompositingShaderLookupKey@@YA?AW4CompositingShaderLookupKey@@W4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802AC830
 * Callers:
 *     ?GetCompositingPixelShaderNoRef@CD3DDevice@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x18027E284 (-GetCompositingPixelShaderNoRef@CD3DDevice@@AEAAJV-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI_.c)
 * Callees:
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x180039534 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall GetCompositingShaderLookupKey(int a1, _QWORD *a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // r10
  __int64 v5; // rax
  int *v6; // r8
  __int64 v7; // r10
  int *v8; // r9
  int ColorChannelDepth; // eax
  _DWORD *v10; // r8
  __int64 v11; // r11
  __int64 v12; // r10
  __int64 v13; // r10
  __int64 v14; // rcx

  v3 = 0LL;
  if ( *a2 == 2LL )
    v3 = 32LL;
  v4 = v3 | a3 & 0x1F;
  v5 = 0LL;
  if ( a1 >= 37632 )
    v5 = 64LL;
  v6 = (int *)a2[1];
  v7 = v5 | v4;
  v8 = &v6[3 * *a2];
  while ( v6 != v8 )
  {
    ColorChannelDepth = GetColorChannelDepth(*v6);
    v13 = (4 * ((32 * v12) | v10[2] & 0x1F)) | (ColorChannelDepth == 8);
    v14 = 0LL;
    if ( v10[1] == 3 )
      v14 = v11;
    v7 = v14 | v13;
    v6 = v10 + 3;
  }
  return v7;
}
