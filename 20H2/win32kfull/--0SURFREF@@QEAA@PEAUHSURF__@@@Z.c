/*
 * XREFs of ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C026D014
 * Callers:
 *     GreDereferenceObject @ 0x1C00936F4 (GreDereferenceObject.c)
 *     GreReferenceObject @ 0x1C0098F20 (GreReferenceObject.c)
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
