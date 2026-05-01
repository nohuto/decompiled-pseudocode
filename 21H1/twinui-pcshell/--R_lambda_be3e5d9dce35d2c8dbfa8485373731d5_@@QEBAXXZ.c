/*
 * XREFs of ??R_lambda_be3e5d9dce35d2c8dbfa8485373731d5_@@QEBAXXZ @ 0x180303CB8
 * Callers:
 *     ?_Exec@?$_CancellationTokenCallback@V_lambda_be3e5d9dce35d2c8dbfa8485373731d5_@@@details@Concurrency@@MEAAXXZ @ 0x180305F80 (-_Exec@-$_CancellationTokenCallback@V_lambda_be3e5d9dce35d2c8dbfa8485373731d5_@@@details@Concurr.c)
 * Callees:
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x18005A3E0 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A6F0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _lambda_be3e5d9dce35d2c8dbfa8485373731d5_::operator()(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx
  __int64 v2; // r10
  std::_Ref_count_base *v3; // r8
  std::_Ref_count_base *v4; // rdi
  __int64 *v5; // r9
  std::_Ref_count_base *v6; // rbx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  v2 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  if ( v1 && std::_Ref_count_base::_Incref_nz(v1) )
  {
    v2 = *v5;
    v3 = (std::_Ref_count_base *)v5[1];
    v6 = v3;
    v4 = v3;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)v2 + 8LL))(v2, 0LL, 0LL, 0LL, v2 + 16);
    v3 = v4;
  }
  if ( v3 )
    std::_Ref_count_base::_Decref(v6);
}
