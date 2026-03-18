/*
 * XREFs of ObpIncrementHandleCountEx @ 0x140733B40
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x14066915C (ObpInsertOrLocateNamedObject.c)
 *     ObCaptureObjectStateForDuplication @ 0x14066B04C (ObCaptureObjectStateForDuplication.c)
 *     ObCompleteObjectDuplication @ 0x14066B204 (ObCompleteObjectDuplication.c)
 *     ObInheritObjectHandle @ 0x1406A6A34 (ObInheritObjectHandle.c)
 *     ObpCreateHandle @ 0x140731DA0 (ObpCreateHandle.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 * Callees:
 *     OBJECT_HEADER_TO_PROCESS_INFO @ 0x14025A640 (OBJECT_HEADER_TO_PROCESS_INFO.c)
 *     PspChargeQuota @ 0x1402AC010 (PspChargeQuota.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     PspReturnQuota @ 0x1403493B0 (PspReturnQuota.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ObpLockHandleDataBaseEntry @ 0x1406A3290 (ObpLockHandleDataBaseEntry.c)
 *     PsReturnSharedPoolQuota @ 0x140724DC8 (PsReturnSharedPoolQuota.c)
 *     SeComputeQuotaInformationSize @ 0x140725930 (SeComputeQuotaInformationSize.c)
 *     ObpDeleteNameCheck @ 0x1407A3190 (ObpDeleteNameCheck.c)
 *     ObpUnlockHandleDatabaseEntry @ 0x14098485C (ObpUnlockHandleDatabaseEntry.c)
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
  char v7; // di
  __int64 v8; // rbp
  unsigned __int64 v9; // r14
  unsigned __int8 v10; // r13
  unsigned __int64 v11; // rbx
  __int64 v12; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char v14; // dl
  _DWORD *v15; // r15
  char v16; // al
  __int64 v17; // r12
  unsigned int v18; // r10d
  unsigned int v19; // r11d
  __int64 v20; // r14
  unsigned __int64 v21; // rax
  ULONG_PTR v22; // r14
  __int64 v23; // rdi
  int v24; // r14d
  char v25; // r8
  int *p_LockNV; // rdi
  bool v27; // zf
  unsigned int v28; // r13d
  unsigned __int32 v29; // esi
  __int64 v31; // rdx
  struct _KTHREAD *v32; // rax
  __int64 v33; // rax
  unsigned int v34; // r8d
  __int64 v35; // r14
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _LIST_ENTRY *v37; // rdi
  _DWORD *v38; // r9
  int *v39; // rax
  _DWORD *v40; // rdx
  int v41; // ecx
  _DWORD *i; // rax
  struct _KPROCESS *v43; // rcx
  __int64 *v44; // rbp
  char *v45; // rcx
  struct _KTHREAD *v46; // rax
  __int64 **v47; // rax
  struct _KTHREAD *v48; // rcx
  char v49; // [rsp+40h] [rbp-C8h]
  unsigned int v51; // [rsp+50h] [rbp-B8h] BYREF
  int v52; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v53; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v54; // [rsp+60h] [rbp-A8h]
  unsigned int v55; // [rsp+68h] [rbp-A0h]
  __int64 v56; // [rsp+70h] [rbp-98h]
  __int64 v57; // [rsp+78h] [rbp-90h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-88h]
  _BYTE v59[32]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v60; // [rsp+A8h] [rbp-60h]

  v7 = a6;
  v8 = a4 - 48;
  v9 = a7;
  v53 = a1;
  v10 = 1;
  v54 = (unsigned __int8)((unsigned __int16)(a4 - 48) >> 8);
  v57 = a4;
  v11 = *(unsigned __int8 *)(a4 - 48 + 24) ^ (unsigned __int8)ObHeaderCookie ^ v54;
  memset(v59, 0, sizeof(v59));
  v56 = a2;
  v12 = ObTypeIndexTable[v11];
  if ( (a6 & 0x400) == 0 )
    v10 = a5;
  v60 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  BugCheckParameter2 = v8 + 16;
  ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
  v14 = *(_BYTE *)(v8 + 27);
  v15 = 0LL;
  v16 = *(_BYTE *)(v8 + 26);
  v51 = 0;
  v49 = v14 & 1;
  if ( (v16 & 8) != 0 )
    v17 = v8 - ObpInfoMaskToOffset[v16 & 0xF];
  else
    v17 = 0LL;
  if ( (v14 & 1) == 0 )
    goto LABEL_17;
  *(_BYTE *)(v8 + 27) = v14 & 0xFE;
  if ( v17 )
  {
    v18 = *(_DWORD *)v17;
    v19 = *(_DWORD *)(v17 + 4);
    v55 = *(_DWORD *)v17;
    LODWORD(v54) = v19;
    if ( !a7 )
    {
      v20 = *(_QWORD *)(v8 + 40);
      if ( !v20 )
        goto LABEL_9;
      v9 = v20 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( !v9 )
        goto LABEL_9;
    }
    v24 = SeComputeQuotaInformationSize(v9, &v51);
    if ( v24 < 0 )
    {
LABEL_95:
      ExReleasePushLockEx(BugCheckParameter2, 0LL);
      KeLeaveCriticalRegion();
      return (unsigned int)v24;
    }
    v34 = v51;
    if ( !v51 )
      goto LABEL_54;
    if ( a3 == PsInitialSystemProcess )
    {
      *(_QWORD *)(v17 + 16) = 1LL;
      *(_DWORD *)(v17 + 8) = v34;
      goto LABEL_9;
    }
    v35 = a3[1].Affinity.StaticBitmap[27];
    if ( (int)PspChargeQuota(v35, 0LL, 1, v51) < 0 )
    {
      *(_QWORD *)(v17 + 16) = 0LL;
    }
    else
    {
      v18 = v55;
      v19 = v54;
      _InterlockedIncrement((volatile signed __int32 *)(v35 + 512));
      *(_QWORD *)(v17 + 16) = v35;
      if ( v35 )
      {
        v34 = v51;
LABEL_54:
        *(_DWORD *)(v17 + 8) = v34;
        goto LABEL_9;
      }
    }
LABEL_89:
    v24 = -1073741756;
    goto LABEL_95;
  }
  v33 = ObTypeIndexTable[*(unsigned __int8 *)(v8 + 24) ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)(unsigned __int8)v54];
  v18 = *(_DWORD *)(v33 + 104);
  v19 = *(_DWORD *)(v33 + 108);
LABEL_9:
  v21 = v19;
  v54 = v19;
  v22 = v18;
  if ( a3 != PsInitialSystemProcess )
  {
    v23 = a3[1].Affinity.StaticBitmap[27];
    if ( v18 )
    {
      if ( (int)PspChargeQuota(a3[1].Affinity.StaticBitmap[27], 0LL, 1, v18) < 0 )
      {
        *(_QWORD *)(v8 + 32) = 0LL;
LABEL_86:
        if ( v17 )
        {
          v45 = *(char **)(v17 + 16);
          if ( v45 )
            PsReturnSharedPoolQuota(v45, v51, 0LL);
        }
        goto LABEL_89;
      }
      v21 = v54;
    }
    if ( v21 && (int)PspChargeQuota(v23, 0LL, 0, v21) < 0 )
    {
      if ( v22 )
        PspReturnQuota((char *)v23, 0LL, 1, v22);
      *(_QWORD *)(v8 + 32) = 0LL;
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v23 + 512));
      *(_QWORD *)(v8 + 32) = v23;
      if ( v23 )
      {
        v7 = a6;
        goto LABEL_17;
      }
    }
    goto LABEL_86;
  }
  *(_QWORD *)(v8 + 32) = 1LL;
LABEL_17:
  v24 = 0;
  v25 = *(_BYTE *)(v8 + 27) & 8;
  if ( (v7 & 0x20) != 0 )
  {
    if ( v25 == 0 || (v7 & 2) != 0 )
    {
      v24 = -1073741811;
      goto LABEL_95;
    }
    if ( v25 && *(_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v8) )
      goto LABEL_74;
    if ( *(_QWORD *)(v8 + 8) )
    {
LABEL_77:
      v24 = -1073741790;
      goto LABEL_95;
    }
    if ( v25 )
    {
LABEL_74:
      p_LockNV = &a3->Header.LockNV;
      v43 = *(struct _KPROCESS **)OBJECT_HEADER_TO_PROCESS_INFO(v8);
      if ( v43 && v43 != a3 )
        goto LABEL_77;
    }
    else
    {
      p_LockNV = &a3->Header.LockNV;
    }
    *(_QWORD *)(v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 0x1F]) = p_LockNV;
  }
  else
  {
    if ( v25 && *(_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v8) )
      goto LABEL_77;
    p_LockNV = &a3->Header.LockNV;
  }
  if ( v10 && (*(_BYTE *)(v8 + 27) & 4) != 0 )
    goto LABEL_77;
  if ( !v49
    && !*(_QWORD *)(v8 + 8)
    && (*(_BYTE *)(v12 + 66) & 0x10) != 0
    && !*(_QWORD *)(v12 + 120)
    && *(_QWORD *)(v12 + 128) )
  {
    v24 = -1073741823;
    goto LABEL_95;
  }
  v27 = (*(_BYTE *)(v12 + 66) & 0x10) == 0;
  v52 = 0;
  if ( !v27 )
  {
    v24 = ObpLockHandleDataBaseEntry(v8, p_LockNV, &v52);
    if ( v24 < 0 )
      goto LABEL_95;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v8 + 8));
  if ( !*(_QWORD *)(v12 + 120) )
  {
    v28 = v53;
LABEL_26:
    if ( (*(_BYTE *)(v12 + 66) & 0x10) != 0 )
    {
      v31 = v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 7];
      if ( (*(_BYTE *)(v8 + 27) & 0x40) != 0 )
      {
        --*(_BYTE *)(v31 + 11);
        *(_DWORD *)(v31 + 8) ^= (*(_DWORD *)(v31 + 8) ^ (*(_DWORD *)(v31 + 8) + 1)) & 0xFFFFFF;
      }
      else
      {
        v39 = *(int **)v31;
        v40 = 0LL;
        v41 = *v39;
        for ( i = v39 + 2; v41; --v41 )
        {
          if ( *(int **)i == p_LockNV )
          {
            if ( !v40 )
              v40 = i;
            v15 = i;
            if ( *((_BYTE *)i + 11) != 0xFF )
              break;
          }
          i += 4;
        }
        v40[2] ^= (v40[2] ^ (v40[2] + 1)) & 0xFFFFFF;
        --*((_BYTE *)v15 + 11);
      }
    }
    ExReleasePushLockEx(v8 + 16, 0LL);
    KeLeaveCriticalRegion();
    if ( !v28 && (*(_BYTE *)(v8 + 26) & 1) != 0 )
    {
      v44 = (__int64 *)(v8 - 32);
      if ( v44 )
      {
        v46 = KeGetCurrentThread();
        --v46->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(v12 + 184, 0LL);
        v47 = *(__int64 ***)(v12 + 8);
        if ( *v47 != (__int64 *)v12 )
          __fastfail(3u);
        *v44 = v12;
        v44[1] = (__int64)v47;
        *v47 = v44;
        *(_QWORD *)(v12 + 8) = v44;
        ExReleasePushLockEx(v12 + 184, 0LL);
        v48 = KeGetCurrentThread();
        v27 = v48->SpecialApcDisable++ == -1;
        if ( v27 && ($CEA84C04E3712D858E5667A507841A2A *)v48->ApcState.ApcListHead[0].Flink != &v48->152 )
          KiCheckForKernelApcDelivery();
      }
    }
    v29 = _InterlockedIncrement((volatile signed __int32 *)(v12 + 48));
    if ( v29 > *(_DWORD *)(v12 + 56) )
      *(_DWORD *)(v12 + 56) = v29;
    return (unsigned int)v24;
  }
  ExReleasePushLockEx(v8 + 16, 0LL);
  KeLeaveCriticalRegion();
  v28 = v53;
  if ( a3 == KeGetCurrentThread()->ApcState.Process || v53 == 3 )
  {
    v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _KPROCESS *, __int64, __int64, int))(v12 + 120))(
            v53,
            a5,
            a3,
            v57,
            v56,
            v52);
  }
  else
  {
    ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)a3);
    v37 = PsAttachSiloToCurrentThread(ProcessServerSilo);
    KiStackAttachProcess(a3, 0LL, (__int64)v59, v38);
    v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _KPROCESS *, __int64, __int64, int))(v12 + 120))(
            v28,
            a5,
            a3,
            v57,
            v56,
            v52);
    KiUnstackDetachProcess((__int64)v59, 0LL);
    PsDetachSiloFromCurrentThread(v37);
  }
  v32 = KeGetCurrentThread();
  --v32->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
  if ( v24 >= 0 )
  {
    p_LockNV = &a3->Header.LockNV;
    goto LABEL_26;
  }
  if ( (*(_BYTE *)(v12 + 66) & 0x10) != 0 )
    ObpUnlockHandleDatabaseEntry(v8, a3);
  _InterlockedDecrement64((volatile signed __int64 *)(v8 + 8));
  ExReleasePushLockEx(v8 + 16, 0LL);
  KeLeaveCriticalRegion();
  ObpDeleteNameCheck(v8);
  return (unsigned int)v24;
}
