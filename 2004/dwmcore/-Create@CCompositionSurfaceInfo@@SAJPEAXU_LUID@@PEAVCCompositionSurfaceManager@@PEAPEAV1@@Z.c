/*
 * XREFs of ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x180097CF4
 * Callers:
 *     ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x180099238 (-GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfa.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18003CAF0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??0CGlobalCompositionSurfaceInfo@@IEAA@U_LUID@@PEAVCCompositionSurfaceManager@@@Z @ 0x180097DC8 (--0CGlobalCompositionSurfaceInfo@@IEAA@U_LUID@@PEAVCCompositionSurfaceManager@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800A2588 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BCAF0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::Create(
        void *a1,
        struct _LUID a2,
        struct CCompositionSurfaceManager *a3,
        struct CCompositionSurfaceInfo **a4)
{
  CGlobalCompositionSurfaceInfo *v8; // rax
  __int64 v9; // rcx
  CGlobalCompositionSurfaceInfo *v10; // rbx
  struct _RTL_GENERIC_TABLE *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // edi
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD Buffer[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int8 NewElement; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  v8 = (CGlobalCompositionSurfaceInfo *)DefaultHeap::AllocClear(0x168uLL);
  if ( v8 )
    v10 = CGlobalCompositionSurfaceInfo::CGlobalCompositionSurfaceInfo(v8, a2, a3);
  else
    v10 = 0LL;
  if ( v10 )
  {
    CMILCOMBase::InternalAddRef(v10);
    v11 = (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)v10 + 3) + 8LL);
    Buffer[0] = *((_QWORD *)v10 + 5);
    Buffer[1] = v10;
    if ( RtlInsertElementGenericTable(v11, Buffer, 0x10u, &NewElement) )
    {
      v13 = *(_QWORD *)v10;
      *((_QWORD *)v10 + 4) = a1;
      (*(void (__fastcall **)(CGlobalCompositionSurfaceInfo *))(v13 + 48))(v10);
      v14 = 0;
      *a4 = v10;
      return v14;
    }
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x5Fu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024882, 0x1Bu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024882, 0x1Eu, 0LL);
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x1Cu, 0LL);
  }
  if ( v10 )
    CRenderTargetBitmap::Release(v10);
  return v14;
}
