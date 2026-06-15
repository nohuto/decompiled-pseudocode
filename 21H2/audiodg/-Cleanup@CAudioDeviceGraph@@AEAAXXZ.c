/*
 * XREFs of ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x1400018FC
 * Callers:
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x140001A3C (--1CAudioDeviceGraph@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x1400019E0 (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ??1CPipeInstance@@QEAA@XZ @ 0x14000FEDC (--1CPipeInstance@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCA8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14003DEFC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x140041F70 (-RemoveAll@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDeviceGraph::Cleanup(CAudioDeviceGraph *this)
{
  _QWORD *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  char *v4; // rbx
  __int64 *v5; // rcx
  CPipeInstance *v6; // rsi
  __int64 v7; // rax

  (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)this + 120LL))(this);
  v2 = (_QWORD *)*((_QWORD *)this + 15);
  if ( v2 )
  {
    *v2 = &CProtectedOutputController::`vftable';
    ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll(v2 + 2);
    operator delete(v2);
  }
  *((_QWORD *)this + 15) = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 216);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  v4 = (char *)this + 168;
  while ( *((_QWORD *)v4 + 2) )
  {
    v5 = *(__int64 **)v4;
    if ( !*(_QWORD *)v4 )
      ATL::AtlThrowImpl(-2147467259);
    v6 = (CPipeInstance *)v5[2];
    v7 = *v5;
    *(_QWORD *)v4 = *v5;
    if ( v7 )
      *(_QWORD *)(v7 + 8) = 0LL;
    else
      *((_QWORD *)v4 + 1) = 0LL;
    *v5 = *((_QWORD *)v4 + 4);
    *((_QWORD *)v4 + 4) = v5;
    if ( (*((_QWORD *)v4 + 2))-- == 1LL )
      ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll(v4);
    if ( v6 )
    {
      CPipeInstance::~CPipeInstance(v6);
      operator delete(v6);
    }
  }
  if ( v3 )
    LeaveCriticalSection(v3);
}
