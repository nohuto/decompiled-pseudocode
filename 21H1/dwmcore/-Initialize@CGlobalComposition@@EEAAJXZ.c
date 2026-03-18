/*
 * XREFs of ?Initialize@CGlobalComposition@@EEAAJXZ @ 0x1800ADD40
 * Callers:
 *     ?Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAPEAVCComposition@@@Z @ 0x1800ADC8C (-Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCD.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007CC28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800ADF90 (-Initialize@CComposition@@MEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CGlobalComposition::Initialize(CGlobalComposition *this)
{
  char *v2; // rax
  volatile signed __int32 *v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (char *)DefaultHeap::AllocClear(0x78uLL);
  v3 = (volatile signed __int32 *)v2;
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *((_DWORD *)v2 + 2) = 0;
  *(_QWORD *)v2 = &CWindowManager::`vftable';
  *((_QWORD *)v2 + 2) = 0LL;
  *((_QWORD *)v2 + 3) = 0LL;
  *((_DWORD *)v2 + 8) = 0;
  *((_DWORD *)v2 + 9) = 0;
  *((_DWORD *)v2 + 10) = 0;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)(v2 + 48),
    CGenericTableMap<unsigned __int64,CWindowManager::SPRITEENTRY>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::AllocTableData,
    CGenericTableMap<void *,CLogicalSurfaceHandleMap::LSEENTRY>::FreeTableData,
    0LL);
  _InterlockedIncrement(v3 + 2);
  *((_QWORD *)this + 149) = v3;
  v4 = CComposition::Initialize(this);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x54,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalcomposition.cpp",
    (const char *)(unsigned int)v4,
    v7);
  return v5;
}
