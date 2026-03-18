/*
 * XREFs of ?IsHDRColorSpace@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801ED9EC
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800381B0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x1801ED7C0 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ColorConversion::IsHDRColorSpace(enum DXGI_COLOR_SPACE_TYPE a1)
{
  char *v1; // rax

  v1 = (char *)&unk_18032C0F8;
  do
  {
    if ( *(_DWORD *)v1 == a1 )
      break;
    v1 += 4;
  }
  while ( v1 != byte_18032C110 );
  return v1 != byte_18032C110;
}
