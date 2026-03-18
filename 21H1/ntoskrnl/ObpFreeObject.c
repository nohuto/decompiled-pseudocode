/*
 * XREFs of ObpFreeObject @ 0x1405FB360
 * Callers:
 *     ObpRemoveObjectRoutine @ 0x1405FB280 (ObpRemoveObjectRoutine.c)
 * Callees:
 *     PspReturnQuota @ 0x14024C650 (PspReturnQuota.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     PspReturnResourceQuota @ 0x14030F328 (PspReturnResourceQuota.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     SeReleaseSecurityDescriptor @ 0x1405E2F00 (SeReleaseSecurityDescriptor.c)
 *     PspDereferenceQuotaBlock @ 0x140615568 (PspDereferenceQuotaBlock.c)
 *     PspRemoveQuotaBlock @ 0x140902CF4 (PspRemoveQuotaBlock.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall ObpFreeObject(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  _QWORD *v5; // r15
  PVOID *v6; // rdx
  PVOID *v7; // r12
  int *v8; // rsi
  unsigned int *v9; // r14
  char v10; // di
  __int64 v11; // rbp
  __int64 v12; // rcx
  void *v13; // r15
  unsigned int v14; // r12d
  unsigned int v15; // r13d
  __int64 v16; // rsi
  __int64 v17; // r9
  ULONG v18; // edx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // r8
  void *v21; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  signed int v28; // r12d
  char *v29; // r13
  __int64 v30; // r15
  __int64 v31; // r8
  PVOID *v32; // [rsp+60h] [rbp+8h]
  __int64 v33; // [rsp+68h] [rbp+10h]
  PVOID *v34; // [rsp+70h] [rbp+18h]

  v3 = *(unsigned __int8 *)(a1 + 26);
  if ( (v3 & 1) != 0 )
    v5 = (_QWORD *)(a1 - 32);
  else
    v5 = 0LL;
  v6 = (PVOID *)*(unsigned __int8 *)(a1 + 26);
  if ( (v3 & 2) != 0 )
  {
    a3 = a1 - ObpInfoMaskToOffset[v3 & 3];
    v33 = a3;
  }
  else
  {
    v33 = 0LL;
  }
  if ( (v3 & 4) != 0 )
    v7 = (PVOID *)(a1 - ObpInfoMaskToOffset[v3 & 7]);
  else
    v7 = 0LL;
  v32 = v7;
  if ( (v3 & 8) != 0 )
    v8 = (int *)(a1 - ObpInfoMaskToOffset[v3 & 0xF]);
  else
    v8 = 0LL;
  if ( (v3 & 0x20) != 0 )
  {
    v6 = (PVOID *)(a1 - ObpInfoMaskToOffset[v3 & 0x3F]);
    v34 = v6;
  }
  else
  {
    v34 = 0LL;
  }
  v9 = (unsigned int *)(a1 - ObpInfoMaskToOffset[v3]);
  if ( (v3 & 0x80u) != 0LL )
    v9 = (unsigned int *)((char *)v9 + 4LL - *v9);
  v10 = BYTE1(a1);
  v11 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ BYTE1(a1) ^ (unsigned __int64)*(unsigned __int8 *)(a1 + 24)];
  if ( v5 && (_QWORD *)*v5 != v5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v11 + 184, 0LL);
    v23 = *v5;
    v24 = (_QWORD *)v5[1];
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v24 != v5 )
      __fastfail(3u);
    *v24 = v23;
    *(_QWORD *)(v23 + 8) = v24;
    ExReleasePushLockEx(v11 + 184, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v25, v26, v27);
  }
  _InterlockedDecrement((volatile signed __int32 *)(v11 + 44));
  v12 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(a1 + 27) & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_26;
    if ( *(_QWORD *)(v12 + 32) )
    {
      SeReleaseSecurityDescriptor(*(void **)(v12 + 32), *(_BYTE *)(v12 + 16), 1);
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
      v13 = (void *)*((_QWORD *)v8 + 2);
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
    v17 = v14;
    if ( v16 == 1 )
      goto LABEL_24;
    if ( v14 )
      PspReturnQuota(*(char **)(a1 + 32), 0LL, 1u, v14);
    if ( v15 )
      PspReturnQuota((char *)v16, 0LL, 0, v15);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 512), 0xFFFFFFFF) != 1 )
    {
LABEL_24:
      v7 = v32;
LABEL_25:
      *(_QWORD *)(a1 + 32) = 0LL;
      goto LABEL_26;
    }
    v28 = 0;
    v29 = PspResourceFlags;
    v30 = v16 + 64;
    while ( 1 )
    {
      if ( (*v29 & 3) == 1 )
      {
        v6 = *(PVOID **)(v30 + 16);
        a3 = *(_QWORD *)v30;
        v17 = v6 != 0LL;
        if ( *(_QWORD *)v30 + *(_QWORD *)(v30 + 8) )
        {
          if ( v6 )
          {
            v31 = _InterlockedExchange64((volatile __int64 *)(v30 + 8), 0LL);
            a3 = _InterlockedExchange64((volatile __int64 *)v30, 0LL) + v31;
          }
          if ( a3 )
          {
LABEL_66:
            PspReturnResourceQuota(v28, v30 - 64, a3, v17);
            goto LABEL_67;
          }
        }
        else
        {
          a3 = 0LL;
        }
        if ( v6 )
          goto LABEL_66;
      }
LABEL_67:
      ++v28;
      v30 += 128LL;
      v29 += 8;
      if ( v28 >= 4 )
      {
        PspRemoveQuotaBlock(v16, v6, a3, v17);
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
  if ( v33 )
  {
    v21 = *(void **)(v33 + 16);
    if ( v21 )
    {
      ExFreePoolWithTag(v21, 0);
      *(_QWORD *)(v33 + 16) = 0LL;
    }
  }
  if ( v34 && *v34 )
  {
    ExFreePoolWithTag(*v34, 0);
    *v34 = 0LL;
  }
  *(_BYTE *)(a1 + 24) = ObHeaderCookie ^ v10 ^ 1;
  if ( v11 )
    v18 = *(_DWORD *)(v11 + 192);
  else
    v18 = 1416258127;
  ExFreePoolWithTag(v9, v18);
}
