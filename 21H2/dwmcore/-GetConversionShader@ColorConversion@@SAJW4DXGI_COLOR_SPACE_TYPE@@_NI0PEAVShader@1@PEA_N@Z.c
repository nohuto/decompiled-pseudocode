/*
 * XREFs of ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x1801ED7C0
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180033FB0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1802AAC10 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x1802AC260 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     ?IsHDRColorSpace@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801ED9EC (-IsHDRColorSpace@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

__int64 __fastcall ColorConversion::GetConversionShader(
        enum DXGI_COLOR_SPACE_TYPE a1,
        char a2,
        int a3,
        enum DXGI_COLOR_SPACE_TYPE a4,
        struct ColorConversion::Shader *a5,
        bool *a6)
{
  enum DXGI_COLOR_SPACE_TYPE v7; // r11d
  int v8; // r10d
  bool v9; // bl
  int v10; // ecx
  __int32 v11; // r11d
  __int32 v12; // r11d
  __int32 v13; // r11d
  int v14; // r11d
  int v15; // r11d
  int v16; // r11d
  unsigned int v17; // eax
  int v18; // r9d
  int v19; // r9d
  bool v20; // zf
  int v21; // r9d
  __int64 v22; // rcx

  v7 = a1;
  v8 = -2003292288;
  if ( a6 )
  {
    v9 = 1;
    if ( a4 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 || ColorConversion::IsHDRColorSpace(a1) )
      v9 = 0;
    *a6 = v9;
  }
  v10 = 0;
  if ( v7 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
  {
    if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
    {
      v8 = 0;
      v17 = 0;
      goto LABEL_67;
    }
    if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
    {
      v17 = 6;
      v8 = 0;
      v10 = 6;
      goto LABEL_67;
    }
    goto LABEL_63;
  }
  v11 = v7 - 1;
  if ( !v11 )
  {
    if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
    {
      v10 = 2;
      goto LABEL_60;
    }
    v21 = a4 - 1;
    if ( !v21 )
    {
      v10 = 40;
      goto LABEL_22;
    }
    if ( v21 == 11 )
    {
      v10 = 4;
      goto LABEL_22;
    }
    goto LABEL_63;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( a4 )
    {
      if ( a4 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
        goto LABEL_63;
      if ( a3 == 8 )
      {
        v10 = 16;
        goto LABEL_22;
      }
      v20 = a3 == 10;
      goto LABEL_48;
    }
    if ( a3 == 8 )
    {
      v10 = 14;
      goto LABEL_22;
    }
    if ( a3 != 10 )
      goto LABEL_63;
LABEL_53:
    v10 = 22;
    goto LABEL_60;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( a4 )
    {
      v20 = a4 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
LABEL_48:
      if ( v20 )
      {
        v10 = 24;
        goto LABEL_22;
      }
      goto LABEL_63;
    }
    goto LABEL_53;
  }
  v14 = v13 - 9;
  if ( !v14 )
  {
    if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
    {
      v10 = 10;
      goto LABEL_60;
    }
    v19 = a4 - 1;
    if ( !v19 )
    {
      v10 = 12;
      goto LABEL_22;
    }
    if ( v19 == 11 )
      goto LABEL_22;
    goto LABEL_63;
  }
  v15 = v14 - 2;
  if ( !v15 )
  {
    if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
    {
      v10 = 34;
      goto LABEL_60;
    }
    v18 = a4 - 1;
    if ( !v18 )
    {
      v10 = 36;
      goto LABEL_22;
    }
    if ( v18 == 11 )
    {
      v10 = 38;
      goto LABEL_22;
    }
    goto LABEL_63;
  }
  v16 = v15 - 6;
  if ( !v16 )
  {
    if ( a4 )
    {
      if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
      {
        if ( a3 == 8 )
        {
          v10 = 20;
          goto LABEL_22;
        }
        if ( a3 == 10 )
        {
          v10 = 28;
          goto LABEL_22;
        }
      }
    }
    else
    {
      if ( a3 == 8 )
      {
        v10 = 18;
        goto LABEL_22;
      }
      if ( a3 == 10 )
      {
        v10 = 26;
        goto LABEL_60;
      }
    }
LABEL_63:
    v17 = v10;
    if ( v8 < 0 )
      return (unsigned int)v8;
    goto LABEL_67;
  }
  if ( v16 != 1 )
    goto LABEL_63;
  if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
  {
    v10 = 30;
LABEL_60:
    v8 = 0;
    goto LABEL_63;
  }
  if ( a4 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
    goto LABEL_63;
  v10 = 32;
LABEL_22:
  v8 = 0;
  v17 = v10;
LABEL_67:
  v22 = (unsigned int)(v10 + 1);
  if ( !a2 )
    v22 = v17;
  *(_OWORD *)a5 = *((_OWORD *)&ColorConversion::g_rgShaders + v22);
  return (unsigned int)v8;
}
