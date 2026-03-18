/*
 * XREFs of MiAgeWorkingSet @ 0x14030C870
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14030C260 (MiTrimOrAgeWorkingSet.c)
 *     MiForceAgeWorkingSet @ 0x140596904 (MiForceAgeWorkingSet.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140220C30 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiIsStoreProcess @ 0x1402365F4 (MiIsStoreProcess.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14024A9B0 (_tlgWriteEx_EtwWriteEx.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiWalkPageTables @ 0x14030CF90 (MiWalkPageTables.c)
 *     _tlgCreate1Sz_char @ 0x1403699D0 (_tlgCreate1Sz_char.c)
 *     MiGenerateRandomPte @ 0x1403747E4 (MiGenerateRandomPte.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140461A66 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14063D8B0 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAgeWorkingSet(__int64 a1, char a2, int a3, unsigned int a4)
{
  int v4; // r13d
  __int64 v7; // rdx
  int v8; // ebx
  unsigned __int64 v9; // r14
  unsigned int v10; // esi
  unsigned __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r13
  unsigned __int64 v14; // r14
  __int64 v15; // r8
  __int64 v16; // rbx
  _DWORD *v17; // r12
  int *v18; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v21; // eax
  _DWORD *v22; // rcx
  int v23; // eax
  int i; // ecx
  unsigned __int64 v25; // rdi
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  int v28; // eax
  unsigned __int64 v29; // rbx
  __int64 v30; // rcx
  _BYTE *Pool; // rdi
  _QWORD *v32; // r8
  __int64 v33; // r14
  __int64 v34; // rdx
  __int64 *v35; // rcx
  __int64 v36; // rax
  __int64 *v37; // r8
  unsigned __int64 j; // rdx
  __int64 v39; // rax
  int v40; // eax
  int v41; // r12d
  unsigned __int8 v42; // al
  int v43; // eax
  char v44; // al
  unsigned __int8 v45; // al
  int v46; // eax
  __int64 RandomPte; // rcx
  __int64 v48; // rax
  char v49; // dl
  __int64 v50; // r15
  int v51; // r8d
  ULONG v52; // r9d
  __int64 v53; // r10
  char v55; // [rsp+48h] [rbp-C0h]
  char v56; // [rsp+49h] [rbp-BFh] BYREF
  int v57; // [rsp+4Ch] [rbp-BCh]
  int v58; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v59; // [rsp+54h] [rbp-B4h]
  int v60; // [rsp+58h] [rbp-B0h]
  int v61; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v62; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v63; // [rsp+68h] [rbp-A0h]
  __int64 v64; // [rsp+70h] [rbp-98h] BYREF
  __int64 v65; // [rsp+78h] [rbp-90h] BYREF
  __int64 v66; // [rsp+80h] [rbp-88h] BYREF
  __int64 v67; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v68[32]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v69[22]; // [rsp+198h] [rbp+90h] BYREF
  _BYTE v70[192]; // [rsp+248h] [rbp+140h] BYREF
  _DWORD v71[68]; // [rsp+308h] [rbp+200h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+418h] [rbp+310h] BYREF
  char *v73; // [rsp+438h] [rbp+330h]
  __int64 v74; // [rsp+440h] [rbp+338h]
  char v75[16]; // [rsp+448h] [rbp+340h] BYREF
  int *v76; // [rsp+458h] [rbp+350h]
  __int64 v77; // [rsp+460h] [rbp+358h]
  __int64 *v78; // [rsp+468h] [rbp+360h]
  __int64 v79; // [rsp+470h] [rbp+368h]
  __int64 *v80; // [rsp+478h] [rbp+370h]
  __int64 v81; // [rsp+480h] [rbp+378h]
  __int64 *v82; // [rsp+488h] [rbp+380h]
  __int64 v83; // [rsp+490h] [rbp+388h]
  __int64 *v84; // [rsp+498h] [rbp+390h]
  __int64 v85; // [rsp+4A0h] [rbp+398h]
  __int64 *v86; // [rsp+4A8h] [rbp+3A0h]
  __int64 v87; // [rsp+4B0h] [rbp+3A8h]
  void *retaddr; // [rsp+510h] [rbp+408h]

  v4 = a3;
  v57 = a3;
  v55 = a2;
  memset(v70, 0, 0xB8uLL);
  memset(v68, 0, sizeof(v68));
  memset(v69, 0, sizeof(v69));
  memset(v71, 0, 0x108uLL);
  v8 = 4;
  v9 = *(_QWORD *)(a1 + 144);
  v10 = 0;
  v63 = *(_QWORD **)(a1 + 16);
  v11 = v63[4];
  v12 = 1LL;
  if ( v9 > v11 )
  {
    v13 = *(_QWORD *)(a1 + 16);
    v14 = v9 - v11;
    v15 = 10LL;
    if ( a4 )
      v15 = a4;
    v60 = v57 & 4;
    v59 = v15;
    if ( (v57 & 4) != 0 )
    {
      v16 = 0LL;
    }
    else
    {
      v17 = &unk_140C53D40;
      v18 = (int *)&unk_140C53D40;
      if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
        v18 = (int *)(a1 + 256);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        LOBYTE(v7) = -1;
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v18, v7);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v58 = 0;
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v21 = SchedulerAssist[6];
            SchedulerAssist[6] = v21 + 1;
            if ( v21 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset(v18, 0x1Fu) )
        {
          v22 = CurrentPrcb->SchedulerAssist;
          if ( v22 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v23 = v22[6] - 1;
              v22[6] = v23;
              if ( !v23 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          v58 = ExpWaitForSpinLockExclusiveAndAcquire(v18, 0xFFu);
        }
        for ( i = *v18; (*v18 & 0xBFFFFFFF) != 0x80000000; i = *v18 )
        {
          if ( (i & 0x40000000) == 0 )
            _InterlockedOr(v18, 0x40000000u);
          KeYieldProcessorEx(&v58, v7, v15, v12);
        }
      }
      if ( (v57 & 2) != 0 )
      {
        v16 = *(unsigned int *)(v13 + 24);
        v25 = v16 + v14;
        *(_DWORD *)(v13 + 24) = (v16 + v14) % v59;
      }
      else
      {
        v16 = *(unsigned int *)(v13 + 28);
        v25 = v16 + v14;
        *(_DWORD *)(v13 + 28) = (v16 + v14) % v59;
      }
      if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
        v17 = (_DWORD *)(a1 + 256);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v17, retaddr);
      else
        *v17 = 0;
      v26 = KeGetCurrentPrcb();
      v27 = v26->SchedulerAssist;
      if ( v27 )
      {
        if ( v26->NestingLevel <= 1u )
        {
          v28 = v27[6] - 1;
          v27[6] = v28;
          if ( !v28 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
      LODWORD(v15) = v59;
      if ( v25 < v14 )
        v16 = 0LL;
    }
    v29 = (unsigned int)v15 * (v14 + v16) / 0x3E8;
    if ( v29 > v14 )
      v29 = v14 * (unsigned int)v15 / 0x3E8;
    v30 = *(unsigned __int16 *)(a1 + 174);
    Pool = 0LL;
    v4 = v57;
    HIDWORD(v68[1]) = v15;
    v32 = *(_QWORD **)(qword_140C51F48 + 8 * v30);
    v33 = v32[2075];
    if ( (v57 & 3) != 0 )
    {
      v34 = v32[328];
      v35 = v32 + 360;
      v36 = v32[312];
      v37 = v32 + 415;
      for ( j = v36 + v34; v35 < v37; j += v39 )
      {
        v39 = *v35;
        v35 += 11;
      }
      if ( j + *v37 < *(_QWORD *)(v33 + 72) )
      {
        if ( *(_BYTE *)(a1 + 186) != 2 )
        {
          v40 = 3;
          if ( j >= *(_QWORD *)(v33 + 64) )
            v40 = 5;
          LODWORD(v68[1]) = v40;
        }
        if ( (*(_BYTE *)(a1 + 184) & 7) != 0 || !(unsigned int)MiIsStoreProcess(a1 - 1664) )
          WORD2(v68[0]) = *(_WORD *)(v33 + 2350);
      }
      if ( v29 <= 0x100 )
        goto LABEL_93;
      v41 = 509;
      if ( v29 < 0x1FD )
        v41 = v29;
      Pool = MiAllocatePool(64, 8LL * (unsigned int)(v41 - 256) + 2072, 0x73576D4Du);
      if ( !Pool )
      {
LABEL_93:
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v33 + 124), 1, 0) )
        {
          Pool = v70;
          v41 = 20;
        }
        else
        {
          Pool = (_BYTE *)(v33 + 128);
          v41 = 256;
        }
      }
      v42 = *(_BYTE *)(a1 + 184) & 7;
      if ( v42 )
        v43 = v42 < 2u ? 2 : 0;
      else
        v43 = 1;
      *((_DWORD *)Pool + 3) = 0;
      *(_DWORD *)Pool = v43;
      *((_WORD *)Pool + 2) = 0;
      *((_QWORD *)Pool + 2) = 0LL;
      *((_DWORD *)Pool + 2) = v41;
      *((_QWORD *)Pool + 3) = 0LL;
      if ( (*(_BYTE *)(a1 + 184) & 7) == 0 && *(_QWORD *)(a1 + 624) )
      {
        v71[1] = 32;
        v68[31] = v71;
      }
    }
    HIBYTE(v69[0]) = v55;
    v44 = *(_BYTE *)(a1 + 184);
    v69[3] = a1;
    LODWORD(v68[0]) = v4;
    v68[6] = v29;
    v68[7] = Pool;
    v45 = v44 & 7;
    if ( v45 )
      v46 = v45 < 2u ? 2 : 0;
    else
      v46 = 1;
    LODWORD(v68[8]) = v46;
    v69[21] = v68;
    v69[19] = MiAgePte;
    v69[20] = MiAgeWorkingSetTail;
    v68[9] = 20LL;
    WORD2(v68[8]) = 4;
    v68[10] = 0LL;
    v68[11] = 0LL;
    LODWORD(v69[0]) = 14;
    if ( v60 )
    {
      RandomPte = MiGenerateRandomPte(v69);
      v69[7] = RandomPte;
    }
    else
    {
      if ( (v4 & 2) != 0 )
        RandomPte = v63[2];
      else
        RandomPte = v63[1];
      v69[7] = RandomPte;
    }
    v48 = v69[5];
    if ( !RandomPte )
      v48 = -1LL;
    v69[5] = v48;
    v8 = MiWalkPageTables(v69);
    if ( Pool )
    {
      if ( Pool == (_BYTE *)(v33 + 128) )
      {
        _InterlockedAnd((volatile signed __int32 *)(v33 + 124), 0);
      }
      else if ( Pool != v70 )
      {
        ExFreePoolWithTag(Pool, 0);
      }
    }
    if ( v8 == 5 )
      ++*(_DWORD *)(v33 + 2568);
  }
  if ( *(_QWORD *)&qword_140C53448 )
  {
    v49 = *(_BYTE *)(a1 + 184) & 7;
    if ( v49 )
      v50 = 0LL;
    else
      v50 = a1 - 216;
    if ( **(_DWORD **)&qword_140C53448 > 5u
      && (*(_BYTE *)(*(_QWORD *)&qword_140C53448 + 16LL) & 1) != 0
      && (*(_QWORD *)(*(_QWORD *)&qword_140C53448 + 24LL) & 1LL) == *(_QWORD *)(*(_QWORD *)&qword_140C53448 + 24LL) )
    {
      v56 = v49;
      v73 = &v56;
      v74 = 1LL;
      tlgCreate1Sz_char(v75, v50);
      v61 = v51;
      v76 = &v61;
      v64 = v68[5];
      v77 = 4LL;
      v78 = &v64;
      v65 = v68[2];
      v80 = &v65;
      v66 = v68[4];
      v82 = &v66;
      v67 = v68[3];
      v84 = &v67;
      v86 = &v62;
      v79 = 8LL;
      v81 = 8LL;
      v83 = 8LL;
      v85 = 8LL;
      LODWORD(v62) = v4;
      v87 = 4LL;
      tlgWriteEx_EtwWriteEx(v53, (unsigned __int8 *)&word_14002CD5A, 0LL, v52, 0, 0, 0xAu, &v72);
    }
  }
  LOBYTE(v10) = v8 == 5;
  return v10;
}
