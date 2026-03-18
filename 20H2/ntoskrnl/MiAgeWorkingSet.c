/*
 * XREFs of MiAgeWorkingSet @ 0x140269E60
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140269570 (MiTrimOrAgeWorkingSet.c)
 *     MiForceAgeWorkingSet @ 0x1405398C0 (MiForceAgeWorkingSet.c)
 * Callees:
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     _tlgCreate1Sz_char @ 0x14023CD10 (_tlgCreate1Sz_char.c)
 *     MiWalkPageTables @ 0x14026A5E0 (MiWalkPageTables.c)
 *     KxWaitForLockOwnerShip @ 0x1402950A0 (KxWaitForLockOwnerShip.c)
 *     MiGenerateRandomPte @ 0x14031B1FC (MiGenerateRandomPte.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140330EEC (_tlgWriteEx_EtwWriteEx.c)
 *     MiIsStoreProcess @ 0x140341D60 (MiIsStoreProcess.c)
 *     KxWaitForLockChainValid @ 0x14035D0F0 (KxWaitForLockChainValid.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051488C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051494C (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

_BOOL8 __fastcall MiAgeWorkingSet(__int64 a1, char a2, int a3, unsigned int a4)
{
  __int64 v7; // r8
  int v8; // r15d
  unsigned __int64 v9; // r14
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  signed __int32 v12; // r11d
  unsigned __int64 v13; // r14
  unsigned int v14; // ebx
  char v15; // al
  volatile signed __int64 *v16; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 v19; // r13
  unsigned __int64 v20; // rsi
  __int64 v21; // rax
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  unsigned __int64 v24; // rsi
  unsigned __int128 v25; // rax
  unsigned __int64 v26; // rsi
  __int64 v27; // rcx
  _BYTE *Pool; // rbx
  _QWORD *v29; // r8
  __int64 v30; // r14
  __int64 v31; // rcx
  int v32; // r15d
  unsigned __int8 v33; // al
  int v34; // eax
  char v35; // al
  unsigned __int8 v36; // al
  int v37; // eax
  __int64 RandomPte; // rax
  char v39; // dl
  const CHAR *v40; // rdi
  int v43; // eax
  int v44; // eax
  int v45; // r8d
  int v46; // r10d
  char v48; // [rsp+41h] [rbp-4C7h] BYREF
  __int64 v49; // [rsp+48h] [rbp-4C0h]
  __int64 v50; // [rsp+50h] [rbp-4B8h] BYREF
  volatile signed __int64 *v51; // [rsp+58h] [rbp-4B0h]
  __int64 v52; // [rsp+60h] [rbp-4A8h]
  int v53; // [rsp+68h] [rbp-4A0h]
  int v54; // [rsp+6Ch] [rbp-49Ch] BYREF
  int v55; // [rsp+70h] [rbp-498h] BYREF
  __int64 v56; // [rsp+78h] [rbp-490h] BYREF
  __int64 v57; // [rsp+80h] [rbp-488h] BYREF
  __int64 v58; // [rsp+88h] [rbp-480h] BYREF
  __int64 v59; // [rsp+90h] [rbp-478h] BYREF
  _QWORD v60[32]; // [rsp+A0h] [rbp-468h] BYREF
  _QWORD v61[22]; // [rsp+1A0h] [rbp-368h] BYREF
  _BYTE v62[192]; // [rsp+250h] [rbp-2B8h] BYREF
  _DWORD v63[68]; // [rsp+310h] [rbp-1F8h] BYREF
  __int64 v64[6]; // [rsp+420h] [rbp-E8h] BYREF
  char v65[16]; // [rsp+450h] [rbp-B8h] BYREF
  int *v66; // [rsp+460h] [rbp-A8h]
  __int64 v67; // [rsp+468h] [rbp-A0h]
  __int64 *v68; // [rsp+470h] [rbp-98h]
  __int64 v69; // [rsp+478h] [rbp-90h]
  __int64 *v70; // [rsp+480h] [rbp-88h]
  __int64 v71; // [rsp+488h] [rbp-80h]
  __int64 *v72; // [rsp+490h] [rbp-78h]
  __int64 v73; // [rsp+498h] [rbp-70h]
  __int64 *v74; // [rsp+4A0h] [rbp-68h]
  __int64 v75; // [rsp+4A8h] [rbp-60h]
  int *v76; // [rsp+4B0h] [rbp-58h]
  __int64 v77; // [rsp+4B8h] [rbp-50h]
  void *retaddr; // [rsp+508h] [rbp+0h]

  memset(v62, 0, 0xB8uLL);
  memset(v60, 0, sizeof(v60));
  memset(v61, 0, sizeof(v61));
  memset(v63, 0, 0x108uLL);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 3;
  v9 = *(_QWORD *)(a1 + 136);
  v10 = 0LL;
  v49 = v7;
  v11 = *(_QWORD *)(v7 + 32);
  v12 = 1;
  if ( v9 <= v11 )
    goto LABEL_46;
  v13 = v9 - v11;
  v14 = 10;
  if ( a4 )
    v14 = a4;
  v53 = a3 & 4;
  if ( (a3 & 4) == 0 )
  {
    v15 = *(_BYTE *)(a1 + 184) & 7;
    v52 = 0LL;
    if ( v15 == 2 )
      v16 = (volatile signed __int64 *)&unk_140C4F640;
    else
      v16 = (volatile signed __int64 *)(a1 + 256);
    v51 = v16;
    v50 = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v43 = SchedulerAssist[6];
        SchedulerAssist[6] = v43 + 1;
        if ( v43 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v7 = v49;
          v10 = 0LL;
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v50, v16);
    }
    else
    {
      if ( !_InterlockedExchange64(v16, (__int64)&v50) )
        goto LABEL_10;
      KxWaitForLockOwnerShip(&v50);
    }
    v7 = v49;
    v10 = 0LL;
LABEL_10:
    if ( (a3 & 2) != 0 )
    {
      v19 = *(unsigned int *)(v7 + 24);
      v20 = v13 + v19;
      *(_DWORD *)(v7 + 24) = (v13 + v19) % v14;
    }
    else
    {
      v19 = *(unsigned int *)(v7 + 28);
      v20 = v13 + v19;
      *(_DWORD *)(v7 + 28) = (v13 + v19) % v14;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v50, retaddr);
      v10 = 0LL;
      goto LABEL_15;
    }
    _m_prefetchw(&v50);
    v21 = v50;
    if ( !v50 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v51, 0LL, (signed __int64)&v50) == &v50 )
      {
LABEL_15:
        v22 = KeGetCurrentPrcb();
        v23 = v22->SchedulerAssist;
        if ( v23 )
        {
          if ( v22->NestingLevel <= 1u )
          {
            v44 = v23[6] - 1;
            v23[6] = v44;
            if ( !v44 )
            {
              KiRemoveSystemWorkPriorityKick(v22);
              v10 = 0LL;
            }
          }
        }
        v12 = 1;
        if ( v20 >= v13 )
          goto LABEL_17;
        goto LABEL_71;
      }
      v21 = KxWaitForLockChainValid(&v50);
      v10 = 0LL;
    }
    v50 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v21 + 8), 1uLL);
    goto LABEL_15;
  }
LABEL_71:
  v19 = 0LL;
LABEL_17:
  v24 = v14 * (v13 + v19);
  v25 = v24 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
  v26 = v24 / 0x3E8;
  if ( v26 > v13 )
  {
    v25 = v13 * v14 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
    v26 = (*((_QWORD *)&v25 + 1) + ((v13 * v14 - *((_QWORD *)&v25 + 1)) >> 1)) >> 9;
  }
  v27 = *(unsigned __int16 *)(a1 + 174);
  HIDWORD(v60[1]) = v14;
  Pool = 0LL;
  v29 = *(_QWORD **)(qword_140C4E4C8 + 8 * v27);
  v30 = v29[856];
  if ( (a3 & 3) != 0 )
  {
    *(_QWORD *)&v25 = v29 + 304;
    *((_QWORD *)&v25 + 1) = v29[280] + v29[288];
    v31 = 0LL;
    v29 += 329;
    if ( (unsigned __int64)v25 < (unsigned __int64)v29 )
    {
      do
      {
        v31 += *(_QWORD *)v25;
        v10 += *(_QWORD *)(v25 + 40);
        *(_QWORD *)&v25 = v25 + 80;
      }
      while ( (unsigned __int64)v25 < (unsigned __int64)(v29 - 5) );
      if ( (unsigned __int64)v25 < (unsigned __int64)v29 )
        *((_QWORD *)&v25 + 1) += *(_QWORD *)v25;
      *((_QWORD *)&v25 + 1) += v31 + v10;
    }
    if ( *((_QWORD *)&v25 + 1) + *v29 < *(_QWORD *)(v30 + 72) )
    {
      if ( *(_BYTE *)(a1 + 186) != 2 )
      {
        if ( *((_QWORD *)&v25 + 1) >= *(_QWORD *)(v30 + 64) )
          v8 = 5;
        LODWORD(v60[1]) = v8;
      }
      if ( (*(_BYTE *)(a1 + 184) & 7) != 0 || !(unsigned int)MiIsStoreProcess(a1 - 1664) )
        WORD2(v60[0]) = *(_WORD *)(v30 + 2350);
    }
    if ( v26 <= 0x100 )
      goto LABEL_93;
    v32 = 509;
    if ( v26 < 0x1FD )
      v32 = v26;
    Pool = MiAllocatePool(64, 8LL * (unsigned int)(v32 - 256) + 2072, 0x73576D4Du);
    v12 = 1;
    if ( !Pool )
    {
LABEL_93:
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v30 + 124), v12, 0) )
      {
        Pool = v62;
        v32 = 20;
      }
      else
      {
        Pool = (_BYTE *)(v30 + 128);
        v32 = 256;
      }
    }
    v33 = *(_BYTE *)(a1 + 184) & 7;
    if ( v33 )
      v34 = v33 < 2u ? 2 : 0;
    else
      v34 = v12;
    *(_DWORD *)Pool = v34;
    *((_DWORD *)Pool + 3) = 0;
    *((_WORD *)Pool + 2) = 0;
    *((_QWORD *)Pool + 2) = 0LL;
    *((_QWORD *)Pool + 3) = 0LL;
    *((_DWORD *)Pool + 2) = v32;
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 && *(_QWORD *)(a1 + 624) )
    {
      v63[1] = 32;
      v60[31] = v63;
    }
  }
  BYTE6(v61[0]) = a2;
  v35 = *(_BYTE *)(a1 + 184);
  v61[3] = a1;
  LODWORD(v60[0]) = a3;
  v60[6] = v26;
  v60[7] = Pool;
  v36 = v35 & 7;
  if ( v36 )
    v37 = v36 < 2u ? 2 : 0;
  else
    v37 = v12;
  LODWORD(v60[8]) = v37;
  v61[21] = v60;
  LOWORD(v61[0]) = 14;
  v61[19] = MiAgePte;
  v61[20] = MiAgeWorkingSetTail;
  v60[9] = 20LL;
  WORD2(v60[8]) = 4;
  v60[10] = 0LL;
  v60[11] = 0LL;
  if ( v53 )
  {
    RandomPte = MiGenerateRandomPte(v61, *((_QWORD *)&v25 + 1), v29, 0LL);
  }
  else if ( (a3 & 2) != 0 )
  {
    RandomPte = *(_QWORD *)(v49 + 16);
  }
  else
  {
    RandomPte = *(_QWORD *)(v49 + 8);
  }
  v61[7] = RandomPte;
  if ( !RandomPte )
    v61[5] = -1LL;
  v8 = MiWalkPageTables(v61);
  if ( Pool )
  {
    if ( Pool == (_BYTE *)(v30 + 128) )
    {
      _InterlockedAnd((volatile signed __int32 *)(v30 + 124), 0);
    }
    else if ( Pool != v62 )
    {
      ExFreePoolWithTag(Pool, 0);
    }
  }
  if ( v8 == 4 )
    ++*(_DWORD *)(v30 + 2568);
LABEL_46:
  if ( *(_QWORD *)&qword_140C4ED60 )
  {
    v39 = *(_BYTE *)(a1 + 184) & 7;
    v40 = v39 ? 0LL : (const CHAR *)(a1 - 216);
    if ( **(_DWORD **)&qword_140C4ED60 > 5u
      && (*(_BYTE *)(*(_QWORD *)&qword_140C4ED60 + 16LL) & 1) != 0
      && (*(_QWORD *)(*(_QWORD *)&qword_140C4ED60 + 24LL) & 1LL) == *(_QWORD *)(*(_QWORD *)&qword_140C4ED60 + 24LL) )
    {
      v48 = v39;
      v64[4] = (__int64)&v48;
      v64[5] = 1LL;
      tlgCreate1Sz_char((__int64)v65, v40);
      v54 = v45;
      v66 = &v54;
      v56 = v60[5];
      v67 = 4LL;
      v68 = &v56;
      v57 = v60[2];
      v70 = &v57;
      v58 = v60[4];
      v72 = &v58;
      v59 = v60[3];
      v74 = &v59;
      v76 = &v55;
      v69 = 8LL;
      v71 = 8LL;
      v73 = 8LL;
      v75 = 8LL;
      v55 = a3;
      v77 = 4LL;
      tlgWriteEx_EtwWriteEx(v46, (int)&qword_140025030, 0, 1, 0, 0, 0xAu, (__int64)v64);
    }
  }
  return v8 == 4;
}
