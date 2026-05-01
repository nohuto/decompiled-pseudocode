/*
 * XREFs of sub_180023230 @ 0x180023230
 * Callers:
 *     sub_180005EAC @ 0x180005EAC (sub_180005EAC.c)
 *     sub_18000DCD8 @ 0x18000DCD8 (sub_18000DCD8.c)
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_1800197C0 @ 0x1800197C0 (sub_1800197C0.c)
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 *     sub_180023070 @ 0x180023070 (sub_180023070.c)
 *     sub_180026CFC @ 0x180026CFC (sub_180026CFC.c)
 *     sub_180029BA8 @ 0x180029BA8 (sub_180029BA8.c)
 *     sub_18007F518 @ 0x18007F518 (sub_18007F518.c)
 *     sub_18007F87C @ 0x18007F87C (sub_18007F87C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180023230(__int64 a1)
{
  _QWORD *Value; // rax

  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)Value & 0x20) == 0 )
      __int2c();
    if ( Value[6]-- == 1LL )
      *Value &= ~0x20uLL;
  }
  *(_DWORD *)(a1 + 584) = 0;
  return RtlReleaseSRWLockExclusive(a1 + 576);
}
