/*
 * XREFs of ?RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z @ 0x180045D18
 * Callers:
 *     ?BeginWalk@?$CGraphWalker@VCVisual@@@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x180045CC0 (-BeginWalk@-$CGraphWalker@VCVisual@@@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180089680 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?BeginWalk@SubTreeContext@CPreComputeContext@@QEAA_NPEBVCVisualTree@@@Z @ 0x18008DC18 (-BeginWalk@SubTreeContext@CPreComputeContext@@QEAA_NPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x180046F60 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D18A0 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800F1BC4 (--0CThreadContext@@AEAA@XZ.c)
 */

__int64 __fastcall CThreadContext::RegisterGraphWalkRoot(const void *a1)
{
  _QWORD *Value; // rbx
  __int64 v3; // r10
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rdx
  int v6; // ebx
  __int64 v8; // rdx
  CThreadContext *v9; // rax
  unsigned int v10; // ecx
  CThreadContext *v11; // rax
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v9 = (CThreadContext *)operator new(0x150uLL);
    if ( !v9 || (v11 = CThreadContext::CThreadContext(v9), (Value = v11) == 0LL) )
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x42u, 0LL);
      v12 = 208LL;
      goto LABEL_16;
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v11);
  }
  v3 = Value[3];
  if ( (v3 & 2) != 0 )
    v4 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v4 = Value[3] & 1LL;
  v5 = 0LL;
  if ( v4 )
  {
    while ( a1 != (const void *)CPtrArrayBase::operator[](Value + 3, v5) )
    {
      v5 = v8 + 1;
      if ( v5 >= v4 )
        goto LABEL_5;
    }
    v6 = -2147467260;
    v12 = 217LL;
  }
  else
  {
LABEL_5:
    v6 = CPtrArrayBase::InsertAt((CPtrArrayBase *)(Value + 3), (unsigned __int64)a1, v4);
    if ( v6 >= 0 )
      return 0LL;
    v12 = 221LL;
  }
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
