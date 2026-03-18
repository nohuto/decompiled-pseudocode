/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C004BB94
 * Callers:
 *     GreLockVisRgnSharedOrExclusive @ 0x1C004D0E0 (GreLockVisRgnSharedOrExclusive.c)
 *     GreIsRendering @ 0x1C004D5D0 (GreIsRendering.c)
 *     GreSetDCOrg @ 0x1C005E120 (GreSetDCOrg.c)
 *     GreGetDCOrgEx @ 0x1C00608A0 (GreGetDCOrgEx.c)
 *     GreCopyVisRgn @ 0x1C00900F0 (GreCopyVisRgn.c)
 *     GreSelectVisRgnShared @ 0x1C00C6EC0 (GreSelectVisRgnShared.c)
 *     GreIntersectVisRect @ 0x1C014D3A0 (GreIntersectVisRect.c)
 * Callees:
 *     HmgShareLockEx @ 0x1C0042C10 (HmgShareLockEx.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this, HDC a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = HmgShareLockEx((unsigned int)a2, 1, 0);
  return this;
}
