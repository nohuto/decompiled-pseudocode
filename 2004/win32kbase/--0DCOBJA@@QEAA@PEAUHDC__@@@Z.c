/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0093E28
 * Callers:
 *     GreCopyVisRgn @ 0x1C0026650 (GreCopyVisRgn.c)
 *     GreSetDCOrg @ 0x1C0027620 (GreSetDCOrg.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0093B20 (GreLockVisRgnSharedOrExclusive.c)
 *     GreIsRendering @ 0x1C0093E60 (GreIsRendering.c)
 *     GreGetDCOrgEx @ 0x1C00A4EB0 (GreGetDCOrgEx.c)
 *     GreSelectVisRgnShared @ 0x1C00C7C50 (GreSelectVisRgnShared.c)
 *     GreIntersectVisRect @ 0x1C014F940 (GreIntersectVisRect.c)
 * Callees:
 *     HmgShareLockEx @ 0x1C0087EB0 (HmgShareLockEx.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this, HDC a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = HmgShareLockEx((unsigned int)a2, 1, 0);
  return this;
}
