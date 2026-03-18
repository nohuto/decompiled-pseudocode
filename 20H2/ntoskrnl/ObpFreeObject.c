/*
 * XREFs of ObpFreeObject @ 0x140611220
 * Callers:
 *     ObpRemoveObjectRoutine @ 0x140611140 (ObpRemoveObjectRoutine.c)
 * Callees:
 *     PspReturnQuota @ 0x1402175A0 (PspReturnQuota.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     PspReturnResourceQuota @ 0x14031D758 (PspReturnResourceQuota.c)
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PspDereferenceQuotaBlock @ 0x1405F7148 (PspDereferenceQuotaBlock.c)
 *     SeReleaseSecurityDescriptor @ 0x14061F930 (SeReleaseSecurityDescriptor.c)
 *     PspRemoveQuotaBlock @ 0x140909BF8 (PspRemoveQuotaBlock.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall ObpFreeObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD *v6; // r15
  PVOID *v7; // r12
  int *v8; // rsi
  unsigned int *v9; // r14
  char v10; // di
  __int64 v11; // rbp
  __int64 v12; // rcx
  volatile signed __int32 *v13; // r15
  unsigned int v14; // r12d
  unsigned int v15; // r13d
  __int64 v16; // rsi
  ULONG v17; // edx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // r8
  void *v20; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rax
  signed int v24; // r12d
  char *v25; // r13
  __int64 v26; // r15
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r8
  PVOID *v30; // [rsp+60h] [rbp+8h]
  __int64 v31; // [rsp+68h] [rbp+10h]
  PVOID *v32; // [rsp+70h] [rbp+18h]

  v4 = *(unsigned __int8 *)(a1 + 26);
  if ( (v4 & 1) != 0 )
    v6 = (_QWORD *)(a1 - 32);
  else
    v6 = 0LL;
  if ( (v4 & 2) != 0 )
  {
    a3 = a1 - ObpInfoMaskToOffset[v4 & 3];
    v31 = a3;
  }
  else
  {
    v31 = 0LL;
  }
  if ( (v4 & 4) != 0 )
    v7 = (PVOID *)(a1 - ObpInfoMaskToOffset[v4 & 7]);
  else
    v7 = 0LL;
  v30 = v7;
  if ( (v4 & 8) != 0 )
    v8 = (int *)(a1 - ObpInfoMaskToOffset[v4 & 0xF]);
  else
    v8 = 0LL;
  if ( (v4 & 0x20) != 0 )
    v32 = (PVOID *)(a1 - ObpInfoMaskToOffset[v4 & 0x3F]);
  else
    v32 = 0LL;
  v9 = (unsigned int *)(a1 - ObpInfoMaskToOffset[v4]);
  if ( (v4 & 0x80u) != 0LL )
    v9 = (unsigned int *)((char *)v9 + 4LL - *v9);
  v10 = BYTE1(a1);
  v11 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ BYTE1(a1) ^ (unsigned __int64)*(unsigned __int8 *)(a1 + 24)];
  if ( v6 && (_QWORD *)*v6 != v6 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v11 + 184, 0LL);
    v22 = *v6;
    v23 = (_QWORD *)v6[1];
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (_QWORD *)*v23 != v6 )
      __fastfail(3u);
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
    ExReleasePushLockEx(v11 + 184, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  _InterlockedDecrement((volatile signed __int32 *)(v11 + 44));
  v12 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(a1 + 27) & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_26;
    if ( *(_QWORD *)(v12 + 32) )
    {
      LOBYTE(a3) = 1;
      SeReleaseSecurityDescriptor(*(_QWORD *)(v12 + 32), *(unsigned __int8 *)(v12 + 16), a3, a4);
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) = 0LL;
      v12 = *(_QWORD *)(a1 + 32);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[4].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[4].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)v12);
    }
    else
    {
      ++P->FreeMisses;
      ((void (*)(void))P->FreeEx)();
    }
    goto LABEL_25;
  }
  if ( v12 )
  {
    if ( v8 )
    {
      v13 = (volatile signed __int32 *)*((_QWORD *)v8 + 2);
      v14 = *v8;
      v15 = v8[1];
      if ( (unsigned __int64)v13 > 1 )
      {
        if ( v8[2] )
          PspReturnQuota(*((char **)v8 + 2), 0LL, 1u, (unsigned int)v8[2]);
        PspDereferenceQuotaBlock(v13);
      }
    }
    else
    {
      v14 = *(_DWORD *)(v11 + 104);
      v15 = *(_DWORD *)(v11 + 108);
    }
    v16 = *(_QWORD *)(a1 + 32);
    if ( v16 == 1 )
      goto LABEL_24;
    if ( v14 )
      PspReturnQuota(*(char **)(a1 + 32), 0LL, 1u, v14);
    if ( v15 )
      PspReturnQuota((char *)v16, 0LL, 0, v15);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 512), 0xFFFFFFFF) != 1 )
    {
LABEL_24:
      v7 = v30;
LABEL_25:
      *(_QWORD *)(a1 + 32) = 0LL;
      goto LABEL_26;
    }
    v24 = 0;
    v25 = PspResourceFlags;
    v26 = v16 + 64;
    while ( 1 )
    {
      if ( (*v25 & 3) == 1 )
      {
        v27 = *(_QWORD *)(v26 + 16);
        v28 = *(_QWORD *)v26;
        if ( *(_QWORD *)v26 + *(_QWORD *)(v26 + 8) )
        {
          if ( v27 )
          {
            v29 = _InterlockedExchange64((volatile __int64 *)(v26 + 8), 0LL);
            v28 = _InterlockedExchange64((volatile __int64 *)v26, 0LL) + v29;
          }
          if ( v28 )
          {
LABEL_66:
            PspReturnResourceQuota(v24, v26 - 64, v28, v27 != 0);
            goto LABEL_67;
          }
        }
        else
        {
          v28 = 0LL;
        }
        if ( v27 )
          goto LABEL_66;
      }
LABEL_67:
      ++v24;
      v26 += 128LL;
      v25 += 8;
      if ( v24 >= 4 )
      {
        PspRemoveQuotaBlock(v16);
        ExFreePoolWithTag((PVOID)v16, 0);
        goto LABEL_24;
      }
    }
  }
LABEL_26:
  if ( v7 && (*(_BYTE *)(a1 + 27) & 0x40) == 0 )
  {
    ExFreePoolWithTag(*v7, 0);
    *v7 = 0LL;
  }
  if ( v31 )
  {
    v20 = *(void **)(v31 + 16);
    if ( v20 )
    {
      ExFreePoolWithTag(v20, 0);
      *(_QWORD *)(v31 + 16) = 0LL;
    }
  }
  if ( v32 && *v32 )
  {
    ExFreePoolWithTag(*v32, 0);
    *v32 = 0LL;
  }
  *(_BYTE *)(a1 + 24) = ObHeaderCookie ^ v10 ^ 1;
  if ( v11 )
    v17 = *(_DWORD *)(v11 + 192);
  else
    v17 = 1416258127;
  ExFreePoolWithTag(v9, v17);
}
