/*
 * XREFs of ObWaitForMultipleObjects @ 0x14066F900
 * Callers:
 *     NtWaitForMultipleObjects @ 0x14066F7B0 (NtWaitForMultipleObjects.c)
 *     NtWaitForMultipleObjects32 @ 0x1406E3890 (NtWaitForMultipleObjects32.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x1402011B8 (ExHandleLogBadReference.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ObpIsKernelHandle @ 0x14020B240 (ObpIsKernelHandle.c)
 *     ExLockHandleTableEntry @ 0x14020B270 (ExLockHandleTableEntry.c)
 *     ExSlowReplenishHandleTableEntry @ 0x14020B2D0 (ExSlowReplenishHandleTableEntry.c)
 *     ExFreeToNPagedLookasideList @ 0x140269FBC (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14026E044 (ExAllocateFromNPagedLookasideList.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     KeWaitForMultipleObjects @ 0x1402801A0 (KeWaitForMultipleObjects.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     KeSetKernelStackSwapEnable @ 0x140338F70 (KeSetKernelStackSwapEnable.c)
 *     ObpIncrPointerCountEx @ 0x1403492E4 (ObpIncrPointerCountEx.c)
 *     ExFastReplenishHandleTableEntry @ 0x140357A10 (ExFastReplenishHandleTableEntry.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1403F2CC0 (ExfUnblockPushLock.c)
 *     _alloca_probe @ 0x1403FFB60 (_alloca_probe.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObpPushStackInfo @ 0x14055F888 (ObpPushStackInfo.c)
 *     ObReferenceProcessHandleTable @ 0x1405E9CC4 (ObReferenceProcessHandleTable.c)
 *     ExpLookupHandleTableEntry @ 0x1405F62C0 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1406D45FC (ExpBlockOnLockedHandleEntry.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObWaitForMultipleObjects(
        ULONG a1,
        unsigned __int64 *a2,
        char a3,
        WAIT_TYPE a4,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        LARGE_INTEGER *a7)
{
  unsigned __int64 *v7; // r15
  __int64 v8; // rdi
  int v9; // esi
  struct _KTHREAD *CurrentThread; // r14
  struct _EX_RUNDOWN_REF *Process; // r10
  char v12; // r13
  unsigned __int64 v13; // rcx
  char v14; // r9
  __int64 v15; // r13
  unsigned int v16; // r10d
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // rbx
  ULONG_PTR v19; // r14
  ULONG_PTR v20; // r15
  __int64 *v21; // rax
  __int64 *v22; // rdi
  __int64 v23; // r8
  __int64 v24; // rax
  __int128 v25; // rt0
  unsigned __int8 v26; // tt
  unsigned __int64 v27; // r14
  int v28; // eax
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // r14
  WAIT_TYPE v31; // r15d
  unsigned __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // r8
  ULONG v35; // edi
  bool v36; // zf
  PKWAIT_BLOCK v37; // r12
  unsigned int v38; // edi
  struct _EX_RUNDOWN_REF *v39; // r15
  PVOID *v40; // rbx
  unsigned __int64 v42; // rbx
  struct _KWAIT_BLOCK *PoolWithTag; // rax
  volatile signed __int64 *v44; // rbx
  int v45; // eax
  void **v46; // r9
  unsigned int v47; // r10d
  unsigned int v48; // ecx
  PVOID v49; // r8
  __int64 v50; // rbx
  PVOID v51; // rdx
  unsigned __int64 v52; // rcx
  unsigned int v53; // edx
  int v54; // ecx
  __int64 v55; // rax
  void *v56; // rsp
  unsigned int v57; // ebx
  unsigned __int64 *v58; // r8
  __int64 v59; // r8
  signed __int32 v60[8]; // [rsp+0h] [rbp-40h] BYREF
  char v61; // [rsp+40h] [rbp+0h] BYREF
  char v62; // [rsp+41h] [rbp+1h]
  char v63; // [rsp+42h] [rbp+2h]
  BOOLEAN v64; // [rsp+43h] [rbp+3h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+48h] [rbp+8h]
  unsigned __int64 v66; // [rsp+50h] [rbp+10h]
  struct _EX_RUNDOWN_REF *v67; // [rsp+58h] [rbp+18h]
  struct _KTHREAD *v68; // [rsp+60h] [rbp+20h]
  __int128 v69; // [rsp+68h] [rbp+28h] BYREF
  WAIT_TYPE WaitType; // [rsp+78h] [rbp+38h]
  ULONG Count; // [rsp+7Ch] [rbp+3Ch]
  unsigned int v72; // [rsp+80h] [rbp+40h]
  int v73; // [rsp+84h] [rbp+44h]
  unsigned __int64 v74; // [rsp+88h] [rbp+48h]
  PNPAGED_LOOKASIDE_LIST Lookaside; // [rsp+90h] [rbp+50h]
  unsigned __int64 *v76; // [rsp+98h] [rbp+58h]
  PLARGE_INTEGER Timeout; // [rsp+A0h] [rbp+60h]
  struct _EX_RUNDOWN_REF *v78; // [rsp+A8h] [rbp+68h]
  PVOID Object[64]; // [rsp+B0h] [rbp+70h] BYREF
  _QWORD v80[64]; // [rsp+2B0h] [rbp+270h] BYREF

  WaitType = a4;
  v61 = a3;
  v7 = a2;
  v76 = a2;
  v8 = a1;
  Count = a1;
  Timeout = a7;
  v69 = 0LL;
  memset(v80, 0, sizeof(v80));
  v66 = 0LL;
  memset(Object, 0, sizeof(Object));
  v64 = 0;
  v63 = 0;
  WaitBlockArray = 0LL;
  v9 = 0;
  Lookaside = 0LL;
  if ( (unsigned int)v8 > 3 )
  {
    v42 = 48 * v8;
    if ( (unsigned int)v8 > 0xA )
    {
      Lookaside = &ObpWaitBlockLookaside + ((int)v8 - 11) / 0xEu;
      PoolWithTag = (struct _KWAIT_BLOCK *)ExAllocateFromNPagedLookasideList(Lookaside);
    }
    else
    {
      PoolWithTag = (struct _KWAIT_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 48 * v8, 0x6D57624Fu);
    }
    WaitBlockArray = PoolWithTag;
    if ( PoolWithTag )
    {
      v63 = 1;
    }
    else
    {
      v64 = KeSetKernelStackSwapEnable(0);
      v55 = v42 + 15;
      if ( v42 + 15 < v42 )
        v55 = 0xFFFFFFFFFFFFFF0LL;
      v56 = alloca(v55 & 0xFFFFFFFFFFFFFFF0uLL);
      WaitBlockArray = (PKWAIT_BLOCK)&v61;
    }
  }
  v62 = 0;
  CurrentThread = KeGetCurrentThread();
  v68 = CurrentThread;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  v67 = Process;
  v78 = Process;
  v12 = 1;
  --CurrentThread->KernelApcDisable;
  if ( Process == (struct _EX_RUNDOWN_REF *)CurrentThread->Process )
  {
    v13 = Process[174].Count;
    v74 = v13;
LABEL_4:
    v14 = v61;
    goto LABEL_5;
  }
  v13 = ObReferenceProcessHandleTable(Process);
  v74 = v13;
  if ( v13 )
  {
    v62 = 1;
    goto LABEL_4;
  }
  v57 = 0;
  if ( !(_DWORD)v8 )
    goto LABEL_4;
  v58 = v7;
  v14 = v61;
  while ( ObpIsKernelHandle(*v58, v14) )
  {
    ++v57;
    v58 = (unsigned __int64 *)(v59 + 8);
    if ( v57 >= (unsigned int)v8 )
    {
      v13 = v74;
LABEL_5:
      v15 = 0LL;
      v16 = 1;
      v17 = 0x140000000uLL;
      v18 = v66;
      while ( 2 )
      {
        v19 = v7[v15];
        if ( v14 || (v19 & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL || v19 > 0xFFFFFFFFFFFFFFFDuLL )
        {
          v20 = v13;
        }
        else
        {
          v19 ^= 0xFFFFFFFF80000000uLL;
          v20 = ObpKernelHandleTable;
        }
        if ( (v19 & 0x3FC) != 0 )
        {
          v21 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)v20, v19);
          v22 = v21;
          if ( v21 )
          {
            _m_prefetchw(v21);
            v69 = *(_OWORD *)v21;
LABEL_11:
            v23 = v69;
            while ( (v23 & 0x1FFFE) != 0 )
            {
              if ( (v23 & 1) == 0 )
              {
                ExpBlockOnLockedHandleEntry(v20, v22);
                _m_prefetchw(v22);
                v69 = *(_OWORD *)v22;
                goto LABEL_11;
              }
              *(_QWORD *)&v25 = v23;
              *((_QWORD *)&v25 + 1) = *((_QWORD *)&v69 + 1);
              v26 = _InterlockedCompareExchange128(v22, *((signed __int64 *)&v25 + 1), v23 - 2, (signed __int64 *)&v25);
              v24 = v25;
              v23 = v25;
              v69 = v25;
              if ( v26 )
              {
                if ( (unsigned __int16)((unsigned __int64)v24 >> 1) != 16 )
                {
                  v18 = (v24 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                  v66 = v18;
                  v16 = 1;
LABEL_17:
                  v14 = v61;
                  v17 = 0x140000000uLL;
                  goto LABEL_18;
                }
                *(_QWORD *)&v69 = v24 ^ ((unsigned int)v24 ^ (2 * (unsigned int)((unsigned __int64)v24 >> 1) - 2)) & 0x1FFFE;
                v18 = ((__int64)v69 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                v66 = v18;
                ObpIncrPointerCountEx((volatile signed __int64 *)v18, 32752);
                v54 = ExFastReplenishHandleTableEntry(v22, (unsigned __int64 *)&v69, 32752);
                v16 = 1;
                if ( !v54 )
                  goto LABEL_17;
                _InterlockedExchangeAdd64((volatile signed __int64 *)v18, -v54);
LABEL_58:
                v18 = v66;
                goto LABEL_17;
              }
            }
            if ( ExLockHandleTableEntry(v20, v22) )
            {
              v66 = (*v22 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
              v44 = (volatile signed __int64 *)v66;
              v69 = *(_OWORD *)v22;
              v45 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v22);
              ObpIncrPointerCountEx(v44, v45 + 1);
              v16 = 1;
              _InterlockedExchangeAdd64(v22, 1uLL);
              _InterlockedOr(v60, 0);
              if ( *(_QWORD *)(v20 + 48) )
              {
                ExfUnblockPushLock((volatile __int64 *)(v20 + 48), 0LL);
                v16 = 1;
              }
              goto LABEL_58;
            }
            v18 = v66;
            v14 = v61;
            v16 = 1;
            v17 = 0x140000000uLL;
          }
        }
        if ( v19 )
        {
          ExHandleLogBadReference(v20, v19, KeGetCurrentThread()->PreviousMode);
          v18 = v66;
          v14 = v61;
          v16 = 1;
          v17 = 0x140000000uLL;
        }
        v22 = 0LL;
LABEL_18:
        v27 = v18;
        if ( !v22 )
        {
LABEL_60:
          v38 = -1073741816;
LABEL_61:
          CurrentThread = v68;
          v12 = 1;
          goto LABEL_62;
        }
        v28 = DWORD2(v69) & 0x1FFFFFF;
        v73 = ++v9;
        v29 = v18 + 48;
        v80[v15] = v18 + 48;
        if ( v14 == 1 )
        {
          if ( (~v28 & 0x100000) != 0 )
          {
            v38 = -1073741790;
            goto LABEL_61;
          }
          if ( (*(_BYTE *)(v18 + 26) & 0x40) != 0 )
          {
            v52 = v18 - *(unsigned __int8 *)((*(_BYTE *)(v18 + 26) & 0x7F) + v17 + 12737856);
            if ( *(_BYTE *)(*(_QWORD *)v52 + 24LL) )
            {
              if ( *(_QWORD *)(*(_QWORD *)v52 + 16LL) == 1LL )
              {
                v38 = -1073700858;
                goto LABEL_61;
              }
              v18 = v66;
            }
          }
        }
        v30 = v27 >> 8;
        v31 = WaitType;
        if ( WaitType != WaitAny
          && *(POBJECT_TYPE *)(v17
                             + 8
                             * ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v30 ^ (unsigned __int64)*(unsigned __int8 *)(v18 + 24))
                             + 13618816) == IoCompletionObjectType )
        {
          goto LABEL_60;
        }
        if ( ExCrossVmMutantObjectType
          && *(POBJECT_TYPE *)(v17
                             + 8
                             * ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v30 ^ (unsigned __int64)*(unsigned __int8 *)(v18 + 24))
                             + 13618816) == ExCrossVmMutantObjectType )
        {
          v38 = -1073741788;
          goto LABEL_61;
        }
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo(v18, 1, v16, 0x7457624Fu);
          v16 = 1;
          v17 = 0x140000000uLL;
        }
        v32 = (unsigned __int8)v30 ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(v18 + 24);
        v33 = *(_QWORD *)(v17 + 8 * v32 + 13618816);
        v34 = *(_QWORD *)(v33 + 32);
        if ( (v34 & 1) != 0 )
        {
          if ( (v34 & 2) != 0 )
          {
            v53 = *(_DWORD *)(v33 + 176);
            v32 = v53 & *(_DWORD *)(*(unsigned __int16 *)(v33 + 180) + v29);
            if ( (_DWORD)v32 == v53 )
            {
              v34 = *(_QWORD *)(*(unsigned __int16 *)(v33 + 182) + v29);
            }
            else
            {
              v34 -= 3LL;
LABEL_28:
              v34 += v29;
            }
          }
          else
          {
            v34 = *(_QWORD *)(v29 + v34 - 1);
          }
        }
        else if ( v34 >= 0 )
        {
          goto LABEL_28;
        }
        Object[v15] = (PVOID)v34;
        v15 = (unsigned int)(v15 + 1);
        v35 = Count;
        if ( (unsigned int)v15 >= Count )
        {
          if ( v62 )
          {
            v62 = 0;
            ExReleaseRundownProtection_0(v67 + 139);
          }
          CurrentThread = v68;
          v36 = v68->KernelApcDisable++ == -1;
          if ( v36
            && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
            && !CurrentThread->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery(v32);
          }
          v12 = 0;
          v61 = 0;
          if ( v31 == WaitAll && v35 > 1 )
          {
            v46 = &Object[1];
            v47 = 1;
            while ( 2 )
            {
              v48 = v47;
              v49 = *v46;
              do
              {
                v50 = v48 - 1;
                v51 = Object[v50];
                if ( v49 > v51 )
                  break;
                if ( v49 == v51 )
                {
                  v38 = -1073741776;
                  goto LABEL_62;
                }
                Object[v48--] = v51;
              }
              while ( (_DWORD)v50 );
              Object[v48] = v49;
              ++v47;
              ++v46;
              if ( v47 < v35 )
                continue;
              break;
            }
          }
          v37 = WaitBlockArray;
          v38 = KeWaitForMultipleObjects(v35, Object, v31, UserRequest, WaitMode, Alertable, Timeout, WaitBlockArray);
          v72 = v38;
          v39 = v67;
          goto LABEL_37;
        }
        v14 = v61;
        v13 = v74;
        v7 = v76;
        continue;
      }
    }
  }
  v38 = -1073741558;
LABEL_62:
  v37 = WaitBlockArray;
  v39 = v67;
LABEL_37:
  if ( v9 )
  {
    v40 = (PVOID *)&v80[v9];
    do
    {
      ObfDereferenceObjectWithTag(*--v40, 0x7457624Fu);
      --v9;
    }
    while ( v9 );
  }
  if ( v12 )
  {
    if ( v62 )
      ExReleaseRundownProtection_0(v39 + 139);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  if ( v37 )
  {
    if ( v63 )
    {
      if ( Lookaside )
        ExFreeToNPagedLookasideList(Lookaside, v37);
      else
        ExFreePoolWithTag(v37, 0);
    }
    else
    {
      KeSetKernelStackSwapEnable(v64);
    }
  }
  return v38;
}
