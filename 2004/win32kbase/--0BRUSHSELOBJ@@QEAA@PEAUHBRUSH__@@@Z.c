/*
 * XREFs of ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00A7384
 * Callers:
 *     SetSysColor @ 0x1C00A6AF4 (SetSysColor.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C00A724C (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushOwner @ 0x1C00A7400 (GreSetBrushOwner.c)
 *     bDeleteBrush @ 0x1C00C08E0 (bDeleteBrush.c)
 *     GreGetBrushColor @ 0x1C01404A0 (GreGetBrushColor.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0088B80 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0089440 (HmgDecrementShareReferenceCountEx.c)
 *     ?bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ @ 0x1C00A77D4 (-bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ.c)
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
