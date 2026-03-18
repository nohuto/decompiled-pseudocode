/*
 * XREFs of ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x180033C34
 * Callers:
 *     UseFragmentsModuleNoRef @ 0x1800332E4 (UseFragmentsModuleNoRef.c)
 *     LoadShaderBody @ 0x180033A60 (LoadShaderBody.c)
 *     PrepareSamplers @ 0x1800345B8 (PrepareSamplers.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x1802AC260 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(char a1, struct ID3D11Module **a2)
{
  unsigned int v2; // ebx
  struct ID3D11Module *v4; // rax
  HRESULT v6; // eax
  char v7; // cl
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( !a1 )
  {
    v4 = qword_1803D7DA0;
    if ( qword_1803D7DA0 )
      goto LABEL_4;
    v6 = D3DLoadModule(&unk_180399190, 0x184FAuLL, &qword_1803D7DA0);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v4 = qword_1803D7DA0;
      goto LABEL_4;
    }
    v8 = 294;
    goto LABEL_18;
  }
  if ( a1 == 1 )
  {
    v4 = qword_1803D73C8;
    if ( qword_1803D73C8 )
      goto LABEL_4;
    v6 = D3DLoadModule(&unk_1802E1A20, 0x2A0DEuLL, &qword_1803D73C8);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v4 = qword_1803D73C8;
      goto LABEL_4;
    }
    v8 = 306;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, v8, 0LL);
    return v2;
  }
  if ( a1 != 2 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x146u, 0LL);
    return v2;
  }
  v4 = qword_1803D73C0;
  if ( !qword_1803D73C0 )
  {
    v6 = D3DLoadModule(&unk_18030BB00, 0x1EB3AuLL, &qword_1803D73C0);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v4 = qword_1803D73C0;
      goto LABEL_4;
    }
    v8 = 318;
    goto LABEL_18;
  }
LABEL_4:
  *a2 = v4;
  return v2;
}
