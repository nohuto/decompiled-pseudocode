/*
 * XREFs of CcSetVacbLargeOffset @ 0x14028D58C
 * Callers:
 *     CcUnmapVacbArray @ 0x1402853B0 (CcUnmapVacbArray.c)
 *     SetVacb @ 0x140285740 (SetVacb.c)
 *     CcAdjustVacbLevelLockCount @ 0x14028D878 (CcAdjustVacbLevelLockCount.c)
 * Callees:
 *     CcFreeUnusedVacbLevels @ 0x1402477A4 (CcFreeUnusedVacbLevels.c)
 *     CcAllocateVacbLevels @ 0x140247914 (CcAllocateVacbLevels.c)
 *     CcAllocateVacbLevel @ 0x1402479B8 (CcAllocateVacbLevel.c)
 *     VacbLevelReference @ 0x14028D920 (VacbLevelReference.c)
 *     CcGetBcbListHeadLargeOffset @ 0x14028DDD0 (CcGetBcbListHeadLargeOffset.c)
 *     CcDeallocateVacbLevel @ 0x1403877FC (CcDeallocateVacbLevel.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall CcSetVacbLargeOffset(__int64 a1, __int64 a2, unsigned __int64 a3, __int128 *a4)
{
  __int64 v5; // r15
  __int64 v6; // r12
  unsigned int v7; // ebx
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // r8d
  unsigned int v12; // r10d
  __int64 v13; // rdx
  _QWORD *VacbLevel; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  int v17; // esi
  _DWORD *v18; // rax
  __int128 *v19; // r9
  _DWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int v25; // eax
  int v26; // eax
  BOOL v27; // esi
  _DWORD *v28; // rax
  __int64 BcbListHeadLargeOffset; // rax
  __int64 i; // rcx
  _QWORD *v31; // r9
  _QWORD *v32; // rdx
  __int64 v33; // r10
  _QWORD *v34; // rax
  _QWORD *v35; // rcx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  int v38; // [rsp+20h] [rbp-89h]
  __int128 *v39; // [rsp+28h] [rbp-81h]
  unsigned int v40; // [rsp+30h] [rbp-79h]
  __int128 v41; // [rsp+38h] [rbp-71h] BYREF
  __int128 v42; // [rsp+48h] [rbp-61h]
  __int64 v43; // [rsp+58h] [rbp-51h]
  __int64 v44; // [rsp+60h] [rbp-49h]
  unsigned __int64 v45; // [rsp+68h] [rbp-41h]
  _OWORD v46[3]; // [rsp+70h] [rbp-39h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-9h]
  _DWORD v48[8]; // [rsp+A8h] [rbp-1h]

  v43 = a2;
  v39 = a4;
  v45 = a3;
  v5 = 0LL;
  v47 = 0LL;
  v6 = a2;
  v7 = 0;
  v8 = *(_QWORD **)(a1 + 88);
  v9 = *(_QWORD *)(a1 + 32);
  v10 = 25;
  memset(v46, 0, sizeof(v46));
  v41 = 0LL;
  v42 = 0LL;
  do
  {
    v11 = v10;
    v38 = v10;
    v10 += 7;
    ++v7;
  }
  while ( v9 > 1LL << v10 );
  do
  {
    v40 = v7;
    v12 = v7;
    v13 = v6 >> v11;
    --v7;
    if ( (unsigned int)v5 >= 7 )
      return 0;
    v48[v5] = v13;
    *((_QWORD *)v46 + v5) = v8;
    v5 = (unsigned int)(v5 + 1);
    v44 = (unsigned int)v13;
    VacbLevel = (_QWORD *)v8[(unsigned int)v13];
    if ( !VacbLevel )
    {
      v26 = *(_DWORD *)(a1 + 152) & 0x200;
      v27 = v26 && !v7;
      if ( !a4 )
      {
        *(_QWORD *)&v42 = 0LL;
        DWORD2(v42) = 0;
        *((_QWORD *)&v41 + 1) = &v41;
        *(_QWORD *)&v41 = &v41;
        if ( !CcAllocateVacbLevels(v12, v26 != 0, (__int64)&v41) )
          return 0;
        a4 = &v41;
        v39 = &v41;
      }
      VacbLevel = CcAllocateVacbLevel((__int64)a4, v27);
      if ( v27 )
      {
        BcbListHeadLargeOffset = CcGetBcbListHeadLargeOffset(a1, v43, 0LL);
        for ( i = *(_QWORD *)(BcbListHeadLargeOffset + 8); *(_WORD *)(i - 16) == 765; i = *(_QWORD *)(i + 8) )
          BcbListHeadLargeOffset = i;
        v31 = *(_QWORD **)(BcbListHeadLargeOffset + 8);
        v32 = VacbLevel + 128;
        *(_QWORD *)(BcbListHeadLargeOffset + 8) = VacbLevel + 128;
        v33 = 63LL;
        VacbLevel[128] = BcbListHeadLargeOffset;
        do
        {
          v34 = v32 + 2;
          v35 = v32;
          v32[1] = v32 + 2;
          v32 = v34;
          *v34 = v35;
          --v33;
        }
        while ( v33 );
        v34[1] = v31;
        *v31 = v34;
      }
      v8[v44] = VacbLevel;
      v28 = (_DWORD *)VacbLevelReference(a1, v8, v40);
      a4 = v39;
      v11 = v38;
      ++*v28;
    }
    v15 = 1LL << v11;
    v11 -= 7;
    v38 = v11;
    v6 &= v15 - 1;
    v8 = VacbLevel;
  }
  while ( v7 );
  v16 = v45;
  if ( v45 < 0xFFFFFFFFFFFFFFFEuLL )
  {
    v17 = 0;
    VacbLevel[(unsigned int)(v6 >> v11)] = v45;
    if ( v16 )
      goto LABEL_8;
LABEL_13:
    while ( 1 )
    {
      v21 = (_DWORD *)VacbLevelReference(a1, v8, v7);
      if ( v17 )
        --v21[1];
      else
        --*v21;
      v17 = 0;
      if ( *(_QWORD *)VacbLevelReference(v23, v22, v24) || !(_DWORD)v5 )
        break;
      v25 = v7;
      v5 = (unsigned int)(v5 - 1);
      ++v7;
      if ( !v25 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      {
        v36 = v8[128];
        v37 = (_QWORD *)v8[255];
        *(_QWORD *)(v36 + 8) = v37;
        *v37 = v36;
      }
      CcDeallocateVacbLevel(v8);
      v8 = (_QWORD *)*((_QWORD *)v46 + v5);
      v8[v48[v5]] = 0LL;
    }
    v19 = v39;
    goto LABEL_10;
  }
  v17 = 1;
  if ( v45 == -2LL )
    goto LABEL_13;
LABEL_8:
  v18 = (_DWORD *)VacbLevelReference(a1, VacbLevel, 0LL);
  if ( v17 )
    ++v18[1];
  else
    ++*v18;
LABEL_10:
  if ( v19 == &v41 )
    CcFreeUnusedVacbLevels((__int64)v19);
  return 1;
}
