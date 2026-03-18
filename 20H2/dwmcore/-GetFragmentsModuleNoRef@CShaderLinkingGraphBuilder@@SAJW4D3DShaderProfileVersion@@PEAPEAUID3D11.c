/*
 * XREFs of ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x180053AA8
 * Callers:
 *     UseFragmentsModuleNoRef @ 0x1800533A8 (UseFragmentsModuleNoRef.c)
 *     LoadShaderBody @ 0x180053934 (LoadShaderBody.c)
 *     PrepareSamplers @ 0x180054A44 (PrepareSamplers.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x180267068 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
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
    v4 = qword_180348D28;
    if ( qword_180348D28 )
      goto LABEL_4;
    v6 = D3DLoadModule(&unk_1803056B0, 0x184FAuLL, &qword_180348D28);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v4 = qword_180348D28;
      goto LABEL_4;
    }
    v8 = 292;
    goto LABEL_13;
  }
  if ( a1 != 1 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x138u, 0LL);
    return v2;
  }
  v4 = qword_180348210;
  if ( !qword_180348210 )
  {
    v6 = D3DLoadModule(&unk_1802AA640, 0x207EEuLL, &qword_180348210);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v4 = qword_180348210;
      goto LABEL_4;
    }
    v8 = 304;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, v8, 0LL);
    return v2;
  }
LABEL_4:
  *a2 = v4;
  return v2;
}
