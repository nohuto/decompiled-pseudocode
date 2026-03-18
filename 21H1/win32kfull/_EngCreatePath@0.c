/*
 * XREFs of _EngCreatePath@0 @ 0x1E6399
 * Callers:
 *     _EngLineTo@36 @ 0xBDF44 (_EngLineTo@36.c)
 *     _VerifierEngCreatePath@0 @ 0x1FC9A2 (_VerifierEngCreatePath@0.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?vLock@EPATHOBJ@@QAEXPAUHPATH__@@@Z @ 0x1CCC42 (-vLock@EPATHOBJ@@QAEXPAUHPATH__@@@Z.c)
 */

PATHOBJ *__stdcall EngCreatePath()
{
  EPATHOBJ *v0; // eax
  PATHOBJ *v1; // esi
  _BYTE v3[8]; // [esp+4h] [ebp-44h] BYREF
  int v4; // [esp+Ch] [ebp-3Ch]

  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v3);
  if ( v4 && (v0 = (EPATHOBJ *)PALLOCMEM2(0x30u, 1952542791, 1), (v1 = (PATHOBJ *)v0) != 0) )
  {
    *(_DWORD *)(v4 + 264) = v0;
    EPATHOBJ::vLock(v0, *(struct HPATH__ **)v4);
  }
  else
  {
    v1 = 0;
  }
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v3);
  return v1;
}
