/*
 * XREFs of ?UmfdEscPATHOBJ_bMoveTo@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1FCF1B
 * Callers:
 *     _UmfdDispatchEscape@4 @ 0x8B7AC (_UmfdDispatchEscape@4.c)
 * Callees:
 *     ?EnsureTls@UmfdTls@@SGPAV1@XZ @ 0x8BCF4 (-EnsureTls@UmfdTls@@SGPAV1@XZ.c)
 */

void __thiscall UmfdEscPATHOBJ_bMoveTo(POINTFIX *this)
{
  struct UmfdTls *v2; // eax
  BOOL v3; // eax
  PATHOBJ *v4; // eax

  v2 = UmfdTls::EnsureTls();
  v3 = v2 && (v4 = (PATHOBJ *)*((_DWORD *)v2 + 6)) != 0 && PATHOBJ_bMoveTo(v4, this[1]);
  this->y = v3;
}
