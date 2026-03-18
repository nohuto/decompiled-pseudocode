/*
 * XREFs of ObpIncrementHandleCountEx @ 0x140629320
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x140616B1C (ObpInsertOrLocateNamedObject.c)
 *     ObpCreateHandle @ 0x14062B8A0 (ObpCreateHandle.c)
 *     ObCompleteObjectDuplication @ 0x14066B79C (ObCompleteObjectDuplication.c)
 *     ObInheritObjectHandle @ 0x140671554 (ObInheritObjectHandle.c)
 *     ObCaptureObjectStateForDuplication @ 0x1406C89CC (ObCaptureObjectStateForDuplication.c)
 *     ObpIncrementHandleCount @ 0x1408D871C (ObpIncrementHandleCount.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140204560 (PsGetProcessServerSilo.c)
 *     PspReturnQuota @ 0x14024C650 (PspReturnQuota.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     PspChargeQuota @ 0x1402641B0 (PspChargeQuota.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402E1A10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402E1A30 (PsAttachSiloToCurrentThread.c)
 *     OBJECT_HEADER_TO_PROCESS_INFO @ 0x140321740 (OBJECT_HEADER_TO_PROCESS_INFO.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     SeComputeQuotaInformationSize @ 0x140614250 (SeComputeQuotaInformationSize.c)
 *     PsReturnSharedPoolQuota @ 0x14061551C (PsReturnSharedPoolQuota.c)
 *     ObpDeleteNameCheck @ 0x14068AC10 (ObpDeleteNameCheck.c)
 *     ObpLockHandleDataBaseEntry @ 0x1406B92A0 (ObpLockHandleDataBaseEntry.c)
 *     ObpUnlockHandleDatabaseEntry @ 0x1408D8748 (ObpUnlockHandleDatabaseEntry.c)
 */

