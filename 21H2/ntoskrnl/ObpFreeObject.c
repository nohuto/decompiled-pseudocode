/*
 * XREFs of ObpFreeObject @ 0x1407CDBA0
 * Callers:
 *     ObpRemoveObjectRoutine @ 0x1407CDAC0 (ObpRemoveObjectRoutine.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x140243648 (PspReturnResourceQuota.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     PspReturnQuota @ 0x1403493B0 (PspReturnQuota.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PspDereferenceQuotaBlock @ 0x140724E14 (PspDereferenceQuotaBlock.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 *     PspRemoveQuotaBlock @ 0x1409AD180 (PspRemoveQuotaBlock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall ObpFreeObject(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v3; // r12
  PVOID *v4; // r13
  int *v5; // r14
  PVOID *v6; // r15
  unsigned int *v7; // rbp
  char v8; // di
  __int64 v9; // rsi
  __int64 v10; // rcx
  char *v11; // rax
  unsigned int v12; // r13d
  ULONG_PTR v13; // r12
  __int64 v14; // r14
  ULONG v15; // edx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // r8
  void *v18; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rax
  struct _KTHREAD *v22; // rcx
  bool v23; // zf
  signed int v24; // r13d
  char *v25; // rdi
  __int64 v26; // r12
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r8
  PVOID *v30; // [rsp+70h] [rbp+8h]
  __int64 v31; // [rsp+78h] [rbp+10h]
  char *v32; // [rsp+80h] [rbp+18h]

  v1 = *(unsigned __int8 *)(a1 + 26);
  if ( (v1 & 1) != 0 )
    v3 = (_QWORD *)(a1 - 32);
  else
    v3 = 0LL;
  if ( (v1 & 2) != 0 )
    v31 = a1 - ObpInfoMaskToOffset[v1 & 3];
  else
    v31 = 0LL;
  if ( (v1 & 4) != 0 )
    v4 = (PVOID *)(a1 - ObpInfoMaskToOffset[v1 & 7]);
  else
    v4 = 0LL;
  v30 = v4;
  if ( (v1 & 8) != 0 )
    v5 = (int *)(a1 - ObpInfoMaskToOffset[v1 & 0xF]);
  else
    v5 = 0LL;
  if ( (v1 & 0x20) != 0 )
    v6 = (PVOID *)(a1 - ObpInfoMaskToOffset[v1 & 0x3F]);
  else
    v6 = 0LL;
  v7 = (unsigned int *)(a1 - ObpInfoMaskToOffset[v1]);
  if ( (v1 & 0x80u) != 0LL )
    v7 = (unsigned int *)((char *)v7 + 4LL - *v7);
  v8 = BYTE1(a1);
  v9 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ BYTE1(a1) ^ (unsigned __int64)*(unsigned __int8 *)(a1 + 24)];
  if ( v3 && (_QWORD *)*v3 != v3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v9 + 184, 0LL);
    v20 = *v3;
    v21 = (_QWORD *)v3[1];
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (_QWORD *)*v21 != v3 )
      __fastfail(3u);
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
    ExReleasePushLockEx(v9 + 184, 0LL);
    v22 = KeGetCurrentThread();
    v23 = v22->SpecialApcDisable++ == -1;
    if ( v23 && ($CEA84C04E3712D858E5667A507841A2A *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
      KiCheckForKernelApcDelivery();
  }
  _InterlockedDecrement((volatile signed __int32 *)(v9 + 44));
  v10 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(a1 + 27) & 1) != 0 )
  {
    if ( !v10 )
      goto LABEL_26;
    if ( *(_QWORD *)(v10 + 32) )
    {
      SeReleaseSecurityDescriptor(*(void **)(v10 + 32), *(_BYTE *)(v10 + 16), 1);
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) = 0LL;
      v10 = *(_QWORD *)(a1 + 32);
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
      RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)v10);
    }
    else
    {
      ++P->FreeMisses;
      ((void (*)(void))P->FreeEx)();
    }
    goto LABEL_25;
  }
  if ( v10 )
  {
    if ( v5 )
    {
      v11 = (char *)*((_QWORD *)v5 + 2);
      v12 = *v5;
      v13 = (unsigned int)v5[1];
      v32 = v11;
      if ( (unsigned __int64)v11 > 1 )
      {
        if ( v5[2] )
        {
          PspReturnQuota(v11, 0LL, 1, (unsigned int)v5[2]);
          v11 = v32;
        }
        PspDereferenceQuotaBlock((volatile signed __int32 *)v11);
      }
    }
    else
    {
      v12 = *(_DWORD *)(v9 + 104);
      v13 = *(unsigned int *)(v9 + 108);
    }
    v14 = *(_QWORD *)(a1 + 32);
    if ( v14 == 1 )
      goto LABEL_24;
    if ( v12 )
      PspReturnQuota(*(char **)(a1 + 32), 0LL, 1, v12);
    if ( v13 )
      PspReturnQuota((char *)v14, 0LL, 0, v13);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 512), 0xFFFFFFFF) != 1 )
    {
LABEL_24:
      v4 = v30;
LABEL_25:
      *(_QWORD *)(a1 + 32) = 0LL;
      goto LABEL_26;
    }
    v24 = 0;
    v25 = PspResourceFlags;
    v26 = v14 + 64;
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
LABEL_68:
            PspReturnResourceQuota(v24, v26 - 64, v28, v27 != 0);
            goto LABEL_69;
          }
        }
        else
        {
          v28 = 0LL;
        }
        if ( v27 )
          goto LABEL_68;
      }
LABEL_69:
      ++v24;
      v26 += 128LL;
      v25 += 8;
      if ( v24 >= 4 )
      {
        PspRemoveQuotaBlock(v14);
        ExFreePoolWithTag((PVOID)v14, 0);
        v8 = BYTE1(a1);
        goto LABEL_24;
      }
    }
  }
LABEL_26:
  if ( v4 && (*(_BYTE *)(a1 + 27) & 0x40) == 0 )
  {
    ExFreePoolWithTag(*v4, 0);
    *v4 = 0LL;
  }
  if ( v31 )
  {
    v18 = *(void **)(v31 + 16);
    if ( v18 )
    {
      ExFreePoolWithTag(v18, 0);
      *(_QWORD *)(v31 + 16) = 0LL;
    }
  }
  if ( v6 && *v6 )
  {
    ExFreePoolWithTag(*v6, 0);
    *v6 = 0LL;
  }
  *(_BYTE *)(a1 + 24) = ObHeaderCookie ^ v8 ^ 1;
  if ( v9 )
    v15 = *(_DWORD *)(v9 + 192);
  else
    v15 = 1416258127;
  ExFreePoolWithTag(v7, v15);
}
