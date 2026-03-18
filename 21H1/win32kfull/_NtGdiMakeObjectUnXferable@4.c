/*
 * XREFs of _NtGdiMakeObjectUnXferable@4 @ 0x1FD884
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtGdiMakeObjectUnXferable(int a1)
{
  int v2; // edx
  int v3; // esi

  if ( (a1 & 0x800000) != 0 )
    return 1;
  GreAcquireHmgrSemaphore();
  if ( (BYTE2(a1) & 0x1F) == 1 )
  {
    LOBYTE(v2) = 1;
    v3 = HmgMarkUnXferable(a1, v2);
  }
  else
  {
    v3 = 0;
  }
  GreReleaseHmgrSemaphore();
  return v3;
}
