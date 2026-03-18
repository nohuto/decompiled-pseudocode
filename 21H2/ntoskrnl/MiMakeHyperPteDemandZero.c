/*
 * XREFs of MiMakeHyperPteDemandZero @ 0x140236400
 * Callers:
 *     MiFillHyperPtes @ 0x140236274 (MiFillHyperPtes.c)
 *     MiMakeHyperRangeAccessible @ 0x1403199E0 (MiMakeHyperRangeAccessible.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 */

void __fastcall MiMakeHyperPteDemandZero(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 *v4; // rdx

  if ( *(_DWORD *)a3 )
  {
    v3 = MiSwizzleInvalidPte(128LL, a1);
    *v4 = v3;
  }
  ++*(_QWORD *)(a3 + 8);
}
