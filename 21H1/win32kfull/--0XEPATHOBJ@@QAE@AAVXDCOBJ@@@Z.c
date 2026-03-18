/*
 * XREFs of ??0XEPATHOBJ@@QAE@AAVXDCOBJ@@@Z @ 0x1E448D
 * Callers:
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 *     _NtGdiCloseFigure@4 @ 0x2115FD (_NtGdiCloseFigure@4.c)
 *     _NtGdiFillPath@4 @ 0x2116F1 (_NtGdiFillPath@4.c)
 *     _NtGdiFlattenPath@4 @ 0x2117E2 (_NtGdiFlattenPath@4.c)
 *     _NtGdiPathToRegion@4 @ 0x211A5D (_NtGdiPathToRegion@4.c)
 *     _NtGdiSelectClipPath@8 @ 0x211B56 (_NtGdiSelectClipPath@8.c)
 *     _NtGdiStrokeAndFillPath@4 @ 0x211C98 (_NtGdiStrokeAndFillPath@4.c)
 *     _NtGdiStrokePath@4 @ 0x211DC5 (_NtGdiStrokePath@4.c)
 *     _NtGdiWidenPath@4 @ 0x211EC9 (_NtGdiWidenPath@4.c)
 * Callees:
 *     ??1XEPATHOBJ@@QAE@XZ @ 0xF6DBB (--1XEPATHOBJ@@QAE@XZ.c)
 *     ?vLock@EPATHOBJ@@QAEXPAUHPATH__@@@Z @ 0x1CCC42 (-vLock@EPATHOBJ@@QAEXPAUHPATH__@@@Z.c)
 *     ??0EPATHOBJ@@QAE@XZ @ 0x1E40E7 (--0EPATHOBJ@@QAE@XZ.c)
 *     ??0XEPATHOBJ@@QAE@PAUHPATH__@@@Z @ 0x1E4555 (--0XEPATHOBJ@@QAE@PAUHPATH__@@@Z.c)
 */

XEPATHOBJ *__thiscall XEPATHOBJ::XEPATHOBJ(XEPATHOBJ *this, DC **a2)
{
  int v3; // eax
  _BYTE v5[8]; // [esp+Ch] [ebp-88h] BYREF
  int v6; // [esp+14h] [ebp-80h]
  _BYTE v7[8]; // [esp+50h] [ebp-44h] BYREF
  struct HPATH__ **v8; // [esp+58h] [ebp-3Ch]

  EPATHOBJ::EPATHOBJ(this);
  *((_DWORD *)this + 16) = 0;
  v3 = *((_DWORD *)*a2 + 43);
  if ( (v3 & 2) != 0 )
  {
    *((_DWORD *)*a2 + 43) = v3 & 0xFFFFFFFD;
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v5, *((struct HPATH__ **)*a2 + 34));
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v7);
    if ( v8 && v6 && EPATHOBJ::bClone((EPATHOBJ *)v7, (struct EPATHOBJ *)v5) )
      DC::hpath(*a2, *v8);
    else
      DC::hpath(*a2, 0);
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v7);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v5);
  }
  *((_DWORD *)this + 2) = 0;
  if ( !*((_DWORD *)this + 16) )
  {
    PushThreadGuardedObject((char *)this + 48, this, XEPATHOBJ_vDestructWrap);
    *((_DWORD *)this + 16) = 1;
  }
  EPATHOBJ::vLock(this, *((struct HPATH__ **)*a2 + 34));
  return this;
}
