/*
 * XREFs of ?Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAPEAVCComposition@@@Z @ 0x1800F21F8
 * Callers:
 *     ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x1800DD7C4 (-Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x18002E810 (-Initialize@CComposition@@MEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ??0CComposition@@IEAA@PEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@@Z @ 0x1800F22B0 (--0CComposition@@IEAA@PEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrame.c)
 */

__int64 __fastcall CGlobalComposition::Create(
        struct CTransport *a1,
        struct ICompositorScheduler *a2,
        struct CConnection *a3,
        struct CDebugFrameCounter *a4,
        struct CComposition **a5)
{
  CComposition *v9; // rax
  __int64 v10; // rcx
  struct CComposition *v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx

  v9 = (CComposition *)DefaultHeap::AllocClear(0x558uLL);
  v11 = v9;
  if ( v9 )
  {
    CComposition::CComposition(v9, a1, a2, a3, a4);
    g_pComposition = v11;
    *(_QWORD *)v11 = &CGlobalComposition::`vftable';
    *((_QWORD *)v11 + 168) = 0LL;
    *((_QWORD *)v11 + 169) = 0LL;
    *((_QWORD *)v11 + 170) = 0LL;
    v12 = CComposition::Initialize(v11);
    v14 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x38u);
      CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)v11);
    }
    else
    {
      *a5 = v11;
    }
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, -2147024882, 0x34u);
  }
  return v14;
}
