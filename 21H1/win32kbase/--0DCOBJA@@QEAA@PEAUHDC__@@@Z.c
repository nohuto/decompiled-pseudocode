/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0090828
 * Callers:
 *     GreCopyVisRgn @ 0x1C0016B90 (GreCopyVisRgn.c)
 *     GreSetDCOrg @ 0x1C00178A0 (GreSetDCOrg.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0090510 (GreLockVisRgnSharedOrExclusive.c)
 *     GreIsRendering @ 0x1C0090860 (GreIsRendering.c)
 *     GreGetDCOrgEx @ 0x1C00B48E0 (GreGetDCOrgEx.c)
 *     GreSelectVisRgnShared @ 0x1C00C7530 (GreSelectVisRgnShared.c)
 *     GreIntersectVisRect @ 0x1C0155C90 (GreIntersectVisRect.c)
 * Callees:
 *     HmgShareLockEx @ 0x1C0080DE0 (HmgShareLockEx.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this, HDC a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = HmgShareLockEx((unsigned int)a2, 1, 0);
  return this;
}
