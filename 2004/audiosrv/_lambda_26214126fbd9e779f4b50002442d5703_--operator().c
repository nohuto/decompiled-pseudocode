/*
 * XREFs of _lambda_26214126fbd9e779f4b50002442d5703_::operator() @ 0x18006F6EC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_26214126fbd9e779f4b50002442d5703__bool_Microsoft::WRL::ComPtr_IProcessSubmixProxy__const_&_::_Do_call @ 0x18006FCA0 (std--_Func_impl_no_alloc__lambda_26214126fbd9e779f4b50002442d5703__bool_Microsoft--_ea_18006FCA0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

char __fastcall lambda_26214126fbd9e779f4b50002442d5703_::operator()(__int64 a1, _QWORD *a2)
{
  unsigned int v5; // esi
  char v6; // bl
  unsigned int v7; // esi
  _DWORD *v8; // rax

  if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 176LL))(*a2) != **(_DWORD **)a1 )
    return 0;
  if ( **(_DWORD **)(a1 + 8) == 3 )
  {
    v5 = **(_DWORD **)(a1 + 16);
    v6 = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 104LL))(*a2) == v5
      || (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 112LL))(*a2, v5) )
    {
      return v6;
    }
  }
  else
  {
    v7 = **(_DWORD **)(a1 + 16);
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 104LL))(*a2) != v7 )
    {
      v8 = *(_DWORD **)(a1 + 8);
      v6 = 0;
      if ( *v8 != 2 || !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 112LL))(*a2, v7) )
        return v6;
    }
  }
  return 1;
}
