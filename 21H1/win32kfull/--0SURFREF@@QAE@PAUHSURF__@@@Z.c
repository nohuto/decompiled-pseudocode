/*
 * XREFs of ??0SURFREF@@QAE@PAUHSURF__@@@Z @ 0x1CCD1B
 * Callers:
 *     _GreDereferenceObject@8 @ 0x206B0 (_GreDereferenceObject@8.c)
 *     _GreReferenceObject@4 @ 0x20BD0 (_GreReferenceObject@4.c)
 * Callees:
 *     <none>
 */

SURFREF *__thiscall SURFREF::SURFREF(SURFREF *this, HSURF a2)
{
  *(_DWORD *)this = HmgShareLockCheck(a2, 5);
  return this;
}
