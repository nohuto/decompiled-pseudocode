/*
 * XREFs of ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C026E634
 * Callers:
 *     GreReferenceObject @ 0x1C00657F8 (GreReferenceObject.c)
 *     GreDereferenceObject @ 0x1C00AFA30 (GreDereferenceObject.c)
 * Callees:
 *     <none>
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this, HSURF a2)
{
  HSURF v3; // rcx

  v3 = a2;
  LOBYTE(a2) = 5;
  *(_QWORD *)this = HmgShareLockCheck(v3, a2);
  return this;
}
