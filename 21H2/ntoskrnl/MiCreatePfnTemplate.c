/*
 * XREFs of MiCreatePfnTemplate @ 0x1403B770C
 * Callers:
 *     MiInitializeDynamicPfns @ 0x140582D7C (MiInitializeDynamicPfns.c)
 *     MiDoGangAssignment @ 0x1405C00C0 (MiDoGangAssignment.c)
 *     MiSwitchToPfns @ 0x140AF522C (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x140AF5478 (MxCreateFreePfns.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiUpdatePageFileHighInPte @ 0x14033B6A0 (MiUpdatePageFileHighInPte.c)
 *     MiSetPfnIdentity @ 0x14033C300 (MiSetPfnIdentity.c)
 *     MiSetPfnTbFlushStamp @ 0x14033C33C (MiSetPfnTbFlushStamp.c)
 *     MiSetPageTablePfnBuddy @ 0x14036C868 (MiSetPageTablePfnBuddy.c)
 *     MiDetermineNewPfnHeatState @ 0x1403B78C4 (MiDetermineNewPfnHeatState.c)
 */

__int64 __fastcall MiCreatePfnTemplate(__int64 a1, __int16 a2, unsigned __int16 a3)
{
  __int64 v3; // rsi
  int v6; // eax
  __int64 v7; // r9
  int v8; // r10d
  __int64 v9; // rbp
  __int16 v10; // r14
  char v11; // cl
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rdx

  v3 = a3;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 34) = 64;
  MiSetPfnTbFlushStamp(a1, 0, 0);
  *(_QWORD *)(a1 + 40) |= 0x40000000000000uLL;
  v6 = MiDetermineNewPfnHeatState(0LL, 3LL);
  *(_QWORD *)(a1 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(a1 + 16), -(__int64)(v6 != 0) & 0xFFFFFFFDLL);
  v9 = (unsigned int)(v8 - 2);
  v10 = v8 - 1;
  if ( (a2 & 0x100) != 0 )
  {
    MiSetPfnIdentity(a1, v8);
LABEL_5:
    v11 = 6;
    goto LABEL_11;
  }
  if ( (a2 & 0x80u) != 0 )
  {
    *(_QWORD *)(a1 + 8) = 0xFFFFF68000000000uLL;
    goto LABEL_5;
  }
  if ( ((unsigned __int8)a2 & (unsigned __int8)v10) != 0 )
  {
    *(_QWORD *)(a1 + 40) = v7 | 0x20000000000000LL;
    if ( (a2 & 4) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 24) & 0xC000000000000001uLL;
      *(_WORD *)(a1 + 32) = v8 - 2;
      *(_QWORD *)(a1 + 24) = v9 | v12;
      goto LABEL_5;
    }
    v11 = v8 - 1;
  }
  else
  {
    v11 = (v8 - 2) | (4 * ((v8 - 2) & a2));
  }
LABEL_11:
  v13 = *(_QWORD *)(a1 + 40) ^ (v3 << 43);
  *(_BYTE *)(a1 + 34) = v11 | *(_BYTE *)(a1 + 34) & 0xF8;
  result = 0x1FF80000000000LL;
  *(_QWORD *)(a1 + 40) ^= v13 & 0x1FF80000000000LL;
  if ( (a2 & 0x180) != 0 )
  {
    *(_QWORD *)(a1 + 24) = v9 | *(_QWORD *)(a1 + 24) & 0xC000000000000001uLL;
    *(_QWORD *)(a1 + 16) = MiSwizzleInvalidPte(128LL);
    *(_QWORD *)(a1 + 40) = v15 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFELL;
    MiSetPageTablePfnBuddy(a1, (__int64)KeGetCurrentThread()->ApcState.Process, v9);
    result = 0x4000000000000000LL;
    *(_WORD *)(a1 + 32) = v10;
    *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  }
  return result;
}
