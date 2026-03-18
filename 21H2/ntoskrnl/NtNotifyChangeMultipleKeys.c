/*
 * XREFs of NtNotifyChangeMultipleKeys @ 0x1407E5600
 * Callers:
 *     NtNotifyChangeKey @ 0x1407E5590 (NtNotifyChangeKey.c)
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpCleanupParseContext @ 0x14067FE98 (CmpCleanupParseContext.c)
 *     CmpFreePostBlock @ 0x1407190AC (CmpFreePostBlock.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     CmpUnlockTwoKcbs @ 0x1407C2FB4 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1407C300C (CmpLockTwoKcbsShared.c)
 *     CmpAllocatePostBlock @ 0x1407E5E68 (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x1407E5F70 (CmpNotifyChangeKey.c)
 *     CmObReferenceObjectByName @ 0x140AB4008 (CmObReferenceObjectByName.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpLockKcbShared @ 0x140AB42D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AB45A0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmObReferenceObjectByHandle @ 0x140AB4630 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtNotifyChangeMultipleKeys(
        int a1,
        unsigned int a2,
        void *a3,
        void *a4,
        void (__stdcall *a5)(POPLOCK Oplock),
        __int64 a6,
        NTSTATUS *Address,
        unsigned int a8,
        char a9,
        volatile void *a10,
        SIZE_T Length,
        char a12)
{
  unsigned int v13; // ebx
  _QWORD *v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // r9d
  __int64 v22; // r8
  unsigned int v23; // r14d
  NTSTATUS v24; // esi
  unsigned __int64 *v25; // r15
  __int64 PostBlock; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  _QWORD *v29; // r14
  __int64 v30; // rcx
  PVOID v31; // rsi
  _QWORD *v32; // rax
  char *v33; // r12
  unsigned __int64 v34; // rcx
  __int64 v35; // r9
  __int64 v36; // r15
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  char v45; // bl
  struct _KTHREAD *CurrentThread; // rdx
  void (__stdcall *v48)(POPLOCK); // r8
  _KPROCESS *Process; // rcx
  unsigned __int8 v50; // r14
  int v51; // r9d
  unsigned __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  __int64 v59; // r9
  __int64 v60; // r15
  __int16 v61; // ax
  char v62; // al
  __int64 v63; // r15
  bool v64; // zf
  PVOID v65; // rcx
  __int64 v66; // r14
  __int64 v67; // r14
  __int64 v68; // r14
  unsigned __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rcx
  _QWORD *v75; // rax
  __int64 CurrentIrql; // r11
  __int64 v77; // rdx
  _QWORD *v78; // rcx
  unsigned __int8 v79; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v82; // edx
  NTSTATUS v83; // eax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  unsigned __int8 v87; // si
  char *v88; // rcx
  PVOID *v89; // rax
  PVOID *v90; // rdx
  _QWORD *v91; // rcx
  __int64 v92; // rdx
  _QWORD *v93; // rax
  __int64 v94; // rax
  _QWORD *v95; // rcx
  __int64 v96; // rdx
  _QWORD *v97; // rcx
  unsigned __int8 v98; // al
  struct _KPRCB *v99; // r9
  _DWORD *v100; // r8
  int v101; // eax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  NTSTATUS *v106; // rax
  __int64 v107; // r10
  PVOID *v108; // rax
  PVOID *v109; // rcx
  __int64 v110; // rdx
  _QWORD *v111; // rcx
  __int64 v112; // rax
  _QWORD *v113; // rcx
  __int64 v114; // rdx
  _QWORD *v115; // rcx
  unsigned __int8 v116; // al
  struct _KPRCB *v117; // r9
  _DWORD *v118; // r8
  int v119; // eax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  char v124; // [rsp+40h] [rbp-1F8h]
  KPROCESSOR_MODE AccessMode; // [rsp+41h] [rbp-1F7h]
  bool v126; // [rsp+42h] [rbp-1F6h]
  unsigned __int8 v127; // [rsp+44h] [rbp-1F4h]
  unsigned int v128; // [rsp+48h] [rbp-1F0h]
  PVOID v129; // [rsp+50h] [rbp-1E8h] BYREF
  unsigned int v130; // [rsp+58h] [rbp-1E0h]
  PVOID P; // [rsp+60h] [rbp-1D8h]
  PVOID v132; // [rsp+68h] [rbp-1D0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-1C8h]
  __int64 v134; // [rsp+78h] [rbp-1C0h]
  PVOID v135; // [rsp+80h] [rbp-1B8h]
  PVOID Object; // [rsp+88h] [rbp-1B0h] BYREF
  NTSTATUS *v137; // [rsp+90h] [rbp-1A8h]
  __int64 v138; // [rsp+98h] [rbp-1A0h]
  __int128 v139; // [rsp+A0h] [rbp-198h] BYREF
  int v140; // [rsp+B0h] [rbp-188h]
  __int64 v141; // [rsp+B8h] [rbp-180h]
  _OWORD v142[19]; // [rsp+C0h] [rbp-178h] BYREF

  Handle = a4;
  Object = a3;
  v13 = a2;
  v130 = a2;
  v137 = Address;
  v139 = 0LL;
  v132 = 0LL;
  v135 = 0LL;
  v15 = 0LL;
  P = 0LL;
  v128 = 1;
  memset(v142, 0, 0x128uLL);
  v127 = 0;
  v134 = 0LL;
  v140 = 0;
  CmpInitializeThreadInfo((__int64)&v139);
  v124 = CmpAcquireShutdownRundown(v17, v16, v18);
  if ( !v124 )
  {
    v24 = -1073741431;
    goto LABEL_43;
  }
  v22 = 1LL;
  if ( v13 > 1 )
    goto LABEL_94;
  LOBYTE(v20) = KeGetCurrentThread()->PreviousMode;
  AccessMode = v20;
  if ( (_BYTE)v20 )
  {
    if ( (a8 & 0x10000000) != 0 )
    {
      if ( a12 && !a5 && a4 )
      {
        v23 = 4;
        v128 = 4;
        goto LABEL_9;
      }
LABEL_94:
      CmpReleaseShutdownRundown(v20, v19, 1LL);
      v24 = -1073741811;
      goto LABEL_43;
    }
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( !Process[1].Affinity.StaticBitmap[30] )
      goto LABEL_48;
    v61 = WORD2(Process[2].Affinity.StaticBitmap[20]);
    if ( v61 == 332 || (v64 = v61 == 452, v62 = 0, v64) )
      v62 = 1;
    v50 = 1;
    if ( !v62 )
LABEL_48:
      v50 = 0;
    v127 = v50;
    ProbeForWrite(Address, 8 * (v50 ^ 1LL) + 8, 4u);
    ProbeForWrite(a10, (unsigned int)Length, 4u);
    if ( v50 )
    {
      *(_QWORD *)Address = 259LL;
    }
    else
    {
      *Address = 259;
      *((_QWORD *)Address + 1) = 0LL;
    }
    LOBYTE(v20) = AccessMode;
    if ( a12 )
    {
      v23 = 2;
      v128 = 2;
    }
    else
    {
      v23 = 1;
    }
LABEL_9:
    if ( a8 != (a8 & 0x1000000F) )
    {
      v24 = -1073741811;
      goto LABEL_42;
    }
    LOBYTE(v21) = v20;
    v24 = CmObReferenceObjectByHandle(a1, 16, v22, v21, (__int64)&v132, 0LL);
    if ( v24 < 0 )
    {
LABEL_42:
      CmpReleaseShutdownRundown(v20, v19, v22);
      goto LABEL_43;
    }
    v25 = 0LL;
    v129 = 0LL;
    if ( v13 == 1 )
    {
      LODWORD(v142[6]) = -1;
      *((_QWORD *)&v142[9] + 1) = &v142[9];
      *(_QWORD *)&v142[9] = &v142[9];
      memset((char *)&v142[13] + 8, 0, 0x50uLL);
      v24 = CmObReferenceObjectByName((_DWORD)Object, 0, 16, v51, AccessMode, (__int64)v142, (__int64)&v129);
      CmpCleanupParseContext(v142, 0LL);
      if ( v24 < 0 )
        goto LABEL_40;
      v25 = (unsigned __int64 *)v129;
      if ( *(_QWORD *)(*((_QWORD *)v132 + 1) + 32LL) == *(_QWORD *)(*((_QWORD *)v129 + 1) + 32LL) )
      {
        ObfDereferenceObject(v129);
        v24 = -1073741811;
        goto LABEL_40;
      }
    }
    PostBlock = CmpAllocatePostBlock(v23, 0x10000LL, 0LL, 0LL);
    v29 = (_QWORD *)PostBlock;
    v138 = PostBlock;
    if ( !PostBlock )
    {
      if ( v13 == 1 )
        ObfDereferenceObject(v25);
      goto LABEL_103;
    }
    if ( v13 == 1 )
    {
      v15 = (_QWORD *)CmpAllocatePostBlock(v128, 0LL, v25, PostBlock);
      P = v15;
      if ( !v15 )
      {
        ObfDereferenceObject(v25);
        CmpFreePostBlock(v29);
LABEL_103:
        v24 = -1073741670;
        goto LABEL_40;
      }
    }
    v30 = 1LL;
    if ( v128 == 1 )
    {
      v31 = 0LL;
    }
    else
    {
      if ( Handle )
      {
        Object = 0LL;
        v24 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Object, 0LL);
        v135 = Object;
        if ( v24 < 0 )
        {
          if ( v13 != 1 )
          {
LABEL_106:
            v65 = v29;
LABEL_107:
            CmpFreePostBlock(v65);
            goto LABEL_40;
          }
LABEL_105:
          CmpFreePostBlock(v15);
          goto LABEL_106;
        }
        v31 = Object;
        KeResetEvent((PRKEVENT)Object);
      }
      else
      {
        v31 = 0LL;
      }
      v30 = v128;
      v32 = (_QWORD *)v29[8];
      if ( v128 == 2 )
      {
        v32[13] = v137;
        *(_QWORD *)(v29[8] + 8LL) = v31;
        CurrentThread = KeGetCurrentThread();
        v48 = AlpcMessageDeleteProcedure;
        if ( a5 )
          v48 = a5;
        KeInitializeApc(
          v29[8] + 16LL,
          (__int64)CurrentThread,
          2,
          (__int64)CmpPostApc,
          (__int64)CmpPostApcRunDown,
          (__int64)v48,
          a5 != 0LL ? AccessMode : 0,
          a6);
        v25 = (unsigned __int64 *)v129;
      }
      else
      {
        *v32 = v31;
        if ( v128 != 4 )
        {
          *(_QWORD *)(v29[8] + 8LL) = a5;
          v30 = v29[8];
          *(_DWORD *)(v30 + 16) = a6;
        }
      }
    }
    CmpLockRegistry(v30, v27, v28);
    v33 = (char *)v132 + 8;
    v34 = *((_QWORD *)v132 + 1);
    if ( v13 == 1 )
      CmpLockTwoKcbsShared(v34, v25[1]);
    else
      CmpLockKcbShared(v34);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v132, 0LL)
      || v13 == 1 && (unsigned __int8)CmpIsKeyDeletedForKeyBody(v25, 0LL) )
    {
      v52 = *(_QWORD *)v33;
      if ( v13 == 1 )
        CmpUnlockTwoKcbs(v52, v25[1]);
      else
        CmpUnlockKcb(v52);
      CmpUnlockRegistry(v54, v53, v55, v56);
      if ( v31 )
        ObfDereferenceObject(v31);
      if ( v13 == 1 )
        CmpFreePostBlock(P);
      CmpFreePostBlock(v29);
      v24 = -1073741444;
      goto LABEL_40;
    }
    if ( v13 != 1 || (v57 = *(_QWORD *)(*(_QWORD *)v33 + 32LL), v58 = *(_QWORD *)(v25[1] + 32), v57 == v58) )
    {
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(*(_QWORD *)v33 + 32LL) + 1680LL, 0LL);
      LODWORD(Handle) = 1;
    }
    else
    {
      if ( v57 >= v58 )
      {
        ExAcquirePushLockExclusiveEx(v58 + 1680, 0LL);
        ExAcquirePushLockExclusiveEx(*(_QWORD *)(*(_QWORD *)v33 + 32LL) + 1680LL, 0LL);
        LODWORD(Handle) = 3;
      }
      else
      {
        ExAcquirePushLockExclusiveEx(v57 + 1680, 0LL);
        ExAcquirePushLockExclusiveEx(*(_QWORD *)(v25[1] + 32) + 1680LL, 0LL);
        LODWORD(Handle) = 2;
      }
      v134 = *(_QWORD *)(v25[1] + 32);
    }
    ExAcquireFastMutexUnsafe(&CmpPostLock);
    LOBYTE(v35) = a9;
    v24 = CmpNotifyChangeKey(v132, v29, a8, v35);
    if ( v24 >= 0 )
    {
      v126 = v13 == 1;
      if ( v13 == 1 )
      {
        ObfReferenceObject(v25);
        if ( v24 )
        {
          LOBYTE(v59) = a9;
          v24 = CmpNotifyChangeKey(v25, P, a8, v59);
          v126 = v13 == 1;
          if ( v24 < 0 )
          {
            v74 = *v29;
            v75 = (_QWORD *)v29[1];
            if ( *(_QWORD **)(*v29 + 8LL) != v29 )
              goto LABEL_195;
            if ( (_QWORD *)*v75 != v29 )
              goto LABEL_195;
            *v75 = v74;
            *(_QWORD *)(v74 + 8) = v75;
            CurrentIrql = KeGetCurrentIrql();
            v141 = CurrentIrql;
            __writecr8(1uLL);
            v77 = v29[2];
            v78 = (_QWORD *)v29[3];
            if ( *(_QWORD **)(v77 + 8) != v29 + 2 || (_QWORD *)*v78 != v29 + 2 )
              goto LABEL_195;
            *v78 = v77;
            *(_QWORD *)(v77 + 8) = v78;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v79 = KeGetCurrentIrql();
                if ( v79 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v79 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v82 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
                  v64 = (v82 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v82;
                  if ( v64 )
                  {
                    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                    v25 = (unsigned __int64 *)v129;
                    LOBYTE(CurrentIrql) = v141;
                  }
                  else
                  {
                    v25 = (unsigned __int64 *)v129;
                  }
                }
              }
            }
            __writecr8((unsigned __int8)CurrentIrql);
            v126 = v13 == 1;
          }
        }
        else
        {
          CmpFreePostBlock(P);
          v126 = 0;
        }
      }
      ExReleaseFastMutexUnsafe(&CmpPostLock);
      if ( (_DWORD)Handle != 1 )
      {
        if ( (_DWORD)Handle != 2 )
        {
          if ( (_DWORD)Handle != 3 )
            goto LABEL_34;
          v63 = *(_QWORD *)(*(_QWORD *)v33 + 32LL);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v63 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v63 + 1680);
          KeAbPostRelease(v63 + 1680);
          v36 = v134;
LABEL_31:
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v36 + 1680);
          KeAbPostRelease(v36 + 1680);
          v25 = (unsigned __int64 *)v129;
LABEL_34:
          v37 = *(_QWORD *)v33;
          if ( v130 == 1 )
            CmpUnlockTwoKcbs(v37, v25[1]);
          else
            CmpUnlockKcb(v37);
          CmpUnlockRegistry(v39, v38, v40, v41);
          if ( v25 )
            ObfDereferenceObject(v25);
          if ( v24 < 0 )
          {
            CmpFreePostBlock(v29);
            if ( v135 )
              ObfDereferenceObject(v135);
            goto LABEL_40;
          }
          if ( v128 != 1 )
          {
LABEL_40:
            v45 = v124;
            goto LABEL_41;
          }
          CmpReleaseShutdownRundown(v43, v42, v44);
          v124 = 0;
          v83 = KeWaitForSingleObject((PVOID)v29[8], Executive, AccessMode, 1u, 0LL);
          v24 = v83;
          if ( v83 != 257 && v83 != 192 )
          {
            CmpLockRegistry(v85, v84, v86);
            ExAcquireFastMutexUnsafe(&CmpPostLock);
            v87 = KeGetCurrentIrql();
            __writecr8(1uLL);
            if ( v126 )
            {
              v88 = (char *)P;
              v89 = *(PVOID **)P;
              if ( *(_QWORD *)P )
              {
                v90 = (PVOID *)*((_QWORD *)P + 1);
                if ( v89[1] != P || *v90 != P )
                  goto LABEL_195;
                *v90 = v89;
                v89[1] = v90;
              }
              v91 = v88 + 16;
              v92 = *v91;
              v93 = (_QWORD *)v91[1];
              if ( *(_QWORD **)(*v91 + 8LL) != v91 || (_QWORD *)*v93 != v91 )
                goto LABEL_195;
              *v93 = v92;
              *(_QWORD *)(v92 + 8) = v93;
            }
            v94 = *v29;
            if ( *v29 )
            {
              v95 = (_QWORD *)v29[1];
              if ( *(_QWORD **)(v94 + 8) != v29 || (_QWORD *)*v95 != v29 )
                goto LABEL_195;
              *v95 = v94;
              *(_QWORD *)(v94 + 8) = v95;
            }
            v96 = v29[2];
            v97 = (_QWORD *)v29[3];
            if ( *(_QWORD **)(v96 + 8) == v29 + 2 && (_QWORD *)*v97 == v29 + 2 )
            {
              *v97 = v96;
              *(_QWORD *)(v96 + 8) = v97;
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v98 = KeGetCurrentIrql();
                  if ( v98 <= 0xFu && v87 <= 0xFu && v98 >= 2u )
                  {
                    v99 = KeGetCurrentPrcb();
                    v100 = v99->SchedulerAssist;
                    v101 = ~(unsigned __int16)(-1LL << (v87 + 1));
                    v64 = (v101 & v100[5]) == 0;
                    v100[5] &= v101;
                    if ( v64 )
                      KiRemoveSystemWorkPriorityKick((__int64)v99);
                  }
                }
              }
              __writecr8(v87);
              ExReleaseFastMutexUnsafe(&CmpPostLock);
              CmpUnlockRegistry(v103, v102, v104, v105);
              v24 = *(_DWORD *)(v29[8] + 24LL);
              v106 = v137;
              *v137 = v24;
              if ( v127 )
                v106[1] = 0;
              else
                *((_QWORD *)v106 + 1) = 0LL;
              v45 = 0;
              if ( v126 )
                CmpFreePostBlock(P);
              CmpFreePostBlock(v29);
LABEL_41:
              ObfDereferenceObject(v132);
              if ( !v45 )
              {
LABEL_43:
                CmCleanupThreadInfo((__int64 *)&v139);
                return (unsigned int)v24;
              }
              goto LABEL_42;
            }
LABEL_195:
            __fastfail(3u);
          }
          CmpLockRegistry(v85, v84, v86);
          ExAcquireFastMutexUnsafe(&CmpPostLock);
          v107 = KeGetCurrentIrql();
          v138 = v107;
          __writecr8(1uLL);
          v15 = P;
          if ( v126 )
          {
            v108 = *(PVOID **)P;
            if ( *(_QWORD *)P )
            {
              v109 = (PVOID *)*((_QWORD *)P + 1);
              if ( v108[1] != P || *v109 != P )
                goto LABEL_195;
              *v109 = v108;
              v108[1] = v109;
            }
            v110 = v15[2];
            v111 = (_QWORD *)v15[3];
            if ( *(_QWORD **)(v110 + 8) != v15 + 2 || (_QWORD *)*v111 != v15 + 2 )
              goto LABEL_195;
            *v111 = v110;
            *(_QWORD *)(v110 + 8) = v111;
          }
          v112 = *v29;
          if ( *v29 )
          {
            v113 = (_QWORD *)v29[1];
            if ( *(_QWORD **)(v112 + 8) != v29 || (_QWORD *)*v113 != v29 )
              goto LABEL_195;
            *v113 = v112;
            *(_QWORD *)(v112 + 8) = v113;
          }
          v114 = v29[2];
          v115 = (_QWORD *)v29[3];
          if ( *(_QWORD **)(v114 + 8) != v29 + 2 || (_QWORD *)*v115 != v29 + 2 )
            goto LABEL_195;
          *v115 = v114;
          *(_QWORD *)(v114 + 8) = v115;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v116 = KeGetCurrentIrql();
              if ( v116 <= 0xFu && (unsigned __int8)v107 <= 0xFu && v116 >= 2u )
              {
                v117 = KeGetCurrentPrcb();
                v118 = v117->SchedulerAssist;
                v119 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v107 + 1));
                v64 = (v119 & v118[5]) == 0;
                v118[5] &= v119;
                if ( v64 )
                {
                  KiRemoveSystemWorkPriorityKick((__int64)v117);
                  LOBYTE(v107) = v138;
                }
              }
            }
          }
          __writecr8((unsigned __int8)v107);
          ExReleaseFastMutexUnsafe(&CmpPostLock);
          CmpUnlockRegistry(v121, v120, v122, v123);
          if ( !v126 )
            goto LABEL_106;
          goto LABEL_105;
        }
        v60 = v134;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v134 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v60 + 1680);
        KeAbPostRelease(v60 + 1680);
      }
      v36 = *(_QWORD *)(*(_QWORD *)v33 + 32LL);
      goto LABEL_31;
    }
    ExReleaseFastMutexUnsafe(&CmpPostLock);
    switch ( (_DWORD)Handle )
    {
      case 1:
        v66 = *(_QWORD *)(*(_QWORD *)v33 + 32LL);
        break;
      case 2:
        v67 = v134;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v134 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v67 + 1680);
        KeAbPostRelease(v67 + 1680);
        v66 = *(_QWORD *)(*(_QWORD *)v33 + 32LL);
        break;
      case 3:
        v68 = *(_QWORD *)(*(_QWORD *)v33 + 32LL);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v68 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v68 + 1680);
        KeAbPostRelease(v68 + 1680);
        v66 = v134;
        break;
      default:
LABEL_122:
        v69 = *(_QWORD *)v33;
        if ( v13 == 1 )
          CmpUnlockTwoKcbs(v69, v25[1]);
        else
          CmpUnlockKcb(v69);
        CmpUnlockRegistry(v71, v70, v72, v73);
        if ( v135 )
          ObfDereferenceObject(v135);
        if ( v13 != 1 )
          goto LABEL_40;
        v65 = P;
        goto LABEL_107;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v66 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v66 + 1680);
    KeAbPostRelease(v66 + 1680);
    v25 = (unsigned __int64 *)v129;
    v13 = v130;
    goto LABEL_122;
  }
  if ( !a12 )
  {
    v23 = 1;
    goto LABEL_9;
  }
  v23 = 3;
  v128 = 3;
  if ( !v13 )
    goto LABEL_9;
  CmpReleaseShutdownRundown(v20, v19, 1LL);
  CmCleanupThreadInfo((__int64 *)&v139);
  return 3221225485LL;
}
