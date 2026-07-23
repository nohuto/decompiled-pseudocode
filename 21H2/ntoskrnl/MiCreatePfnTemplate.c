/*
 * XREFs of MiCreatePfnTemplate @ 0x1403B1594
 * Callers:
 *     MiInitializeUnusablePfns @ 0x1403B1150 (MiInitializeUnusablePfns.c)
 *     MxCreateFreePfns @ 0x140A44ECC (MxCreateFreePfns.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x1402E25D0 (MiUpdatePageFileHighInPte.c)
 *     MiDetermineNewPfnHeatState @ 0x1403F7D80 (MiDetermineNewPfnHeatState.c)
 */

__int64 __fastcall MiCreatePfnTemplate(char a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // r9
  __int64 result; // rax
  __int64 v6; // r9

  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_OWORD *)(a2 + 32) = 0LL;
  *(_BYTE *)(a2 + 34) ^= (a1 ^ *(_BYTE *)(a2 + 34)) & 7;
  *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0x3F | 0x40;
  *(_QWORD *)(a2 + 40) |= 0x4000000000000uLL;
  v3 = MiDetermineNewPfnHeatState(0LL, 3LL, a3, a2);
  result = MiUpdatePageFileHighInPte(*(_QWORD *)(v4 + 16), -(__int64)(v3 != 0) & 0xFFFFFFFDLL);
  *(_QWORD *)(v6 + 16) = result;
  return result;
}
