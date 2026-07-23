/*
 * XREFs of ObWaitForMultipleObjects @ 0x1406EC520
 * Callers:
 *     NtWaitForMultipleObjects32 @ 0x1405F3380 (NtWaitForMultipleObjects32.c)
 *     NtWaitForMultipleObjects @ 0x1406EC3D0 (NtWaitForMultipleObjects.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x1402011C8 (ExHandleLogBadReference.c)
 *     ExAllocateFromNPagedLookasideList @ 0x140213400 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x14021A938 (ExFreeToNPagedLookasideList.c)
 *     ObpIncrPointerCountEx @ 0x14023A224 (ObpIncrPointerCountEx.c)
 *     ExFastReplenishHandleTableEntry @ 0x140247CF0 (ExFastReplenishHandleTableEntry.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeSetKernelStackSwapEnable @ 0x1402D0A10 (KeSetKernelStackSwapEnable.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     KeWaitForMultipleObjects @ 0x1402F03E0 (KeWaitForMultipleObjects.c)
 *     ExSlowReplenishHandleTableEntry @ 0x140353550 (ExSlowReplenishHandleTableEntry.c)
 *     ExLockHandleTableEntry @ 0x1403535B0 (ExLockHandleTableEntry.c)
 *     ObpIsKernelHandle @ 0x140353610 (ObpIsKernelHandle.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1403F96E0 (ExfUnblockPushLock.c)
 *     _alloca_probe @ 0x140408680 (_alloca_probe.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObpPushStackInfo @ 0x140564F68 (ObpPushStackInfo.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1405E2998 (ExpBlockOnLockedHandleEntry.c)
 *     ObReferenceProcessHandleTable @ 0x1406E4F14 (ObReferenceProcessHandleTable.c)
 *     ExpLookupHandleTableEntry @ 0x1407085D0 (ExpLookupHandleTableEntry.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  unsigned __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r13
  unsigned int v18; // r10d
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // rbx
  ULONG_PTR v21; // r14
  ULONG_PTR v22; // r15
  _QWORD *v23; // rdi
  __int128 v24; // rt0
  unsigned __int8 v25; // tt
  unsigned __int64 v26; // r14
  int v27; // eax
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // r14
  WAIT_TYPE v30; // r15d
  __int64 v31; // r9
  ULONG v32; // edi
  bool v33; // zf
  PKWAIT_BLOCK v34; // r12
  unsigned int v35; // edi
  struct _EX_RUNDOWN_REF *v36; // r15
  PVOID *v37; // rbx
  unsigned __int64 v39; // rbx
  volatile signed __int64 *v40; // rbx
  int v41; // eax
  unsigned int v42; // r10d
  unsigned int v43; // ecx
  __int64 v44; // rbx
  unsigned __int64 v45; // rcx
  int v46; // ecx
  void *v47; // rsp
  unsigned int v48; // ebx
  signed __int32 v49[8]; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int8 v50; // [rsp+40h] [rbp+0h] BYREF
  char v51; // [rsp+41h] [rbp+1h]
  char v52; // [rsp+42h] [rbp+2h]
  BOOLEAN v53; // [rsp+43h] [rbp+3h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+48h] [rbp+8h]
  unsigned __int64 v55; // [rsp+50h] [rbp+10h]
  struct _EX_RUNDOWN_REF *v56; // [rsp+58h] [rbp+18h]
  struct _KTHREAD *v57; // [rsp+60h] [rbp+20h]
  __int128 v58; // [rsp+68h] [rbp+28h] BYREF
  WAIT_TYPE WaitType; // [rsp+78h] [rbp+38h]
  ULONG Count; // [rsp+7Ch] [rbp+3Ch]
  unsigned int v61; // [rsp+80h] [rbp+40h]
  int v62; // [rsp+84h] [rbp+44h]
  unsigned __int64 v63; // [rsp+88h] [rbp+48h]
  PNPAGED_LOOKASIDE_LIST Lookaside; // [rsp+90h] [rbp+50h]
  __int64 v65; // [rsp+98h] [rbp+58h]
  PLARGE_INTEGER Timeout; // [rsp+A0h] [rbp+60h]
  struct _EX_RUNDOWN_REF *v67; // [rsp+A8h] [rbp+68h]
  PVOID Object[64]; // [rsp+B0h] [rbp+70h] BYREF
  _QWORD v69[64]; // [rsp+2B0h] [rbp+270h] BYREF

  WaitType = a4;
  v50 = a3;
  v7 = a2;
  v65 = a2;
  v8 = a1;
  Count = a1;
  Timeout = a7;
  v58 = 0LL;
  memset(v69, 0, sizeof(v69));
  v55 = 0LL;
  memset(Object, 0, sizeof(Object));
  v53 = 0;
  v52 = 0;
  WaitBlockArray = 0LL;
  v11 = 0;
  Lookaside = 0LL;
  if ( (unsigned int)v8 > 3 )
  {
    v39 = 48 * v8;
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
      v52 = 1;
    }
    else
    {
      v53 = KeSetKernelStackSwapEnable(0);
      *(_QWORD *)&v9 = v39 + 15;
      if ( v39 + 15 < v39 )
        *(_QWORD *)&v9 = 0xFFFFFFFFFFFFFF0LL;
      v47 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
      WaitBlockArray = (PKWAIT_BLOCK)&v50;
    }
  }
  v51 = 0;
  CurrentThread = KeGetCurrentThread();
  v57 = CurrentThread;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  v56 = Process;
  v67 = Process;
  v14 = 1;
  --CurrentThread->KernelApcDisable;
  if ( Process == (struct _EX_RUNDOWN_REF *)CurrentThread->Process )
  {
    v15 = Process[174].Count;
    v63 = v15;
LABEL_4:
    v16 = v50;
    goto LABEL_5;
  }
  v15 = ObReferenceProcessHandleTable(Process);
  v63 = v15;
  if ( v15 )
  {
    v51 = 1;
    goto LABEL_4;
  }
  v48 = 0;
  if ( !(_DWORD)v8 )
    goto LABEL_4;
  v10 = v7;
  LOBYTE(v16) = v50;
  while ( ObpIsKernelHandle(*(_QWORD *)v10, v16) )
  {
    ++v48;
    v10 += 8LL;
    if ( v48 >= (unsigned int)v8 )
    {
      v15 = v63;
LABEL_5:
      v17 = 0LL;
      v18 = 1;
      v19 = 0x140000000uLL;
      v20 = v55;
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
          v23 = (_QWORD *)v9;
          if ( (_QWORD)v9 )
          {
            _m_prefetchw((const void *)v9);
            v58 = *(_OWORD *)v9;
LABEL_11:
            v10 = v58;
            while ( (v10 & 0x1FFFE) != 0 )
            {
              if ( (v10 & 1) == 0 )
              {
                ExpBlockOnLockedHandleEntry(v22, v23, v10);
                _m_prefetchw(v23);
                v58 = *(_OWORD *)v23;
                goto LABEL_11;
              }
              *(_QWORD *)&v24 = v10;
              *((_QWORD *)&v24 + 1) = *((_QWORD *)&v58 + 1);
              v25 = _InterlockedCompareExchange128(v23, *((signed __int64 *)&v24 + 1), v10 - 2, (signed __int64 *)&v24);
              v9 = v24;
              v10 = v24;
              v58 = v24;
              if ( v25 )
              {
                if ( (unsigned __int16)((unsigned __int64)v9 >> 1) != 16 )
                {
                  v20 = ((__int64)v9 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                  v55 = v20;
                  v18 = 1;
LABEL_17:
                  v16 = v50;
                  v19 = 0x140000000uLL;
                  goto LABEL_18;
                }
                *(_QWORD *)&v58 = v9 ^ ((unsigned int)v9 ^ (2 * (unsigned int)((unsigned __int64)v9 >> 1) - 2)) & 0x1FFFE;
                v20 = ((__int64)v58 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                v55 = v20;
                ObpIncrPointerCountEx((volatile signed __int64 *)v20, 32752);
                v46 = ExFastReplenishHandleTableEntry(v23, (unsigned __int64 *)&v58, 32752);
                v18 = 1;
                if ( !v46 )
                  goto LABEL_17;
                _InterlockedExchangeAdd64((volatile signed __int64 *)v20, -v46);
LABEL_58:
                v20 = v55;
                goto LABEL_17;
              }
            }
            if ( ExLockHandleTableEntry(v22, v23) )
            {
              v55 = ((__int64)*v23 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
              v40 = (volatile signed __int64 *)v55;
              v58 = *(_OWORD *)v23;
              v41 = ExSlowReplenishHandleTableEntry(v23);
              ObpIncrPointerCountEx(v40, v41 + 1);
              v18 = 1;
              _InterlockedExchangeAdd64(v23, 1uLL);
              _InterlockedOr(v49, 0);
              if ( *(_QWORD *)(v22 + 48) )
              {
                ExfUnblockPushLock((volatile __int64 *)(v22 + 48), 0LL);
                v18 = 1;
              }
              goto LABEL_58;
            }
            v20 = v55;
            v16 = v50;
            v18 = 1;
            v19 = 0x140000000uLL;
          }
        }
        if ( v21 )
        {
          ExHandleLogBadReference(v22, v21, KeGetCurrentThread()->PreviousMode);
          v20 = v55;
          v16 = v50;
          v18 = 1;
          v19 = 0x140000000uLL;
        }
        v23 = 0LL;
LABEL_18:
        v26 = v20;
        if ( !v23 )
        {
LABEL_60:
          v35 = -1073741816;
LABEL_61:
          CurrentThread = v57;
          v14 = 1;
          goto LABEL_62;
        }
        v27 = DWORD2(v58) & 0x1FFFFFF;
        v62 = ++v11;
        v28 = v20 + 48;
        v69[v17] = v20 + 48;
        if ( (_BYTE)v16 == 1 )
        {
          if ( (~v27 & 0x100000) != 0 )
          {
            v35 = -1073741790;
            goto LABEL_61;
          }
          if ( (*(_BYTE *)(v20 + 26) & 0x40) != 0 )
          {
            v45 = v20 - *(unsigned __int8 *)((*(_BYTE *)(v20 + 26) & 0x7F) + v19 + 12738528);
            if ( *(_BYTE *)(*(_QWORD *)v45 + 24LL) )
            {
              if ( *(_QWORD *)(*(_QWORD *)v45 + 16LL) == 1LL )
              {
                v35 = -1073700858;
                goto LABEL_61;
              }
              v20 = v55;
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
                             + 13618816) == IoCompletionObjectType )
        {
          goto LABEL_60;
        }
        *((_QWORD *)&v9 + 1) = ExCrossVmMutantObjectType;
        if ( ExCrossVmMutantObjectType
          && *(POBJECT_TYPE *)(v19
                             + 8
                             * ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v29 ^ (unsigned __int64)*(unsigned __int8 *)(v20 + 24))
                             + 13618816) == ExCrossVmMutantObjectType )
        {
          v35 = -1073741788;
          goto LABEL_61;
        }
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo(v20, 1, v18, 0x7457624Fu);
          v18 = 1;
          v19 = 0x140000000uLL;
        }
        v31 = *(_QWORD *)(v19
                        + 8
                        * ((unsigned __int8)v29 ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(v20 + 24))
                        + 13618816);
        v10 = *(_QWORD *)(v31 + 32);
        if ( (v10 & 1) != 0 )
        {
          if ( (v10 & 2) != 0 )
          {
            *((_QWORD *)&v9 + 1) = *(unsigned int *)(v31 + 176);
            if ( (DWORD2(v9) & *(_DWORD *)(*(unsigned __int16 *)(v31 + 180) + v28)) == DWORD2(v9) )
            {
              v10 = *(_QWORD *)(*(unsigned __int16 *)(v31 + 182) + v28);
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
        v32 = Count;
        if ( (unsigned int)v17 >= Count )
        {
          if ( v51 )
          {
            v51 = 0;
            ExReleaseRundownProtection(v56 + 139);
          }
          CurrentThread = v57;
          v33 = v57->KernelApcDisable++ == -1;
          if ( v33
            && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
            && !CurrentThread->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          v14 = 0;
          v50 = 0;
          if ( v30 == WaitAll && v32 > 1 )
          {
            v16 = (__int64)&Object[1];
            v42 = 1;
            while ( 2 )
            {
              v43 = v42;
              v10 = *(_QWORD *)v16;
              do
              {
                v44 = v43 - 1;
                *((_QWORD *)&v9 + 1) = Object[v44];
                if ( (unsigned __int64)v10 > *((_QWORD *)&v9 + 1) )
                  break;
                if ( v10 == *((_QWORD *)&v9 + 1) )
                {
                  v35 = -1073741776;
                  goto LABEL_62;
                }
                Object[v43--] = (PVOID)*((_QWORD *)&v9 + 1);
              }
              while ( (_DWORD)v44 );
              Object[v43] = (PVOID)v10;
              ++v42;
              v16 += 8LL;
              if ( v42 < v32 )
                continue;
              break;
            }
          }
          v34 = WaitBlockArray;
          v35 = KeWaitForMultipleObjects(v32, Object, v30, UserRequest, WaitMode, Alertable, Timeout, WaitBlockArray);
          v61 = v35;
          v36 = v56;
          goto LABEL_37;
        }
        v16 = v50;
        v15 = v63;
        v7 = v65;
        continue;
      }
    }
  }
  v35 = -1073741558;
LABEL_62:
  v34 = WaitBlockArray;
  v36 = v56;
LABEL_37:
  if ( v11 )
  {
    v37 = (PVOID *)&v69[v11];
    do
    {
      ObfDereferenceObjectWithTag(*--v37, 0x7457624Fu);
      --v11;
    }
    while ( v11 );
  }
  if ( v14 )
  {
    if ( v51 )
      ExReleaseRundownProtection(v36 + 139);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, *((__int64 *)&v9 + 1), v10, v16);
  }
  if ( v34 )
  {
    if ( v52 )
    {
      if ( Lookaside )
        ExFreeToNPagedLookasideList(Lookaside, v34);
      else
        ExFreePoolWithTag(v34, 0);
    }
    else
    {
      KeSetKernelStackSwapEnable(v53);
    }
  }
  return v35;
}
