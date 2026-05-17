/*
 * XREFs of _RtlWnfDllUnloadCallback@4 @ 0x4B2AC180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __stdcall RtlWnfDllUnloadCallback(int a1)
{
  return LdrUnloadDll(a1);
}
