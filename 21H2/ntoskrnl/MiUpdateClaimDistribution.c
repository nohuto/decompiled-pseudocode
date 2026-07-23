/*
 * XREFs of MiUpdateClaimDistribution @ 0x140224F70
 * Callers:
 *     MiComputeAgeDistribution @ 0x140224DFC (MiComputeAgeDistribution.c)
 *     MiOrderTrimList @ 0x14053B880 (MiOrderTrimList.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiUpdateClaimDistribution(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v4; // r9
  char v5; // r10
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  bool v11; // cf
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx

  v4 = *a2;
  v5 = 3;
  if ( *(_BYTE *)(a1 + 186) != 2 )
    v5 = 1;
  v6 = v4 + (*(_QWORD *)(a1 + 40) >> v5);
  if ( v6 < v4 )
    v6 = -1LL;
  *a2 = v6;
  v7 = a2[1];
  v8 = a2[6];
  v9 = (*(_QWORD *)(a1 + 48) >> v5) + v7;
  v10 = *(_QWORD *)(a1 + 56);
  v11 = v9 < v7;
  v12 = a2[2];
  if ( v11 )
    v9 = -1LL;
  a2[1] = v9;
  v13 = (v10 >> v5) + v12;
  v14 = *(_QWORD *)(a1 + 64);
  v11 = v13 < v12;
  v15 = a2[3];
  if ( v11 )
    v13 = -1LL;
  a2[2] = v13;
  v16 = (v14 >> v5) + v15;
  v17 = *(_QWORD *)(a1 + 72);
  v11 = v16 < v15;
  v18 = a2[4];
  if ( v11 )
    v16 = -1LL;
  a2[3] = v16;
  v19 = (v17 >> v5) + v18;
  v20 = *(_QWORD *)(a1 + 80);
  v11 = v19 < v18;
  v21 = a2[5];
  if ( v11 )
    v19 = -1LL;
  a2[4] = v19;
  v22 = (v20 >> v5) + v21;
  v23 = *(_QWORD *)(a1 + 96);
  v11 = v22 < v21;
  v24 = *(_QWORD *)(a1 + 88);
  if ( v11 )
    v22 = -1LL;
  a2[5] = v22;
  v25 = v8 + (v24 >> v5);
  if ( v25 < v8 )
    v25 = -1LL;
  result = v23 >> v5;
  a2[6] = v25;
  v27 = a2[7];
  v28 = result + v27;
  if ( result + v27 < v27 )
    v28 = -1LL;
  a2[7] = v28;
  return result;
}