__int64 __fastcall ObpIncrementHandleCountEx(
        unsigned int a1,
        __int64 a2,
        struct _KPROCESS *a3,
        __int64 a4,
        unsigned __int8 a5,
        __int16 a6,
        unsigned __int64 a7)
{
  unsigned __int64 v7; // rbp
  __int64 v8; // rdi
  unsigned __int8 v9; // r12
  unsigned __int64 v10; // rbx
  __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char v13; // cl
  _DWORD *v14; // r15
  char v15; // al
  char v16; // r13
  __int64 v17; // r14
  unsigned int v18; // r10d
  unsigned int v19; // r11d
  __int64 v20; // rbp
  unsigned __int64 v21; // rcx
  __int64 v22; // rbp
  int v23; // ebp
  char v24; // r8
  struct _KPROCESS *v25; // r8
  bool v26; // zf
  unsigned int v27; // r12d
  unsigned __int32 v28; // esi
  __int64 v30; // rdx
  char v31; // r13
  __int64 v32; // r8
  _DWORD *v33; // r9
  struct _KTHREAD *v34; // rax
  unsigned int v35; // edx
  __int64 v36; // rbp
  int v37; // eax
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  _DWORD *v39; // r9
  __int64 v40; // rax
  int *v41; // rax
  _DWORD *v42; // rdx
  int v43; // ecx
  _DWORD *i; // rax
  struct _KPROCESS **v45; // rax
  __int64 *v46; // rdi
  char *v47; // rcx
  struct _KTHREAD *v48; // rax
  __int64 **v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned int v54; // [rsp+48h] [rbp-B0h] BYREF
  unsigned int v55; // [rsp+4Ch] [rbp-ACh]
  unsigned __int64 v56; // [rsp+50h] [rbp-A8h]
  unsigned int v57; // [rsp+58h] [rbp-A0h]
  int v58; // [rsp+5Ch] [rbp-9Ch] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-98h]
  __int64 v60; // [rsp+68h] [rbp-90h]
  __int64 v61; // [rsp+70h] [rbp-88h]
  _OWORD v62[3]; // [rsp+78h] [rbp-80h] BYREF

  v7 = a7;
  v8 = a4 - 48;
  v61 = a4;
  v62[0] = 0LL;
  v9 = 1;
  v56 = (unsigned __int8)((unsigned __int16)(a4 - 48) >> 8);
  v10 = *(unsigned __int8 *)(a4 - 48 + 24) ^ (unsigned __int8)ObHeaderCookie ^ v56;
  v60 = a2;
  if ( (a6 & 0x400) == 0 )
    v9 = a5;
  v57 = a1;
  v11 = ObTypeIndexTable[v10];
  memset(&v62[1], 0, 32);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  BugCheckParameter2 = v8 + 16;
  ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
  v13 = *(_BYTE *)(v8 + 27);
  v14 = 0LL;
  v15 = *(_BYTE *)(v8 + 26);
  v16 = v13 & 1;
  v54 = 0;
  if ( (v15 & 8) != 0 )
    v17 = v8 - ObpInfoMaskToOffset[v15 & 0xF];
  else
    v17 = 0LL;
  if ( v16 )
  {
    *(_BYTE *)(v8 + 27) = v13 & 0xFE;
    if ( v17 )
    {
      v18 = *(_DWORD *)v17;
      v19 = *(_DWORD *)(v17 + 4);
      v55 = *(_DWORD *)v17;
      LODWORD(v56) = v19;
      if ( a7 || (v20 = *(_QWORD *)(v8 + 40)) != 0 && (v7 = v20 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        v23 = SeComputeQuotaInformationSize(v7, &v54);
        if ( v23 < 0 )
          goto LABEL_97;
        v35 = v54;
        if ( v54 )
        {
          if ( a3 == PsInitialSystemProcess )
          {
            v36 = 1LL;
          }
          else
          {
            v36 = a3[1].AffinityPadding[7];
            v37 = PspChargeQuota(v36, 0LL, 1, v54);
            v18 = v55;
            v19 = v56;
            if ( v37 < 0 )
              v36 = 0LL;
            else
              _InterlockedIncrement((volatile signed __int32 *)(v36 + 512));
            v35 = v54;
          }
          *(_QWORD *)(v17 + 16) = v36;
          if ( !v36 )
            goto LABEL_91;
        }
        *(_DWORD *)(v17 + 8) = v35;
      }
    }
    else
    {
      v40 = ObTypeIndexTable[*(unsigned __int8 *)(v8 + 24) ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)(unsigned __int8)v56];
      v18 = *(_DWORD *)(v40 + 104);
      v19 = *(_DWORD *)(v40 + 108);
      v55 = v18;
    }
    v21 = v19;
    v56 = v19;
    if ( a3 == PsInitialSystemProcess )
    {
      v22 = 1LL;
    }
    else
    {
      v22 = a3[1].AffinityPadding[7];
      if ( !v18 )
      {
LABEL_13:
        if ( v21 && (int)PspChargeQuota(v22, 0LL, 0, v21) < 0 )
        {
          if ( v55 )
            PspReturnQuota((char *)v22, 0LL, 1u, v55);
          v22 = 0LL;
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(v22 + 512));
        }
        goto LABEL_16;
      }
      if ( (int)PspChargeQuota(v22, 0LL, 1, v18) >= 0 )
      {
        v21 = v56;
        goto LABEL_13;
      }
      v22 = 0LL;
    }
LABEL_16:
    *(_QWORD *)(v8 + 32) = v22;
    if ( v22 )
      goto LABEL_17;
    if ( v17 )
    {
      v47 = *(char **)(v17 + 16);
      if ( v47 )
        PsReturnSharedPoolQuota(v47, v54, 0LL);
    }
LABEL_91:
    v23 = -1073741756;
    goto LABEL_97;
  }
