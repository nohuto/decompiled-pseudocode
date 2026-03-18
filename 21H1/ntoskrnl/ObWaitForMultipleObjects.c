/*
 * XREFs of ObWaitForMultipleObjects @ 0x1405F7860
 * Callers:
 *     NtWaitForMultipleObjects @ 0x1405F7710 (NtWaitForMultipleObjects.c)
 *     NtWaitForMultipleObjects32 @ 0x1406C3310 (NtWaitForMultipleObjects32.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x1402011B8 (ExHandleLogBadReference.c)
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     KeWaitForMultipleObjects @ 0x140243AA0 (KeWaitForMultipleObjects.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ObpIsKernelHandle @ 0x140264120 (ObpIsKernelHandle.c)
 *     ExLockHandleTableEntry @ 0x140264150 (ExLockHandleTableEntry.c)
 *     ExSlowReplenishHandleTableEntry @ 0x140264320 (ExSlowReplenishHandleTableEntry.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402C1284 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x1402D7298 (ExFreeToNPagedLookasideList.c)
 *     KeSetKernelStackSwapEnable @ 0x1402FBF40 (KeSetKernelStackSwapEnable.c)
 *     ObpIncrPointerCountEx @ 0x14030B74C (ObpIncrPointerCountEx.c)
 *     ExFastReplenishHandleTableEntry @ 0x140319EF0 (ExFastReplenishHandleTableEntry.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1403F1A30 (ExfUnblockPushLock.c)
 *     _alloca_probe @ 0x1403FE8D0 (_alloca_probe.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObpPushStackInfo @ 0x14055F238 (ObpPushStackInfo.c)
 *     ObReferenceProcessHandleTable @ 0x14061F2E4 (ObReferenceProcessHandleTable.c)
 *     ExpLookupHandleTableEntry @ 0x14062B830 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1406B626C (ExpBlockOnLockedHandleEntry.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObWaitForMultipleObjects(
        ULONG a1,
        __int64 a2,
        unsigned __int8 a3,
        WAIT_TYPE a4,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        LARGE_INTEGER *a7)
{
  __int64 v7; // r15
  __int64 v8; // rdi
  __int128 v9; // rax
  __int64 v10; // r8
  int v11; // esi
  struct _KTHREAD *CurrentThread; // r14
  struct _EX_RUNDOWN_REF *Process; // r10
  char v14; // r13
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r13
  unsigned int v18; // r10d
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // rbx
  ULONG_PTR v21; // r14
  ULONG_PTR v22; // r15
  __int64 *v23; // rdi
  __int128 v24; // rt0
  unsigned __int8 v25; // tt
  unsigned __int64 v26; // r14
  int v27; // eax
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // r14
  WAIT_TYPE v30; // r15d
  unsigned __int64 v31; // rcx
  __int64 v32; // r9
  ULONG v33; // edi
  bool v34; // zf
  PKWAIT_BLOCK v35; // r12
  unsigned int v36; // edi
  struct _EX_RUNDOWN_REF *v37; // r15
  PVOID *v38; // rbx
  unsigned __int64 v40; // rbx
  volatile signed __int64 *v41; // rbx
  int v42; // eax
  unsigned int v43; // r10d
  unsigned int v44; // ecx
  __int64 v45; // rbx
  unsigned __int64 v46; // rcx
  int v47; // ecx
  void *v48; // rsp
  unsigned int v49; // ebx
  signed __int32 v50[8]; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int8 v51; // [rsp+40h] [rbp+0h] BYREF
  char v52; // [rsp+41h] [rbp+1h]
  char v53; // [rsp+42h] [rbp+2h]
  BOOLEAN v54; // [rsp+43h] [rbp+3h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+48h] [rbp+8h]
  unsigned __int64 v56; // [rsp+50h] [rbp+10h]
  struct _EX_RUNDOWN_REF *v57; // [rsp+58h] [rbp+18h]
  struct _KTHREAD *v58; // [rsp+60h] [rbp+20h]
  __int128 v59; // [rsp+68h] [rbp+28h] BYREF
  WAIT_TYPE WaitType; // [rsp+78h] [rbp+38h]
  ULONG Count; // [rsp+7Ch] [rbp+3Ch]
  unsigned int v62; // [rsp+80h] [rbp+40h]
  int v63; // [rsp+84h] [rbp+44h]
  __int64 v64; // [rsp+88h] [rbp+48h]
  PNPAGED_LOOKASIDE_LIST Lookaside; // [rsp+90h] [rbp+50h]
  __int64 v66; // [rsp+98h] [rbp+58h]
  PLARGE_INTEGER Timeout; // [rsp+A0h] [rbp+60h]
  struct _EX_RUNDOWN_REF *v68; // [rsp+A8h] [rbp+68h]
  PVOID Object[64]; // [rsp+B0h] [rbp+70h] BYREF
  _QWORD v70[64]; // [rsp+2B0h] [rbp+270h] BYREF

  WaitType = a4;
  v51 = a3;
  v7 = a2;
  v66 = a2;
  v8 = a1;
  Count = a1;
  Timeout = a7;
  v59 = 0LL;
  memset(v70, 0, sizeof(v70));
  v56 = 0LL;
  memset(Object, 0, sizeof(Object));
  v54 = 0;
  v53 = 0;
  WaitBlockArray = 0LL;
  v11 = 0;
  Lookaside = 0LL;
  if ( (unsigned int)v8 > 3 )
  {
    v40 = 48 * v8;
    if ( (unsigned int)v8 > 0xA )
    {
      Lookaside = &ObpWaitBlockLookaside + ((int)v8 - 11) / 0xEu;
      *(_QWORD *)&v9 = ExAllocateFromNPagedLookasideList(Lookaside);
    }
    else
    {
      *(_QWORD *)&v9 = ExAllocatePoolWithTag(NonPagedPoolNx, 48 * v8, 0x6D57624Fu);
    }
    WaitBlockArray = (PKWAIT_BLOCK)v9;
    if ( (_QWORD)v9 )
    {
      v53 = 1;
    }
    else
    {
      v54 = KeSetKernelStackSwapEnable(0);
      *(_QWORD *)&v9 = v40 + 15;
      if ( v40 + 15 < v40 )
        *(_QWORD *)&v9 = 0xFFFFFFFFFFFFFF0LL;
      v48 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
      WaitBlockArray = (PKWAIT_BLOCK)&v51;
    }
  }
  v52 = 0;
  CurrentThread = KeGetCurrentThread();
  v58 = CurrentThread;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  v57 = Process;
  v68 = Process;
  v14 = 1;
  --CurrentThread->KernelApcDisable;
  if ( Process == (struct _EX_RUNDOWN_REF *)CurrentThread->Process )
  {
    v15 = Process[174].Count;
    v64 = v15;
LABEL_4:
    v16 = v51;
    goto LABEL_5;
  }
  v15 = ObReferenceProcessHandleTable(Process);
  v64 = v15;
  if ( v15 )
  {
    v52 = 1;
    goto LABEL_4;
  }
  v49 = 0;
  if ( !(_DWORD)v8 )
    goto LABEL_4;
  v10 = v7;
  LOBYTE(v16) = v51;
  while ( ObpIsKernelHandle(*(_QWORD *)v10, v16) )
  {
    ++v49;
    v10 += 8LL;
    if ( v49 >= (unsigned int)v8 )
    {
      v15 = v64;
LABEL_5:
      v17 = 0LL;
      v18 = 1;
      v19 = 0x140000000uLL;
      v20 = v56;
      while ( 2 )
      {
        v21 = *(_QWORD *)(v7 + 8 * v17);
        if ( (_BYTE)v16 || (v21 & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL || v21 > 0xFFFFFFFFFFFFFFFDuLL )
        {
          v22 = v15;
        }
        else
        {
          v21 ^= 0xFFFFFFFF80000000uLL;
          v22 = ObpKernelHandleTable;
        }
        if ( (v21 & 0x3FC) != 0 )
        {
          *(_QWORD *)&v9 = ExpLookupHandleTableEntry(v22, v21);
          v23 = (__int64 *)v9;
          if ( (_QWORD)v9 )
          {
            _m_prefetchw((const void *)v9);
            v59 = *(_OWORD *)v9;
LABEL_11:
            v10 = v59;
            while ( (v10 & 0x1FFFE) != 0 )
            {
              if ( (v10 & 1) == 0 )
              {
                ExpBlockOnLockedHandleEntry(v22, v23);
                _m_prefetchw(v23);
                v59 = *(_OWORD *)v23;
                goto LABEL_11;
              }
              *(_QWORD *)&v24 = v10;
              *((_QWORD *)&v24 + 1) = *((_QWORD *)&v59 + 1);
              v25 = _InterlockedCompareExchange128(v23, *((signed __int64 *)&v24 + 1), v10 - 2, (signed __int64 *)&v24);
              v9 = v24;
              v10 = v24;
              v59 = v24;
              if ( v25 )
              {
                if ( (unsigned __int16)((unsigned __int64)v9 >> 1) != 16 )
                {
                  v20 = ((__int64)v9 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                  v56 = v20;
                  v18 = 1;
LABEL_17:
                  v16 = v51;
                  v19 = 0x140000000uLL;
                  goto LABEL_18;
                }
                *(_QWORD *)&v59 = v9 ^ ((unsigned int)v9 ^ (2 * (unsigned int)((unsigned __int64)v9 >> 1) - 2)) & 0x1FFFE;
                v20 = ((__int64)v59 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                v56 = v20;
                ObpIncrPointerCountEx((volatile signed __int64 *)v20, 32752);
                v47 = ExFastReplenishHandleTableEntry(v23, (unsigned __int64 *)&v59, 32752);
                v18 = 1;
                if ( !v47 )
                  goto LABEL_17;
                _InterlockedExchangeAdd64((volatile signed __int64 *)v20, -v47);
LABEL_58:
                v20 = v56;
                goto LABEL_17;
              }
            }
            if ( ExLockHandleTableEntry(v22, v23) )
            {
              v56 = (*v23 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
              v41 = (volatile signed __int64 *)v56;
              v59 = *(_OWORD *)v23;
              v42 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v23);
              ObpIncrPointerCountEx(v41, v42 + 1);
              v18 = 1;
              _InterlockedExchangeAdd64(v23, 1uLL);
              _InterlockedOr(v50, 0);
              if ( *(_QWORD *)(v22 + 48) )
              {
                ExfUnblockPushLock((volatile __int64 *)(v22 + 48), 0LL);
                v18 = 1;
              }
              goto LABEL_58;
            }
            v20 = v56;
            v16 = v51;
            v18 = 1;
            v19 = 0x140000000uLL;
          }
        }
        if ( v21 )
        {
          ExHandleLogBadReference(v22, v21, KeGetCurrentThread()->PreviousMode);
          v20 = v56;
          v16 = v51;
          v18 = 1;
          v19 = 0x140000000uLL;
        }
        v23 = 0LL;
LABEL_18:
        v26 = v20;
        if ( !v23 )
        {
LABEL_60:
          v36 = -1073741816;
LABEL_61:
          CurrentThread = v58;
          v14 = 1;
          goto LABEL_62;
        }
        v27 = DWORD2(v59) & 0x1FFFFFF;
        v63 = ++v11;
        v28 = v20 + 48;
        v70[v17] = v20 + 48;
        if ( (_BYTE)v16 == 1 )
        {
          if ( (~v27 & 0x100000) != 0 )
          {
            v36 = -1073741790;
            goto LABEL_61;
          }
          if ( (*(_BYTE *)(v20 + 26) & 0x40) != 0 )
          {
            v46 = v20 - *(unsigned __int8 *)((*(_BYTE *)(v20 + 26) & 0x7F) + v19 + 12738400);
            if ( *(_BYTE *)(*(_QWORD *)v46 + 24LL) )
            {
              if ( *(_QWORD *)(*(_QWORD *)v46 + 16LL) == 1LL )
              {
                v36 = -1073700858;
                goto LABEL_61;
              }
              v20 = v56;
            }
          }
        }
        v29 = v26 >> 8;
        v30 = WaitType;
        v10 = (unsigned __int8)v29;
        if ( WaitType != WaitAny
          && *(POBJECT_TYPE *)(v19
                             + 8
                             * ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v29 ^ (unsigned __int64)*(unsigned __int8 *)(v20 + 24))
                             + 13618720) == IoCompletionObjectType )
        {
          goto LABEL_60;
        }
        *((_QWORD *)&v9 + 1) = ExCrossVmMutantObjectType;
        if ( ExCrossVmMutantObjectType
          && *(POBJECT_TYPE *)(v19
                             + 8
                             * ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v29 ^ (unsigned __int64)*(unsigned __int8 *)(v20 + 24))
                             + 13618720) == ExCrossVmMutantObjectType )
        {
          v36 = -1073741788;
          goto LABEL_61;
        }
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo(v20, 1, v18, 0x7457624Fu);
          v18 = 1;
          v19 = 0x140000000uLL;
        }
        v31 = (unsigned __int8)v29 ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(v20 + 24);
        v32 = *(_QWORD *)(v19 + 8 * v31 + 13618720);
        v10 = *(_QWORD *)(v32 + 32);
        if ( (v10 & 1) != 0 )
        {
          if ( (v10 & 2) != 0 )
          {
            *((_QWORD *)&v9 + 1) = *(unsigned int *)(v32 + 176);
            v31 = (unsigned int)(DWORD2(v9) & *(_DWORD *)(*(unsigned __int16 *)(v32 + 180) + v28));
            if ( (_DWORD)v31 == DWORD2(v9) )
            {
              v10 = *(_QWORD *)(*(unsigned __int16 *)(v32 + 182) + v28);
            }
            else
            {
              v10 -= 3LL;
LABEL_28:
              v10 += v28;
            }
          }
          else
          {
            v10 = *(_QWORD *)(v28 + v10 - 1);
          }
        }
        else if ( v10 >= 0 )
        {
          goto LABEL_28;
        }
        Object[v17] = (PVOID)v10;
        v17 = (unsigned int)(v17 + 1);
        v33 = Count;
        if ( (unsigned int)v17 >= Count )
        {
          if ( v52 )
          {
            v52 = 0;
            ExReleaseRundownProtection_0(v57 + 139);
          }
          CurrentThread = v58;
          v34 = v58->KernelApcDisable++ == -1;
          if ( v34
            && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
            && !CurrentThread->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery(v31, *((__int64 *)&v9 + 1), v10, (_DWORD *)v32);
          }
          v14 = 0;
          v51 = 0;
          if ( v30 == WaitAll && v33 > 1 )
          {
            v16 = (__int64)&Object[1];
            v43 = 1;
            while ( 2 )
            {
              v44 = v43;
              v10 = *(_QWORD *)v16;
              do
              {
                v45 = v44 - 1;
                *((_QWORD *)&v9 + 1) = Object[v45];
                if ( (unsigned __int64)v10 > *((_QWORD *)&v9 + 1) )
                  break;
                if ( v10 == *((_QWORD *)&v9 + 1) )
                {
                  v36 = -1073741776;
                  goto LABEL_62;
                }
                Object[v44--] = (PVOID)*((_QWORD *)&v9 + 1);
              }
              while ( (_DWORD)v45 );
              Object[v44] = (PVOID)v10;
              ++v43;
              v16 += 8LL;
              if ( v43 < v33 )
                continue;
              break;
            }
          }
          v35 = WaitBlockArray;
          v36 = KeWaitForMultipleObjects(v33, Object, v30, UserRequest, WaitMode, Alertable, Timeout, WaitBlockArray);
          v62 = v36;
          v37 = v57;
          goto LABEL_37;
        }
        v16 = v51;
        v15 = v64;
        v7 = v66;
        continue;
      }
    }
  }
  v36 = -1073741558;
LABEL_62:
  v35 = WaitBlockArray;
  v37 = v57;
LABEL_37:
  if ( v11 )
  {
    v38 = (PVOID *)&v70[v11];
    do
    {
      ObfDereferenceObjectWithTag(*--v38, 0x7457624Fu);
      --v11;
    }
    while ( v11 );
  }
  if ( v14 )
  {
    if ( v52 )
      ExReleaseRundownProtection_0(v37 + 139);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, *((__int64 *)&v9 + 1), v10, v16);
  }
  if ( v35 )
  {
    if ( v53 )
    {
      if ( Lookaside )
        ExFreeToNPagedLookasideList(Lookaside, v35);
      else
        ExFreePoolWithTag(v35, 0);
    }
    else
    {
      KeSetKernelStackSwapEnable(v54);
    }
  }
  return v36;
}
