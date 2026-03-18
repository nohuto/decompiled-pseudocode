/*
 * XREFs of InitializeShaderLinkingInput @ 0x1800B4A94
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800B5CB8 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBAIXZ @ 0x1800B4A3C (-ResolveKey@VertexShaderDesc@@QEBAIXZ.c)
 *     GetHlslNameAndSemantic @ 0x1800B4C0C (GetHlslNameAndSemantic.c)
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x1800B65F4 (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUSignaturePa.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InitializeShaderLinkingInput(struct ID3D11Linker **ppLinker, __int64 a2, VertexShaderDesc *a3)
{
  int v4; // eax
  unsigned int v5; // r11d
  unsigned __int64 v6; // rbp
  unsigned int v7; // edi
  __int64 v8; // r14
  unsigned __int64 v9; // rdx
  __int16 v10; // cx
  __int64 v11; // rcx
  char *v12; // rbx
  __int64 v13; // r10
  char *v14; // rdx
  int v15; // r10d
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // edi

  v4 = VertexShaderDesc::ResolveKey(a3);
  v6 = *((_QWORD *)&unk_180279040 + 2 * (v4 & 0xFFFFFFEF));
  v7 = v6;
  v8 = *((_QWORD *)&unk_180279040 + 2 * (v4 & 0xFFFFFFEF) + 1);
  if ( (_DWORD)v6 )
  {
    while ( 1 )
    {
      v9 = v7 - 1;
      if ( v9 >= v6 )
        break;
      v10 = *(_WORD *)(*((_QWORD *)&unk_180279040 + 2 * (v4 & 0xFFFFFFEF) + 1) + 12 * v9);
      if ( (v10 & 0xFF00) == 0x100 && (unsigned __int8)v10 >= v5 )
      {
        v7 = v9;
        if ( (_DWORD)v9 )
          continue;
      }
      goto LABEL_5;
    }
LABEL_16:
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
LABEL_5:
  v12 = (char *)DefaultHeap::Alloc(saturated_mul(v7, 0x20uLL));
  if ( v12 )
  {
    v13 = 0LL;
    if ( v7 )
    {
      while ( (unsigned int)v13 < v6 )
      {
        v14 = &v12[32 * (unsigned int)v13];
        *(_WORD *)v14 = *(_WORD *)(v8 + 12 * v13);
        *((_DWORD *)v14 + 6) = *(_DWORD *)(v8 + 12 * v13 + 4);
        *((_DWORD *)v14 + 7) = *(_DWORD *)(v8 + 12 * v13 + 8);
        GetHlslNameAndSemantic(*(unsigned __int16 *)(v8 + 12 * v13), v14 + 8, v14 + 16);
        v13 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v13 >= v7 )
          goto LABEL_9;
      }
      goto LABEL_16;
    }
LABEL_9:
    v16 = CShaderLinkingGraphBuilder::Initialize(ppLinker);
    v18 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1A1u, 0LL);
    operator delete(v12);
  }
  else
  {
    v18 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0x194u, 0LL);
  }
  return v18;
}
