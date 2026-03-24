/*
 * XREFs of ??_ECNaturalAnimationScalarForceAdapater@@UEAAPEAXI@Z @ 0x180216060
 * Callers:
 *     ??_ECNaturalAnimationScalarForceAdapater@@W7EAAPEAXI@Z @ 0x1800F6CD0 (--_ECNaturalAnimationScalarForceAdapater@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

CNaturalAnimationScalarForceAdapater *__fastcall CNaturalAnimationScalarForceAdapater::`vector deleting destructor'(
        CNaturalAnimationScalarForceAdapater *this,
        char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CNaturalAnimationScalarForceAdapater::`vftable'{for `IScalarForce'};
  *((_QWORD *)this + 1) = &CNaturalAnimationScalarForceAdapater::`vftable'{for `CMILRefCountBase'};
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *((_QWORD *)this + 5) = 0LL;
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
