/*
 * XREFs of FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14039321C
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1406D98D0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x14022BE58 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     FsRtlpRequestShareableOplock @ 0x1402AA120 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpComputeShareableOplockState @ 0x1402AAA80 (FsRtlpComputeShareableOplockState.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpOplockKeysEqual @ 0x140360830 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpOplockDequeueRH @ 0x1403617F0 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14036CDF0 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpClearOwner @ 0x140374DC8 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x1403799C4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1404F0820 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1404F0BCC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x1406D9878 (FsRtlpOplockUpperLowerCompatible.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall FsRtlpAcknowledgeOplockBreakByCacheFlags(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned int a6)
{
  unsigned int v8; // esi
  _QWORD *PoolWithTag; // r15
  char v10; // r12
  char v11; // di
  int v12; // ecx
  bool v13; // zf
  int v14; // r10d
  unsigned int v15; // r11d
  unsigned int v16; // ecx
  _QWORD *v17; // rdi
  __int64 *v18; // r12
  int v19; // eax
  unsigned int v20; // esi
  _QWORD *v21; // r11
  int v22; // r10d
  __int64 v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  char v29; // al
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  struct _KTHREAD *v33; // rcx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // r8
  void *v37; // rcx
  char v39; // [rsp+50h] [rbp-78h]
  char v40; // [rsp+51h] [rbp-77h]
  char v41; // [rsp+59h] [rbp-6Fh]
  char v42; // [rsp+5Ah] [rbp-6Eh] BYREF
  char v43; // [rsp+5Bh] [rbp-6Dh] BYREF
  char v44; // [rsp+5Ch] [rbp-6Ch]
  int v45; // [rsp+60h] [rbp-68h]
  _QWORD *v46; // [rsp+68h] [rbp-60h] BYREF
  char v47; // [rsp+70h] [rbp-58h]
  char v48; // [rsp+71h] [rbp-57h]
  _QWORD *v49; // [rsp+78h] [rbp-50h]
  __int64 v50; // [rsp+80h] [rbp-48h]
  __int64 v51; // [rsp+88h] [rbp-40h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-38h]
  struct _KTHREAD *v53; // [rsp+98h] [rbp-30h]
  __int64 v54; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v55; // [rsp+D8h] [rbp+10h]

  v55 = a2;
  v54 = a1;
  v8 = 0;
  PoolWithTag = 0LL;
  v46 = 0LL;
  v39 = 0;
  v10 = 0;
  v44 = 0;
  v47 = 0;
  v41 = 0;
  v11 = 0;
  v48 = 0;
  v43 = 0;
  v42 = 0;
  if ( !a1 )
  {
    *(_DWORD *)(a3 + 48) = -1073741597;
    IofCompleteRequest((PIRP)a3, 1);
    return 3221225699LL;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  v12 = *(_DWORD *)(v54 + 144);
  if ( (v12 & 0xF00000) == 0 && (((v12 & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) != 0
    || (((v12 & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0 && *(_QWORD *)(v54 + 72) == v54 + 72 )
  {
LABEL_32:
    v8 = -1073741597;
    *(_DWORD *)(a3 + 48) = -1073741597;
    IofCompleteRequest((PIRP)a3, 1);
    goto LABEL_98;
  }
  v50 = *(_QWORD *)(a3 + 24);
  v13 = (*(_DWORD *)(v50 + 8) & 4) == 0;
  v14 = *(_DWORD *)(v50 + 8) & 4;
  v45 = v14;
  v40 = !v13;
  v15 = 0;
  if ( v14 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x18uLL, 0x6F725346u);
    v46 = PoolWithTag;
    *(_OWORD *)PoolWithTag = 0LL;
    PoolWithTag[2] = 0LL;
    v14 = v45;
    v15 = 0;
  }
  v16 = *(_DWORD *)(v54 + 144) & 0x1F0FFDF;
  if ( v16 <= 0x307040 )
  {
    if ( v16 != 3174464 )
    {
      if ( v16 == 12288 || v16 == 45056 || v16 == 1060864 )
        goto LABEL_8;
      if ( v16 != 1069120 && v16 != 1077312 )
        goto LABEL_32;
    }
LABEL_39:
    v23 = v55;
    if ( !v14 )
      goto LABEL_44;
    v24 = *(_QWORD *)(v54 + 8);
    v25 = *(_QWORD *)(v55 + 48);
    if ( v24 == v25 || !FsRtlpOplockKeysEqual(v25, v24, 0) )
      goto LABEL_32;
    v14 = v45;
    if ( !v45 )
    {
LABEL_44:
      if ( *(_QWORD *)(v54 + 8) != *(_QWORD *)(v23 + 48) )
        goto LABEL_32;
      if ( !v14 )
        goto LABEL_81;
    }
    if ( a4 )
    {
LABEL_81:
      v35 = *(_DWORD *)(v54 + 144) & 0x1F0FFDF;
      if ( (v35 == 1069120 || v35 == 1077312 || v35 == 3174464 || v35 == 5271616 || v35 == 8409152 || v35 == 8417344)
        && (a4 & 0x7000) > (*(_DWORD *)(v54 + 144) & 0x200000 | ((*(_DWORD *)(v54 + 144) & 0x100000 | (*(_DWORD *)(v54 + 144) >> 1) & 0x200000u) >> 1)) >> 7
        && *(_QWORD *)(v54 + 88) != v54 + 88 )
      {
        v11 = 1;
      }
      if ( v11 )
      {
        v36 = *(_QWORD *)(a3 + 24);
        *(_OWORD *)v36 = 0LL;
        *(_QWORD *)(v36 + 16) = 0LL;
        *(_DWORD *)(v36 + 4) = (*(_DWORD *)(v54 + 144) >> 12) & 7;
        *(_DWORD *)(v36 + 8) = (*(_DWORD *)(v54 + 144) & 0x200000 | ((*(_DWORD *)(v54 + 144) & 0x100000 | (*(_DWORD *)(v54 + 144) >> 1) & 0x200000u) >> 1)) >> 19;
        *(_DWORD *)(v36 + 12) |= 1u;
        *(_QWORD *)(a3 + 56) = 24LL;
        v8 = -2147483602;
        *(_DWORD *)(a3 + 48) = -2147483602;
        IofCompleteRequest((PIRP)a3, 1);
        goto LABEL_98;
      }
      FsRtlpModifyThreadPriorities(v54, 0LL, 0);
      FsRtlpClearOwner(v54, 0LL);
      *(_BYTE *)(v54 + 32) = 0;
      v8 = FsRtlpGrantAnyOplockFromExclusive(v54, a3, v23, a4, a5, v40, &v46, &v42, &v43, a6);
      PoolWithTag = v46;
      goto LABEL_93;
    }
    FsRtlpModifyThreadPriorities(v54, 0LL, 0);
    FsRtlpClearOwner(v54, 0LL);
    *(_BYTE *)(v54 + 32) = 0;
    *(_DWORD *)(v54 + 144) = *(_DWORD *)(v54 + 144) & 0x20 | 1;
    PoolWithTag[2] = *(_QWORD *)(v54 + 8);
    v26 = (_QWORD *)(v54 + 104);
    v27 = *(_QWORD *)(v54 + 104);
    if ( *(_QWORD *)(v27 + 8) == v54 + 104 )
    {
      *PoolWithTag = v27;
      PoolWithTag[1] = v26;
      *(_QWORD *)(v27 + 8) = PoolWithTag;
      *v26 = PoolWithTag;
      PoolWithTag = 0LL;
      v46 = 0LL;
      *(_QWORD *)(v54 + 8) = 0LL;
      *(_DWORD *)(v54 + 144) |= 0x1000000u;
      *(_DWORD *)(a3 + 48) = 0;
      IofCompleteRequest((PIRP)a3, 1);
      goto LABEL_93;
    }
LABEL_80:
    __fastfail(3u);
  }
  if ( v16 != 8400896 )
  {
    if ( v16 != 5271616 && v16 != 8409152 && v16 != 8417344 )
      goto LABEL_32;
    goto LABEL_39;
  }
LABEL_8:
  v17 = *(_QWORD **)(v54 + 72);
  while ( 1 )
  {
    v49 = v17;
    if ( v17 == (_QWORD *)(v54 + 72) )
      goto LABEL_24;
    v18 = (__int64 *)(v55 + 48);
    if ( v14 )
      break;
    if ( v17[3] == *v18 )
      goto LABEL_12;
LABEL_55:
    v17 = (_QWORD *)*v17;
    v10 = v44;
  }
  v28 = v17[3];
  if ( v28 == *v18 )
    goto LABEL_55;
  v29 = FsRtlpOplockKeysEqual(*v18, v28, 0);
  v15 = 0;
  v14 = v45;
  if ( !v29 )
    goto LABEL_55;
LABEL_12:
  v39 = 1;
  v19 = v17[6] & 0xF00000;
  v20 = a6;
  if ( v19 != 0x800000 )
  {
    if ( v19 != 0x100000
      || (a4 & 0x7000) <= 0x3000
      || *(_QWORD *)(v54 + 88) == v54 + 88 && (unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a6) )
    {
      goto LABEL_14;
    }
    v30 = *(_QWORD *)(a3 + 24);
    *(_OWORD *)v30 = 0LL;
    *(_QWORD *)(v30 + 16) = 0LL;
    *(_DWORD *)(v30 + 4) = 3;
    if ( *(_QWORD *)(v54 + 88) != v54 + 88 )
      v20 = 1;
LABEL_63:
    *(_DWORD *)(v30 + 8) = v20;
    *(_DWORD *)(v30 + 12) |= 1u;
    *(_QWORD *)(a3 + 56) = 24LL;
    v8 = -2147483602;
    *(_DWORD *)(a3 + 48) = -2147483602;
    IofCompleteRequest((PIRP)a3, 1);
    goto LABEL_23;
  }
  if ( a4 && (*(_QWORD *)(v54 + 88) != v54 + 88 || !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a6)) )
  {
    v30 = *(_QWORD *)(a3 + 24);
    *(_OWORD *)v30 = 0LL;
    *(_QWORD *)(v30 + 16) = 0LL;
    *(_DWORD *)(v30 + 4) = 3;
    if ( *(_QWORD *)(v54 + 88) != v54 + 88 )
      v20 = v15;
    goto LABEL_63;
  }
LABEL_14:
  FsRtlpOplockDequeueRH((__int64)v17);
  if ( !v22 )
  {
    v41 = 1;
    if ( !a4 )
    {
      ObfDereferenceObjectWithTag((PVOID)v17[3], 0x746C6644u);
      goto LABEL_17;
    }
    goto LABEL_71;
  }
  PoolWithTag[2] = v17[3];
  v31 = (_QWORD *)(v54 + 104);
  v32 = *(_QWORD *)(v54 + 104);
  if ( *(_QWORD *)(v32 + 8) != v54 + 104 )
    goto LABEL_80;
  *PoolWithTag = v32;
  PoolWithTag[1] = v31;
  *(_QWORD *)(v32 + 8) = PoolWithTag;
  *v31 = PoolWithTag;
  PoolWithTag = v21;
  v46 = v21;
LABEL_17:
  if ( a4 )
  {
LABEL_71:
    if ( (a4 & 0x4040) == 0 && (a4 & 0x3010) != 0 )
    {
      v8 = FsRtlpRequestShareableOplock(&v54, v55, a3, a4, a5, v40, 1, v20);
    }
    else
    {
      *(_QWORD *)v54 = a3;
      v51 = *(_QWORD *)(a3 + 184);
      *(_BYTE *)(v51 + 3) |= 1u;
      *(_QWORD *)(a3 + 56) = v54;
      CurrentThread = KeGetCurrentThread();
      *(_QWORD *)(v54 + 16) = CurrentThread->ApcState.Process;
      v33 = KeGetCurrentThread();
      v53 = v33;
      *(_QWORD *)(v54 + 24) = v33;
      ObfReferenceObjectWithTag(v33, 0x746C6644u);
      *(_BYTE *)(v54 + 32) = 0;
      if ( v45 )
      {
        ObfReferenceObjectWithTag((PVOID)*v18, 0x746C6644u);
        v34 = *v18;
      }
      else
      {
        v34 = v17[3];
      }
      *(_QWORD *)(v54 + 8) = v34;
      *(_DWORD *)(v54 + 144) = a4 | *(_DWORD *)(v54 + 144) & 0x20 | 0x40;
      *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
      if ( *(_BYTE *)(a3 + 68) )
      {
        FsRtlpCancelExclusiveIrp(a3, 1, v40 ^ 1);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
      }
      v39 = 1;
      v17 = v49;
      PoolWithTag = v46;
      v8 = 259;
    }
  }
  else
  {
    FsRtlpComputeShareableOplockState(v54);
    v8 = 0;
    *(_DWORD *)(a3 + 48) = 0;
    IofCompleteRequest((PIRP)a3, 1);
  }
  FsRtlpModifyThreadPriorities(v54, (__int64)v17, 0);
  FsRtlpClearOwner(v54, (__int64)v17);
  if ( *(_QWORD *)(v54 + 72) == v54 + 72 )
    *(_BYTE *)(v54 + 32) = 0;
  ExFreePoolWithTag(v17, 0);
  if ( v45 )
    *(_DWORD *)(v54 + 144) |= 0x1000000u;
LABEL_23:
  v10 = 1;
LABEL_24:
  if ( !v39 )
    goto LABEL_32;
  if ( v41 )
    FsRtlpReleaseIrpsWaitingForRH(v54);
  if ( !v10 )
  {
LABEL_93:
    if ( v42 )
    {
      while ( 1 )
      {
        v37 = *(void **)(v54 + 88);
        if ( v37 == (void *)(v54 + 88) )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v37);
      }
    }
    if ( v43 )
    {
      ObfDereferenceObjectWithTag(*(PVOID *)(v54 + 8), 0x746C6644u);
      *(_QWORD *)(v54 + 8) = 0LL;
    }
  }
LABEL_98:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v54 + 152));
  return v8;
}
