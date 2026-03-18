/*
 * XREFs of NtOpenThreadTokenEx @ 0x1406668A0
 * Callers:
 *     NtOpenThreadToken @ 0x140666880 (NtOpenThreadToken.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ObFastDereferenceObject @ 0x140299050 (ObFastDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     PsDisableImpersonation @ 0x140666DB0 (PsDisableImpersonation.c)
 *     PsRestoreImpersonation @ 0x140666EE0 (PsRestoreImpersonation.c)
 *     ObOpenObjectByPointer @ 0x140667220 (ObOpenObjectByPointer.c)
 *     PsSwapImpersonationToken @ 0x140667570 (PsSwapImpersonationToken.c)
 *     PsReferencePrimaryToken @ 0x1406676A0 (PsReferencePrimaryToken.c)
 *     SepSetTokenTrust @ 0x140667740 (SepSetTokenTrust.c)
 *     SepDuplicateToken @ 0x1406795C0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x14067A230 (ObInsertObjectEx.c)
 *     SepCreateImpersonationTokenDacl @ 0x14067DA10 (SepCreateImpersonationTokenDacl.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  int v18; // r13d
  char v19; // r15
  NTSTATUS inserted; // eax
  PVOID v21; // rbx
  NTSTATUS v22; // r14d
  struct _KPROCESS *v23; // rdi
  struct _DMA_ADAPTER *v24; // rbx
  __int64 v25; // rdx
  bool v26; // [rsp+40h] [rbp-D8h]
  char v27; // [rsp+41h] [rbp-D7h]
  bool v28; // [rsp+42h] [rbp-D6h]
  BOOLEAN v29; // [rsp+43h] [rbp-D5h]
  KPROCESSOR_MODE v30; // [rsp+44h] [rbp-D4h]
  PVOID Object; // [rsp+48h] [rbp-D0h] BYREF
  int v32; // [rsp+50h] [rbp-C8h]
  PVOID v33; // [rsp+58h] [rbp-C0h] BYREF
  ULONG HandleAttributesa; // [rsp+60h] [rbp-B8h]
  PVOID P; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+70h] [rbp-A8h]
  HANDLE Handle; // [rsp+78h] [rbp-A0h] BYREF
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+80h] [rbp-98h] BYREF
  __int128 v39; // [rsp+90h] [rbp-88h] BYREF
  __int128 v40; // [rsp+A0h] [rbp-78h]
  __int128 v41; // [rsp+B0h] [rbp-68h]
  _WORD v42[16]; // [rsp+C0h] [rbp-58h] BYREF
  PVOID v43; // [rsp+E0h] [rbp-38h]

  v33 = 0LL;
  v27 = 0;
  v28 = 0;
  v32 = 0;
  ImpersonationState = 0LL;
  v29 = 0;
  Handle = 0LL;
  memset(v42, 0, sizeof(v42));
  v43 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  P = 0LL;
  v36 = 0LL;
  v26 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v30 = PreviousMode;
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
      v32 = v15[298] & 3;
      v28 = (v15[298] & 4) != 0;
      v27 = BYTE1(v17) & 1;
      v7 = HandleAttributesa;
    }
    else
    {
      v16 = 0LL;
    }
    if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v14);
    KeAbPostRelease((ULONG_PTR)v14);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( !v16 )
    {
LABEL_9:
      HalPutDmaAdapter((PADAPTER_OBJECT)Object);
      return -1073741700;
    }
    v18 = v32;
    if ( !v32 )
    {
      HalPutDmaAdapter(v16);
      HalPutDmaAdapter((PADAPTER_OBJECT)Object);
      return -1073741658;
    }
    if ( OpenAsSelf )
    {
      v29 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
      v18 = v32;
    }
    v19 = v27;
    if ( v27 )
    {
      if ( OpenAsSelf )
      {
        if ( ImpersonationState.Token )
        {
          v36 = *((_QWORD *)ImpersonationState.Token + 138);
          v26 = 1;
        }
      }
      else
      {
        v25 = *((_QWORD *)Object + 183);
        if ( v25 )
          v36 = *(_QWORD *)(v25 + 1104);
        v26 = v25 != 0;
      }
      v23 = (struct _KPROCESS *)*((_QWORD *)Object + 68);
      v24 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(v23);
      v22 = SepCreateImpersonationTokenDacl(v16, v24, &P);
      ObFastDereferenceObject((signed __int64 *)&v23[1].Affinity.Bitmap[5], v24);
      v21 = P;
      if ( v22 < 0 )
        goto LABEL_22;
      if ( P )
      {
        LOBYTE(v42[0]) = 1;
        if ( v42[1] >= 0 )
        {
          v43 = P;
          v42[1] = v42[1] & 0xFFF3 | 4;
        }
      }
      LODWORD(v39) = 48;
      *((_QWORD *)&v39 + 1) = 0LL;
      DWORD2(v40) = HandleAttributesa;
      *(_QWORD *)&v40 = 0LL;
      *(_QWORD *)&v41 = P ? v42 : 0LL;
      *((_QWORD *)&v41 + 1) = 0LL;
      v22 = SepDuplicateToken((_DWORD)v16, (unsigned int)&v39, v28, 2, v18, 0, 0, (__int64)&v33);
      if ( v22 < 0 )
        goto LABEL_22;
      if ( v26 )
        v22 = SepSetTokenTrust(v33, v36);
      if ( v22 < 0 )
        goto LABEL_22;
      ObfReferenceObject(v33);
      inserted = ObInsertObjectEx((PADAPTER_OBJECT)v33, 0LL, 0, 0LL, (__int64)&Handle);
    }
    else
    {
      inserted = ObOpenObjectByPointer(v16, v7, 0LL, DesiredAccess, (POBJECT_TYPE)SeTokenObjectType, v30, &Handle);
      v21 = P;
    }
    v22 = inserted;
LABEL_22:
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
    if ( v29 )
    {
      PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
      v19 = v27;
    }
    if ( v22 >= 0 && v19 )
      PsSwapImpersonationToken(Object, v16, v33);
    HalPutDmaAdapter(v16);
    if ( v33 )
      HalPutDmaAdapter((PADAPTER_OBJECT)v33);
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
    if ( v22 >= 0 )
      *v8 = Handle;
    return v22;
  }
  return result;
}
