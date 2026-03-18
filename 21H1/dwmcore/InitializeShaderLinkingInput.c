/*
 * XREFs of InitializeShaderLinkingInput @ 0x18009F9B4
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x18009E448 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x18009D9C8 (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUSignaturePa.c)
 *     GetHlslNameAndSemantic @ 0x18009FB2C (GetHlslNameAndSemantic.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBAIXZ @ 0x18009FC48 (-ResolveKey@VertexShaderDesc@@QEBAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InitializeShaderLinkingInput(struct ID3D11Linker **ppLinker, char a2, VertexShaderDesc *a3)
{
  unsigned int v5; // eax
  unsigned int v6; // r11d
  unsigned __int64 v7; // rbp
  unsigned int v8; // edi
  __int64 v9; // r14
  unsigned __int64 v10; // rdx
  __int16 v11; // cx
  __int64 v12; // rcx
  char *v13; // rbx
  __int64 v14; // r10
  char *v15; // rdx
  int v16; // r10d
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // edi
  __int128 v21; // [rsp+30h] [rbp-28h] BYREF

  v5 = VertexShaderDesc::ResolveKey(a3);
  v7 = *((_QWORD *)&unk_18027C000 + 2 * (v5 & 0xFFFFFFEF));
  v8 = v7;
  v21 = *((_OWORD *)&unk_18027C000 + (v5 & 0xFFFFFFEF));
  v9 = *((_QWORD *)&v21 + 1);
  if ( (_DWORD)v7 )
  {
    while ( 1 )
    {
      v10 = v8 - 1;
      if ( v10 >= v7 )
        break;
      v11 = *(_WORD *)(*((_QWORD *)&v21 + 1) + 12 * v10);
      if ( (v11 & 0xFF00) == 0x100 && (unsigned __int8)v11 >= v6 )
      {
        v8 = v10;
        if ( (_DWORD)v10 )
          continue;
      }
      goto LABEL_5;
    }
LABEL_16:
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
LABEL_5:
  v13 = (char *)DefaultHeap::Alloc(saturated_mul(v8, 0x20uLL));
  if ( v13 )
  {
    v14 = 0LL;
    if ( v8 )
    {
      while ( (unsigned int)v14 < v7 )
      {
        v15 = &v13[32 * (unsigned int)v14];
        *(_WORD *)v15 = *(_WORD *)(v9 + 12 * v14);
        *((_DWORD *)v15 + 6) = *(_DWORD *)(v9 + 12 * v14 + 4);
        *((_DWORD *)v15 + 7) = *(_DWORD *)(v9 + 12 * v14 + 8);
        GetHlslNameAndSemantic(*(unsigned __int16 *)(v9 + 12 * v14), v15 + 8, v15 + 16);
        v14 = (unsigned int)(v16 + 1);
        if ( (unsigned int)v14 >= v8 )
          goto LABEL_9;
      }
      goto LABEL_16;
    }
LABEL_9:
    *(_QWORD *)&v21 = v8;
    *((_QWORD *)&v21 + 1) = v13;
    v17 = CShaderLinkingGraphBuilder::Initialize(ppLinker, a2, &v21);
    v19 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x1A1u, 0LL);
    operator delete(v13);
  }
  else
  {
    v19 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x194u, 0LL);
  }
  return v19;
}
