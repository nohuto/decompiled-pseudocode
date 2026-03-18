/*
 * XREFs of NtUnloadDriver @ 0x140898180
 * Callers:
 *     <none>
 * Callees:
 *     IopUnloadDriver @ 0x1407573D8 (IopUnloadDriver.c)
 */

__int64 __fastcall NtUnloadDriver(unsigned __int16 *a1)
{
  return IopUnloadDriver(a1, 0);
}
