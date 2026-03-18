/*
 * XREFs of MiAgeWorkingSet @ 0x140204610
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140203D20 (MiTrimOrAgeWorkingSet.c)
 *     MiForceAgeWorkingSet @ 0x140535EF0 (MiForceAgeWorkingSet.c)
 * Callees:
 *     MiWalkPageTables @ 0x140204BE0 (MiWalkPageTables.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     _tlgCreate1Sz_char @ 0x140276C08 (_tlgCreate1Sz_char.c)
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     MiIsStoreProcess @ 0x1402D55C0 (MiIsStoreProcess.c)
 *     MiGenerateRandomPte @ 0x140311B64 (MiGenerateRandomPte.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14036005C (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x14040A280 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  unsigned __int64 v25; // rsi
  unsigned __int128 v26; // rax
  unsigned __int64 v27; // rsi
  __int64 v28; // rcx
  _BYTE *Pool; // rbx
  _QWORD *v30; // r8
  __int64 v31; // r14
  __int64 v32; // rcx
  int v33; // r15d
  unsigned __int8 v34; // al
  int v35; // eax
  char v36; // al
  unsigned __int8 v37; // al
  int v38; // eax
  unsigned __int8 v39; // dl
  __int64 v40; // r8
  __int64 v41; // rdi
  int v44; // eax
  int v45; // eax
  int v46; // r8d
  int v47; // r10d
  unsigned __int8 v49; // [rsp+41h] [rbp-4C7h] BYREF
  __int64 v50; // [rsp+48h] [rbp-4C0h]
  __int64 v51; // [rsp+50h] [rbp-4B8h] BYREF
  volatile signed __int64 *v52; // [rsp+58h] [rbp-4B0h]
  __int64 v53; // [rsp+60h] [rbp-4A8h]
  int v54; // [rsp+68h] [rbp-4A0h]
  int v55; // [rsp+6Ch] [rbp-49Ch] BYREF
  int v56; // [rsp+70h] [rbp-498h] BYREF
  __int64 v57; // [rsp+78h] [rbp-490h] BYREF
  __int64 v58; // [rsp+80h] [rbp-488h] BYREF
  __int64 v59; // [rsp+88h] [rbp-480h] BYREF
  __int64 v60; // [rsp+90h] [rbp-478h] BYREF
  _QWORD v61[32]; // [rsp+A0h] [rbp-468h] BYREF
  _QWORD v62[22]; // [rsp+1A0h] [rbp-368h] BYREF
  _BYTE v63[192]; // [rsp+250h] [rbp-2B8h] BYREF
  _DWORD v64[68]; // [rsp+310h] [rbp-1F8h] BYREF
  __int64 v65[6]; // [rsp+420h] [rbp-E8h] BYREF
  char v66[16]; // [rsp+450h] [rbp-B8h] BYREF
  int *v67; // [rsp+460h] [rbp-A8h]
  __int64 v68; // [rsp+468h] [rbp-A0h]
  __int64 *v69; // [rsp+470h] [rbp-98h]
  __int64 v70; // [rsp+478h] [rbp-90h]
  __int64 *v71; // [rsp+480h] [rbp-88h]
  __int64 v72; // [rsp+488h] [rbp-80h]
  __int64 *v73; // [rsp+490h] [rbp-78h]
  __int64 v74; // [rsp+498h] [rbp-70h]
  __int64 *v75; // [rsp+4A0h] [rbp-68h]
  __int64 v76; // [rsp+4A8h] [rbp-60h]
  int *v77; // [rsp+4B0h] [rbp-58h]
  __int64 v78; // [rsp+4B8h] [rbp-50h]
  void *retaddr; // [rsp+508h] [rbp+0h]

  memset(v63, 0, 0xB8uLL);
  memset(v61, 0, sizeof(v61));
  memset(v62, 0, sizeof(v62));
  memset(v64, 0, 0x108uLL);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 3;
  v9 = *(_QWORD *)(a1 + 136);
  v10 = 0LL;
  v50 = v7;
  v11 = *(_QWORD *)(v7 + 32);
  v12 = 1;
  if ( v9 <= v11 )
    goto LABEL_46;
  v13 = v9 - v11;
  v14 = 10;
  if ( a4 )
    v14 = a4;
  v54 = a3 & 4;
  if ( (a3 & 4) == 0 )
  {
    v15 = *(_BYTE *)(a1 + 184) & 7;
    v53 = 0LL;
    if ( v15 == 2 )
      v16 = (volatile signed __int64 *)&unk_140C4F5C0;
    else
      v16 = (volatile signed __int64 *)(a1 + 256);
    v52 = v16;
    v51 = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v44 = SchedulerAssist[6];
        SchedulerAssist[6] = v44 + 1;
        if ( v44 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v7 = v50;
          v10 = 0LL;
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v51, v16);
    }
    else
    {
      if ( !_InterlockedExchange64(v16, (__int64)&v51) )
        goto LABEL_10;
      KxWaitForLockOwnerShip(&v51);
    }
    v7 = v50;
    v10 = 0LL;
LABEL_10:
    if ( (a3 & 2) != 0 )
    {
      v19 = *(unsigned int *)(v7 + 24);
      v20 = v13 + v19;
      v21 = (v13 + v19) % v14;
      *(_DWORD *)(v7 + 24) = v21;
    }
    else
    {
      v19 = *(unsigned int *)(v7 + 28);
      v20 = v13 + v19;
      v21 = (v13 + v19) % v14;
      *(_DWORD *)(v7 + 28) = v21;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v51, retaddr, v7, 0LL);
      v10 = 0LL;
      goto LABEL_15;
    }
    _m_prefetchw(&v51);
    v22 = v51;
    if ( !v51 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v52, 0LL, (signed __int64)&v51) == &v51 )
      {
LABEL_15:
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        if ( v24 )
        {
          if ( v23->NestingLevel <= 1u )
          {
            v45 = v24[6] - 1;
            v24[6] = v45;
            if ( !v45 )
            {
              KiRemoveSystemWorkPriorityKick(v23);
              v10 = 0LL;
            }
          }
        }
        v12 = 1;
        if ( v20 >= v13 )
          goto LABEL_17;
        goto LABEL_74;
      }
      v22 = KxWaitForLockChainValid(&v51, v21, v7, 0LL);
      v10 = 0LL;
    }
    v51 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v22 + 8), 1uLL);
    goto LABEL_15;
  }
LABEL_74:
  v19 = 0LL;
LABEL_17:
  v25 = v14 * (v13 + v19);
  v26 = v25 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
  v27 = v25 / 0x3E8;
  if ( v27 > v13 )
  {
    v26 = v13 * v14 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
    v27 = (*((_QWORD *)&v26 + 1) + ((v13 * v14 - *((_QWORD *)&v26 + 1)) >> 1)) >> 9;
  }
  v28 = *(unsigned __int16 *)(a1 + 174);
  HIDWORD(v61[1]) = v14;
  Pool = 0LL;
  v30 = *(_QWORD **)(qword_140C4E448 + 8 * v28);
  v31 = v30[856];
  if ( (a3 & 3) != 0 )
  {
    *(_QWORD *)&v26 = v30 + 304;
    *((_QWORD *)&v26 + 1) = v30[280] + v30[288];
    v32 = 0LL;
    v30 += 329;
    if ( (unsigned __int64)v26 < (unsigned __int64)v30 )
    {
      do
      {
        v32 += *(_QWORD *)v26;
        v10 += *(_QWORD *)(v26 + 40);
        *(_QWORD *)&v26 = v26 + 80;
      }
      while ( (unsigned __int64)v26 < (unsigned __int64)(v30 - 5) );
      if ( (unsigned __int64)v26 < (unsigned __int64)v30 )
        *((_QWORD *)&v26 + 1) += *(_QWORD *)v26;
      *((_QWORD *)&v26 + 1) += v32 + v10;
    }
    if ( *((_QWORD *)&v26 + 1) + *v30 < *(_QWORD *)(v31 + 72) )
    {
      if ( *(_BYTE *)(a1 + 186) != 2 )
      {
        if ( *((_QWORD *)&v26 + 1) >= *(_QWORD *)(v31 + 64) )
          v8 = 5;
        LODWORD(v61[1]) = v8;
      }
      if ( (*(_BYTE *)(a1 + 184) & 7) != 0
        || !(unsigned int)MiIsStoreProcess(a1 - 1664, *((_QWORD *)&v26 + 1), v30, v10) )
      {
        WORD2(v61[0]) = *(_WORD *)(v31 + 2350);
      }
    }
    if ( v27 <= 0x100 )
      goto LABEL_96;
    v33 = 509;
    if ( v27 < 0x1FD )
      v33 = v27;
    Pool = (_BYTE *)MiAllocatePool(64LL, 8LL * (unsigned int)(v33 - 256) + 2072, 1935109453LL, v10);
    v12 = 1;
    if ( !Pool )
    {
LABEL_96:
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v31 + 124), v12, 0) )
      {
        Pool = v63;
        v33 = 20;
      }
      else
      {
        Pool = (_BYTE *)(v31 + 128);
        v33 = 256;
      }
    }
    v34 = *(_BYTE *)(a1 + 184) & 7;
    if ( v34 )
      v35 = v34 < 2u ? 2 : 0;
    else
      v35 = v12;
    v10 = 0LL;
    *(_DWORD *)Pool = v35;
    *((_DWORD *)Pool + 3) = 0;
    *((_WORD *)Pool + 2) = 0;
    *((_QWORD *)Pool + 2) = 0LL;
    *((_QWORD *)Pool + 3) = 0LL;
    *((_DWORD *)Pool + 2) = v33;
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 && *(_QWORD *)(a1 + 624) )
    {
      v64[1] = 32;
      v61[31] = v64;
    }
  }
  BYTE6(v62[0]) = a2;
  v36 = *(_BYTE *)(a1 + 184);
  v62[3] = a1;
  LODWORD(v61[0]) = a3;
  v61[6] = v27;
  v61[7] = Pool;
  v37 = v36 & 7;
  if ( v37 )
    v38 = v37 < 2u ? 2 : 0;
  else
    v38 = v12;
  LODWORD(v61[8]) = v38;
  v62[21] = v61;
  LOWORD(v62[0]) = 14;
  v62[19] = MiAgePte;
  v62[20] = MiAgeWorkingSetTail;
  v61[9] = 20LL;
  WORD2(v61[8]) = 4;
  v61[10] = 0LL;
  v61[11] = 0LL;
  if ( v54 )
  {
    *(_QWORD *)&v26 = MiGenerateRandomPte(v62, *((_QWORD *)&v26 + 1), v30, 0LL);
  }
  else if ( (a3 & 2) != 0 )
  {
    *(_QWORD *)&v26 = *(_QWORD *)(v50 + 16);
  }
  else
  {
    *(_QWORD *)&v26 = *(_QWORD *)(v50 + 8);
  }
  v62[7] = v26;
  if ( !(_QWORD)v26 )
    v62[5] = -1LL;
  v8 = MiWalkPageTables(v62, *((_QWORD *)&v26 + 1), v30, v10);
  if ( Pool )
  {
    if ( Pool == (_BYTE *)(v31 + 128) )
    {
      _InterlockedAnd((volatile signed __int32 *)(v31 + 124), 0);
    }
    else if ( Pool != v63 )
    {
      ExFreePoolWithTag(Pool, 0);
    }
  }
  if ( v8 == 4 )
    ++*(_DWORD *)(v31 + 2568);
LABEL_46:
  if ( *(_QWORD *)&qword_140C4ECE0 )
  {
    v39 = *(_BYTE *)(a1 + 184) & 7;
    if ( v39 )
    {
      v40 = v39 < 2u ? *(unsigned int *)(a1 - 248) : 0LL;
      v41 = 0LL;
    }
    else
    {
      v40 = *(unsigned int *)(a1 - 576);
      v41 = a1 - 216;
    }
    if ( **(_DWORD **)&qword_140C4ECE0 > 5u
      && (*(_BYTE *)(*(_QWORD *)&qword_140C4ECE0 + 16LL) & 1) != 0
      && (*(_QWORD *)(*(_QWORD *)&qword_140C4ECE0 + 24LL) & 1LL) == *(_QWORD *)(*(_QWORD *)&qword_140C4ECE0 + 24LL) )
    {
      v49 = v39;
      v65[4] = (__int64)&v49;
      v65[5] = 1LL;
      tlgCreate1Sz_char(v66, v41, v40, v10);
      v55 = v46;
      v67 = &v55;
      v57 = v61[5];
      v68 = 4LL;
      v69 = &v57;
      v58 = v61[2];
      v71 = &v58;
      v59 = v61[4];
      v73 = &v59;
      v60 = v61[3];
      v75 = &v60;
      v77 = &v56;
      v70 = 8LL;
      v72 = 8LL;
      v74 = 8LL;
      v76 = 8LL;
      v56 = a3;
      v78 = 4LL;
      tlgWriteEx_EtwWriteEx(v47, (int)&qword_140024ED0, 0, 1, 0, 0, 0xAu, (__int64)v65);
    }
  }
  return v8 == 4;
}
