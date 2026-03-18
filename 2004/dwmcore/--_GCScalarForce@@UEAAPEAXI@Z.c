/*
 * XREFs of ??_GCScalarForce@@UEAAPEAXI@Z @ 0x180213DF4
 * Callers:
 *     ??_ECScalarForce@@W7EAAPEAXI@Z @ 0x1800F1210 (--_ECScalarForce@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

CScalarForce *__fastcall CScalarForce::`scalar deleting destructor'(CScalarForce *this, char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 14);
  if ( v4 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
