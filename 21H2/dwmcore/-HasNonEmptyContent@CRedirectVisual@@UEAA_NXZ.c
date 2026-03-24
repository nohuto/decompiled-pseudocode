/*
 * XREFs of ?HasNonEmptyContent@CRedirectVisual@@UEAA_NXZ @ 0x1800DAC10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CRedirectVisual::HasNonEmptyContent(CRedirectVisual *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 31);
  return v1 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 208LL))(v1) == 0;
}
