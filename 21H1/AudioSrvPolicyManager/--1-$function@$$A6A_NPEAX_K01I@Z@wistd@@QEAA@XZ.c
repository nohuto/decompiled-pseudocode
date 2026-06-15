/*
 * XREFs of ??1?$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@XZ @ 0x18000DF4C
 * Callers:
 *     _wil::details_abi::RecordWnfUsageIndex_::_1_::dtor$5 @ 0x1800409D3 (_wil--details_abi--RecordWnfUsageIndex_--_1_--dtor$5.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::~function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return result;
}
