/*
 * XREFs of BmlCompareSourceModesWithMonitors @ 0x1C0135A74
 * Callers:
 *     BmlCompareSourceModes @ 0x1C0136158 (BmlCompareSourceModes.c)
 * Callees:
 *     ??$DIFF@H@@YAHHH@Z @ 0x1C000B034 (--$DIFF@H@@YAHHH@Z.c)
 *     BmlGetModeCategoryForRegion @ 0x1C0135C24 (BmlGetModeCategoryForRegion.c)
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C0136388 (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C01363A0 (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     ??$BmlCompareValues@H@@YA?AW4BML_COMPARISON_RESULT@@HH@Z @ 0x1C01694DC (--$BmlCompareValues@H@@YA-AW4BML_COMPARISON_RESULT@@HH@Z.c)
 */

__int64 __fastcall BmlCompareSourceModesWithMonitors(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // r13
  bool v7; // r12
  __int64 v8; // rdx
  char v9; // r14
  __int64 v11; // rdi
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rsi
  const struct _D3DKMDT_2DREGION *v15; // r13
  unsigned int ModeCategoryForRegion; // eax
  const struct _D3DKMDT_2DREGION *v17; // r15
  __int64 v18; // r8
  unsigned int v19; // ebx
  unsigned int v20; // eax
  __int64 result; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int v25; // eax
  __int64 v26; // r8
  unsigned int v27; // ebx
  unsigned int v28; // eax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  int v31; // edi
  int ScaledAspectRatio; // eax
  unsigned int v33; // ebx
  int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // [rsp+60h] [rbp+8h]
  __int64 v37; // [rsp+70h] [rbp+18h]

  v6 = a2;
  v7 = 0;
  v8 = 104LL * a2;
  v9 = 0;
  v36 = v6;
  v37 = v8;
  v11 = v8 + a1;
  v12 = *(unsigned int *)(v8 + a1 + 52);
  if ( (_DWORD)v12 )
  {
    v13 = *(_DWORD *)(v11 + 56);
    if ( v13 )
    {
      v9 = 1;
      if ( *(_DWORD *)(a4 + 76) == (_DWORD)v12 )
        v7 = *(_DWORD *)(a4 + 80) == v13;
      if ( *(_DWORD *)(a5 + 76) != (_DWORD)v12 || *(_DWORD *)(a5 + 80) != v13 )
        v9 = 0;
    }
  }
  v14 = v8 + a1;
  if ( *(_DWORD *)(v8 + a1 + 36) && *(_DWORD *)(v14 + 40) )
  {
    v15 = (const struct _D3DKMDT_2DREGION *)(a5 + 76);
    LOBYTE(a3) = v9;
    ModeCategoryForRegion = BmlGetModeCategoryForRegion(a5 + 76, v14 + 36, a3);
    v17 = (const struct _D3DKMDT_2DREGION *)(a4 + 76);
    LOBYTE(v18) = v7;
    v19 = ModeCategoryForRegion;
    v20 = BmlGetModeCategoryForRegion(v17, v14 + 36, v18);
    result = BmlCompareValues<unsigned int>(v20, v19);
    if ( (_DWORD)result )
      return result;
  }
  else
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v8, a3);
    v29[3] = a1;
    v29[4] = v6;
    v29[5] = *(unsigned int *)(v14 + 36);
    v29[6] = *(unsigned int *)(v14 + 40);
    WdLogEvent5_WdWarning(v29);
    v17 = (const struct _D3DKMDT_2DREGION *)(a4 + 76);
    v15 = (const struct _D3DKMDT_2DREGION *)(a5 + 76);
  }
  if ( !*(_DWORD *)(v11 + 52) || !*(_DWORD *)(v11 + 56) )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
    v30[4] = v36;
    v30[3] = a1;
    v30[5] = *(unsigned int *)(v11 + 52);
    v30[6] = *(unsigned int *)(v11 + 56);
    WdLogEvent5_WdWarning(v30);
    return 0LL;
  }
  LOBYTE(v24) = v7;
  v25 = BmlGetModeCategoryForRegion(v17, v11 + 52, v24);
  LOBYTE(v26) = v9;
  v27 = v25;
  v28 = BmlGetModeCategoryForRegion(v15, v11 + 52, v26);
  result = BmlCompareValues<unsigned int>(v27, v28);
  if ( !(_DWORD)result )
  {
    if ( v27 == 3 )
    {
      v31 = *(_DWORD *)(v37 + a1 + 60);
      ScaledAspectRatio = BmlGetScaledAspectRatio(v17);
      v33 = DIFF<int>(ScaledAspectRatio, v31);
      v34 = BmlGetScaledAspectRatio(v15);
      v35 = DIFF<int>(v34, v31);
      return BmlCompareValues<int>(v35, v33);
    }
    return 0LL;
  }
  return result;
}
