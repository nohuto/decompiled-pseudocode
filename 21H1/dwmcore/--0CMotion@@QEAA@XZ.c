/*
 * XREFs of ??0CMotion@@QEAA@XZ @ 0x18020FE34
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x1801CD000 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ??0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180207190 (--0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??0CScalarForce@@QEAA@PEAUIAccelerator@@@Z @ 0x180216768 (--0CScalarForce@@QEAA@PEAUIAccelerator@@@Z.c)
 */

CMotion *__fastcall CMotion::CMotion(CMotion *this)
{
  struct IAccelerator *v1; // rbx
  void (__fastcall **v3)(char *); // rax
  CScalarForce *v4; // rax
  CScalarForce *v5; // rbx
  CScalarForce *v6; // rcx

  *((_QWORD *)this + 10) = 0LL;
  v1 = (CMotion *)((char *)this + 88);
  *(_QWORD *)this = &CMotion::`vftable';
  *((_QWORD *)this + 11) = &CSpringAccelerator::`vftable'{for `IAccelerator'};
  *((_QWORD *)this + 12) = &CSpringAccelerator::`vftable'{for `CMILRefCountBase'};
  *((_DWORD *)this + 26) = 0;
  v3 = (void (__fastcall **)(char *))*((_QWORD *)this + 11);
  *((_QWORD *)this + 17) = 0LL;
  (*v3)((char *)this + 88);
  v4 = (CScalarForce *)operator new(0x78uLL);
  if ( v4 )
    v5 = CScalarForce::CScalarForce(v4, v1);
  else
    v5 = 0LL;
  v6 = (CScalarForce *)*((_QWORD *)this + 10);
  if ( v6 != v5 )
  {
    if ( v5 )
    {
      (**(void (__fastcall ***)(CScalarForce *))v5)(v5);
      v6 = (CScalarForce *)*((_QWORD *)this + 10);
    }
    *((_QWORD *)this + 10) = v5;
    if ( v6 )
      (*(void (__fastcall **)(CScalarForce *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  return this;
}
