/*
 * XREFs of HalpNotifyIommuDomainPolicyChange @ 0x140511030
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuInvokeInterfaceStateChangeCallbacks @ 0x140510DA4 (HalpIommuInvokeInterfaceStateChangeCallbacks.c)
 */

__int64 __fastcall HalpNotifyIommuDomainPolicyChange(__int64 a1)
{
  return HalpIommuInvokeInterfaceStateChangeCallbacks(a1, 1);
}
