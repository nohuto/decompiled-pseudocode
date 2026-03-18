/*
 * XREFs of ObWaitForMultipleObjects @ 0x1407A1400
 * Callers:
 *     NtWaitForMultipleObjects32 @ 0x1407A1050 (NtWaitForMultipleObjects32.c)
 *     NtWaitForMultipleObjects @ 0x1407A12B0 (NtWaitForMultipleObjects.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140202234 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x140203D88 (ExFreeToNPagedLookasideList.c)
 *     ExHandleLogBadReference @ 0x14025032C (ExHandleLogBadReference.c)
 *     ExFastReplenishHandleTableEntry @ 0x140251008 (ExFastReplenishHandleTableEntry.c)
 *     ExSlowReplenishHandleTableEntry @ 0x1402AC270 (ExSlowReplenishHandleTableEntry.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ObpIncrPointerCountEx @ 0x1402F3424 (ObpIncrPointerCountEx.c)
 *     ExLockHandleTableEntry @ 0x1402F344C (ExLockHandleTableEntry.c)
 *     ObpIsKernelHandle @ 0x1402F3558 (ObpIsKernelHandle.c)
 *     KeSetKernelStackSwapEnable @ 0x1402F8AA0 (KeSetKernelStackSwapEnable.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     _alloca_probe @ 0x14042A4D0 (_alloca_probe.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 *     ObReferenceProcessHandleTable @ 0x14066B3D8 (ObReferenceProcessHandleTable.c)
 *     ExpLookupHandleTableEntry @ 0x140733340 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1407ED9FC (ExpBlockOnLockedHandleEntry.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
  char v7; // bl
  unsigned __int64 *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 v10; // r14
  int v11; // edi
  struct _KTHREAD *CurrentThread; // r15
  struct _EX_RUNDOWN_REF *Process; // r10
  char v14; // r12
  unsigned __int64 v15; // rcx
  __int64 v16; // r12
  unsigned int v17; // r10d
  unsigned __int64 v18; // r11
  __int64 v19; // r9
  ULONG_PTR v20; // r15
  __int64 v21; // r13
  __int64 *v22; // rax
  __int64 *v23; // rsi
  unsigned __int64 v24; // r8
  __int64 v25; // rax
  __int128 v26; // rt0
  unsigned __int8 v27; // tt
  int v28; // eax
  unsigned __int64 v29; // r15
  struct _OBJECT_TYPE *v30; // rsi
  WAIT_TYPE v31; // r13d
  __int64 DefaultObject; // rax
  ULONG v33; // esi
  bool v34; // zf
  PKWAIT_BLOCK v35; // r14
  unsigned int v36; // esi
  struct _EX_RUNDOWN_REF *v37; // r13
  PVOID *v38; // rbx
  unsigned __int64 v40; // rbx
  struct _KWAIT_BLOCK *Pool2; // rax
  int v42; // eax
  void **v43; // r9
  unsigned int v44; // r10d
  unsigned int v45; // ebx
  PVOID v46; // r8
  __int64 v47; // rdx
  PVOID v48; // rcx
  unsigned __int64 v49; // rcx
  int v50; // ecx
  __int64 v51; // rax
  void *v52; // rsp
  unsigned __int64 *v53; // rbx
  char v54; // r9
  int v55; // r8d
  signed __int32 v56[8]; // [rsp+0h] [rbp-40h] BYREF
  char v57; // [rsp+40h] [rbp+0h] BYREF
  char v58; // [rsp+41h] [rbp+1h]
  char v59; // [rsp+42h] [rbp+2h]
  BOOLEAN v60; // [rsp+43h] [rbp+3h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+48h] [rbp+8h]
  struct _EX_RUNDOWN_REF *v62; // [rsp+50h] [rbp+10h]
  struct _KTHREAD *v63; // [rsp+58h] [rbp+18h]
  __int128 v64; // [rsp+60h] [rbp+20h] BYREF
  WAIT_TYPE WaitType; // [rsp+70h] [rbp+30h]
  ULONG Count; // [rsp+74h] [rbp+34h]
  unsigned int v67; // [rsp+78h] [rbp+38h]
  int v68; // [rsp+7Ch] [rbp+3Ch]
  unsigned __int64 v69; // [rsp+80h] [rbp+40h]
  PNPAGED_LOOKASIDE_LIST Lookaside; // [rsp+88h] [rbp+48h]
  unsigned __int64 *v71; // [rsp+90h] [rbp+50h]
  PLARGE_INTEGER Timeout; // [rsp+98h] [rbp+58h]
  struct _EX_RUNDOWN_REF *v73; // [rsp+A0h] [rbp+60h]
  PVOID Object[64]; // [rsp+B0h] [rbp+70h] BYREF
  _QWORD v75[64]; // [rsp+2B0h] [rbp+270h] BYREF

  WaitType = a4;
  v7 = a3;
  v57 = a3;
  v8 = a2;
  v71 = a2;
  v9 = a1;
  Count = a1;
  Timeout = a7;
  v64 = 0LL;
  memset(v75, 0, sizeof(v75));
  v10 = 0LL;
  memset(Object, 0, sizeof(Object));
  v60 = 0;
  v59 = 0;
  WaitBlockArray = 0LL;
  v11 = 0;
  Lookaside = 0LL;
  if ( (unsigned int)v9 > 3 )
  {
    if ( (unsigned int)v9 > 0xA )
    {
      Lookaside = (PNPAGED_LOOKASIDE_LIST)((char *)&ObpWaitBlockLookaside
                                         + 128 * (unsigned __int64)(((int)v9 - 11) / 0xEu));
      Pool2 = (struct _KWAIT_BLOCK *)ExAllocateFromNPagedLookasideList(Lookaside);
      v40 = 48 * v9;
    }
    else
    {
      v40 = 48 * v9;
      Pool2 = (struct _KWAIT_BLOCK *)ExAllocatePool2(64LL, 48 * v9, 1834443343LL);
    }
    WaitBlockArray = Pool2;
    if ( Pool2 )
    {
      v59 = 1;
    }
    else
    {
      v60 = KeSetKernelStackSwapEnable(0);
      v51 = v40 + 15;
      if ( v40 + 15 < v40 )
        v51 = 0xFFFFFFFFFFFFFF0LL;
      v52 = alloca(v51 & 0xFFFFFFFFFFFFFFF0uLL);
      WaitBlockArray = (PKWAIT_BLOCK)&v57;
    }
    v7 = v57;
  }
  v58 = 0;
  CurrentThread = KeGetCurrentThread();
  v63 = CurrentThread;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  v62 = Process;
  v73 = Process;
  v14 = 1;
  --CurrentThread->KernelApcDisable;
  if ( Process == (struct _EX_RUNDOWN_REF *)CurrentThread->Process )
  {
    v15 = Process[174].Count;
    v69 = v15;
    goto LABEL_4;
  }
  v15 = ObReferenceProcessHandleTable(Process);
  v69 = v15;
  if ( v15 )
  {
    v58 = 1;
    goto LABEL_4;
  }
  if ( !(_DWORD)v9 )
  {
LABEL_4:
    v16 = 0LL;
    v17 = 1;
    v18 = 0x140000000uLL;
    while ( 1 )
    {
      v19 = (unsigned int)v16;
      v20 = v8[v16];
      if ( v7 || (v20 & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL || v20 > 0xFFFFFFFFFFFFFFFDuLL )
      {
        v21 = v15;
      }
      else
      {
        v20 ^= 0xFFFFFFFF80000000uLL;
        v21 = ObpKernelHandleTable;
      }
      if ( (v20 & 0x3FC) != 0 )
      {
        v22 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)v21, v20);
        v23 = v22;
        if ( v22 )
        {
          _m_prefetchw(v22);
          v64 = *(_OWORD *)v22;
LABEL_10:
          v24 = v64;
          while ( (v24 & 0x1FFFE) != 0 )
          {
            if ( (v24 & 1) == 0 )
            {
              ExpBlockOnLockedHandleEntry(v21, v23, v24);
              _m_prefetchw(v23);
              v64 = *(_OWORD *)v23;
              goto LABEL_10;
            }
            *(_QWORD *)&v26 = v24;
            *((_QWORD *)&v26 + 1) = *((_QWORD *)&v64 + 1);
            v27 = _InterlockedCompareExchange128(v23, *((signed __int64 *)&v26 + 1), v24 - 2, (signed __int64 *)&v26);
            v25 = v26;
            v24 = v26;
            v64 = v26;
            if ( v27 )
            {
              if ( (unsigned __int16)((unsigned __int64)v25 >> 1) != 16 )
              {
                v10 = (v25 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
                goto LABEL_16;
              }
              *(_QWORD *)&v64 = ((unsigned int)v24 ^ (2 * (unsigned int)((unsigned __int64)v25 >> 1) - 2)) & 0x1FFFE ^ v24;
              v10 = ((__int64)v64 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
              ObpIncrPointerCountEx((volatile signed __int64 *)v10, 32752);
              v50 = ExFastReplenishHandleTableEntry(v23, (signed __int64 *)&v64, 32752);
              v17 = 1;
              if ( v50 )
                _InterlockedExchangeAdd64((volatile signed __int64 *)v10, -v50);
              goto LABEL_17;
            }
          }
          if ( ExLockHandleTableEntry(v21, v23) )
          {
            v10 = (*v23 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
            v64 = *(_OWORD *)v23;
            v42 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v23);
            ObpIncrPointerCountEx((volatile signed __int64 *)v10, v42 + 1);
            v17 = 1;
            _InterlockedExchangeAdd64(v23, 1uLL);
            _InterlockedOr(v56, 0);
            if ( *(_QWORD *)(v21 + 48) )
            {
              ExfUnblockPushLock((volatile __int64 *)(v21 + 48), 0LL);
LABEL_16:
              v17 = 1;
            }
LABEL_17:
            v19 = (unsigned int)v16;
            v7 = v57;
            v18 = 0x140000000uLL;
            goto LABEL_18;
          }
          v19 = (unsigned int)v16;
          v7 = v57;
          v17 = 1;
          v18 = 0x140000000uLL;
        }
      }
      if ( v20 )
      {
        ExHandleLogBadReference(v21, v20, KeGetCurrentThread()->PreviousMode);
        v19 = (unsigned int)v16;
        v17 = 1;
        v18 = 0x140000000uLL;
      }
      v23 = 0LL;
LABEL_18:
      if ( !v23 )
      {
LABEL_105:
        v36 = -1073741816;
        goto LABEL_85;
      }
      v28 = DWORD2(v64) & 0x1FFFFFF;
      v68 = ++v11;
      v29 = v10 + 48;
      v75[v19] = v10 + 48;
      if ( v7 == 1 )
      {
        if ( (~v28 & 0x100000) != 0 )
        {
          v36 = -1073741790;
          goto LABEL_85;
        }
        if ( (*(_BYTE *)(v10 + 26) & 0x40) != 0 )
        {
          v49 = v10 - *(unsigned __int8 *)((*(_BYTE *)(v10 + 26) & 0x7F) + v18 + 12735552);
          if ( *(_BYTE *)(*(_QWORD *)v49 + 24LL) )
          {
            if ( *(_QWORD *)(*(_QWORD *)v49 + 16LL) == 1LL )
            {
              v36 = -1073700858;
LABEL_85:
              CurrentThread = v63;
              v14 = 1;
              goto LABEL_86;
            }
          }
        }
      }
      v30 = *(struct _OBJECT_TYPE **)(v18
                                    + 8
                                    * ((unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v10 + 24) ^ (unsigned __int64)BYTE1(v10))
                                    + 13661328);
      v31 = WaitType;
      if ( WaitType != WaitAny && v30 == IoCompletionObjectType )
        goto LABEL_105;
      if ( v30 == ExCrossVmMutantObjectType )
      {
        v36 = -1073741788;
        goto LABEL_85;
      }
      if ( ObpTraceFlags )
      {
        ObpPushStackInfo(v10, 1, v17, 0x7457624Fu);
        v19 = (unsigned int)v16;
        v17 = 1;
        v18 = 0x140000000uLL;
      }
      DefaultObject = (__int64)v30->DefaultObject;
      if ( (DefaultObject & 1) == 0 )
        break;
      if ( (DefaultObject & 2) != 0 )
      {
        v7 = v57;
        if ( (v30->TypeInfo.WaitObjectFlagMask & *(_DWORD *)(v30->TypeInfo.WaitObjectFlagOffset + v29)) != v30->TypeInfo.WaitObjectFlagMask )
        {
          DefaultObject -= 3LL;
LABEL_28:
          DefaultObject += v29;
          goto LABEL_29;
        }
        DefaultObject = *(_QWORD *)(v30->TypeInfo.WaitObjectPointerOffset + v29);
      }
      else
      {
        DefaultObject = *(_QWORD *)(DefaultObject + v29 - 1);
      }
LABEL_29:
      Object[v19] = (PVOID)DefaultObject;
      v16 = (unsigned int)(v16 + 1);
      v33 = Count;
      if ( (unsigned int)v16 >= Count )
      {
        if ( v58 )
        {
          v58 = 0;
          ExReleaseRundownProtection(v62 + 139);
        }
        CurrentThread = v63;
        v34 = v63->KernelApcDisable++ == -1;
        if ( v34
          && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
          && !CurrentThread->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v14 = 0;
        v57 = 0;
        if ( v31 == WaitAll && v33 > 1 )
        {
          v43 = &Object[1];
          v44 = 1;
          while ( 2 )
          {
            v45 = v44;
            v46 = *v43;
            do
            {
              v47 = v45 - 1;
              v48 = Object[v47];
              if ( v46 > v48 )
                break;
              if ( v46 == v48 )
              {
                v36 = -1073741776;
                goto LABEL_86;
              }
              Object[v45--] = v48;
            }
            while ( (_DWORD)v47 );
            Object[v45] = v46;
            ++v44;
            ++v43;
            if ( v44 < v33 )
              continue;
            break;
          }
        }
        v35 = WaitBlockArray;
        v36 = KeWaitForMultipleObjects(v33, Object, v31, UserRequest, WaitMode, Alertable, Timeout, WaitBlockArray);
        v67 = v36;
        v37 = v62;
        goto LABEL_37;
      }
      v15 = v69;
      v8 = v71;
    }
    if ( DefaultObject < 0 )
      goto LABEL_29;
    goto LABEL_28;
  }
  v53 = v8;
  v54 = v57;
  while ( ObpIsKernelHandle(*v53, v54) )
  {
    ++v53;
    if ( v55 + 1 >= (unsigned int)v9 )
    {
      v7 = v54;
      v15 = v69;
      goto LABEL_4;
    }
  }
  v36 = -1073741558;
LABEL_86:
  v35 = WaitBlockArray;
  v37 = v62;
LABEL_37:
  if ( v11 )
  {
    v38 = (PVOID *)&v75[v11];
    do
    {
      ObfDereferenceObjectWithTag(*--v38, 0x7457624Fu);
      --v11;
    }
    while ( v11 );
  }
  if ( v14 )
  {
    if ( v58 )
      ExReleaseRundownProtection(v37 + 139);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  if ( v35 )
  {
    if ( v59 )
    {
      if ( Lookaside )
        ExFreeToNPagedLookasideList(Lookaside, v35);
      else
        ExFreePoolWithTag(v35, 0);
    }
    else
    {
      KeSetKernelStackSwapEnable(v60);
    }
  }
  return v36;
}
