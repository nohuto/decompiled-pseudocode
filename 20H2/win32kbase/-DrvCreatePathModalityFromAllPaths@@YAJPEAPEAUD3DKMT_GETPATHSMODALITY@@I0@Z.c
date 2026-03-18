/*
 * XREFs of ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C0145630
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C006C8A0 (DrvSetDisplayConfig.c)
 * Callees:
 *     GetPathsModality @ 0x1C00A8064 (GetPathsModality.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C00A8124 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 */

__int64 __fastcall DrvCreatePathModalityFromAllPaths(
        struct D3DKMT_GETPATHSMODALITY **a1,
        __int64 a2,
        struct D3DKMT_GETPATHSMODALITY **a3)
{
  int v4; // ebx
  unsigned int i; // ebp
  __int64 v7; // r14
  int PathsModality; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // ebx
  __int64 v24; // rax
  int v25; // edx
  struct D3DKMT_GETPATHSMODALITY *v26; // rax
  __int64 v27; // rax
  struct D3DKMT_GETPATHSMODALITY *v28; // rax
  struct D3DKMT_GETPATHSMODALITY *v29; // rcx
  _OWORD *v30; // rax
  _OWORD *v31; // r8
  __int128 v32; // xmm1

  v4 = a2;
  i = 0;
  v7 = 2LL;
  if ( (unsigned int)a2 < 2 )
  {
    PathsModality = GetPathsModality((__int64)a1, a3, (_DWORD)a2 != 0 ? 8 : 1, 0);
    v12 = PathsModality;
    if ( PathsModality < 0 )
    {
      v13 = WdLogNewEntry5_WdError(v10, v9, v11);
      *(_QWORD *)(v13 + 24) = v12;
      *(_QWORD *)(v13 + 32) = 25749LL;
      WdLogEvent5_WdError(v13, v14);
    }
    return (unsigned int)v12;
  }
  if ( !*a1 )
  {
    if ( (_DWORD)a2 != 2 )
    {
      v16 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v16);
    }
    v17 = GetPathsModality((__int64)a1, a1, 0x10u, 0);
    v19 = v17;
    if ( v17 < 0 )
    {
      v20 = WdLogNewEntry5_WdError(a1, a2, v18);
      *(_QWORD *)(v20 + 24) = v19;
      *(_QWORD *)(v20 + 32) = 25769LL;
      WdLogEvent5_WdError(v20, v21);
      return (unsigned int)v19;
    }
    if ( !*a1 )
    {
      v22 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v22);
    }
  }
  v23 = v4 - 1;
  if ( !v23 )
  {
    v24 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v24);
  }
  v25 = 0;
  while ( v23 )
  {
    for ( i = 0; i < *((unsigned __int16 *)*a1 + 10); ++i )
    {
      if ( (*((_QWORD *)*a1 + 34 * i + 6) & 0x100000000000000LL) != 0 && v25 != 1 && !--v23 )
        break;
    }
    if ( (unsigned int)++v25 >= 2 )
    {
      if ( v23 )
        return 2147483674LL;
      break;
    }
  }
  v26 = AllocPathsModality(1u);
  *a3 = v26;
  if ( !v26 )
  {
    v27 = WdLogNewEntry5_WdLowResource();
    LODWORD(v12) = -1073741670;
    *(_QWORD *)(v27 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v27);
    return (unsigned int)v12;
  }
  *((_WORD *)v26 + 10) = 1;
  *((_DWORD *)*a3 + 8) = 8;
  v28 = *a1;
  v29 = *a3;
  *(_OWORD *)v29 = *(_OWORD *)*a1;
  *((_DWORD *)v29 + 4) = *((_DWORD *)v28 + 4);
  v30 = (_OWORD *)((char *)*a3 + 48);
  v31 = (_OWORD *)((char *)*a1 + 272 * i + 48);
  do
  {
    *v30 = *v31;
    v30[1] = v31[1];
    v30[2] = v31[2];
    v30[3] = v31[3];
    v30[4] = v31[4];
    v30[5] = v31[5];
    v30[6] = v31[6];
    v30 += 8;
    v32 = v31[7];
    v31 += 8;
    *(v30 - 1) = v32;
    --v7;
  }
  while ( v7 );
  *v30 = *v31;
  *((_QWORD *)*a3 + 34) = 0LL;
  return 0LL;
}
