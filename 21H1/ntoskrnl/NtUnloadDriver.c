/*
 * XREFs of NtUnloadDriver @ 0x140896E60
 * Callers:
 *     <none>
 * Callees:
 *     IopUnloadDriver @ 0x140754A50 (IopUnloadDriver.c)
 */

__int64 __fastcall NtUnloadDriver(unsigned __int16 *a1)
{
  return IopUnloadDriver(a1, 0);
}
