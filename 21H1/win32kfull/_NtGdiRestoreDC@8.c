/*
 * XREFs of _NtGdiRestoreDC@8 @ 0xA4952
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtGdiRestoreDC(int a1, int a2)
{
  return GreRestoreDCInternal(a1, a2, 0);
}
