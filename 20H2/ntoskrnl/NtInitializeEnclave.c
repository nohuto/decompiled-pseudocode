/*
 * XREFs of NtInitializeEnclave @ 0x1408D69B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     KeStackAttachProcess @ 0x14023EE20 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402688E0 (KeUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140611880 (ObReferenceObjectByHandleWithTag.c)
 *     MiInitializeEnclave @ 0x1408D57D0 (MiInitializeEnclave.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtInitializeEnclave(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  size_t v5; // r13
  PVOID Pool; // rdi
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v10; // rcx
  NTSTATUS v11; // ebx
  struct _KTHREAD *CurrentThread; // rax
  struct _KPROCESS *Process; // rsi
  PVOID v14; // rsi
  KPROCESSOR_MODE v16; // [rsp+40h] [rbp-B8h]
  ULONG v17; // [rsp+48h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-A8h] BYREF
  PVOID v19; // [rsp+58h] [rbp-A0h]
  HANDLE v20; // [rsp+68h] [rbp-90h]
  PULONG v21; // [rsp+70h] [rbp-88h]
  PVOID v22; // [rsp+78h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-70h] BYREF

  v5 = EnclaveInformationLength;
  v22 = BaseAddress;
  v20 = ProcessHandle;
  v21 = EnclaveError;
  memset(&ApcState, 0, sizeof(ApcState));
  Object = 0LL;
  v17 = 0;
  Pool = 0LL;
  v19 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v16 = PreviousMode;
  if ( EnclaveError && PreviousMode == 1 )
  {
    v10 = (__int64)EnclaveError;
    if ( (unsigned __int64)EnclaveError >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v10 = *(_DWORD *)v10;
  }
  if ( !EnclaveInformationLength )
    goto LABEL_18;
  if ( EnclaveInformationLength <= 0x1000 )
  {
    Pool = MiAllocatePool(256, EnclaveInformationLength, 0x44456D4Du);
    v19 = Pool;
    if ( !Pool )
    {
      v11 = -1073741670;
      goto LABEL_23;
    }
    if ( v16 == 1
      && v5 - 1 > 0xFFFE
      && (_DWORD)v5
      && ((unsigned __int64)EnclaveInformation + v5 > 0x7FFFFFFF0000LL
       || (char *)EnclaveInformation + v5 < EnclaveInformation) )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(Pool, EnclaveInformation, v5);
    PreviousMode = v16;
LABEL_18:
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
    if ( ProcessHandle == (HANDLE)-1LL )
    {
      Object = CurrentThread->ApcState.Process;
    }
    else
    {
      v11 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              8u,
              (POBJECT_TYPE)PsProcessType,
              PreviousMode,
              0x6D566D4Du,
              &Object,
              0LL);
      if ( v11 < 0 )
        goto LABEL_23;
      KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
    }
    v11 = MiInitializeEnclave(Process, (unsigned __int64)v22, (__int64)Pool, v5, &v17);
    goto LABEL_23;
  }
  v11 = -1073741820;
LABEL_23:
  v14 = Object;
  if ( Object && ProcessHandle != (HANDLE)-1LL )
  {
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObjectWithTag(v14, 0x6D566D4Du);
  }
  if ( EnclaveError )
    *EnclaveError = v17;
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  return v11;
}
