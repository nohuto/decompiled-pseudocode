/*
 * XREFs of NtAlpcSetInformation @ 0x1406A8E90
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     AlpcpInitializeCompletionList @ 0x1405D96A0 (AlpcpInitializeCompletionList.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x1405F2740 (AlpcpAdjustCompletionListConcurrencyCount.c)
 *     AlpcpFreeCompletionList @ 0x1406224B4 (AlpcpFreeCompletionList.c)
 *     AlpcpAssociateIoCompletionPort @ 0x1406A92A4 (AlpcpAssociateIoCompletionPort.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
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
  signed int v12; // edi
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v14; // r13
  unsigned __int32 *v15; // r12
  __int32 v16; // esi
  __int32 v17; // esi
  __int32 v18; // esi
  __int32 v19; // esi
  int v20; // esi
  int v21; // esi
  int v22; // esi
  _DWORD *v23; // rdi
  volatile signed __int64 *v24; // rsi
  ULONG_PTR v25; // rcx
  _QWORD *v26; // rdi
  volatile signed __int64 *v27; // rsi
  ULONG_PTR v28; // rcx
  _QWORD *v29; // rdi
  signed __int64 *v30; // rbx
  _QWORD *v31; // rsi
  volatile signed __int64 *v32; // rdi
  char *v33; // rdx
  __m128i v34; // xmm0
  signed int v35; // eax
  KPROCESSOR_MODE v37; // [rsp+30h] [rbp-C8h]
  PVOID Object; // [rsp+38h] [rbp-C0h] BYREF
  unsigned __int32 *v39; // [rsp+40h] [rbp-B8h]
  HANDLE Handle; // [rsp+48h] [rbp-B0h]
  unsigned __int32 *v41; // [rsp+50h] [rbp-A8h]
  _QWORD v42[10]; // [rsp+60h] [rbp-98h] BYREF

  v4 = Length;
  Handle = PortHandle;
  v39 = (unsigned __int32 *)PortInformation;
  memset(v42, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = 0;
  if ( PortHandle
    && (v39
     || PortInformationClass == AlpcUnregisterCompletionListInformation
     || PortInformationClass == AlpcCompletionListRundownInformation) )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v37 = PreviousMode;
    v14 = (__int64)v39;
    v15 = v39;
    v41 = v39;
    if ( (_DWORD)v4 && PreviousMode )
    {
      if ( (unsigned int)v4 > 0x48 )
      {
        v12 = -1073741820;
        goto LABEL_65;
      }
      if ( (unsigned __int64)v39 >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      v39 = (unsigned __int32 *)v14;
      memmove(v42, (const void *)v14, v4);
      v15 = (unsigned __int32 *)v42;
      v41 = (unsigned __int32 *)v42;
    }
    Object = 0LL;
    v12 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( v12 < 0 )
      goto LABEL_65;
    v16 = PortInformationClass - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 3;
        if ( !v18 )
        {
          v12 = (_DWORD)v4 != 16 ? 0xC000000D : 0;
          goto LABEL_64;
        }
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( !v21 )
            {
              if ( (_DWORD)v4 == 4 && *v15 )
              {
                v29 = Object;
                v30 = (signed __int64 *)((char *)Object + 352);
                ExAcquirePushLockSharedEx((ULONG_PTR)Object + 352, 0LL);
                if ( v29[45] )
                {
                  AlpcpAdjustCompletionListConcurrencyCount((__int64)v29, *v15);
                  v12 = 0;
                }
                else
                {
                  v12 = -1073741811;
                }
                if ( _InterlockedCompareExchange64(v30, 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared(v30);
                v25 = (ULONG_PTR)v30;
                goto LABEL_29;
              }
LABEL_52:
              v12 = -1073741811;
              goto LABEL_64;
            }
            v22 = v21 - 1;
            if ( v22 )
            {
              if ( v22 == 1 && !(_DWORD)v4 )
              {
                v23 = Object;
                v24 = (volatile signed __int64 *)((char *)Object + 352);
                ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 352, 0LL);
                if ( *((_QWORD *)v23 + 45) )
                {
                  v23[104] &= ~0x10000u;
                  v12 = 0;
                }
                else
                {
                  v12 = -1073741811;
                }
                if ( (_InterlockedExchangeAdd64(v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v24);
                v25 = (ULONG_PTR)v24;
LABEL_29:
                KeAbPostRelease(v25);
LABEL_64:
                HalPutDmaAdapter((PADAPTER_OBJECT)Object);
                goto LABEL_65;
              }
              goto LABEL_52;
            }
            if ( v37 )
              goto LABEL_52;
            ObfReferenceObject(*(PVOID *)v14);
            v26 = Object;
            v27 = (volatile signed __int64 *)((char *)Object + 352);
            ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 352, 0LL);
            v26[46] = *(_QWORD *)v14;
            v26[47] = *(_QWORD *)(v14 + 8);
            if ( (_InterlockedExchangeAdd64(v27, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v27);
            v28 = (ULONG_PTR)v27;
          }
          else
          {
            if ( (_DWORD)v4 )
              goto LABEL_52;
            v31 = Object;
            v32 = (volatile signed __int64 *)((char *)Object + 352);
            ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 352, 0LL);
            if ( v31[45] )
              AlpcpFreeCompletionList((__int64)v31);
            if ( (_InterlockedExchangeAdd64(v32, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v32);
            v28 = (ULONG_PTR)v32;
          }
          KeAbPostRelease(v28);
          v12 = 0;
          goto LABEL_64;
        }
        if ( (*((_DWORD *)Object + 104) & 6) != 2 )
          goto LABEL_52;
        if ( (_DWORD)v4 == 16 )
        {
          v34 = *(__m128i *)v15;
          v15 = (unsigned __int32 *)v42;
          v33 = (char *)v34.m128i_u32[0];
          v42[0] = v34.m128i_u32[0];
          LODWORD(v42[1]) = v34.m128i_i32[1];
          *(_QWORD *)((char *)&v42[1] + 4) = _mm_srli_si128(v34, 8).m128i_u64[0];
          v11 = 1;
        }
        else
        {
          if ( (_DWORD)v4 != 24 )
            goto LABEL_52;
          v33 = *(char **)v15;
        }
        v35 = AlpcpInitializeCompletionList((__int64)Object, v33, v15[2], v15[3], v15[4], v11);
LABEL_59:
        v12 = v35;
        goto LABEL_64;
      }
      if ( (_DWORD)v4 == 16 )
      {
        v35 = AlpcpAssociateIoCompletionPort(Object, *((_QWORD *)v15 + 1), *(_QWORD *)v15);
        goto LABEL_59;
      }
    }
    else if ( (_DWORD)v4 == 72 )
    {
      if ( (*v15 & 0xFC00FFFF) == 0 )
      {
        *((_DWORD *)Object + 64) ^= (*((_DWORD *)Object + 64) ^ *v15) & 0x20000;
        goto LABEL_64;
      }
      goto LABEL_52;
    }
    v12 = -1073741820;
    goto LABEL_64;
  }
  v12 = -1073741811;
LABEL_65:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
  return v12;
}
