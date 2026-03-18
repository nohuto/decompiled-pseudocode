/*
 * XREFs of ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C001E690
 * Callers:
 *     bInitBRUSHOBJ @ 0x1C02911B0 (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1C02915F4 (bInitBrush.c)
 * Callees:
 *     HmgMarkUndeletable @ 0x1C001E480 (HmgMarkUndeletable.c)
 *     HmgSetOwner @ 0x1C003D030 (HmgSetOwner.c)
 */

void __fastcall BRUSHMEMOBJ::vGlobal(BRUSHMEMOBJ *this, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 16;
  *(_DWORD *)(*(_QWORD *)this + 40LL) |= 0x40200u;
  HmgSetOwner(**(_QWORD **)this, 0LL, a3);
  HmgMarkUndeletable(**(_QWORD **)this, 16);
}
