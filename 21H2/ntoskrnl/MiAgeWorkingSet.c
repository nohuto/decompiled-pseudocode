/*
 * XREFs of MiAgeWorkingSet @ 0x1402AD440
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1402ACB50 (MiTrimOrAgeWorkingSet.c)
 *     MiForceAgeWorkingSet @ 0x14053B600 (MiForceAgeWorkingSet.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1402514DC (_tlgWriteEx_EtwWriteEx.c)
 *     MiIsStoreProcess @ 0x140258450 (MiIsStoreProcess.c)
 *     _tlgCreate1Sz_char @ 0x140270A0C (_tlgCreate1Sz_char.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiGenerateRandomPte @ 0x14029EF88 (MiGenerateRandomPte.c)
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  __int64 v25; // rcx
  _BYTE *Pool; // rbx
  _QWORD *v27; // r8
  __int64 v28; // r14
  _QWORD *v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // r8
  int v33; // r15d
  unsigned __int8 v34; // al
  int v35; // eax
  char v36; // al
  unsigned __int8 v37; // al
  int v38; // eax
  unsigned __int64 RandomPte; // rax
  char v40; // dl
  const CHAR *v41; // rdi
  unsigned __int128 v44; // rax
  int v45; // eax
  int v46; // eax
  int v47; // r8d
  __int64 v48; // r10
  char v50; // [rsp+41h] [rbp-4C7h] BYREF
  __int64 v51; // [rsp+48h] [rbp-4C0h]
  __int64 v52; // [rsp+50h] [rbp-4B8h] BYREF
  volatile signed __int64 *v53; // [rsp+58h] [rbp-4B0h]
  __int64 v54; // [rsp+60h] [rbp-4A8h]
  int v55; // [rsp+68h] [rbp-4A0h]
  int v56; // [rsp+6Ch] [rbp-49Ch] BYREF
  int v57; // [rsp+70h] [rbp-498h] BYREF
  __int64 v58; // [rsp+78h] [rbp-490h] BYREF
  __int64 v59; // [rsp+80h] [rbp-488h] BYREF
  __int64 v60; // [rsp+88h] [rbp-480h] BYREF
  __int64 v61; // [rsp+90h] [rbp-478h] BYREF
  _QWORD v62[32]; // [rsp+A0h] [rbp-468h] BYREF
  _QWORD v63[22]; // [rsp+1A0h] [rbp-368h] BYREF
  _BYTE v64[192]; // [rsp+250h] [rbp-2B8h] BYREF
  _DWORD v65[68]; // [rsp+310h] [rbp-1F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+420h] [rbp-E8h] BYREF
  char *v67; // [rsp+440h] [rbp-C8h]
  __int64 v68; // [rsp+448h] [rbp-C0h]
  char v69[16]; // [rsp+450h] [rbp-B8h] BYREF
  int *v70; // [rsp+460h] [rbp-A8h]
  __int64 v71; // [rsp+468h] [rbp-A0h]
  __int64 *v72; // [rsp+470h] [rbp-98h]
  __int64 v73; // [rsp+478h] [rbp-90h]
  __int64 *v74; // [rsp+480h] [rbp-88h]
  __int64 v75; // [rsp+488h] [rbp-80h]
  __int64 *v76; // [rsp+490h] [rbp-78h]
  __int64 v77; // [rsp+498h] [rbp-70h]
  __int64 *v78; // [rsp+4A0h] [rbp-68h]
  __int64 v79; // [rsp+4A8h] [rbp-60h]
  int *v80; // [rsp+4B0h] [rbp-58h]
  __int64 v81; // [rsp+4B8h] [rbp-50h]
  void *retaddr; // [rsp+508h] [rbp+0h]

  memset(v64, 0, 0xB8uLL);
  memset(v62, 0, sizeof(v62));
  memset(v63, 0, sizeof(v63));
  memset(v65, 0, 0x108uLL);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 3;
  v9 = *(_QWORD *)(a1 + 136);
  v10 = 0LL;
  v51 = v7;
  v11 = *(_QWORD *)(v7 + 32);
  v12 = 1;
  if ( v9 <= v11 )
    goto LABEL_46;
  v13 = v9 - v11;
  v14 = 10;
  if ( a4 )
    v14 = a4;
  v55 = a3 & 4;
  if ( (a3 & 4) == 0 )
  {
    v15 = *(_BYTE *)(a1 + 184) & 7;
    v54 = 0LL;
    if ( v15 == 2 )
      v16 = (volatile signed __int64 *)&unk_140C4F800;
    else
      v16 = (volatile signed __int64 *)(a1 + 256);
    v53 = v16;
    v52 = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v45 = SchedulerAssist[6];
        SchedulerAssist[6] = v45 + 1;
        if ( v45 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v7 = v51;
          v10 = 0LL;
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v52, v16);
    }
    else
    {
      if ( !_InterlockedExchange64(v16, (__int64)&v52) )
        goto LABEL_10;
      KxWaitForLockOwnerShip(&v52);
    }
    v7 = v51;
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
      KiReleaseQueuedSpinLockInstrumented(&v52, retaddr);
      v10 = 0LL;
      goto LABEL_15;
    }
    _m_prefetchw(&v52);
    v21 = v52;
    if ( !v52 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v53, 0LL, (signed __int64)&v52) == &v52 )
      {
LABEL_15:
        v22 = KeGetCurrentPrcb();
        v23 = v22->SchedulerAssist;
        if ( v23 )
        {
          if ( v22->NestingLevel <= 1u )
          {
            v46 = v23[6] - 1;
            v23[6] = v46;
            if ( !v46 )
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
      v21 = KxWaitForLockChainValid(&v52);
      v10 = 0LL;
    }
    v52 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v21 + 8), 1uLL);
    goto LABEL_15;
  }
LABEL_71:
  v19 = 0LL;
LABEL_17:
  v24 = v14 * (v13 + v19) / 0x3E8;
  if ( v24 > v13 )
  {
    v44 = v13 * v14 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
    v24 = (*((_QWORD *)&v44 + 1) + ((v13 * v14 - *((_QWORD *)&v44 + 1)) >> 1)) >> 9;
  }
  v25 = *(unsigned __int16 *)(a1 + 174);
  HIDWORD(v62[1]) = v14;
  Pool = 0LL;
  v27 = *(_QWORD **)(qword_140C4E688 + 8 * v25);
  v28 = v27[856];
  if ( (a3 & 3) != 0 )
  {
    v29 = v27 + 304;
    v30 = v27[280] + v27[288];
    v31 = 0LL;
    v32 = v27 + 329;
    if ( v29 < v32 )
    {
      do
      {
        v31 += *v29;
        v10 += v29[5];
        v29 += 10;
      }
      while ( v29 < v32 - 5 );
      if ( v29 < v32 )
        v30 += *v29;
      v30 += v31 + v10;
    }
    if ( v30 + *v32 < *(_QWORD *)(v28 + 72) )
    {
      if ( *(_BYTE *)(a1 + 186) != 2 )
      {
        if ( v30 >= *(_QWORD *)(v28 + 64) )
          v8 = 5;
        LODWORD(v62[1]) = v8;
      }
      if ( (*(_BYTE *)(a1 + 184) & 7) != 0 || !(unsigned int)MiIsStoreProcess(a1 - 1664) )
        WORD2(v62[0]) = *(_WORD *)(v28 + 2350);
    }
    if ( v24 <= 0x100 )
      goto LABEL_93;
    v33 = 509;
    if ( v24 < 0x1FD )
      v33 = v24;
    Pool = MiAllocatePool(64, 8LL * (unsigned int)(v33 - 256) + 2072, 0x73576D4Du);
    v12 = 1;
    if ( !Pool )
    {
LABEL_93:
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v28 + 124), v12, 0) )
      {
        Pool = v64;
        v33 = 20;
      }
      else
      {
        Pool = (_BYTE *)(v28 + 128);
        v33 = 256;
      }
    }
    v34 = *(_BYTE *)(a1 + 184) & 7;
    if ( v34 )
      v35 = v34 < 2u ? 2 : 0;
    else
      v35 = v12;
    *(_DWORD *)Pool = v35;
    *((_DWORD *)Pool + 3) = 0;
    *((_WORD *)Pool + 2) = 0;
    *((_QWORD *)Pool + 2) = 0LL;
    *((_QWORD *)Pool + 3) = 0LL;
    *((_DWORD *)Pool + 2) = v33;
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 && *(_QWORD *)(a1 + 624) )
    {
      v65[1] = 32;
      v62[31] = v65;
    }
  }
  BYTE6(v63[0]) = a2;
  v36 = *(_BYTE *)(a1 + 184);
  v63[3] = a1;
  LODWORD(v62[0]) = a3;
  v62[6] = v24;
  v62[7] = Pool;
  v37 = v36 & 7;
  if ( v37 )
    v38 = v37 < 2u ? 2 : 0;
  else
    v38 = v12;
  LODWORD(v62[8]) = v38;
  v63[21] = v62;
  LOWORD(v63[0]) = 14;
  v63[19] = MiAgePte;
  v63[20] = MiAgeWorkingSetTail;
  v62[9] = 20LL;
  WORD2(v62[8]) = 4;
  v62[10] = 0LL;
  v62[11] = 0LL;
  if ( v55 )
  {
    RandomPte = MiGenerateRandomPte((__int64)v63);
  }
  else if ( (a3 & 2) != 0 )
  {
    RandomPte = *(_QWORD *)(v51 + 16);
  }
  else
  {
    RandomPte = *(_QWORD *)(v51 + 8);
  }
  v63[7] = RandomPte;
  if ( !RandomPte )
    v63[5] = -1LL;
  v8 = MiWalkPageTables(v63);
  if ( Pool )
  {
    if ( Pool == (_BYTE *)(v28 + 128) )
    {
      _InterlockedAnd((volatile signed __int32 *)(v28 + 124), 0);
    }
    else if ( Pool != v64 )
    {
      ExFreePoolWithTag(Pool, 0);
    }
  }
  if ( v8 == 4 )
    ++*(_DWORD *)(v28 + 2568);
LABEL_46:
  if ( *(_QWORD *)&qword_140C4EF20 )
  {
    v40 = *(_BYTE *)(a1 + 184) & 7;
    v41 = v40 ? 0LL : (const CHAR *)(a1 - 216);
    if ( **(_DWORD **)&qword_140C4EF20 > 5u
      && (*(_BYTE *)(*(_QWORD *)&qword_140C4EF20 + 16LL) & 1) != 0
      && (*(_QWORD *)(*(_QWORD *)&qword_140C4EF20 + 24LL) & 1LL) == *(_QWORD *)(*(_QWORD *)&qword_140C4EF20 + 24LL) )
    {
      v50 = v40;
      v67 = &v50;
      v68 = 1LL;
      tlgCreate1Sz_char((__int64)v69, v41);
      v56 = v47;
      v70 = &v56;
      v58 = v62[5];
      v71 = 4LL;
      v72 = &v58;
      v59 = v62[2];
      v74 = &v59;
      v60 = v62[4];
      v76 = &v60;
      v61 = v62[3];
      v78 = &v61;
      v80 = &v57;
      v73 = 8LL;
      v75 = 8LL;
      v77 = 8LL;
      v79 = 8LL;
      v57 = a3;
      v81 = 4LL;
      tlgWriteEx_EtwWriteEx(v48, (unsigned __int8 *)&word_140025F9E, 0LL, 1u, 0, 0, 0xAu, &v66);
    }
  }
  return v8 == 4;
}
