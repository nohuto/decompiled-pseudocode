/*
 * XREFs of ?Create@CCompositionSwapchainStatistics@@SAJPEBVCCompositionSurfaceInfo@@PEAX_KPEAPEAV1@@Z @ 0x18020F08C
 * Callers:
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18002CA74 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddRef@CProjectedShadowReceiver@@UEAAKXZ @ 0x18001FED0 (-AddRef@CProjectedShadowReceiver@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007CC28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Initialize@CCompositionSwapchainStatistics@@IEAAJPEAX_K@Z @ 0x18020F16C (-Initialize@CCompositionSwapchainStatistics@@IEAAJPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CCompositionSwapchainStatistics::Create(
        const struct CCompositionSurfaceInfo *a1,
        void *a2,
        unsigned __int64 a3,
        struct CCompositionSwapchainStatistics **a4)
{
  CCompositionSwapchainStatistics *v8; // rax
  CCompositionSwapchainStatistics *v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  CCompositionSwapchainStatistics *v14; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v8 = (CCompositionSwapchainStatistics *)DefaultHeap::AllocClear(0x70uLL);
  v9 = v8;
  if ( !v8 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *((_DWORD *)v8 + 2) = 0;
  *((_QWORD *)v8 + 11) = 0LL;
  *(_QWORD *)v8 = &CCompositionSwapchainStatistics::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)v8 + 2) = &CCompositionSwapchainStatistics::`vftable'{for `ICompositionSurfaceStatistics'};
  *((_QWORD *)v8 + 3) = a1;
  v14 = v8;
  CProjectedShadowReceiver::AddRef(v8);
  v10 = CCompositionSwapchainStatistics::Initialize(v9, a2, a3);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1Au, 0LL);
  }
  else
  {
    v14 = 0LL;
    *a4 = v9;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
  return v12;
}
