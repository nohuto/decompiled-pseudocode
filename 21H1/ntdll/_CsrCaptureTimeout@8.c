/*
 * XREFs of _CsrCaptureTimeout@8 @ 0x4B33E820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__stdcall CsrCaptureTimeout(int a1, _QWORD *a2)
{
  if ( a1 == -1 )
    return 0;
  *a2 = -10000LL * a1;
  return a2;
}
