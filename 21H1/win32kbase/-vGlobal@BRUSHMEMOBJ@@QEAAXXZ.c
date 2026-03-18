/*
 * XREFs of ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C00A85C4
 * Callers:
 *     bInitBrush @ 0x1C029B478 (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C029B520 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgSetOwner @ 0x1C007B240 (HmgSetOwner.c)
 *     HmgMarkUndeletable @ 0x1C00A9F30 (HmgMarkUndeletable.c)
 */

void __fastcall BRUSHMEMOBJ::vGlobal(__int64 **this)
{
  __int64 v2; // rdx

  *((_DWORD *)*this + 10) |= 0x40200u;
  HmgSetOwner(**this, 0, 16);
  LOBYTE(v2) = 16;
  HmgMarkUndeletable(**this, v2);
}
