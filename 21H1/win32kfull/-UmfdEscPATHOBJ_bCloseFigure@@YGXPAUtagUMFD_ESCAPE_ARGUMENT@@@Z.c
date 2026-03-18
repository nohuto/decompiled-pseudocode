/*
 * XREFs of ?UmfdEscPATHOBJ_bCloseFigure@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1FCE17
 * Callers:
 *     _UmfdDispatchEscape@4 @ 0x8B7AC (_UmfdDispatchEscape@4.c)
 * Callees:
 *     ?EnsureTls@UmfdTls@@SGPAV1@XZ @ 0x8BCF4 (-EnsureTls@UmfdTls@@SGPAV1@XZ.c)
 */

void __thiscall UmfdEscPATHOBJ_bCloseFigure(_DWORD *this)
{
  struct UmfdTls *v2; // eax
  BOOL v3; // eax
  PATHOBJ *v4; // eax

  v2 = UmfdTls::EnsureTls();
  v3 = v2 && (v4 = (PATHOBJ *)*((_DWORD *)v2 + 6)) != 0 && PATHOBJ_bCloseFigure(v4);
  this[1] = v3;
}
