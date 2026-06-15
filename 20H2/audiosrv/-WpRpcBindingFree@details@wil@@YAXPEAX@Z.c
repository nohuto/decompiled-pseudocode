/*
 * XREFs of ?WpRpcBindingFree@details@wil@@YAXPEAX@Z @ 0x180047744
 * Callers:
 *     ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x18004CA74 (-CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?WpRpcBindingFree@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18012D73C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-WpRpcBindingFree@details.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x18012DBD0 (s_adGetDeviceGraphWnfStateName.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::WpRpcBindingFree(wil::details *this, void *a2)
{
  RPC_BINDING_HANDLE Binding; // [rsp+30h] [rbp+8h] BYREF

  Binding = this;
  RpcBindingFree(&Binding);
}
