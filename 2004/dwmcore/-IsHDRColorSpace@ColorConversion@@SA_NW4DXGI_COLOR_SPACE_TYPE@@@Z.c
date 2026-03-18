/*
 * XREFs of ?IsHDRColorSpace@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801A8EDC
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18004D9B0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x1801A8CB8 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ColorConversion::IsHDRColorSpace(enum DXGI_COLOR_SPACE_TYPE a1)
{
  const char *v1; // rax

  v1 = (const char *)&unk_1802CCBD8;
  do
  {
    if ( *(_DWORD *)v1 == a1 )
      break;
    v1 += 4;
  }
  while ( v1 != "NoOp" );
  return v1 != "NoOp";
}
