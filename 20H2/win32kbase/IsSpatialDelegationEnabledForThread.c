/*
 * XREFs of IsSpatialDelegationEnabledForThread @ 0x1C0032A50
 * Callers:
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C003297C (_anonymous_namespace_--InMouseRawInputMode.c)
 * Callees:
 *     ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1C01A8F6C (-IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z.c)
 */

bool __fastcall IsSpatialDelegationEnabledForThread(InputDelegation *a1, const struct tagTHREADINFO *a2)
{
  return (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) != 0
      && InputDelegation::IsDelegationEnabledForThread(a1, a2);
}
