/*
 * XREFs of NtOpenThreadTokenEx @ 0x1405E05A0
 * Callers:
 *     NtOpenThreadToken @ 0x1405E0580 (NtOpenThreadToken.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140206540 (ObFastDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     PsDisableImpersonation @ 0x1405E0AB0 (PsDisableImpersonation.c)
 *     PsRestoreImpersonation @ 0x1405E0BE0 (PsRestoreImpersonation.c)
 *     ObOpenObjectByPointer @ 0x1405E0F20 (ObOpenObjectByPointer.c)
 *     PsSwapImpersonationToken @ 0x1405E1270 (PsSwapImpersonationToken.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 *     SepSetTokenTrust @ 0x1405E1440 (SepSetTokenTrust.c)
 *     SepDuplicateToken @ 0x1406014E0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 *     SepCreateImpersonationTokenDacl @ 0x140605930 (SepCreateImpersonationTokenDacl.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  int v21; // r13d
  char v22; // r15
  NTSTATUS inserted; // eax
  PVOID v24; // rbx
  NTSTATUS v25; // r14d
  struct _KPROCESS *v26; // rdi
  struct _DMA_ADAPTER *v27; // rbx
  __int64 v28; // rdx
  bool v29; // [rsp+40h] [rbp-D8h]
  char v30; // [rsp+41h] [rbp-D7h]
  bool v31; // [rsp+42h] [rbp-D6h]
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
      v25 = SepCreateImpersonationTokenDacl(v16, v27, &P);
      ObFastDereferenceObject((signed __int64 *)&v26[1].Affinity.Bitmap[5], v27);
      v24 = P;
      if ( v25 < 0 )
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
      v25 = SepDuplicateToken((_DWORD)v16, (unsigned int)&v42, v31, 2, v21, 0, 0, (__int64)&v36);
      if ( v25 < 0 )
        goto LABEL_22;
      if ( v29 )
        v25 = SepSetTokenTrust(v36, v39);
      if ( v25 < 0 )
        goto LABEL_22;
      ObfReferenceObject(v36);
      inserted = ObInsertObjectEx((PADAPTER_OBJECT)v36, 0, 0LL, (__int64)&Handle);
    }
    else
    {
      inserted = ObOpenObjectByPointer(v16, v7, 0LL, DesiredAccess, (POBJECT_TYPE)SeTokenObjectType, v33, &Handle);
      v24 = P;
    }
    v25 = inserted;
LABEL_22:
    if ( v24 )
      ExFreePoolWithTag(v24, 0);
    if ( v32 )
    {
      PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
      v22 = v30;
    }
    if ( v25 >= 0 && v22 )
      PsSwapImpersonationToken(Object, v16, v36);
    HalPutDmaAdapter(v16);
    if ( v36 )
      HalPutDmaAdapter((PADAPTER_OBJECT)v36);
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
    if ( v25 >= 0 )
      *v8 = Handle;
    return v25;
  }
  return result;
}
