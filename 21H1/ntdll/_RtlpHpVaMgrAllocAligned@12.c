/*
 * XREFs of _RtlpHpVaMgrAllocAligned@12 @ 0x4B37A9F0
 * Callers:
 *     _RtlpHpVaMgrAlloc@12 @ 0x4B37A845 (_RtlpHpVaMgrAlloc@12.c)
 *     _RtlpHpVaMgrRegionAllocate@4 @ 0x4B37B334 (_RtlpHpVaMgrRegionAllocate@4.c)
 * Callees:
 *     _RtlpHpEnvAllocVA@36 @ 0x4B3723C3 (_RtlpHpEnvAllocVA@36.c)
 */

PVOID __fastcall RtlpHpVaMgrAllocAligned(int a1, ULONG_PTR *a2, int a3)
{
  char v3; // al
  int v4; // eax
  PVOID v6; // [esp+8h] [ebp-4h] BYREF
  int savedregs; // [esp+Ch] [ebp+0h] BYREF

  v3 = *(_BYTE *)(a1 + 26);
  v6 = 0;
  v4 = (v3 & 6u) < 4 ? 0x2000 : 536883200;
  if ( (*(_BYTE *)(a1 + 26) & 8) != 0 )
    v4 |= 0x40000u;
  RtlpHpEnvAllocVA(a2, &v6, (int)&savedregs, a3, v4, 4u, a1, a1, *(_DWORD *)(a1 + 16), a1);
  return v6;
}
