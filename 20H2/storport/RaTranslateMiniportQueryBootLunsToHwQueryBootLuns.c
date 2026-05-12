/*
 * XREFs of RaTranslateMiniportQueryBootLunsToHwQueryBootLuns @ 0x1C0044754
 * Callers:
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C002D7B0 (RaidAdapterQueryBootLunsIoctl.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C00065E4 (RaidAdapterFindUnit.c)
 */

__int64 __fastcall RaTranslateMiniportQueryBootLunsToHwQueryBootLuns(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rsi
  __int64 v5; // r8
  unsigned int v6; // ebx
  int v8; // eax
  unsigned __int64 v9; // rdx
  unsigned int v10; // ebp
  __int64 Unit; // rax
  int v13; // [rsp+58h] [rbp+20h]

  v3 = *(_DWORD **)(a2 + 24);
  v5 = *(_QWORD *)(a2 + 184);
  v6 = 0;
  HIBYTE(v13) = 0;
  v8 = *(_DWORD *)(a3 + 36);
  if ( v8 )
    v9 = 16 * ((unsigned int)(v8 - 1) + 2LL);
  else
    v9 = 32LL;
  *v3 = 1;
  v3[1] = v9;
  if ( *(unsigned int *)(v5 + 8) >= v9 )
  {
    v10 = 0;
    v3[2] = *(_DWORD *)(a3 + 36);
    for ( v3[3] = *(_DWORD *)(a3 + 40); v10 < *(_DWORD *)(a3 + 36); ++v10 )
    {
      BYTE2(v13) = *(_BYTE *)(a3 + 8LL * v10 + 51);
      LOWORD(v13) = *(_WORD *)(a3 + 8LL * v10 + 49);
      Unit = RaidAdapterFindUnit(a1, v13);
      if ( Unit )
        *(_OWORD *)&v3[4 * v10 + 4] = *(_OWORD *)(Unit + 1976);
    }
  }
  else
  {
    return (unsigned int)-2147483643;
  }
  return v6;
}
