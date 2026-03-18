/*
 * XREFs of ??0CMotion@@QEAA@XZ @ 0x18025EA58
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18021A620 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ??0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180255D48 (--0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CScalarForce@@QEAA@PEAUIAccelerator@@@Z @ 0x180265AD4 (--0CScalarForce@@QEAA@PEAUIAccelerator@@@Z.c)
 */

CMotion *__fastcall CMotion::CMotion(CMotion *this)
{
  void (__fastcall ***v2)(_QWORD); // rax
  void (__fastcall ***v3)(_QWORD); // rdi
  void (__fastcall ***v4)(_QWORD); // rcx
  CScalarForce *v5; // rax
  CScalarForce *v6; // rdi
  CScalarForce *v7; // rcx

  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *(_QWORD *)this = &CMotion::`vftable';
  v2 = (void (__fastcall ***)(_QWORD))operator new(0x28uLL);
  v3 = v2;
  if ( v2 )
  {
    *((_DWORD *)v2 + 2) = 0;
    *v2 = (void (__fastcall **)(_QWORD))&CSpringAccelerator::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  v4 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 11);
  if ( v4 != v3 )
  {
    if ( v3 )
    {
      (**v3)(v3);
      v4 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 11);
    }
    *((_QWORD *)this + 11) = v3;
    if ( v4 )
      (*v4)[1](v4);
  }
  v5 = (CScalarForce *)operator new(0x70uLL);
  if ( v5 )
    v6 = CScalarForce::CScalarForce(v5, *((struct IAccelerator **)this + 11));
  else
    v6 = 0LL;
  v7 = (CScalarForce *)*((_QWORD *)this + 10);
  if ( v7 != v6 )
  {
    if ( v6 )
    {
      (**(void (__fastcall ***)(CScalarForce *))v6)(v6);
      v7 = (CScalarForce *)*((_QWORD *)this + 10);
    }
    *((_QWORD *)this + 10) = v6;
    if ( v7 )
      (*(void (__fastcall **)(CScalarForce *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  return this;
}
