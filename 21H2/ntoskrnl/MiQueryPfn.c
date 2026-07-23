/*
 * XREFs of MiQueryPfn @ 0x140247F88
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14025C83C (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1402BCED0 (MiGetPfnPriority.c)
 *     MiIsPageOnBadList @ 0x14030E2BC (MiIsPageOnBadList.c)
 */

char __fastcall MiQueryPfn(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  int PfnPriority; // eax
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  char result; // al

  v2 = a2;
  v3 = 48 * a1 - 0x58000000000LL;
  if ( (*(_BYTE *)(v3 + 35) & 0x40) != 0 || (unsigned int)MiIsPageOnBadList(48 * a1 - 0x58000000000LL) )
    *(_QWORD *)(v2 + 8) |= 0x80000000uLL;
  PfnPriority = MiGetPfnPriority(v3);
  v8 = v7 ^ ((unsigned int)v7 ^ (PfnPriority << 24)) & 0x7000000;
  *(_QWORD *)(v5 + 8) = v8;
  result = *(_BYTE *)(v9 + 34) & 7;
  if ( result == 3 )
    v6 = 0x8000000LL;
  *(_QWORD *)(v5 + 8) = v8 & 0xFFFFFFFFF77FFFFFuLL | v6 & 0xFFFFFFFFFF7FFFFFuLL | 0x400000;
  return result;
}
