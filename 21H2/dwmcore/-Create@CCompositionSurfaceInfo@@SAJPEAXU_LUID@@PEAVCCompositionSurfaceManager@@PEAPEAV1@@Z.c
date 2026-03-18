/*
 * XREFs of ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x1800C7BF0
 * Callers:
 *     ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800C7AB4 (-GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfa.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007E4F4 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??0CGlobalCompositionSurfaceInfo@@IEAA@U_LUID@@PEAVCCompositionSurfaceManager@@@Z @ 0x1800C7CC8 (--0CGlobalCompositionSurfaceInfo@@IEAA@U_LUID@@PEAVCCompositionSurfaceManager@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::Create(
        void *a1,
        struct _LUID a2,
        struct CCompositionSurfaceManager *a3,
        struct CCompositionSurfaceInfo **a4)
{
  CGlobalCompositionSurfaceInfo *v8; // rax
  __int64 v9; // rcx
  CGlobalCompositionSurfaceInfo *v10; // rax
  CGlobalCompositionSurfaceInfo *v11; // rdi
  struct _RTL_GENERIC_TABLE *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD Buffer[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int8 NewElement; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  v8 = (CGlobalCompositionSurfaceInfo *)DefaultHeap::AllocClear(0x190uLL);
  if ( v8 && (v10 = CGlobalCompositionSurfaceInfo::CGlobalCompositionSurfaceInfo(v8, a2, a3), (v11 = v10) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CGlobalCompositionSurfaceInfo *)((char *)v10 + 8));
    Buffer[0] = *((_QWORD *)v11 + 5);
    v12 = (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)v11 + 3) + 8LL);
    Buffer[1] = v11;
    if ( RtlInsertElementGenericTable(v12, Buffer, 0x10u, &NewElement) )
    {
      v14 = *(_QWORD *)v11;
      *((_QWORD *)v11 + 4) = a1;
      (*(void (__fastcall **)(CGlobalCompositionSurfaceInfo *))(v14 + 48))(v11);
      v15 = 0;
      *a4 = v11;
    }
    else
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, -2147024882, 0x5Fu);
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, -2147024882, 0x1Bu);
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, -2147024882, 0x1Fu);
      CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v11);
    }
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, -2147024882, 0x1Du);
  }
  return v15;
}
