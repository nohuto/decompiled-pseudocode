/*
 * XREFs of HUBPDO_D3ColdSupportInterfaceReference @ 0x1C0019470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall HUBPDO_D3ColdSupportInterfaceReference(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = *(__int64 (__fastcall **)(_QWORD))(a1 + 328);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD))result(*(_QWORD *)(a1 + 320));
  return result;
}
