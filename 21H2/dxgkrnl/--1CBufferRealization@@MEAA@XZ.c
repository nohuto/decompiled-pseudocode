/*
 * XREFs of ??1CBufferRealization@@MEAA@XZ @ 0x1C000EDE4
 * Callers:
 *     ??_ECBufferRealization@@MEAAPEAXI@Z @ 0x1C000EDA0 (--_ECBufferRealization@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBufferRealization::~CBufferRealization(CBufferRealization *this)
{
  void (__fastcall ***v2)(_QWORD); // rcx
  void *v3; // rcx

  *(_QWORD *)this = &CBufferRealization::`vftable';
  v2 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 8);
  if ( v2 )
    (**v2)(v2);
  v3 = (void *)*((_QWORD *)this + 7);
  if ( v3 )
    ObfDereferenceObject(v3);
}
