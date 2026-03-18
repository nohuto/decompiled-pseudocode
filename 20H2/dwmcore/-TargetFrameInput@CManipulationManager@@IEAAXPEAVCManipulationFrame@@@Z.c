/*
 * XREFs of ?TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180224AAC
 * Callers:
 *     ?ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180223648 (-ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180224284 (-RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CFC44 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180221974 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x1802223B0 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x180223A44 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 *     ?TargetBufferedFrames@CManipulationManager@@IEAAXIPEAXK@Z @ 0x1802249D8 (-TargetBufferedFrames@CManipulationManager@@IEAAXIPEAXK@Z.c)
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x180224C9C (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 *     ?ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInteractionResource@@_KW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@@Z @ 0x180234DF8 (-ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInte.c)
 */

void __fastcall CManipulationManager::TargetFrameInput(CManipulationManager *this, struct CManipulationFrame *a2)
{
  unsigned __int64 v2; // r14
  unsigned int i; // ebx
  __int64 v6; // rsi
  int *v7; // r15
  unsigned __int64 v8; // rcx
  void *v9; // r8
  int v10; // r15d
  __int64 v11; // r12
  unsigned int v12; // esi
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rax
  struct CManipulationContext *v16; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+10h] BYREF
  void *v18; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0LL;
  for ( i = 0; i < *((_DWORD *)a2 + 4); ++i )
  {
    v6 = 248LL * i;
    v7 = (int *)((char *)a2 + v6);
    if ( (unsigned int)QpcTimeConverter::QpcToMicroSec(
                         (CManipulationManager *)((char *)this + 304),
                         *(_QWORD *)((char *)a2 + v6 + 240),
                         &v17) )
    {
      v8 = v17;
    }
    else
    {
      v8 = 1000LL * *(unsigned int *)((char *)a2 + v6 + 224);
      v17 = v8;
    }
    if ( v2 >= v8 )
      v8 = v2;
    v2 = v8;
    if ( (*((_BYTE *)a2 + 72) & 2) == 0 || *(_QWORD *)((char *)a2 + v6 + 184) == -1LL )
    {
      CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
        (__int64)this + 184,
        (__int64 (__fastcall ****)(_QWORD))&v16,
        v7 + 41);
      if ( (((*(_DWORD *)((_BYTE *)a2 + v6 + 172) & 0x20006) - 0x20000) & 0xFFFFFFFD) == 0 )
        Microsoft::WRL::ComPtr<IInteractionResource>::operator=(
          (__int64 (__fastcall ****)(_QWORD))&v16,
          (_QWORD *)this + 33);
      v9 = 0LL;
      v18 = 0LL;
      if ( v16 )
      {
        CManipulationManager::TargetPointer(this, v16, a2, i, &v18);
        v9 = v18;
      }
      *(_QWORD *)((char *)a2 + v6 + 184) = v9;
      if ( v9 != (void *)-1LL )
      {
        *((_BYTE *)a2 + 72) |= 1u;
        if ( (*((_BYTE *)a2 + 72) & 2) == 0 )
          CManipulationManager::TargetBufferedFrames(this, v7[41], v9, i);
      }
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v16);
    }
  }
  v10 = 0;
  if ( *((int *)this + 54) > 0 )
  {
    v11 = 0LL;
    do
    {
      v12 = 0;
      if ( *((_DWORD *)a2 + 4) == 1 && (*((_DWORD *)a2 + 43) & 0x800000) != 0 )
      {
        v13 = *((_DWORD *)a2 + 58);
        if ( v13 == 571 )
        {
          v12 = 1;
        }
        else if ( v13 == 572 )
        {
          v12 = 2;
        }
      }
      v14 = *(_QWORD *)(v11 + *((_QWORD *)this + 26));
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      CGestureTargetingManager::ProcessHandledInteractionsWalk(v14, v15, v2, v12, (char *)a2 + 80);
      ++v10;
      v11 += 8LL;
    }
    while ( v10 < *((_DWORD *)this + 54) );
  }
}
