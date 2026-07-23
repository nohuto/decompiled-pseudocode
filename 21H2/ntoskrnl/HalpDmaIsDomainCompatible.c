/*
 * XREFs of HalpDmaIsDomainCompatible @ 0x1404C4EDC
 * Callers:
 *     HalJoinDmaDomain @ 0x1403C72B0 (HalJoinDmaDomain.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpDmaIsDomainCompatible(__int64 a1, __int64 a2)
{
  char v2; // r8
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rcx

  v2 = 0;
  v3 = (-(__int64)(*(_BYTE *)(a1 + 145) != 0) & 0xFFFF0000LL) + 0x10000;
  if ( !*(_QWORD *)(a2 + 72)
    && *(_BYTE *)(a2 + 32) == *(_BYTE *)(a1 + 437)
    && *(_QWORD *)(a2 + 16) <= *(_QWORD *)(a1 + 136)
    && *(_DWORD *)(a2 + 64) == *(_DWORD *)(a1 + 512) )
  {
    v4 = *(_QWORD *)(a2 + 24);
    if ( v4 )
    {
      if ( v3 >= v4 )
        return v3 % v4 == 0;
    }
  }
  return v2;
}
