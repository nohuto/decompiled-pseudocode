/*
 * XREFs of NtAlpcSetInformation @ 0x140676960
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     AlpcpInitializeCompletionList @ 0x140676454 (AlpcpInitializeCompletionList.c)
 *     AlpcpAssociateIoCompletionPort @ 0x140676D04 (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpFreeCompletionList @ 0x140676E88 (AlpcpFreeCompletionList.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x140676F5C (AlpcpAdjustCompletionListConcurrencyCount.c)
 */

NTSTATUS __cdecl NtAlpcSetInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length)
{
  size_t v4; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *CurrentThread; // rax
  int v11; // r14d
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v13; // r13
  unsigned int *v14; // r12
  signed int v15; // edi
  __int32 v16; // esi
  __int32 v17; // esi
  signed int v18; // eax
  __int32 v20; // esi
  __int32 v21; // esi
  int v22; // esi
  int v23; // esi
  int v24; // esi
  _QWORD *v25; // rdi
  volatile signed __int64 *v26; // rsi
  ULONG_PTR v27; // rcx
  _DWORD *v28; // rdi
  volatile signed __int64 *v29; // rsi
  ULONG_PTR v30; // rcx
  _QWORD *v31; // rsi
  volatile signed __int64 *v32; // rdi
  _QWORD *v33; // rdi
  signed __int64 *v34; // rbx
  char *v35; // rdx
  __m128i v36; // xmm0
  int v37; // edx
  KPROCESSOR_MODE v38; // [rsp+30h] [rbp-C8h]
  PVOID Object; // [rsp+38h] [rbp-C0h] BYREF
  unsigned int *v40; // [rsp+40h] [rbp-B8h]
  HANDLE Handle; // [rsp+48h] [rbp-B0h]
  unsigned int *v42; // [rsp+50h] [rbp-A8h]
  _QWORD v43[10]; // [rsp+60h] [rbp-98h] BYREF

  v4 = Length;
  Handle = PortHandle;
  v40 = (unsigned int *)PortInformation;
  memset(v43, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = 0;
  if ( !PortHandle
    || !v40
    && PortInformationClass != AlpcUnregisterCompletionListInformation
    && PortInformationClass != AlpcCompletionListRundownInformation )
  {
    v15 = -1073741811;
    goto LABEL_16;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v38 = PreviousMode;
  v13 = (__int64)v40;
  v14 = v40;
  v42 = v40;
  if ( (_DWORD)v4 && PreviousMode )
  {
    if ( (unsigned int)v4 > 0x48 )
    {
      v15 = -1073741820;
      goto LABEL_16;
    }
    if ( (unsigned __int64)v40 >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    v40 = (unsigned int *)v13;
    memmove(v43, (const void *)v13, v4);
    v14 = (unsigned int *)v43;
    v42 = (unsigned int *)v43;
  }
  Object = 0LL;
  v15 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v15 >= 0 )
  {
    v16 = PortInformationClass - 1;
    if ( !v16 )
    {
      if ( (_DWORD)v4 != 72 )
        goto LABEL_67;
      v37 = *v14;
      if ( (*v14 & 0xFC00FFFF) == 0 && ((v37 ^ *((_DWORD *)Object + 64)) & 0x40000) == 0 )
      {
        *((_DWORD *)Object + 64) = v37 | *((_DWORD *)Object + 64) & 0xFC00FFFF;
        goto LABEL_15;
      }
      goto LABEL_61;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      if ( (_DWORD)v4 == 16 )
      {
        v18 = AlpcpAssociateIoCompletionPort(Object, *((_QWORD *)v14 + 1), *(_QWORD *)v14);
LABEL_14:
        v15 = v18;
LABEL_15:
        HalPutDmaAdapter((PADAPTER_OBJECT)Object);
        goto LABEL_16;
      }
LABEL_67:
      v15 = -1073741820;
      goto LABEL_15;
    }
    v20 = v17 - 3;
    if ( !v20 )
    {
      v15 = (_DWORD)v4 != 16 ? 0xC000000D : 0;
      goto LABEL_15;
    }
    v21 = v20 - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( !v24 )
          {
            if ( !v38 )
            {
              ObfReferenceObject(*(PVOID *)v13);
              v25 = Object;
              v26 = (volatile signed __int64 *)((char *)Object + 352);
              ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 352, 0LL);
              v25[46] = *(_QWORD *)v13;
              v25[47] = *(_QWORD *)(v13 + 8);
              if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v26);
              v27 = (ULONG_PTR)v26;
LABEL_26:
              KeAbPostRelease(v27);
              v15 = 0;
              goto LABEL_15;
            }
            goto LABEL_61;
          }
          if ( v24 != 1 || (_DWORD)v4 )
            goto LABEL_61;
          v28 = Object;
          v29 = (volatile signed __int64 *)((char *)Object + 352);
          ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 352, 0LL);
          if ( *((_QWORD *)v28 + 45) )
          {
            v28[104] &= ~0x10000u;
            v15 = 0;
          }
          else
          {
            v15 = -1073741811;
          }
          if ( (_InterlockedExchangeAdd64(v29, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v29);
          v30 = (ULONG_PTR)v29;
        }
        else
        {
          if ( (_DWORD)v4 != 4 || !*v14 )
            goto LABEL_61;
          v33 = Object;
          v34 = (signed __int64 *)((char *)Object + 352);
          ExAcquirePushLockSharedEx((ULONG_PTR)Object + 352, 0LL);
          if ( v33[45] )
          {
            AlpcpAdjustCompletionListConcurrencyCount(v33, *v14);
            v15 = 0;
          }
          else
          {
            v15 = -1073741811;
          }
          if ( _InterlockedCompareExchange64(v34, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v34);
          v30 = (ULONG_PTR)v34;
        }
        KeAbPostRelease(v30);
        goto LABEL_15;
      }
      if ( !(_DWORD)v4 )
      {
        v31 = Object;
        v32 = (volatile signed __int64 *)((char *)Object + 352);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 352, 0LL);
        if ( v31[45] )
          AlpcpFreeCompletionList(v31);
        if ( (_InterlockedExchangeAdd64(v32, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v32);
        v27 = (ULONG_PTR)v32;
        goto LABEL_26;
      }
    }
    else if ( (*((_DWORD *)Object + 104) & 6) == 2 )
    {
      if ( (_DWORD)v4 == 24 )
      {
        v35 = *(char **)v14;
      }
      else
      {
        if ( (_DWORD)v4 != 16 )
          goto LABEL_61;
        v36 = *(__m128i *)v14;
        v14 = (unsigned int *)v43;
        v35 = (char *)v36.m128i_u32[0];
        v43[0] = v36.m128i_u32[0];
        LODWORD(v43[1]) = v36.m128i_i32[1];
        *(_QWORD *)((char *)&v43[1] + 4) = _mm_srli_si128(v36, 8).m128i_u64[0];
        v11 = 1;
      }
      v18 = AlpcpInitializeCompletionList((__int64)Object, v35, v14[2], v14[3], v14[4], v11);
      goto LABEL_14;
    }
LABEL_61:
    v15 = -1073741811;
    goto LABEL_15;
  }
LABEL_16:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
  return v15;
}
