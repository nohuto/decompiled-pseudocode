/*
 * XREFs of ??_ECScalarForce@@EEAAPEAXI@Z @ 0x180265B30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

CScalarForce *__fastcall CScalarForce::`vector deleting destructor'(CScalarForce *this, char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 13);
  if ( v4 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
