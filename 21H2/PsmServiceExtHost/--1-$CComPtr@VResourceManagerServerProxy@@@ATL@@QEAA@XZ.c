/*
 * XREFs of ??1?$CComPtr@VResourceManagerServerProxy@@@ATL@@QEAA@XZ @ 0x1800442B4
 * Callers:
 *     _dynamic_atexit_destructor_for__g_pProxy__ @ 0x1800483E0 (_dynamic_atexit_destructor_for__g_pProxy__.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 */

__int64 ATL::CComPtr<ResourceManagerServerProxy>::~CComPtr<ResourceManagerServerProxy>()
{
  __int64 result; // rax

  if ( g_pProxy )
    return (*(__int64 (__fastcall **)(struct ResourceManagerServerProxy *))(*(_QWORD *)g_pProxy + 16LL))(g_pProxy);
  return result;
}
