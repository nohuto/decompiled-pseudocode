/*
 * XREFs of ?Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAPEAVCComposition@@@Z @ 0x1800D97A4
 * Callers:
 *     ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180033964 (-Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 * Callees:
 *     ??0CComposition@@IEAA@PEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@@Z @ 0x18002F1AC (--0CComposition@@IEAA@PEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrame.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18005EDD0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800AA098 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Initialize@CGlobalComposition@@EEAAJXZ @ 0x1800D9850 (-Initialize@CGlobalComposition@@EEAAJXZ.c)
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
  struct CComposition *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi

  v9 = (CComposition *)DefaultHeap::AllocClear(0x4B0uLL);
  v11 = v9;
  if ( v9 )
  {
    CComposition::CComposition(v9, a1, a2, a3, a4);
    *(_QWORD *)v11 = &CGlobalComposition::`vftable';
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    g_pComposition = v11;
    v12 = CGlobalComposition::Initialize(v11);
    v14 = v12;
    if ( v12 >= 0 )
    {
      *a5 = v11;
      return v14;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x34u, 0LL);
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x30u, 0LL);
  }
  if ( v11 )
    CDrawListEntry::Release(v11);
  return v14;
}
