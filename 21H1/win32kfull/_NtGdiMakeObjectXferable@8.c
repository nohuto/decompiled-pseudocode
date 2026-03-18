/*
 * XREFs of _NtGdiMakeObjectXferable@8 @ 0x1FD8D1
 * Callers:
 *     <none>
 * Callees:
 *     ?bPrepareDCForXfer@XFERDCOBJ@@SGHPAUHDC__@@K@Z @ 0x1FD069 (-bPrepareDCForXfer@XFERDCOBJ@@SGHPAUHDC__@@K@Z.c)
 */

int __stdcall NtGdiMakeObjectXferable(HDC a1, int a2)
{
  int v3; // edx
  int v4; // esi

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1;
  GreAcquireHmgrSemaphore();
  if ( (BYTE2(a1) & 0x1F) == 1 && XFERDCOBJ::bPrepareDCForXfer(a1, a2) )
  {
    LOBYTE(v3) = BYTE2(a1) & 0x1F;
    v4 = HmgMarkXferable(a1, v3);
  }
  else
  {
    v4 = 0;
  }
  GreReleaseHmgrSemaphore();
  return v4;
}
