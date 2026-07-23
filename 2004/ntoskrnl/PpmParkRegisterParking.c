/*
 * XREFs of PpmParkRegisterParking @ 0x1403BF590
 * Callers:
 *     PpmCheckInitProcessors @ 0x1407A6EC8 (PpmCheckInitProcessors.c)
 * Callees:
 *     KeGetPrcb @ 0x14021DBD0 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14021E1A0 (KeEnumerateNextProcessor.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryNodeActiveAffinity @ 0x1402DE440 (KeQueryNodeActiveAffinity.c)
 *     PopExecuteOnTargetProcessors @ 0x1402E3AE0 (PopExecuteOnTargetProcessors.c)
 *     PpmParkApplyPolicy @ 0x1403BFDB4 (PpmParkApplyPolicy.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PpmParkParkingAvailable @ 0x1407A7D90 (PpmParkParkingAvailable.c)
 *     PpmIdleInitializeConcurrency @ 0x1407A7EA4 (PpmIdleInitializeConcurrency.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 PpmParkRegisterParking()
{
  __int64 v0; // r12
  KIRQL v1; // al
  __int64 v2; // rdi
  __int64 v3; // r14
  unsigned __int64 v4; // rbx
  _BYTE *v5; // rbx
  unsigned int v6; // esi
  unsigned int v7; // ebx
  char *PoolWithTag; // rax
  char *v9; // r13
  unsigned __int64 v10; // rbx
  __int64 Prcb; // rax
  unsigned __int64 v12; // rdx
  unsigned int v13; // r15d
  int v14; // edi
  unsigned __int16 Group; // r14
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  char *v18; // rbx
  unsigned __int8 v19; // di
  __int64 v20; // r15
  __int64 v21; // rax
  char *v22; // rdi
  unsigned int v23; // r14d
  char v24; // al
  __int64 v25; // rdx
  unsigned int v26; // esi
  unsigned __int8 *v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdx
  char *v31; // r8
  unsigned __int8 v32; // cl
  unsigned __int8 v33; // r8
  SIZE_T v34; // rbx
  PVOID v35; // rax
  void *v36; // r15
  void *v37; // rdi
  unsigned int *v38; // rbx
  __int64 v39; // r13
  unsigned int v40; // eax
  void *v41; // rcx
  size_t v42; // r8
  size_t v43; // rdi
  size_t v44; // rdi
  unsigned __int8 *v45; // r15
  unsigned __int64 v46; // rbx
  PVOID v47; // r15
  PVOID *v48; // rbx
  __int64 v49; // r14
  __int64 v50; // rsi
  PVOID *v51; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v56; // eax
  bool v57; // zf
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 *v60; // r15
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rdx
  char *v64; // r8
  __int64 v65; // r12
  unsigned int *v66; // r14
  unsigned int *v67; // rsi
  int v68; // eax
  void *v69; // rcx
  unsigned int v70; // eax
  size_t v71; // r8
  size_t v72; // rdi
  size_t v73; // rdi
  unsigned __int8 v74; // al
  struct _KPRCB *v75; // r9
  _DWORD *v76; // r8
  int v77; // eax
  PVOID *v78; // rbx
  __int64 v79; // r14
  __int64 v80; // rsi
  PVOID *v81; // rdi
  USHORT Count[2]; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v83; // [rsp+2Ch] [rbp-DCh]
  unsigned int v84; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v85; // [rsp+34h] [rbp-D4h]
  unsigned int v86; // [rsp+38h] [rbp-D0h]
  unsigned int v87; // [rsp+3Ch] [rbp-CCh]
  __int64 v88; // [rsp+40h] [rbp-C8h]
  PVOID v89; // [rsp+48h] [rbp-C0h]
  PVOID P; // [rsp+50h] [rbp-B8h]
  char *v91; // [rsp+58h] [rbp-B0h]
  PVOID v92; // [rsp+60h] [rbp-A8h]
  PVOID v93[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 Affinity; // [rsp+78h] [rbp-90h]
  _GROUP_AFFINITY Affinity_8; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v96[22]; // [rsp+98h] [rbp-70h] BYREF

  memset(v96, 0, 0xA8uLL);
  LODWORD(v0) = 0;
  *(_OWORD *)v93 = 0LL;
  Affinity = 0LL;
  v84 = 0;
  Affinity_8 = 0LL;
  Count[0] = 0;
  P = 0LL;
  v92 = 0LL;
  v86 = 0;
  if ( PpmParkNodes )
  {
    v1 = KeAcquireSpinLockRaiseToDpc(&PpmParkStateLock);
    v2 = (unsigned int)PpmParkNumNodes;
    v3 = PpmParkNodes;
    v4 = v1;
    v92 = (PVOID)PpmParkHistograms;
    v86 = PpmParkNumNodes;
    P = (PVOID)PpmParkNodes;
    PpmParkNumNodes = 0;
    PpmParkNodes = 0LL;
    PpmParkHistograms = 0LL;
    KxReleaseSpinLock(&PpmParkStateLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v56 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v57 = (v56 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v56;
          if ( v57 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
    if ( (_DWORD)v2 )
    {
      v5 = (_BYTE *)(v3 + 146);
      do
      {
        if ( *(_QWORD *)(v5 - 74) && (*v5 & 8) != 0 )
        {
          LODWORD(v96[0]) = 1310721;
          memset((char *)v96 + 4, 0, 0xA4uLL);
          v58 = *((unsigned __int16 *)v5 - 71);
          v59 = *(_QWORD *)(v5 - 138);
          if ( (_WORD)v58 )
            LOWORD(v96[0]) = v58 + 1;
          v96[v58 + 1] |= v59;
          PopExecuteOnTargetProcessors((__int64)v96, (__int64)PpmIdleRemoveConcurrency, 0LL, 0LL);
        }
        v5 += 272;
        --v2;
      }
      while ( v2 );
    }
  }
  v6 = 0;
  v85 = 0;
  v7 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      KeQueryNodeActiveAffinity(v7, 0LL, Count);
      if ( Count[0] )
        ++v6;
      ++v7;
    }
    while ( v7 < (unsigned __int16)KeNumberNodes );
    v85 = v6;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 272 * v6, 0x704D5050u);
  v91 = PoolWithTag;
  v9 = PoolWithTag;
  v89 = 0LL;
  if ( !PoolWithTag )
    goto LABEL_64;
  memset(PoolWithTag, 0, 272 * v6);
  PpmParkGranularity = 1;
  PpmParkCoreMask = PpmParkUseCoreGranularity != 0;
  PpmParkUnparkCores = PpmParkUseCoreGranularity == 2;
  if ( PpmParkUseCoreGranularity )
  {
    LODWORD(v10) = 0;
    v93[1] = (PVOID)qword_140C11258[0];
    v93[0] = PpmCheckRegistered;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v84, (unsigned __int16 **)v93) )
    {
      Prcb = KeGetPrcb(v84);
      v12 = *(_QWORD *)(Prcb + 33880) - ((*(_QWORD *)(Prcb + 33880) >> 1) & 0x5555555555555555LL);
      if ( (_DWORD)v10 )
      {
        if ( (_DWORD)v10 != (unsigned int)((0x101010101010101LL
                                          * (((v12 & 0x3333333333333333LL)
                                            + ((v12 >> 2) & 0x3333333333333333LL)
                                            + (((v12 & 0x3333333333333333LL) + ((v12 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 )
          PpmParkCoreMask = 0;
      }
      else
      {
        v10 = (0x101010101010101LL
             * (((v12 & 0x3333333333333333LL)
               + ((v12 >> 2) & 0x3333333333333333LL)
               + (((v12 & 0x3333333333333333LL) + ((v12 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      }
    }
    v9 = v91;
    if ( PpmParkCoreMask )
      PpmParkGranularity = v10;
  }
  v83 = 0;
  v13 = 0;
  v14 = 0;
  v87 = 0;
  if ( !KeNumberNodes )
  {
LABEL_53:
    v34 = 8LL * v13;
    v35 = ExAllocatePoolWithTag(NonPagedPoolNx, v34, 0x704D5050u);
    v89 = v35;
    v36 = v35;
    if ( v35 )
    {
      memset(v35, 0, v34);
      v37 = v36;
      if ( v6 )
      {
        v38 = (unsigned int *)(v9 + 120);
        v39 = v6;
        v88 = v6;
        do
        {
          v40 = *((unsigned __int8 *)v38 - 114);
          v41 = v37;
          *((_QWORD *)v38 - 5) = v37;
          v42 = 8LL * ++v40;
          v43 = (size_t)v37 + v42;
          *v38 = v40;
          *((_QWORD *)v38 - 4) = v43;
          v44 = v42 + v43;
          *((_QWORD *)v38 - 3) = v44;
          v37 = (void *)(v42 + v44);
          memmove(v41, (const void *)(*((_QWORD *)v38 - 6) + 32LL), v42);
          memmove(*((void **)v38 - 4), (const void *)(*((_QWORD *)v38 - 6) + 32LL), 8LL * *v38);
          v45 = (unsigned __int8 *)(v38 + 2);
          *((_QWORD *)v38 - 2) = *(_QWORD *)(*((_QWORD *)v38 - 6) + 24LL);
          *((_QWORD *)v38 - 1) = *(_QWORD *)(*((_QWORD *)v38 - 6) + 24LL);
          if ( *((_BYTE *)v38 - 114) != *((_BYTE *)v38 + 8) )
          {
            v65 = 2LL;
            v66 = v38 + 8;
            v67 = v38 + 22;
            do
            {
              v68 = *v45;
              v69 = v37;
              if ( (_BYTE)v68 )
              {
                *((_QWORD *)v67 - 5) = v37;
                v70 = v68 + 1;
                v71 = 8LL * v70;
                v72 = (size_t)v37 + v71;
                *v67 = v70;
                *((_QWORD *)v67 - 4) = v72;
                v73 = v71 + v72;
                *((_QWORD *)v67 - 3) = v73;
                v37 = (void *)(v71 + v73);
                memmove(v69, (const void *)(*(_QWORD *)v66 + 32LL), v71);
                memmove(*((void **)v67 - 4), (const void *)(*(_QWORD *)v66 + 32LL), 8LL * *v67);
                *((_QWORD *)v67 - 2) = *(_QWORD *)(*(_QWORD *)v66 + 24LL);
                *((_QWORD *)v67 - 1) = *(_QWORD *)(*(_QWORD *)v66 + 24LL);
              }
              v66 += 2;
              v67 += 12;
              ++v45;
              --v65;
            }
            while ( v65 );
            v39 = v88;
          }
          v38 += 68;
          v88 = --v39;
        }
        while ( v39 );
        v9 = v91;
        v6 = v85;
        v36 = v89;
      }
      v46 = KeAcquireSpinLockRaiseToDpc(&PpmParkStateLock);
      PpmParkNumNodes = v6;
      PpmParkNodes = (__int64)v9;
      PpmParkHistograms = (__int64)v36;
      KxReleaseSpinLock(&PpmParkStateLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v74 = KeGetCurrentIrql();
          if ( v74 <= 0xFu && (unsigned __int8)v46 <= 0xFu && v74 >= 2u )
          {
            v75 = KeGetCurrentPrcb();
            v76 = v75->SchedulerAssist;
            v77 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v46 + 1));
            v57 = (v77 & v76[5]) == 0;
            v76[5] &= v77;
            if ( v57 )
              KiRemoveSystemWorkPriorityKick(v75);
          }
        }
      }
      __writecr8(v46);
      v9 = 0LL;
      v36 = 0LL;
    }
    goto LABEL_61;
  }
  while ( 1 )
  {
    KeQueryNodeActiveAffinity(v0, &Affinity_8, 0LL);
    Group = Affinity_8.Group;
    v16 = Affinity_8.Group >= (unsigned int)PpmCheckRegistered[0]
        ? 0LL
        : *(_QWORD *)&PpmCheckRegistered[4 * Affinity_8.Group + 4];
    v17 = v16 & Affinity_8.Mask;
    Affinity_8.Mask &= v16;
    if ( Affinity_8.Mask )
      break;
LABEL_51:
    LODWORD(v0) = v0 + 1;
    v87 = v0;
    if ( (unsigned int)v0 >= (unsigned __int16)KeNumberNodes )
    {
      v6 = v85;
      v13 = v83;
      goto LABEL_53;
    }
  }
  LODWORD(v88) = v14 + 1;
  v18 = &v9[272 * v14];
  v19 = 0;
  *((_WORD *)v18 + 2) = Affinity_8.Group;
  *((_QWORD *)v18 + 1) = v17;
  do
  {
    v20 = v19;
    if ( v19 )
      v20 = PpmHeteroPolicy != 0 ? v19 : 0;
    LOWORD(Affinity) = Group;
    v93[1] = (PVOID)v17;
    v93[0] = 0LL;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v84, (unsigned __int16 **)v93) )
    {
      v21 = KeGetPrcb(v84);
      if ( *(_BYTE *)(v21 + 33208) == v19 )
      {
        ++v18[v20 + 128];
        *(_QWORD *)&v18[8 * v20 + 16] |= *(_QWORD *)(v21 + 200);
      }
    }
    ++v19;
  }
  while ( v19 < 2u );
  v0 = v87;
  v22 = v18 + 128;
  v9 = v91;
  v23 = 0;
  v24 = v18[129];
  if ( !v18[128] )
  {
    *v22 = v24;
    *((_QWORD *)v18 + 2) = *((_QWORD *)v18 + 3);
    v24 = 0;
    v18[129] = 0;
    *((_QWORD *)v18 + 3) = 0LL;
  }
  if ( !v24 )
    v18[146] |= 4u;
  v25 = 2LL;
  v26 = 0;
  v27 = (unsigned __int8 *)(v18 + 128);
  do
  {
    v28 = *v27;
    v27[10] = v28;
    v26 += v28;
    v27[15] = v28;
    ++v27;
    --v25;
  }
  while ( v25 );
  LODWORD(v96[0]) = 1310721;
  v83 += v26 + 2 * v26 + 3;
  memset((char *)v96 + 4, 0, 0xA4uLL);
  v29 = *((unsigned __int16 *)v18 + 2);
  v30 = *((_QWORD *)v18 + 1);
  if ( (_WORD)v29 )
    LOWORD(v96[0]) = v29 + 1;
  v96[v29 + 1] |= v30;
  if ( (unsigned int)v0 < v86 )
    v31 = (char *)P + 272 * v0 + 72;
  else
    v31 = 0LL;
  if ( (int)PpmIdleInitializeConcurrency(v96, v18 + 72, v31) < 0 )
  {
    v36 = 0LL;
    goto LABEL_61;
  }
  if ( v26 == (unsigned __int8)*v22 )
  {
LABEL_48:
    v32 = PpmParkGranularity;
    v14 = v88;
    v18[6] = v26;
    v18[135] = v26;
    v18[137] = v26;
    v33 = v26 / (PpmParkMultiparkGranularity != 0);
    if ( v33 < v32 )
      v33 = v32;
    v18[145] = v33;
    goto LABEL_51;
  }
  v60 = (__int64 *)(v18 + 16);
  while ( 1 )
  {
    v61 = (unsigned __int8)*v22;
    if ( (_BYTE)v61 )
    {
      LODWORD(v96[0]) = 1310721;
      v83 += v61 + 2 * v61 + 3;
      memset((char *)v96 + 4, 0, 0xA4uLL);
      v62 = *((unsigned __int16 *)v18 + 2);
      v63 = *v60;
      if ( (_WORD)v62 )
        LOWORD(v96[0]) = v62 + 1;
      v96[v62 + 1] |= v63;
      v64 = (unsigned int)v0 >= v86 ? 0LL : (char *)P + 272 * v0 + 8 * v23 + 152;
      if ( (int)PpmIdleInitializeConcurrency(v96, &v18[8 * v23 + 152], v64) < 0 )
        break;
    }
    ++v60;
    ++v23;
    ++v22;
    if ( v23 >= 2 )
      goto LABEL_48;
  }
  v36 = v89;
LABEL_61:
  if ( v9 )
  {
    if ( v85 )
    {
      v78 = (PVOID *)(v9 + 72);
      v79 = v85;
      do
      {
        if ( *v78 )
          ExFreePoolWithTag(*v78, 0x704D5050u);
        v80 = 2LL;
        v81 = v78 + 10;
        do
        {
          if ( *v81 )
            ExFreePoolWithTag(*v81, 0x704D5050u);
          ++v81;
          --v80;
        }
        while ( v80 );
        v78 += 34;
        --v79;
      }
      while ( v79 );
    }
    ExFreePoolWithTag(v9, 0x704D5050u);
  }
  if ( v36 )
    ExFreePoolWithTag(v36, 0x704D5050u);
LABEL_64:
  v47 = P;
  if ( P )
  {
    if ( v86 )
    {
      v48 = (PVOID *)((char *)P + 72);
      v49 = v86;
      do
      {
        if ( *v48 )
          ExFreePoolWithTag(*v48, 0x704D5050u);
        v50 = 2LL;
        v51 = v48 + 10;
        do
        {
          if ( *v51 )
            ExFreePoolWithTag(*v51, 0x704D5050u);
          ++v51;
          --v50;
        }
        while ( v50 );
        v48 += 34;
        --v49;
      }
      while ( v49 );
    }
    ExFreePoolWithTag(v47, 0x704D5050u);
  }
  if ( v92 )
    ExFreePoolWithTag(v92, 0x704D5050u);
  PpmParkApplyPolicy();
  return PpmParkParkingAvailable();
}
