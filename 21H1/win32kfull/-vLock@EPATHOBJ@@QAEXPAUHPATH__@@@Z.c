/*
 * XREFs of ?vLock@EPATHOBJ@@QAEXPAUHPATH__@@@Z @ 0x1CCC42
 * Callers:
 *     ?ppoGetPath@XCLIPOBJ@@QAEPAU_PATHOBJ@@XZ @ 0x1CCB24 (-ppoGetPath@XCLIPOBJ@@QAEPAU_PATHOBJ@@XZ.c)
 *     ??0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z @ 0x1E410A (--0PATHSTACKOBJ@@QAE@AAVXDCOBJ@@H@Z.c)
 *     ??0XEPATHOBJ@@QAE@AAVXDCOBJ@@@Z @ 0x1E448D (--0XEPATHOBJ@@QAE@AAVXDCOBJ@@@Z.c)
 *     _EngCreatePath@0 @ 0x1E6399 (_EngCreatePath@0.c)
 *     _XEPATHOBJ_vConstructHPATH@8 @ 0x1E6411 (_XEPATHOBJ_vConstructHPATH@8.c)
 * Callees:
 *     <none>
 */

void __thiscall EPATHOBJ::vLock(EPATHOBJ *this, struct HPATH__ *a2)
{
  int v3; // eax

  v3 = HmgShareLock(a2, 7);
  *((_DWORD *)this + 2) = v3;
  if ( v3 )
  {
    *((_DWORD *)this + 1) = *(_DWORD *)(v3 + 68);
    *(_DWORD *)this = *(_DWORD *)(v3 + 64);
  }
}
