/*
 * XREFs of CcSetVacbLargeOffset @ 0x1402FA474
 * Callers:
 *     CcUnmapVacbArray @ 0x14029A450 (CcUnmapVacbArray.c)
 *     SetVacb @ 0x14029AF60 (SetVacb.c)
 *     CcAdjustVacbLevelLockCount @ 0x1402FA77C (CcAdjustVacbLevelLockCount.c)
 * Callees:
 *     CcGetBcbListHeadLargeOffset @ 0x1402A1D30 (CcGetBcbListHeadLargeOffset.c)
 *     VacbLevelReference @ 0x1402FA824 (VacbLevelReference.c)
 *     CcFreeUnusedVacbLevels @ 0x1402FA84C (CcFreeUnusedVacbLevels.c)
 *     CcAllocateVacbLevel @ 0x1402FA8A8 (CcAllocateVacbLevel.c)
 *     CcAllocateVacbLevels @ 0x1402FA92C (CcAllocateVacbLevels.c)
 *     CcDeallocateVacbLevel @ 0x1402FAAA8 (CcDeallocateVacbLevel.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

char __fastcall CcSetVacbLargeOffset(__int64 a1, __int64 a2, unsigned __int64 a3, __int128 *a4)
{
  int v6; // ecx
  __int128 *v7; // r10
  __int64 v8; // r15
  _QWORD *v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // r8
  int v12; // r9d
  unsigned int v13; // r11d
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 VacbLevel; // r14
  char v17; // cl
  int v18; // r12d
  _DWORD *v19; // rax
  __int128 *v20; // r10
  _DWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v26; // eax
  int v27; // eax
  unsigned int v28; // r12d
  _DWORD *v29; // rax
  __int64 BcbListHeadLargeOffset; // rax
  __int64 i; // rcx
  _QWORD *v32; // r9
  _QWORD *v33; // rdx
  __int64 v34; // r10
  _QWORD *v35; // rax
  _QWORD *v36; // rcx
  __int64 v37; // rcx
  _QWORD *v38; // rax
  int v39; // [rsp+20h] [rbp-89h]
  unsigned int v40; // [rsp+24h] [rbp-85h]
  __int128 *v41; // [rsp+30h] [rbp-79h]
  __int64 v42; // [rsp+38h] [rbp-71h]
  __int128 v43; // [rsp+40h] [rbp-69h] BYREF
  __int128 v44; // [rsp+50h] [rbp-59h]
  __int64 v45; // [rsp+60h] [rbp-49h]
  __int64 v46; // [rsp+68h] [rbp-41h]
  _OWORD v47[3]; // [rsp+70h] [rbp-39h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-9h]
  _DWORD v49[8]; // [rsp+A8h] [rbp-1h]

  v41 = a4;
  v42 = a2;
  v48 = 0LL;
  v6 = 25;
  v45 = a2;
  v7 = a4;
  LODWORD(v8) = 0;
  v9 = *(_QWORD **)(a1 + 88);
  v10 = 0;
  v11 = *(_QWORD *)(a1 + 32);
  memset(v47, 0, sizeof(v47));
  v43 = 0LL;
  v44 = 0LL;
  do
  {
    v12 = v6;
    v39 = v6;
    v6 += 7;
    ++v10;
  }
  while ( v11 > 1LL << v6 );
  do
  {
    v40 = v10;
    v13 = v10;
    v14 = a2 >> v12;
    --v10;
    if ( (unsigned int)v8 >= 7 )
      return 0;
    v15 = (unsigned int)v8;
    LODWORD(v8) = v8 + 1;
    v49[v15] = v14;
    *((_QWORD *)v47 + v15) = v9;
    v46 = (unsigned int)v14;
    VacbLevel = v9[(unsigned int)v14];
    if ( !VacbLevel )
    {
      v27 = *(_DWORD *)(a1 + 152) & 0x200;
      if ( !v27 || (v28 = 1, v10) )
        v28 = 0;
      if ( !v7 )
      {
        *(_QWORD *)&v44 = 0LL;
        *((_QWORD *)&v43 + 1) = &v43;
        DWORD2(v44) = 0;
        *(_QWORD *)&v43 = &v43;
        LOBYTE(v14) = v27 != 0;
        if ( !(unsigned __int8)CcAllocateVacbLevels(v13, v14, &v43) )
          return 0;
        v7 = &v43;
        v41 = &v43;
      }
      VacbLevel = CcAllocateVacbLevel(v7, v28);
      if ( v28 )
      {
        BcbListHeadLargeOffset = CcGetBcbListHeadLargeOffset(a1, v45, 0);
        for ( i = *(_QWORD *)(BcbListHeadLargeOffset + 8); *(_WORD *)(i - 16) == 765; i = *(_QWORD *)(i + 8) )
          BcbListHeadLargeOffset = i;
        v32 = *(_QWORD **)(BcbListHeadLargeOffset + 8);
        v33 = (_QWORD *)(VacbLevel + 1024);
        *(_QWORD *)(BcbListHeadLargeOffset + 8) = VacbLevel + 1024;
        v34 = 63LL;
        *(_QWORD *)(VacbLevel + 1024) = BcbListHeadLargeOffset;
        do
        {
          v35 = v33 + 2;
          v36 = v33;
          v33[1] = v33 + 2;
          v33 = v35;
          *v35 = v36;
          --v34;
        }
        while ( v34 );
        v35[1] = v32;
        *v32 = v35;
      }
      v9[v46] = VacbLevel;
      v29 = (_DWORD *)VacbLevelReference(a1, v9, v40);
      v12 = v39;
      v7 = v41;
      ++*v29;
    }
    v17 = v12;
    v12 -= 7;
    v9 = (_QWORD *)VacbLevel;
    v39 = v12;
    a2 = ((1LL << v17) - 1) & v42;
    v42 = a2;
  }
  while ( v10 );
  if ( a3 >= 0xFFFFFFFFFFFFFFFEuLL )
  {
    v18 = 1;
    if ( a3 == -2LL )
      a3 = 0LL;
  }
  else
  {
    v18 = 0;
    *(_QWORD *)(VacbLevel + 8LL * (unsigned int)(a2 >> v12)) = a3;
  }
  if ( a3 )
  {
    v19 = (_DWORD *)VacbLevelReference(a1, VacbLevel, 0LL);
    if ( v18 )
      ++v19[1];
    else
      ++*v19;
  }
  else
  {
    while ( 1 )
    {
      v22 = (_DWORD *)VacbLevelReference(a1, v9, v10);
      if ( v18 )
        --v22[1];
      else
        --*v22;
      v18 = a3;
      if ( *(_QWORD *)VacbLevelReference(v24, v23, v25) || !(_DWORD)v8 )
        break;
      v26 = v10;
      v8 = (unsigned int)(v8 - 1);
      ++v10;
      if ( !v26 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      {
        v37 = v9[128];
        v38 = (_QWORD *)v9[255];
        *(_QWORD *)(v37 + 8) = v38;
        *v38 = v37;
      }
      CcDeallocateVacbLevel(v9);
      v9 = (_QWORD *)*((_QWORD *)v47 + v8);
      v9[v49[v8]] = a3;
    }
    v20 = v41;
  }
  if ( v20 == &v43 )
    CcFreeUnusedVacbLevels(v20);
  return 1;
}
