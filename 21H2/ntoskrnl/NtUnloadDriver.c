/*
 * XREFs of NtUnloadDriver @ 0x14089B280
 * Callers:
 *     <none>
 * Callees:
 *     IopUnloadDriver @ 0x140769798 (IopUnloadDriver.c)
 */

__int64 __fastcall NtUnloadDriver(unsigned __int16 *a1)
{
  return IopUnloadDriver(a1, 0);
}
