/*
 * XREFs of ?UmfdEscFONTOBJ_pifi@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1FCDEC
 * Callers:
 *     _UmfdDispatchEscape@4 @ 0x8B7AC (_UmfdDispatchEscape@4.c)
 * Callees:
 *     ?EnsureTls@UmfdTls@@SGPAV1@XZ @ 0x8BCF4 (-EnsureTls@UmfdTls@@SGPAV1@XZ.c)
 *     _FONTOBJ_pifi@4 @ 0x1F35DA (_FONTOBJ_pifi@4.c)
 */

void __thiscall UmfdEscFONTOBJ_pifi(_DWORD *this)
{
  struct UmfdTls *v2; // eax
  FONTOBJ *v3; // eax
  IFIMETRICS *v4; // eax
  int v5; // eax

  v2 = UmfdTls::EnsureTls();
  if ( v2 && (v3 = (FONTOBJ *)*((_DWORD *)v2 + 5)) != 0 && (v4 = FONTOBJ_pifi(v3)) != 0 )
    v5 = *(_DWORD *)&v4[-1].panose.bContrast;
  else
    v5 = 0;
  this[1] = v5;
}
