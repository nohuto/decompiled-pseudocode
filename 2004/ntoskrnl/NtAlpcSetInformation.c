/*
 * XREFs of NtAlpcSetInformation @ 0x1406F43B0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     AlpcpAssociateIoCompletionPort @ 0x1406F4754 (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpInitializeCompletionList @ 0x1406F48D8 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x1406F4DDC (AlpcpFreeCompletionList.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x1406F4EB0 (AlpcpAdjustCompletionListConcurrencyCount.c)
 */

NTSTATUS __cdecl NtAlpcSetInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length)
{
  size_t v4; // r15
  struct _KTHREAD *CurrentThread; // rax
  int v8; // r14d
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v10; // r13
  unsigned int *v11; // r12
  signed int v12; // edi
  __int32 v13; // esi
  __int32 v14; // esi
  signed int v15; // eax
  __int32 v17; // esi
  __int32 v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // esi
  _QWORD *v22; // rdi
  volatile signed __int64 *v23; // rsi
  ULONG_PTR v24; // rcx
  _DWORD *v25; // rdi
  volatile signed __int64 *v26; // rsi
  ULONG_PTR v27; // rcx
  _QWORD *v28; // rsi
  volatile signed __int64 *v29; // rdi
  _QWORD *v30; // rdi
  signed __int64 *v31; // rbx
  __int64 v32; // rdx
  __m128i v33; // xmm0
  int v34; // edx
  KPROCESSOR_MODE v35; // [rsp+30h] [rbp-C8h]
  PVOID Object; // [rsp+38h] [rbp-C0h] BYREF
  unsigned int *v37; // [rsp+40h] [rbp-B8h]
  HANDLE Handle; // [rsp+48h] [rbp-B0h]
  unsigned int *v39; // [rsp+50h] [rbp-A8h]
  _QWORD v40[10]; // [rsp+60h] [rbp-98h] BYREF

  v4 = Length;
  Handle = PortHandle;
  v37 = (unsigned int *)PortInformation;
  memset(v40, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = 0;
  if ( !PortHandle
    || !v37
    && PortInformationClass != AlpcUnregisterCompletionListInformation
    && PortInformationClass != AlpcCompletionListRundownInformation )
  {
    v12 = -1073741811;
    goto LABEL_16;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v35 = PreviousMode;
  v10 = (__int64)v37;
  v11 = v37;
  v39 = v37;
  if ( (_DWORD)v4 && PreviousMode )
  {
    if ( (unsigned int)v4 > 0x48 )
    {
      v12 = -1073741820;
      goto LABEL_16;
    }
    if ( (unsigned __int64)v37 >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    v37 = (unsigned int *)v10;
    memmove(v40, (const void *)v10, v4);
    v11 = (unsigned int *)v40;
    v39 = (unsigned int *)v40;
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    v13 = PortInformationClass - 1;
    if ( !v13 )
    {
      if ( (_DWORD)v4 != 72 )
        goto LABEL_67;
      v34 = *v11;
      if ( (*v11 & 0xFC00FFFF) == 0 && ((v34 ^ *((_DWORD *)Object + 64)) & 0x40000) == 0 )
      {
        *((_DWORD *)Object + 64) = v34 | *((_DWORD *)Object + 64) & 0xFC00FFFF;
        goto LABEL_15;
      }
      goto LABEL_61;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      if ( (_DWORD)v4 == 16 )
      {
        v15 = AlpcpAssociateIoCompletionPort(Object, *((_QWORD *)v11 + 1), *(_QWORD *)v11);
LABEL_14:
        v12 = v15;
LABEL_15:
        HalPutDmaAdapter((PADAPTER_OBJECT)Object);
        goto LABEL_16;
      }
LABEL_67:
      v12 = -1073741820;
      goto LABEL_15;
    }
    v17 = v14 - 3;
    if ( !v17 )
    {
      v12 = (_DWORD)v4 != 16 ? 0xC000000D : 0;
      goto LABEL_15;
    }
    v18 = v17 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( !v21 )
          {
            if ( !v35 )
            {
              ObfReferenceObject(*(PVOID *)v10);
              v22 = Object;
              v23 = (volatile signed __int64 *)((char *)Object + 352);
              ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 352, 0LL);
              v22[46] = *(_QWORD *)v10;
              v22[47] = *(_QWORD *)(v10 + 8);
              if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v23);
              v24 = (ULONG_PTR)v23;
LABEL_26:
              KeAbPostRelease(v24);
              v12 = 0;
              goto LABEL_15;
            }
            goto LABEL_61;
          }
          if ( v21 != 1 || (_DWORD)v4 )
            goto LABEL_61;
          v25 = Object;
          v26 = (volatile signed __int64 *)((char *)Object + 352);
          ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 352, 0LL);
          if ( *((_QWORD *)v25 + 45) )
          {
            v25[104] &= ~0x10000u;
            v12 = 0;
          }
          else
          {
            v12 = -1073741811;
          }
          if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v26);
          v27 = (ULONG_PTR)v26;
        }
        else
        {
          if ( (_DWORD)v4 != 4 || !*v11 )
            goto LABEL_61;
          v30 = Object;
          v31 = (signed __int64 *)((char *)Object + 352);
          ExAcquirePushLockSharedEx((ULONG_PTR)Object + 352, 0LL);
          if ( v30[45] )
          {
            AlpcpAdjustCompletionListConcurrencyCount(v30, *v11);
            v12 = 0;
          }
          else
          {
            v12 = -1073741811;
          }
          if ( _InterlockedCompareExchange64(v31, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v31);
          v27 = (ULONG_PTR)v31;
        }
        KeAbPostRelease(v27);
        goto LABEL_15;
      }
      if ( !(_DWORD)v4 )
      {
        v28 = Object;
        v29 = (volatile signed __int64 *)((char *)Object + 352);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 352, 0LL);
        if ( v28[45] )
          AlpcpFreeCompletionList(v28);
        if ( (_InterlockedExchangeAdd64(v29, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v29);
        v24 = (ULONG_PTR)v29;
        goto LABEL_26;
      }
    }
    else if ( (*((_DWORD *)Object + 104) & 6) == 2 )
    {
      if ( (_DWORD)v4 == 24 )
      {
        v32 = *(_QWORD *)v11;
      }
      else
      {
        if ( (_DWORD)v4 != 16 )
          goto LABEL_61;
        v33 = *(__m128i *)v11;
        v11 = (unsigned int *)v40;
        v32 = v33.m128i_u32[0];
        v40[0] = v33.m128i_u32[0];
        LODWORD(v40[1]) = v33.m128i_i32[1];
        *(_QWORD *)((char *)&v40[1] + 4) = _mm_srli_si128(v33, 8).m128i_u64[0];
        v8 = 1;
      }
      v15 = AlpcpInitializeCompletionList(Object, v32, v11[2], v11[3], v11[4], v8);
      goto LABEL_14;
    }
LABEL_61:
    v12 = -1073741811;
    goto LABEL_15;
  }
LABEL_16:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v12;
}