LABEL_17:
  v23 = 0;
  v24 = *(_BYTE *)(v8 + 27) & 8;
  if ( (a6 & 0x20) != 0 )
  {
    if ( v24 == 0 || (a6 & 2) != 0 )
    {
      v23 = -1073741811;
      goto LABEL_97;
    }
    if ( (!v24 || !*(_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v8)) && *(_QWORD *)(v8 + 8) )
      goto LABEL_79;
    if ( v24 )
    {
      v45 = (struct _KPROCESS **)OBJECT_HEADER_TO_PROCESS_INFO(v8);
      v25 = a3;
      if ( *v45 && *v45 != a3 )
        goto LABEL_79;
    }
    else
    {
      v25 = a3;
    }
    *(_QWORD *)(v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 0x1F]) = v25;
  }
  else
  {
    if ( v24 && *(_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v8) )
      goto LABEL_79;
    v25 = a3;
  }
  if ( v9 && (*(_BYTE *)(v8 + 27) & 4) != 0 )
  {
LABEL_79:
    v23 = -1073741790;
    goto LABEL_97;
  }
  if ( !*(_QWORD *)(v8 + 8)
    && !v16
    && (*(_BYTE *)(v11 + 66) & 0x10) != 0
    && !*(_QWORD *)(v11 + 120)
    && *(_QWORD *)(v11 + 128) )
  {
    v23 = -1073741823;
    goto LABEL_97;
  }
  v26 = (*(_BYTE *)(v11 + 66) & 0x10) == 0;
  v58 = 0;
  if ( !v26 )
  {
    v23 = ObpLockHandleDataBaseEntry(v8, a3, &v58);
    if ( v23 >= 0 )
    {
      v25 = a3;
      goto LABEL_25;
    }
LABEL_97:
    ExReleasePushLockEx(BugCheckParameter2, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v23;
  }
LABEL_25:
  _InterlockedIncrement64((volatile signed __int64 *)(v8 + 8));
  if ( !*(_QWORD *)(v11 + 120) )
  {
    v27 = v57;
LABEL_27:
    if ( (*(_BYTE *)(v11 + 66) & 0x10) != 0 )
    {
      v30 = v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 7];
      if ( (*(_BYTE *)(v8 + 27) & 0x40) != 0 )
      {
        --*(_BYTE *)(v30 + 11);
        *(_DWORD *)(v30 + 8) ^= (*(_DWORD *)(v30 + 8) ^ (*(_DWORD *)(v30 + 8) + 1)) & 0xFFFFFF;
      }
      else
      {
        v41 = *(int **)v30;
        v42 = 0LL;
        v43 = *v41;
        for ( i = v41 + 2; v43; --v43 )
        {
          if ( *(struct _KPROCESS **)i == v25 )
          {
            if ( !v42 )
              v42 = i;
            v14 = i;
            if ( *((_BYTE *)i + 11) != 0xFF )
              break;
          }
          i += 4;
        }
        v42[2] ^= (v42[2] ^ (v42[2] + 1)) & 0xFFFFFF;
        --*((_BYTE *)v14 + 11);
      }
    }
    ExReleasePushLockEx(v8 + 16, 0LL);
    KeLeaveCriticalRegion();
    if ( !v27 && (*(_BYTE *)(v8 + 26) & 1) != 0 )
    {
      v46 = (__int64 *)(v8 - 32);
      if ( v46 )
      {
        v48 = KeGetCurrentThread();
        --v48->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(v11 + 184, 0LL);
        v49 = *(__int64 ***)(v11 + 8);
        if ( *v49 != (__int64 *)v11 )
          __fastfail(3u);
        *v46 = v11;
        v46[1] = (__int64)v49;
        *v49 = v46;
        *(_QWORD *)(v11 + 8) = v46;
        ExReleasePushLockEx(v11 + 184, 0LL);
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v50, v51, v52);
      }
    }
    v28 = _InterlockedIncrement((volatile signed __int32 *)(v11 + 48));
    if ( v28 > *(_DWORD *)(v11 + 56) )
      *(_DWORD *)(v11 + 56) = v28;
    return (unsigned int)v23;
  }
  ExReleasePushLockEx(v8 + 16, 0LL);
  KeLeaveCriticalRegion();
  v31 = 0;
  v27 = v57;
  v56 = 0LL;
  if ( a3 != KeGetCurrentThread()->ApcState.Process && v57 != 3 )
  {
    v31 = 1;
    ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)a3);
    v56 = (unsigned __int64)PsAttachSiloToCurrentThread(ProcessServerSilo);
    KiStackAttachProcess(a3, 0LL, (__int64)v62, v39);
  }
  v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _KPROCESS *, __int64, __int64, int))(v11 + 120))(
          v27,
          a5,
          a3,
          v61,
          v60,
          v58);
  if ( v31 )
  {
    KiUnstackDetachProcess((__int64)v62, 0LL, v32, v33);
    PsDetachSiloFromCurrentThread((struct _LIST_ENTRY *)v56);
  }
  v34 = KeGetCurrentThread();
  --v34->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
  if ( v23 >= 0 )
  {
    v25 = a3;
    goto LABEL_27;
  }
  if ( (*(_BYTE *)(v11 + 66) & 0x10) != 0 )
    ObpUnlockHandleDatabaseEntry(v8, a3);
  _InterlockedDecrement64((volatile signed __int64 *)(v8 + 8));
  ExReleasePushLockEx(v8 + 16, 0LL);
  KeLeaveCriticalRegion();
  ObpDeleteNameCheck(v8);
  return (unsigned int)v23;
}
