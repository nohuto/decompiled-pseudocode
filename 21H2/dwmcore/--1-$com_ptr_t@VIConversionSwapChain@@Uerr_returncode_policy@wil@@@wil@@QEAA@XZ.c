/*
 * XREFs of ??1?$com_ptr_t@VIConversionSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800254C0
 * Callers:
 *     ?OnSwapChainCreated@COverlayContext@@QEAAJXZ @ 0x1800252B8 (-OnSwapChainCreated@COverlayContext@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<IConversionSwapChain,wil::err_returncode_policy>::~com_ptr_t<IConversionSwapChain,wil::err_returncode_policy>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
  {
    v1 = *(_QWORD *)a1 + 8LL + *(int *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 4LL);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}
