/*
 * XREFs of _NtGdiCancelDC@4 @ 0x2121E0
 * Callers:
 *     <none>
 * Callees:
 *     _GreCancelDC@4 @ 0x1FF014 (_GreCancelDC@4.c)
 */

int __stdcall NtGdiCancelDC(void *a1)
{
  return GreCancelDC(a1);
}
