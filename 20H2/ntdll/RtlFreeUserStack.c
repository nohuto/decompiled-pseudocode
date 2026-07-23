/*
 * XREFs of RtlFreeUserStack @ 0x18007F6F0
 * Callers:
 *     RtlCreateUserStack @ 0x180076310 (RtlCreateUserStack.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009D470 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __cdecl RtlFreeUserStack(PVOID AllocationBase)
{
  PVOID v2; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = AllocationBase;
  v3 = 0LL;
  return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v2, &v3, 0x8000u);
}
