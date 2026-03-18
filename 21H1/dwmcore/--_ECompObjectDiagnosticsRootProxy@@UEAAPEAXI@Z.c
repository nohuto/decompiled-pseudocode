/*
 * XREFs of ??_ECompObjectDiagnosticsRootProxy@@UEAAPEAXI@Z @ 0x1801862A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

CompObjectDiagnosticsRootProxy *__fastcall CompObjectDiagnosticsRootProxy::`vector deleting destructor'(
        CompObjectDiagnosticsRootProxy *this,
        char a2)
{
  void (__fastcall ***v4)(_QWORD); // rcx

  v4 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 4);
  if ( v4 )
    (**v4)(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
