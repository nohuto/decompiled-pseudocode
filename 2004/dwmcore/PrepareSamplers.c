/*
 * XREFs of PrepareSamplers @ 0x1800B628C
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800B5CB8 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x1800B523C (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     PopulateSamplerArguments @ 0x1800B5610 (PopulateSamplerArguments.c)
 *     PerformSample @ 0x1800B593C (PerformSample.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PrepareSamplers(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v4; // r14
  int FragmentsModuleNoRef; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdi
  void *v10; // r15
  __int64 v11; // rax
  _BYTE *v12; // r9
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  void *v18; // [rsp+60h] [rbp+8h] BYREF

  v4 = a1;
  LOBYTE(a1) = *(_BYTE *)(a1 + 84);
  FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(a1, (struct ID3D11Module **)&v18);
  v8 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, FragmentsModuleNoRef, 0x309u, 0LL);
    return v8;
  }
  v9 = 0LL;
  if ( *(_DWORD *)a3 )
  {
    v10 = v18;
    do
    {
      if ( (unsigned __int64)(unsigned int)v9 >= *a3 )
      {
LABEL_16:
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v11 = a3[1];
      v12 = (_BYTE *)(v11 + 8 * v9);
      if ( *v12 || *(_BYTE *)(v11 + 8 * v9 + 2) )
      {
        v13 = PopulateSamplerArguments(v4, a2, v9, v12, (__int64)v10);
        v8 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x310u, 0LL);
          return v8;
        }
        if ( (unsigned __int64)(unsigned int)v9 >= *a3 )
          goto LABEL_16;
        if ( *(_BYTE *)(a3[1] + 8 * v9 + 1) )
        {
          v15 = PerformSample(v4, a2, v9, (unsigned __int16)v9 | 0x100u, (unsigned __int16)v9 | 0x200u, v10);
          v8 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x31Au, 0LL);
            return v8;
          }
        }
      }
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < *(_DWORD *)a3 );
  }
  return v8;
}
