/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VCStreamConnectionManagerImpl@@@std@@EEAAXXZ @ 0x180100760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall std::_Ref_count_obj<CStreamConnectionManagerImpl>::_Destroy(__int64 a1)
{
  void **result; // rax
  __int64 v2; // rcx

  result = &CStreamConnectionManagerImpl::`vftable';
  *(_QWORD *)(a1 + 16) = &CStreamConnectionManagerImpl::`vftable';
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    return (void **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
