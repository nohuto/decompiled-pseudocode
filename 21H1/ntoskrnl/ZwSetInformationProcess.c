/*
 * XREFs of ZwSetInformationProcess @ 0x1403F26B0
 * Callers:
 *     RtlCreateUserStack @ 0x14063900C (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x1406DB328 (RtlpWow64CreateUserStack.c)
 *     CmpInitializeRegistryProcess @ 0x1407878AC (CmpInitializeRegistryProcess.c)
 *     StartFirstUserProcess @ 0x140A3E9B4 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
