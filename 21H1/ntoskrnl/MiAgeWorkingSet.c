/*
 * XREFs of MiAgeWorkingSet @ 0x14025D530
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14025CC40 (MiTrimOrAgeWorkingSet.c)
 *     MiForceAgeWorkingSet @ 0x1405358A0 (MiForceAgeWorkingSet.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022E070 (KxWaitForLockOwnerShip.c)
 *     MiWalkPageTables @ 0x14025DB00 (MiWalkPageTables.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     MiGenerateRandomPte @ 0x14030CA78 (MiGenerateRandomPte.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14032274C (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgCreate1Sz_char @ 0x14033DAA4 (_tlgCreate1Sz_char.c)
 *     MiIsStoreProcess @ 0x14034D700 (MiIsStoreProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  _QWORD *v19; // rdx
  __int64 v20; // r13
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  unsigned __int64 v26; // rsi
  unsigned __int128 v27; // rax
  unsigned __int64 v28; // rsi
  __int64 v29; // rcx
  _BYTE *Pool; // rbx
  _QWORD *v31; // r8
  __int64 v32; // r14
  __int64 v33; // rcx
  int v34; // r15d
  unsigned __int8 v35; // al
  int v36; // eax
  char v37; // al
  unsigned __int8 v38; // al
  int v39; // eax
  __int64 RandomPte; // rax
  unsigned __int8 v41; // dl
  __int64 v42; // r8
  __int64 v43; // rdi
  int v46; // eax
  int v47; // eax
  int v48; // r8d
  int v49; // r10d
  unsigned __int8 v51; // [rsp+41h] [rbp-4C7h] BYREF
  __int64 v52; // [rsp+48h] [rbp-4C0h]
  __int64 v53; // [rsp+50h] [rbp-4B8h] BYREF
  volatile signed __int64 *v54; // [rsp+58h] [rbp-4B0h]
  __int64 v55; // [rsp+60h] [rbp-4A8h]
  int v56; // [rsp+68h] [rbp-4A0h]
  int v57; // [rsp+6Ch] [rbp-49Ch] BYREF
  int v58; // [rsp+70h] [rbp-498h] BYREF
  __int64 v59; // [rsp+78h] [rbp-490h] BYREF
  __int64 v60; // [rsp+80h] [rbp-488h] BYREF
  __int64 v61; // [rsp+88h] [rbp-480h] BYREF
  __int64 v62; // [rsp+90h] [rbp-478h] BYREF
  _QWORD v63[32]; // [rsp+A0h] [rbp-468h] BYREF
  _QWORD v64[22]; // [rsp+1A0h] [rbp-368h] BYREF
  _BYTE v65[192]; // [rsp+250h] [rbp-2B8h] BYREF
  _DWORD v66[68]; // [rsp+310h] [rbp-1F8h] BYREF
  __int64 v67[6]; // [rsp+420h] [rbp-E8h] BYREF
  char v68[16]; // [rsp+450h] [rbp-B8h] BYREF
  int *v69; // [rsp+460h] [rbp-A8h]
  __int64 v70; // [rsp+468h] [rbp-A0h]
  __int64 *v71; // [rsp+470h] [rbp-98h]
  __int64 v72; // [rsp+478h] [rbp-90h]
  __int64 *v73; // [rsp+480h] [rbp-88h]
  __int64 v74; // [rsp+488h] [rbp-80h]
  __int64 *v75; // [rsp+490h] [rbp-78h]
  __int64 v76; // [rsp+498h] [rbp-70h]
  __int64 *v77; // [rsp+4A0h] [rbp-68h]
  __int64 v78; // [rsp+4A8h] [rbp-60h]
  int *v79; // [rsp+4B0h] [rbp-58h]
  __int64 v80; // [rsp+4B8h] [rbp-50h]
  _UNKNOWN *retaddr; // [rsp+508h] [rbp+0h]

  memset(v65, 0, 0xB8uLL);
  memset(v63, 0, sizeof(v63));
  memset(v64, 0, sizeof(v64));
  memset(v66, 0, 0x108uLL);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 3;
  v9 = *(_QWORD *)(a1 + 136);
  v10 = 0LL;
  v52 = v7;
  v11 = *(_QWORD *)(v7 + 32);
  v12 = 1;
  if ( v9 <= v11 )
    goto LABEL_46;
  v13 = v9 - v11;
  v14 = 10;
  if ( a4 )
    v14 = a4;
  v56 = a3 & 4;
  if ( (a3 & 4) == 0 )
  {
    v15 = *(_BYTE *)(a1 + 184) & 7;
    v55 = 0LL;
    if ( v15 == 2 )
      v16 = (volatile signed __int64 *)&unk_140C4F700;
    else
      v16 = (volatile signed __int64 *)(a1 + 256);
    v54 = v16;
    v53 = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v46 = SchedulerAssist[6];
        SchedulerAssist[6] = v46 + 1;
        if ( v46 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v7 = v52;
          v10 = 0LL;
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v53, v16);
    }
    else
    {
      v19 = (_QWORD *)_InterlockedExchange64(v16, (__int64)&v53);
      if ( !v19 )
        goto LABEL_10;
      KxWaitForLockOwnerShip((__int64)&v53, v19);
    }
    v7 = v52;
    v10 = 0LL;
LABEL_10:
    if ( (a3 & 2) != 0 )
    {
      v20 = *(unsigned int *)(v7 + 24);
      v21 = v13 + v20;
      v22 = (v13 + v20) % v14;
      *(_DWORD *)(v7 + 24) = v22;
    }
    else
    {
      v20 = *(unsigned int *)(v7 + 28);
      v21 = v13 + v20;
      v22 = (v13 + v20) % v14;
      *(_DWORD *)(v7 + 28) = v22;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v53, retaddr);
      v10 = 0LL;
      goto LABEL_15;
    }
    _m_prefetchw(&v53);
    v23 = v53;
    if ( !v53 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v54, 0LL, (signed __int64)&v53) == &v53 )
      {
LABEL_15:
        v24 = KeGetCurrentPrcb();
        v25 = v24->SchedulerAssist;
        if ( v25 )
        {
          if ( v24->NestingLevel <= 1u )
          {
            v47 = v25[6] - 1;
            v25[6] = v47;
            if ( !v47 )
            {
              KiRemoveSystemWorkPriorityKick(v24);
              v10 = 0LL;
            }
          }
        }
        v12 = 1;
        if ( v21 >= v13 )
          goto LABEL_17;
        goto LABEL_74;
      }
      v23 = KxWaitForLockChainValid(&v53, v22);
      v10 = 0LL;
    }
    v53 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v23 + 8), 1uLL);
    goto LABEL_15;
  }
LABEL_74:
  v20 = 0LL;
LABEL_17:
  v26 = v14 * (v13 + v20);
  v27 = v26 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
  v28 = v26 / 0x3E8;
  if ( v28 > v13 )
  {
    v27 = v13 * v14 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
    v28 = (*((_QWORD *)&v27 + 1) + ((v13 * v14 - *((_QWORD *)&v27 + 1)) >> 1)) >> 9;
  }
  v29 = *(unsigned __int16 *)(a1 + 174);
  HIDWORD(v63[1]) = v14;
  Pool = 0LL;
  v31 = *(_QWORD **)(qword_140C4E588 + 8 * v29);
  v32 = v31[856];
  if ( (a3 & 3) != 0 )
  {
    *(_QWORD *)&v27 = v31 + 304;
    *((_QWORD *)&v27 + 1) = v31[280] + v31[288];
    v33 = 0LL;
    v31 += 329;
    if ( (unsigned __int64)v27 < (unsigned __int64)v31 )
    {
      do
      {
        v33 += *(_QWORD *)v27;
        v10 += *(_QWORD *)(v27 + 40);
        *(_QWORD *)&v27 = v27 + 80;
      }
      while ( (unsigned __int64)v27 < (unsigned __int64)(v31 - 5) );
      if ( (unsigned __int64)v27 < (unsigned __int64)v31 )
        *((_QWORD *)&v27 + 1) += *(_QWORD *)v27;
      *((_QWORD *)&v27 + 1) += v33 + v10;
    }
    if ( *((_QWORD *)&v27 + 1) + *v31 < *(_QWORD *)(v32 + 72) )
    {
      if ( *(_BYTE *)(a1 + 186) != 2 )
      {
        if ( *((_QWORD *)&v27 + 1) >= *(_QWORD *)(v32 + 64) )
          v8 = 5;
        LODWORD(v63[1]) = v8;
      }
      if ( (*(_BYTE *)(a1 + 184) & 7) != 0
        || !(unsigned int)MiIsStoreProcess(a1 - 1664, *((_QWORD *)&v27 + 1), v31, v10) )
      {
        WORD2(v63[0]) = *(_WORD *)(v32 + 2350);
      }
    }
    if ( v28 <= 0x100 )
      goto LABEL_96;
    v34 = 509;
    if ( v28 < 0x1FD )
      v34 = v28;
    Pool = (_BYTE *)MiAllocatePool(64LL, 8LL * (unsigned int)(v34 - 256) + 2072, 1935109453LL);
    v12 = 1;
    if ( !Pool )
    {
LABEL_96:
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v32 + 124), v12, 0) )
      {
        Pool = v65;
        v34 = 20;
      }
      else
      {
        Pool = (_BYTE *)(v32 + 128);
        v34 = 256;
      }
    }
    v35 = *(_BYTE *)(a1 + 184) & 7;
    if ( v35 )
      v36 = v35 < 2u ? 2 : 0;
    else
      v36 = v12;
    *(_DWORD *)Pool = v36;
    *((_DWORD *)Pool + 3) = 0;
    *((_WORD *)Pool + 2) = 0;
    *((_QWORD *)Pool + 2) = 0LL;
    *((_QWORD *)Pool + 3) = 0LL;
    *((_DWORD *)Pool + 2) = v34;
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 && *(_QWORD *)(a1 + 624) )
    {
      v66[1] = 32;
      v63[31] = v66;
    }
  }
  BYTE6(v64[0]) = a2;
  v37 = *(_BYTE *)(a1 + 184);
  v64[3] = a1;
  LODWORD(v63[0]) = a3;
  v63[6] = v28;
  v63[7] = Pool;
  v38 = v37 & 7;
  if ( v38 )
    v39 = v38 < 2u ? 2 : 0;
  else
    v39 = v12;
  LODWORD(v63[8]) = v39;
  v64[21] = v63;
  LOWORD(v64[0]) = 14;
  v64[19] = MiAgePte;
  v64[20] = MiAgeWorkingSetTail;
  v63[9] = 20LL;
  WORD2(v63[8]) = 4;
  v63[10] = 0LL;
  v63[11] = 0LL;
  if ( v56 )
  {
    RandomPte = MiGenerateRandomPte(v64, *((_QWORD *)&v27 + 1), v31, 0LL);
  }
  else if ( (a3 & 2) != 0 )
  {
    RandomPte = *(_QWORD *)(v52 + 16);
  }
  else
  {
    RandomPte = *(_QWORD *)(v52 + 8);
  }
  v64[7] = RandomPte;
  if ( !RandomPte )
    v64[5] = -1LL;
  v8 = MiWalkPageTables(v64);
  if ( Pool )
  {
    if ( Pool == (_BYTE *)(v32 + 128) )
    {
      _InterlockedAnd((volatile signed __int32 *)(v32 + 124), 0);
    }
    else if ( Pool != v65 )
    {
      ExFreePoolWithTag(Pool, 0);
    }
  }
  if ( v8 == 4 )
    ++*(_DWORD *)(v32 + 2568);
LABEL_46:
  if ( *(_QWORD *)&qword_140C4EE20 )
  {
    v41 = *(_BYTE *)(a1 + 184) & 7;
    if ( v41 )
    {
      v42 = v41 < 2u ? *(unsigned int *)(a1 - 248) : 0LL;
      v43 = 0LL;
    }
    else
    {
      v42 = *(unsigned int *)(a1 - 576);
      v43 = a1 - 216;
    }
    if ( **(_DWORD **)&qword_140C4EE20 > 5u
      && (*(_BYTE *)(*(_QWORD *)&qword_140C4EE20 + 16LL) & 1) != 0
      && (*(_QWORD *)(*(_QWORD *)&qword_140C4EE20 + 24LL) & 1LL) == *(_QWORD *)(*(_QWORD *)&qword_140C4EE20 + 24LL) )
    {
      v51 = v41;
      v67[4] = (__int64)&v51;
      v67[5] = 1LL;
      tlgCreate1Sz_char(v68, v43, v42, v10);
      v57 = v48;
      v69 = &v57;
      v59 = v63[5];
      v70 = 4LL;
      v71 = &v59;
      v60 = v63[2];
      v73 = &v60;
      v61 = v63[4];
      v75 = &v61;
      v62 = v63[3];
      v77 = &v62;
      v79 = &v58;
      v72 = 8LL;
      v74 = 8LL;
      v76 = 8LL;
      v78 = 8LL;
      v58 = a3;
      v80 = 4LL;
      tlgWriteEx_EtwWriteEx(v49, (int)&qword_140024BC0, 0, 1, 0, 0, 0xAu, (__int64)v67);
    }
  }
  return v8 == 4;
}
