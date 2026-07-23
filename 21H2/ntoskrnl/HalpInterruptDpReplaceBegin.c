/*
 * XREFs of HalpInterruptDpReplaceBegin @ 0x1404D6C9C
 * Callers:
 *     HalpDpReplaceBegin @ 0x140866610 (HalpDpReplaceBegin.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140269E20 (KeGetProcessorIndexFromNumber.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpInterruptDpReplaceBegin(
        char *a1,
        char *a2,
        ULONG *a3,
        unsigned int a4,
        char a5,
        char a6,
        _DWORD *a7)
{
  int v8; // ebx
  __int64 v9; // r9
  char *v11; // r11
  char *v12; // r12
  char *v13; // r8
  unsigned int v14; // edx
  ULONG_PTR v15; // rcx
  unsigned int v16; // r15d
  __int64 v17; // r13
  int v18; // r12d
  unsigned int v19; // esi
  ULONG_PTR v20; // rcx
  __int64 (__fastcall *v21)(__int64, char *, __int128 *, __int64); // r15
  __int64 v22; // r13
  unsigned int v23; // esi
  char *v24; // r14
  __int64 v25; // r12
  __int64 v26; // r9
  unsigned int v27; // r14d
  char *v28; // r12
  int v29; // esi
  int v30; // eax
  __int64 v31; // r9
  int v32; // r12d
  __int64 v33; // r9
  unsigned __int64 i; // rdx
  unsigned __int64 v35; // rcx
  ULONG_PTR v36; // rcx
  ULONG_PTR v37; // rcx
  ULONG_PTR v38; // rcx
  ULONG_PTR v39; // rcx
  ULONG_PTR v40; // rcx
  ULONG_PTR v41; // rcx
  ULONG_PTR v42; // rcx
  ULONG_PTR v43; // rcx
  ULONG_PTR v44; // rcx
  ULONG_PTR v45; // rcx
  int v47; // [rsp+30h] [rbp-40h]
  int v48; // [rsp+30h] [rbp-40h]
  __int128 v49; // [rsp+38h] [rbp-38h] BYREF
  __int64 v50; // [rsp+48h] [rbp-28h]
  __int128 v51; // [rsp+50h] [rbp-20h] BYREF
  __int64 v52; // [rsp+60h] [rbp-10h]
  char *v53; // [rsp+B0h] [rbp+40h]
  int v55; // [rsp+C8h] [rbp+58h]

  v53 = a1;
  v55 = 0;
  v8 = 0;
  v50 = 0LL;
  v9 = 0LL;
  v52 = 0LL;
  v11 = a2;
  v12 = a1;
  v49 = 0LL;
  *a7 = 0;
  v51 = 0LL;
  if ( a4 )
  {
    v13 = a2;
    while ( 1 )
    {
      v14 = 0;
      if ( (_DWORD)HalpInterruptProcessorCount )
        break;
LABEL_7:
      v9 = (unsigned int)(v9 + 1);
      v13 += 4;
      if ( (unsigned int)v9 >= a4 )
        goto LABEL_8;
    }
    while ( 1 )
    {
      v15 = HalpInterruptProcessorState + ((unsigned __int64)v14 << 6);
      if ( *(_BYTE *)(v15 + 13) )
      {
        if ( *(_DWORD *)v15 == *(_DWORD *)v13 )
          break;
      }
      if ( ++v14 >= (unsigned int)HalpInterruptProcessorCount )
        goto LABEL_7;
    }
    HalpInterruptLastProblem = 24;
    return (unsigned int)-1073741811;
  }
LABEL_8:
  v16 = 0;
  if ( a4 )
  {
    v17 = v12 - (char *)a3;
    while ( 1 )
    {
      v18 = HalpInterruptProcessorCount;
      v19 = 0;
      if ( (_DWORD)HalpInterruptProcessorCount )
      {
        while ( 1 )
        {
          v20 = HalpInterruptProcessorState + ((unsigned __int64)v19 << 6);
          if ( *(_BYTE *)(v20 + 12) )
          {
            if ( *(_BYTE *)(v20 + 13) && *(_DWORD *)v20 == *(ULONG *)((char *)a3 + v17) )
              break;
          }
          if ( ++v19 >= (unsigned int)HalpInterruptProcessorCount )
            goto LABEL_19;
        }
        *a3 = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(v20 + 16));
      }
LABEL_19:
      if ( v19 == v18 )
        break;
      ++v16;
      ++a3;
      if ( v16 >= a4 )
      {
        v11 = a2;
        v12 = v53;
        goto LABEL_22;
      }
    }
    HalpInterruptLastProblem = 21;
    return (unsigned int)-1073741811;
  }
LABEL_22:
  v21 = *(__int64 (__fastcall **)(__int64, char *, __int128 *, __int64))(HalpInterruptController + 144);
  v22 = *(_QWORD *)(HalpInterruptController + 16);
  if ( a4 && v21 && !HalpInterruptPhysicalModeOnly && !a5 )
  {
    v23 = 0;
    v24 = v11;
    v25 = v12 - v11;
    do
    {
      LOBYTE(v9) = 1;
      v8 = v21(v22, &v24[v25], &v51, v9);
      if ( v8 < 0 )
      {
        v44 = HalpInterruptController;
        HalpInterruptLastProblem = 9;
        if ( HalpInterruptController )
        {
          *(_DWORD *)(HalpInterruptController + 292) = 9;
          *(_QWORD *)(v44 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\replace.c";
          *(_DWORD *)(v44 + 296) = v8;
          *(_DWORD *)(v44 + 312) = 236;
        }
        return (unsigned int)v8;
      }
      LOBYTE(v26) = 1;
      v8 = v21(v22, v24, &v49, v26);
      if ( v8 < 0 )
      {
        v43 = HalpInterruptController;
        HalpInterruptLastProblem = 9;
        if ( HalpInterruptController )
        {
          *(_DWORD *)(HalpInterruptController + 292) = 9;
          *(_QWORD *)(v43 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\replace.c";
          *(_DWORD *)(v43 + 296) = v8;
          *(_DWORD *)(v43 + 312) = 249;
        }
        return (unsigned int)v8;
      }
      if ( DWORD2(v51) != DWORD2(v49) )
        break;
      v24 += 4;
      ++v23;
    }
    while ( v23 < a4 );
    if ( v23 >= a4 )
      goto LABEL_73;
    v27 = 0;
    while ( 2 )
    {
      v28 = v53;
      v29 = 0;
      do
      {
        LOBYTE(v9) = 1;
        v47 = v29;
        v8 = v21(v22, v28, &v51, v9);
        if ( v8 < 0 )
        {
          v42 = HalpInterruptController;
          HalpInterruptLastProblem = 9;
          if ( HalpInterruptController )
          {
            *(_DWORD *)(HalpInterruptController + 292) = 9;
            *(_QWORD *)(v42 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\replace.c";
            *(_DWORD *)(v42 + 296) = v8;
            *(_DWORD *)(v42 + 312) = 297;
          }
          return (unsigned int)v8;
        }
        v30 = v55;
        if ( !v29 )
          v30 = DWORD2(v51);
        v28 += 4;
        ++v27;
        v55 = v30;
        ++v29;
        v53 = v28;
      }
      while ( v27 < a4 && DWORD2(v51) == v30 );
      LOBYTE(v9) = 1;
      v8 = v21(v22, a2, &v49, v9);
      if ( v8 < 0 )
      {
        v41 = HalpInterruptController;
        HalpInterruptLastProblem = 9;
        if ( HalpInterruptController )
        {
          *(_DWORD *)(HalpInterruptController + 292) = 9;
          *(_QWORD *)(v41 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\replace.c";
          *(_DWORD *)(v41 + 296) = v8;
          *(_DWORD *)(v41 + 312) = 337;
        }
        return (unsigned int)v8;
      }
      LOBYTE(v31) = 1;
      v32 = DWORD2(v49);
      v8 = v21(v22, &a2[4 * v47], &v49, v31);
      if ( v8 < 0 )
      {
        v40 = HalpInterruptController;
        HalpInterruptLastProblem = 9;
        if ( HalpInterruptController )
        {
          *(_DWORD *)(HalpInterruptController + 292) = 9;
          *(_QWORD *)(v40 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\replace.c";
          *(_DWORD *)(v40 + 296) = v8;
          *(_DWORD *)(v40 + 312) = 354;
        }
        return (unsigned int)v8;
      }
      v48 = DWORD2(v49);
      if ( v32 == DWORD2(v49) )
      {
        for ( i = HalpInterruptClusterData; i < HalpInterruptClusterDataEnd; i += 24LL )
        {
          if ( *(_DWORD *)i == v32 )
          {
            v35 = *(_QWORD *)(i + 8) - ((*(_QWORD *)(i + 8) >> 1) & 0x5555555555555555LL);
            if ( (unsigned int)((0x101010101010101LL
                               * (((v35 & 0x3333333333333333LL)
                                 + ((v35 >> 2) & 0x3333333333333333LL)
                                 + (((v35 & 0x3333333333333333LL) + ((v35 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 )
            {
              v37 = HalpInterruptController;
              HalpInterruptLastProblem = 26;
              if ( HalpInterruptController )
              {
                *(_DWORD *)(HalpInterruptController + 296) = 0;
                *(_DWORD *)(v37 + 292) = 26;
                *(_QWORD *)(v37 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\replace.c";
                *(_DWORD *)(v37 + 312) = 397;
              }
              return (unsigned int)-1073741811;
            }
            break;
          }
        }
        if ( v29 )
        {
          HalpInterruptLastProblem = 25;
          break;
        }
        if ( v27 >= a4 )
          goto LABEL_73;
        LOBYTE(v33) = 1;
        v8 = v21(v22, a2, &v49, v33);
        if ( v8 < 0 )
        {
          v38 = HalpInterruptController;
          HalpInterruptLastProblem = 9;
          if ( HalpInterruptController )
          {
            *(_DWORD *)(HalpInterruptController + 292) = 9;
            *(_QWORD *)(v38 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\replace.c";
            *(_DWORD *)(v38 + 296) = v8;
            *(_DWORD *)(v38 + 312) = 428;
          }
          return (unsigned int)v8;
        }
        if ( v48 != DWORD2(v49) )
          continue;
        v36 = HalpInterruptController;
        HalpInterruptLastProblem = 27;
        if ( HalpInterruptController )
        {
          *(_DWORD *)(HalpInterruptController + 296) = 0;
          *(_DWORD *)(v36 + 292) = 27;
          *(_QWORD *)(v36 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\replace.c";
          *(_DWORD *)(v36 + 312) = 449;
        }
      }
      else
      {
        v39 = HalpInterruptController;
        HalpInterruptLastProblem = 25;
        if ( HalpInterruptController )
        {
          *(_DWORD *)(HalpInterruptController + 296) = 0;
          *(_QWORD *)(v39 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\replace.c";
          *(_DWORD *)(v39 + 292) = 25;
          *(_DWORD *)(v39 + 312) = 372;
        }
      }
      break;
    }
    return (unsigned int)-1073741811;
  }
LABEL_73:
  if ( a6 && a4 )
  {
    if ( a5 || !HalpInterruptPhysicalModeOnly )
    {
      *a7 = *(_DWORD *)(HalpInterruptController + 288);
      return (unsigned int)v8;
    }
    v45 = HalpInterruptController;
    HalpInterruptLastProblem = 28;
    if ( HalpInterruptController )
    {
      *(_DWORD *)(HalpInterruptController + 296) = 0;
      *(_DWORD *)(v45 + 292) = 28;
      *(_QWORD *)(v45 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\replace.c";
      *(_DWORD *)(v45 + 312) = 476;
    }
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v8;
}
