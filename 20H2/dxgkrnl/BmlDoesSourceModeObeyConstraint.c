/*
 * XREFs of BmlDoesSourceModeObeyConstraint @ 0x1C0134E18
 * Callers:
 *     BmlCompareSourceModesWithConstraint @ 0x1C0134ACC (BmlCompareSourceModesWithConstraint.c)
 *     BmlGetNextBestSourceMode @ 0x1C0134B90 (BmlGetNextBestSourceMode.c)
 *     _BmlGetPathModeListForPath @ 0x1C02EB530 (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C0134F74 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 */

char __fastcall BmlDoesSourceModeObeyConstraint(__int64 a1, unsigned __int16 a2, unsigned int *a3)
{
  __int64 v4; // r14
  __int64 *v6; // rdi
  bool v7; // si
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r10
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax

  v4 = 104LL * a2;
  v6 = *(__int64 **)(v4 + a1 + 16);
  v7 = (*v6 & 0x18000000100LL) == 0 && (*(_DWORD *)(a1 + 4) & 0x40000) == 0;
  if ( (*v6 & 0x10000000100LL) != 0 )
    v8 = (*((_BYTE *)v6 + 128) != 0) + 1;
  else
    v8 = (*(_DWORD *)(a1 + 4) & 0x40000 | 0x20000u) >> 17;
  if ( !a3 )
    return 0;
  v9 = a3[18];
  if ( v8 == 2 )
  {
    if ( (unsigned int)(v9 - 3) > 1 )
      return 0;
  }
  else
  {
    if ( v8 == 1 )
    {
      if ( (_DWORD)v9 != 1 )
        return 0;
      goto LABEL_9;
    }
    if ( (((_DWORD)v9 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v9 == 2 )
      return 0;
  }
  if ( (((_DWORD)v9 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v9 == 2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v9, 4294967292LL);
    WdLogEvent5_WdAssertion(v14);
  }
LABEL_9:
  if ( !v7 || (v13 = a3[24], v13 >= 20) && (v13 <= 23 || v13 == 32 || v13 == 41) )
  {
    v10 = *v6;
    if ( ((*v6 & 0x4000000000LL) == 0 || !(unsigned int)BmlCompareModeExtents(v4 + a1 + 52, a3 + 19))
      && ((v10 & 0x8000000100LL) == 0 || (v12 = *((_DWORD *)v6 + 29)) == 0 || a3[24] == v12)
      && ((v6[1] & 0x100) == 0
       || a3[19] == *((_DWORD *)v6 + 24) && a3[20] == *((_DWORD *)v6 + 25) && a3[24] == *((_DWORD *)v6 + 29)) )
    {
      return 1;
    }
  }
  return 0;
}
