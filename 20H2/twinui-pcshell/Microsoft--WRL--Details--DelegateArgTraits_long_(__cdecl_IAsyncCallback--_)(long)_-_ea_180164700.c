/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_fdd7dd8b55d2d1fe60d2e8a8836eb722___1_long_::Invoke @ 0x180164700
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x18006D6CC (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_fdd7dd8b55d2d1fe60d2e8a8836eb722___1_long_::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  CRotationManagerSync *v4; // rcx
  unsigned int v5; // edx

  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 128LL) = 0;
  v4 = *(CRotationManagerSync **)(a1 + 16);
  v5 = *((_DWORD *)v4 + 33);
  if ( v5 != -1 )
  {
    CRotationManagerSync::_SetActiveProcessForRotation(v4, v5, a3);
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 132LL) = -1;
  }
  return 0LL;
}
