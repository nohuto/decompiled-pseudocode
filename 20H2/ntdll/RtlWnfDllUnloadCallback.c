/*
 * XREFs of RtlWnfDllUnloadCallback @ 0x180085B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl RtlWnfDllUnloadCallback(PVOID DllBase)
{
  return LdrUnloadDll(DllBase);
}
