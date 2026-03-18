/*
 * XREFs of ??1FlipManagerTokenInitInfo@@QEAA@XZ @ 0x1C0062004
 * Callers:
 *     NtTokenManagerCreateFlipObjectReturnTokenHandle @ 0x1C00620F0 (NtTokenManagerCreateFlipObjectReturnTokenHandle.c)
 *     NtTokenManagerCreateFlipObjectTokenHandle @ 0x1C0062330 (NtTokenManagerCreateFlipObjectTokenHandle.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FlipManagerTokenInitInfo::~FlipManagerTokenInitInfo(FlipManagerTokenInitInfo *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
    ObfDereferenceObject(v2);
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
}
