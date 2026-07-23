/*
 * XREFs of CcSetVacbLargeOffset @ 0x1403000FC
 * Callers:
 *     CcAdjustVacbLevelLockCount @ 0x140300404 (CcAdjustVacbLevelLockCount.c)
 *     CcUnmapVacbArray @ 0x14031DBC0 (CcUnmapVacbArray.c)
 *     SetVacb @ 0x14031E6D0 (SetVacb.c)
 * Callees:
 *     CcFreeUnusedVacbLevels @ 0x140213140 (CcFreeUnusedVacbLevels.c)
 *     CcAllocateVacbLevel @ 0x14021319C (CcAllocateVacbLevel.c)
 *     CcAllocateVacbLevels @ 0x140213284 (CcAllocateVacbLevels.c)
 *     CcDeallocateVacbLevel @ 0x14021343C (CcDeallocateVacbLevel.c)
 *     VacbLevelReference @ 0x1403004AC (VacbLevelReference.c)
 *     CcGetBcbListHeadLargeOffset @ 0x140329330 (CcGetBcbListHeadLargeOffset.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
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
  _QWORD *VacbLevel; // r14
  char v17; // cl
  int v18; // r12d
  _DWORD *v19; // rax
  __int128 *v20; // r10
  _DWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // r12d
  _DWORD *v30; // rax
  __int64 BcbListHeadLargeOffset; // rax
  __int64 i; // rcx
  _QWORD *v33; // r9
  _QWORD *v34; // rdx
  __int64 v35; // r10
  _QWORD *v36; // rax
  _QWORD *v37; // rcx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  int v40; // [rsp+20h] [rbp-89h]
  unsigned int v41; // [rsp+24h] [rbp-85h]
  __int128 *v42; // [rsp+30h] [rbp-79h]
  __int64 v43; // [rsp+38h] [rbp-71h]
  __int128 v44; // [rsp+40h] [rbp-69h] BYREF
  __int128 v45; // [rsp+50h] [rbp-59h]
  __int64 v46; // [rsp+60h] [rbp-49h]
  __int64 v47; // [rsp+68h] [rbp-41h]
  _OWORD v48[3]; // [rsp+70h] [rbp-39h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-9h]
  _DWORD v50[8]; // [rsp+A8h] [rbp-1h]

  v42 = a4;
  v43 = a2;
  v49 = 0LL;
  v6 = 25;
  v46 = a2;
  v7 = a4;
  LODWORD(v8) = 0;
  v9 = *(_QWORD **)(a1 + 88);
  v10 = 0;
  v11 = *(_QWORD *)(a1 + 32);
  memset(v48, 0, sizeof(v48));
  v44 = 0LL;
  v45 = 0LL;
  do
  {
    v12 = v6;
    v40 = v6;
    v6 += 7;
    ++v10;
  }
  while ( v11 > 1LL << v6 );
  do
  {
    v41 = v10;
    v13 = v10;
    v14 = a2 >> v12;
    --v10;
    if ( (unsigned int)v8 >= 7 )
      return 0;
    v15 = (unsigned int)v8;
    LODWORD(v8) = v8 + 1;
    v50[v15] = v14;
    *((_QWORD *)v48 + v15) = v9;
    v47 = (unsigned int)v14;
    VacbLevel = (_QWORD *)v9[(unsigned int)v14];
    if ( !VacbLevel )
    {
      v28 = *(_DWORD *)(a1 + 152) & 0x200;
      if ( !v28 || (v29 = 1, v10) )
        v29 = 0;
      if ( !v7 )
      {
        *(_QWORD *)&v45 = 0LL;
        *((_QWORD *)&v44 + 1) = &v44;
        DWORD2(v45) = 0;
        *(_QWORD *)&v44 = &v44;
        if ( !CcAllocateVacbLevels(v13, v28 != 0, (__int64)&v44) )
          return 0;
        v7 = &v44;
        v42 = &v44;
      }
      VacbLevel = CcAllocateVacbLevel((__int64)v7, v29);
      if ( v29 )
      {
        BcbListHeadLargeOffset = CcGetBcbListHeadLargeOffset(a1, v46, 0LL);
        for ( i = *(_QWORD *)(BcbListHeadLargeOffset + 8); *(_WORD *)(i - 16) == 765; i = *(_QWORD *)(i + 8) )
          BcbListHeadLargeOffset = i;
        v33 = *(_QWORD **)(BcbListHeadLargeOffset + 8);
        v34 = VacbLevel + 128;
        *(_QWORD *)(BcbListHeadLargeOffset + 8) = VacbLevel + 128;
        v35 = 63LL;
        VacbLevel[128] = BcbListHeadLargeOffset;
        do
        {
          v36 = v34 + 2;
          v37 = v34;
          v34[1] = v34 + 2;
          v34 = v36;
          *v36 = v37;
          --v35;
        }
        while ( v35 );
        v36[1] = v33;
        *v33 = v36;
      }
      v9[v47] = VacbLevel;
      v30 = (_DWORD *)VacbLevelReference(a1, v9, v41);
      v12 = v40;
      v7 = v42;
      ++*v30;
    }
    v17 = v12;
    v12 -= 7;
    v9 = VacbLevel;
    v40 = v12;
    a2 = ((1LL << v17) - 1) & v43;
    v43 = a2;
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
    VacbLevel[(unsigned int)(a2 >> v12)] = a3;
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
      v27 = a3;
      if ( !v26 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      {
        v38 = v9[128];
        v27 = 1;
        v39 = (_QWORD *)v9[255];
        *(_QWORD *)(v38 + 8) = v39;
        *v39 = v38;
      }
      CcDeallocateVacbLevel(v9, v27);
      v9 = (_QWORD *)*((_QWORD *)v48 + v8);
      v9[v50[v8]] = a3;
    }
    v20 = v42;
  }
  if ( v20 == &v44 )
    CcFreeUnusedVacbLevels((__int64)v20);
  return 1;
}
