/*
 * XREFs of NtOpenThreadTokenEx @ 0x14071D2E0
 * Callers:
 *     NtOpenThreadToken @ 0x14071D2C0 (NtOpenThreadToken.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObFastDereferenceObject @ 0x14026A5B0 (ObFastDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     SepCreateImpersonationTokenDacl @ 0x1406506F0 (SepCreateImpersonationTokenDacl.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     SepDuplicateToken @ 0x14071B1E0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     PsDisableImpersonation @ 0x14071D7F0 (PsDisableImpersonation.c)
 *     PsRestoreImpersonation @ 0x14071D920 (PsRestoreImpersonation.c)
 *     ObOpenObjectByPointer @ 0x14071DC60 (ObOpenObjectByPointer.c)
 *     PsSwapImpersonationToken @ 0x14071DFB0 (PsSwapImpersonationToken.c)
 *     PsReferencePrimaryToken @ 0x14071E0E0 (PsReferencePrimaryToken.c)
 *     SepSetTokenTrust @ 0x14071E6F0 (SepSetTokenTrust.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  char PreviousMode; // al
  int v6; // ebx
  ULONG v7; // ebx
  PHANDLE v8; // rsi
  __int64 v9; // rax
  KPROCESSOR_MODE v10; // r9
  NTSTATUS result; // eax
  _DWORD *v12; // rdi
  struct _KTHREAD *CurrentThread; // r15
  signed __int64 *v14; // r14
  _DWORD *v15; // rbx
  struct _DMA_ADAPTER *v16; // r12
  int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // r13d
  char v22; // r15
  NTSTATUS inserted; // eax
  PVOID v24; // rbx
  NTSTATUS ImpersonationTokenDacl; // r14d
  struct _KPROCESS *v26; // rdi
  struct _DMA_ADAPTER *v27; // rbx
  __int64 v28; // rdx
  bool v29; // [rsp+40h] [rbp-D8h]
  char v30; // [rsp+41h] [rbp-D7h]
  char v31; // [rsp+42h] [rbp-D6h]
  BOOLEAN v32; // [rsp+43h] [rbp-D5h]
  KPROCESSOR_MODE v33; // [rsp+44h] [rbp-D4h]
  PVOID Object; // [rsp+48h] [rbp-D0h] BYREF
  int v35; // [rsp+50h] [rbp-C8h]
  PVOID v36; // [rsp+58h] [rbp-C0h] BYREF
  ULONG HandleAttributesa; // [rsp+60h] [rbp-B8h]
  PVOID P; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+70h] [rbp-A8h]
  HANDLE Handle; // [rsp+78h] [rbp-A0h] BYREF
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+80h] [rbp-98h] BYREF
  __int128 v42; // [rsp+90h] [rbp-88h] BYREF
  __int128 v43; // [rsp+A0h] [rbp-78h]
  __int128 v44; // [rsp+B0h] [rbp-68h]
  _WORD v45[16]; // [rsp+C0h] [rbp-58h] BYREF
  PVOID v46; // [rsp+E0h] [rbp-38h]

  v36 = 0LL;
  v30 = 0;
  v31 = 0;
  v35 = 0;
  ImpersonationState = 0LL;
  v32 = 0;
  Handle = 0LL;
  memset(v45, 0, sizeof(v45));
  v46 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  P = 0LL;
  v39 = 0LL;
  v29 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v33 = PreviousMode;
  v6 = 73714;
  if ( PreviousMode )
    v6 = 7666;
  v7 = HandleAttributes & v6;
  HandleAttributesa = v7;
  if ( PreviousMode )
  {
    v8 = TokenHandle;
    v9 = (__int64)TokenHandle;
    if ( (unsigned __int64)TokenHandle >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v9 = *(_QWORD *)v9;
  }
  else
  {
    v8 = TokenHandle;
  }
  v10 = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(ThreadHandle, 0x800u, (POBJECT_TYPE)PsThreadType, v10, &Object, 0LL);
  if ( result >= 0 )
  {
    v12 = Object;
    if ( (*((_DWORD *)Object + 324) & 8) == 0 )
      goto LABEL_9;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v14 = (signed __int64 *)((char *)Object + 1280);
    ExAcquirePushLockSharedEx((ULONG_PTR)Object + 1280, 0LL);
    if ( (v12[324] & 8) != 0 )
    {
      v15 = Object;
      v16 = (struct _DMA_ADAPTER *)(*((_QWORD *)Object + 149) & 0xFFFFFFFFFFFFFFF8uLL);
      v17 = v12[324];
      ObfReferenceObject(v16);
      v35 = v15[298] & 3;
      v31 = (v15[298] & 4) != 0;
      v30 = BYTE1(v17) & 1;
      v7 = HandleAttributesa;
    }
    else
    {
      v16 = 0LL;
    }
    if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v14);
    KeAbPostRelease((ULONG_PTR)v14);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v18, v19, v20);
    if ( !v16 )
    {
LABEL_9:
      HalPutDmaAdapter((PADAPTER_OBJECT)Object);
      return -1073741700;
    }
    v21 = v35;
    if ( !v35 )
    {
      HalPutDmaAdapter(v16);
      HalPutDmaAdapter((PADAPTER_OBJECT)Object);
      return -1073741658;
    }
    if ( OpenAsSelf )
    {
      v32 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
      v21 = v35;
    }
    v22 = v30;
    if ( v30 )
    {
      if ( OpenAsSelf )
      {
        if ( ImpersonationState.Token )
        {
          v39 = *((_QWORD *)ImpersonationState.Token + 138);
          v29 = 1;
        }
      }
      else
      {
        v28 = *((_QWORD *)Object + 183);
        if ( v28 )
          v39 = *(_QWORD *)(v28 + 1104);
        v29 = v28 != 0;
      }
      v26 = (struct _KPROCESS *)*((_QWORD *)Object + 68);
      v27 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(v26);
      ImpersonationTokenDacl = SepCreateImpersonationTokenDacl((__int64)v16, (__int64)v27, (ACL **)&P);
      ObFastDereferenceObject((signed __int64 *)&v26[1].Affinity.Bitmap[5], v27);
      v24 = P;
      if ( ImpersonationTokenDacl < 0 )
        goto LABEL_22;
      if ( P )
      {
        LOBYTE(v45[0]) = 1;
        if ( v45[1] >= 0 )
        {
          v46 = P;
          v45[1] = v45[1] & 0xFFF3 | 4;
        }
      }
      LODWORD(v42) = 48;
      *((_QWORD *)&v42 + 1) = 0LL;
      DWORD2(v43) = HandleAttributesa;
      *(_QWORD *)&v43 = 0LL;
      *(_QWORD *)&v44 = P ? v45 : 0LL;
      *((_QWORD *)&v44 + 1) = 0LL;
      ImpersonationTokenDacl = SepDuplicateToken((__int64)v16, (int)&v42, v31, 2, v21, 0, 0, &v36);
      if ( ImpersonationTokenDacl < 0 )
        goto LABEL_22;
      if ( v29 )
        ImpersonationTokenDacl = SepSetTokenTrust(v36, v39);
      if ( ImpersonationTokenDacl < 0 )
        goto LABEL_22;
      ObfReferenceObject(v36);
      inserted = ObInsertObjectEx((char *)v36, 0LL, DesiredAccess, 0, 0, 0LL, (unsigned __int64 *)&Handle);
    }
    else
    {
      inserted = ObOpenObjectByPointer(v16, v7, 0LL, DesiredAccess, (POBJECT_TYPE)SeTokenObjectType, v33, &Handle);
      v24 = P;
    }
    ImpersonationTokenDacl = inserted;
LABEL_22:
    if ( v24 )
      ExFreePoolWithTag(v24, 0);
    if ( v32 )
    {
      PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
      v22 = v30;
    }
    if ( ImpersonationTokenDacl >= 0 && v22 )
      PsSwapImpersonationToken(Object, v16, v36);
    HalPutDmaAdapter(v16);
    if ( v36 )
      HalPutDmaAdapter((PADAPTER_OBJECT)v36);
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
    if ( ImpersonationTokenDacl >= 0 )
      *v8 = Handle;
    return ImpersonationTokenDacl;
  }
  return result;
}
