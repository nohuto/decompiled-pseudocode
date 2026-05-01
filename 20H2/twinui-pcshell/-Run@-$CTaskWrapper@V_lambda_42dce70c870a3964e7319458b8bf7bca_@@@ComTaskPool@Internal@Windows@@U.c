/*
 * XREFs of ?Run@?$CTaskWrapper@V_lambda_42dce70c870a3964e7319458b8bf7bca_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x18045D090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_42dce70c870a3964e7319458b8bf7bca_>::Run(
        __int64 a1)
{
  const unsigned __int16 *v1; // rdx

  v1 = (const unsigned __int16 *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 48) >= 8uLL )
    v1 = *(const unsigned __int16 **)v1;
  TerminateApp(*(_DWORD *)(a1 + 16), v1);
}
