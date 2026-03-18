/*
 * XREFs of ?Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z @ 0x18021BC94
 * Callers:
 *     ?InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z @ 0x18021B750 (-InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@W4Subpipe@1@@Z @ 0x18021BB50 (-AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecif.c)
 *     ?Append_Convert_BetweenInterchange@ScanPipelineBuilder@@IEAAJW4DXGI_FORMAT@@0W4Subpipe@1@@Z @ 0x18021BF54 (-Append_Convert_BetweenInterchange@ScanPipelineBuilder@@IEAAJW4DXGI_FORMAT@@0W4Subpipe@1@@Z.c)
 *     ?GetNearestInterchangeFormat@@YA?AW4DXGI_FORMAT@@W41@@Z @ 0x18021C1BC (-GetNearestInterchangeFormat@@YA-AW4DXGI_FORMAT@@W41@@Z.c)
 *     ?GetOp_AlphaDivide@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z @ 0x18021C1E8 (-GetOp_AlphaDivide@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z.c)
 *     ?GetOp_AlphaMultiply@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z @ 0x18021C234 (-GetOp_AlphaMultiply@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z.c)
 *     ?GetOp_IgnoreAlpha@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z @ 0x18021C280 (-GetOp_IgnoreAlpha@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall ScanPipelineBuilder::Append_Convert(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  unsigned int v7; // ebx
  enum DXGI_FORMAT *v8; // r8
  enum DXGI_FORMAT NearestInterchangeFormat; // ebp
  enum DXGI_FORMAT v10; // ecx
  _QWORD *v11; // r8
  int v12; // r9d
  enum DXGI_FORMAT v13; // r12d
  void (*v14)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  int v15; // eax
  __int64 v16; // rcx
  void (*v17)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  int v18; // eax
  __int64 v19; // rcx
  void (__fastcall *v20)(const struct PipelineParams *, const struct ScanOpParams *); // rdi
  void (__fastcall *v21)(const struct PipelineParams *, const struct ScanOpParams *); // rdx
  int v22; // eax
  __int64 v23; // rcx
  int appended; // eax
  __int64 v25; // rcx
  _QWORD *v26; // r8
  int v27; // eax
  __int64 v28; // rcx
  void (*Op_IgnoreAlpha)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  _QWORD *v30; // r8
  int v31; // eax
  __int64 v32; // rcx
  void (*Op_AlphaDivide)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  _QWORD *v34; // r8
  int v35; // eax
  __int64 v36; // rcx
  void (*v37)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  _QWORD *v38; // r8
  int v39; // eax
  __int64 v40; // rcx
  void (*Op_AlphaMultiply)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  _QWORD *v42; // r8
  int v43; // eax
  __int64 v44; // rcx

  v3 = *(_DWORD *)(a3 + 4);
  v7 = 0;
  if ( *(_DWORD *)a2 == *(_DWORD *)a3 )
  {
    if ( v3 == 3 )
    {
      Op_IgnoreAlpha = GetOp_IgnoreAlpha((enum DXGI_FORMAT)*(_DWORD *)a3);
      if ( Op_IgnoreAlpha )
      {
        v31 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)Op_IgnoreAlpha, v30);
        v7 = v31;
        if ( v31 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x204u, 0LL);
          return v7;
        }
      }
    }
    else if ( v3 == 1 )
    {
      Op_AlphaDivide = GetOp_AlphaDivide((enum DXGI_FORMAT)*(_DWORD *)a3);
      if ( Op_AlphaDivide )
      {
        v35 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)Op_AlphaDivide, v34);
        v7 = v35;
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x20Du, 0LL);
          return v7;
        }
      }
    }
  }
  else
  {
    NearestInterchangeFormat = GetNearestInterchangeFormat(*(enum DXGI_FORMAT *)a2);
    v13 = GetNearestInterchangeFormat(*v8);
    if ( v12 == 3 )
    {
      v14 = GetOp_IgnoreAlpha(v10);
      if ( v14 )
      {
        v15 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)v14, v11);
        v7 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1C3u, 0LL);
          return v7;
        }
      }
    }
    else if ( v12 == 1 )
    {
      v17 = GetOp_AlphaDivide(v10);
      if ( v17 )
      {
        v18 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)v17, v11);
        v7 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x1CCu, 0LL);
          return v7;
        }
      }
    }
    v20 = Convert_32bppABGR_32bppARGB;
    if ( *(_DWORD *)a3 != v13 )
    {
      switch ( *(_DWORD *)a3 )
      {
        case 0xA:
          v21 = Convert_64bppABGRFloat_128bppABGR;
          break;
        case 0x18:
          v21 = Convert_32bppABGR2101010_64bppABGR;
          break;
        case 0x1C:
          v21 = Convert_32bppABGR_32bppARGB;
          break;
        case 0x41:
          v21 = Convert_8bppA_32bppARGB;
          break;
        default:
          v21 = Quantize_32bppARGB_32RGB;
          if ( *(_DWORD *)a3 != 88 )
            v21 = 0LL;
          break;
      }
      v22 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)v21, v11);
      v7 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x1DCu, 0LL);
        return v7;
      }
    }
    appended = ScanPipelineBuilder::Append_Convert_BetweenInterchange(
                 a1,
                 (unsigned int)NearestInterchangeFormat,
                 (unsigned int)v13);
    v7 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, appended, 0x1E4u, 0LL);
      return v7;
    }
    if ( *(_DWORD *)a2 != NearestInterchangeFormat
      && (*(_DWORD *)a2 != 88 || NearestInterchangeFormat != DXGI_FORMAT_B8G8R8A8_UNORM) )
    {
      if ( *(_DWORD *)a2 == 10 )
      {
        v20 = Convert_128bppABGR_64bppABGRFloat;
      }
      else if ( *(_DWORD *)a2 == 24 )
      {
        v20 = Convert_64bppABGR_32bppABGR2101010;
      }
      else if ( *(_DWORD *)a2 != 28 )
      {
        v20 = Quantize_32bppARGB_32RGB;
        if ( *(_DWORD *)a2 != 88 )
          v20 = 0LL;
      }
      v27 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)v20, v26);
      v7 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x1F6u, 0LL);
        return v7;
      }
    }
  }
  if ( *(_DWORD *)(a2 + 4) == 3 )
  {
    v37 = GetOp_IgnoreAlpha((enum DXGI_FORMAT)*(_DWORD *)a2);
    if ( v37 )
    {
      v39 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)v37, v38);
      v7 = v39;
      if ( v39 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x21Bu, 0LL);
    }
  }
  else if ( *(_DWORD *)(a2 + 4) == 1 )
  {
    Op_AlphaMultiply = GetOp_AlphaMultiply((enum DXGI_FORMAT)*(_DWORD *)a2);
    if ( Op_AlphaMultiply )
    {
      v43 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)Op_AlphaMultiply, v42);
      v7 = v43;
      if ( v43 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x226u, 0LL);
    }
  }
  return v7;
}
