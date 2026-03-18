/*
 * XREFs of ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00A8C30
 * Callers:
 *     bDeleteBrush @ 0x1C006D4D0 (bDeleteBrush.c)
 *     SetSysColor @ 0x1C00A8878 (SetSysColor.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C00A8AF8 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushOwner @ 0x1C00A8CA0 (GreSetBrushOwner.c)
 *     GreGetBrushColor @ 0x1C01467F0 (GreGetBrushColor.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0081AB0 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0082370 (HmgDecrementShareReferenceCountEx.c)
 *     ?bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ @ 0x1C00A9074 (-bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ.c)
 */

BRUSHSELOBJ *__fastcall BRUSHSELOBJ::BRUSHSELOBJ(BRUSHSELOBJ *this, HBRUSH a2)
{
  __int64 v3; // rax

  *((_DWORD *)this + 2) = 0;
  v3 = HmgShareLockCheck((unsigned int)a2, 16);
  *(_QWORD *)this = v3;
  if ( v3 && !(unsigned int)XEBRUSHOBJ::bSaveAttributes(this) )
  {
    HmgDecrementShareReferenceCountEx(*(_QWORD *)this, 0LL);
    *(_QWORD *)this = 0LL;
  }
  return this;
}
