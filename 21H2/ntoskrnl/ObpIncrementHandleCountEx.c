/*
 * XREFs of ObpIncrementHandleCountEx @ 0x14070D340
 * Callers:
 *     ObCaptureObjectStateForDuplication @ 0x1405E261C (ObCaptureObjectStateForDuplication.c)
 *     ObCompleteObjectDuplication @ 0x1405E36D0 (ObCompleteObjectDuplication.c)
 *     ObpInsertOrLocateNamedObject @ 0x140657720 (ObpInsertOrLocateNamedObject.c)
 *     ObInheritObjectHandle @ 0x1406960B4 (ObInheritObjectHandle.c)
 *     ObpCreateHandle @ 0x14070D930 (ObpCreateHandle.c)
 *     ObpIncrementHandleCount @ 0x1408DD1EC (ObpIncrementHandleCount.c)
 * Callees:
 *     OBJECT_HEADER_TO_PROCESS_INFO @ 0x140250330 (OBJECT_HEADER_TO_PROCESS_INFO.c)
 *     PsDetachSiloFromCurrentThread @ 0x14026D070 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14026D090 (PsAttachSiloToCurrentThread.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     PsGetProcessServerSilo @ 0x14027DFF0 (PsGetProcessServerSilo.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     PspChargeQuota @ 0x1402BF6E0 (PspChargeQuota.c)
 *     PspReturnQuota @ 0x14034C6D0 (PspReturnQuota.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ObpLockHandleDataBaseEntry @ 0x1405E76F0 (ObpLockHandleDataBaseEntry.c)
 *     SeComputeQuotaInformationSize @ 0x1406549F0 (SeComputeQuotaInformationSize.c)
 *     PsReturnSharedPoolQuota @ 0x1406551E4 (PsReturnSharedPoolQuota.c)
 *     ObpDeleteNameCheck @ 0x140663D60 (ObpDeleteNameCheck.c)
 *     ObpUnlockHandleDatabaseEntry @ 0x1408DD218 (ObpUnlockHandleDatabaseEntry.c)
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
  struct _KTHREAD *v32; // rax
  unsigned int v33; // edx
  __int64 v34; // rbp
  int v35; // eax
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  __int64 v37; // rax
  int *v38; // rax
  _DWORD *v39; // rdx
  int v40; // ecx
  _DWORD *i; // rax
  struct _KPROCESS **v42; // rax
  __int64 *v43; // rdi
  char *v44; // rcx
  struct _KTHREAD *v45; // rax
  __int64 **v46; // rax
  unsigned int v48; // [rsp+48h] [rbp-B0h] BYREF
  unsigned int v49; // [rsp+4Ch] [rbp-ACh]
  unsigned __int64 v50; // [rsp+50h] [rbp-A8h]
  unsigned int v51; // [rsp+58h] [rbp-A0h]
  int v52; // [rsp+5Ch] [rbp-9Ch] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-98h]
  __int64 v54; // [rsp+68h] [rbp-90h]
  __int64 v55; // [rsp+70h] [rbp-88h]
  _OWORD v56[3]; // [rsp+78h] [rbp-80h] BYREF

  v7 = a7;
  v8 = a4 - 48;
  v55 = a4;
  v56[0] = 0LL;
  v9 = 1;
  v50 = (unsigned __int8)((unsigned __int16)(a4 - 48) >> 8);
  v10 = *(unsigned __int8 *)(a4 - 48 + 24) ^ (unsigned __int8)ObHeaderCookie ^ v50;
  v54 = a2;
  if ( (a6 & 0x400) == 0 )
    v9 = a5;
  v51 = a1;
  v11 = ObTypeIndexTable[v10];
  memset(&v56[1], 0, 32);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  BugCheckParameter2 = v8 + 16;
  ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
  v13 = *(_BYTE *)(v8 + 27);
  v14 = 0LL;
  v15 = *(_BYTE *)(v8 + 26);
  v16 = v13 & 1;
  v48 = 0;
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
      v49 = *(_DWORD *)v17;
      LODWORD(v50) = v19;
      if ( a7 || (v20 = *(_QWORD *)(v8 + 40)) != 0 && (v7 = v20 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        v23 = SeComputeQuotaInformationSize(v7, &v48);
        if ( v23 < 0 )
          goto LABEL_97;
        v33 = v48;
        if ( v48 )
        {
          if ( a3 == PsInitialSystemProcess )
          {
            v34 = 1LL;
          }
          else
          {
            v34 = a3[1].AffinityPadding[7];
            v35 = PspChargeQuota(v34, 0LL, 1, v48);
            v18 = v49;
            v19 = v50;
            if ( v35 < 0 )
              v34 = 0LL;
            else
              _InterlockedIncrement((volatile signed __int32 *)(v34 + 512));
            v33 = v48;
          }
          *(_QWORD *)(v17 + 16) = v34;
          if ( !v34 )
            goto LABEL_91;
        }
        *(_DWORD *)(v17 + 8) = v33;
      }
    }
    else
    {
      v37 = ObTypeIndexTable[*(unsigned __int8 *)(v8 + 24) ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)(unsigned __int8)v50];
      v18 = *(_DWORD *)(v37 + 104);
      v19 = *(_DWORD *)(v37 + 108);
      v49 = v18;
    }
    v21 = v19;
    v50 = v19;
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
          if ( v49 )
            PspReturnQuota((char *)v22, 0LL, 1, v49);
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
        v21 = v50;
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
      v44 = *(char **)(v17 + 16);
      if ( v44 )
        PsReturnSharedPoolQuota(v44, v48, 0LL);
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
      v42 = (struct _KPROCESS **)OBJECT_HEADER_TO_PROCESS_INFO(v8);
      v25 = a3;
      if ( *v42 && *v42 != a3 )
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
  v52 = 0;
  if ( !v26 )
  {
    v23 = ObpLockHandleDataBaseEntry(v8, &a3->Header.LockNV, &v52);
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
    v27 = v51;
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
        v38 = *(int **)v30;
        v39 = 0LL;
        v40 = *v38;
        for ( i = v38 + 2; v40; --v40 )
        {
          if ( *(struct _KPROCESS **)i == v25 )
          {
            if ( !v39 )
              v39 = i;
            v14 = i;
            if ( *((_BYTE *)i + 11) != 0xFF )
              break;
          }
          i += 4;
        }
        v39[2] ^= (v39[2] ^ (v39[2] + 1)) & 0xFFFFFF;
        --*((_BYTE *)v14 + 11);
      }
    }
    ExReleasePushLockEx(v8 + 16, 0LL);
    KeLeaveCriticalRegion();
    if ( !v27 && (*(_BYTE *)(v8 + 26) & 1) != 0 )
    {
      v43 = (__int64 *)(v8 - 32);
      if ( v43 )
      {
        v45 = KeGetCurrentThread();
        --v45->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(v11 + 184, 0LL);
        v46 = *(__int64 ***)(v11 + 8);
        if ( *v46 != (__int64 *)v11 )
          __fastfail(3u);
        *v43 = v11;
        v43[1] = (__int64)v46;
        *v46 = v43;
        *(_QWORD *)(v11 + 8) = v43;
        ExReleasePushLockEx(v11 + 184, 0LL);
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
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
  v27 = v51;
  v50 = 0LL;
  if ( a3 != KeGetCurrentThread()->ApcState.Process && v51 != 3 )
  {
    v31 = 1;
    ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)a3);
    v50 = (unsigned __int64)PsAttachSiloToCurrentThread(ProcessServerSilo);
    KiStackAttachProcess(a3, 0, (__int64)v56);
  }
  v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _KPROCESS *, __int64, __int64, int))(v11 + 120))(
          v27,
          a5,
          a3,
          v55,
          v54,
          v52);
  if ( v31 )
  {
    KiUnstackDetachProcess((__int64)v56, 0LL);
    PsDetachSiloFromCurrentThread((struct _LIST_ENTRY *)v50);
  }
  v32 = KeGetCurrentThread();
  --v32->KernelApcDisable;
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
