/*
 * XREFs of ?reset@?$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801C9984
 * Callers:
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801C9814 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<CDDisplaySwapChain,wil::err_returncode_policy>::reset(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rdi
  volatile signed __int32 *v2; // rbx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    v2 = v1 + 4;
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 4, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v1 + 4));
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 208LL))(v1);
      result = (unsigned int)_InterlockedExchangeAdd(v2, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        --*v2;
        return (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 200LL))(v1, 1LL);
      }
    }
  }
  return result;
}
