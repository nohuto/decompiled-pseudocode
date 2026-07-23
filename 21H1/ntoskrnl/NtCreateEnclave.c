/*
 * XREFs of NtCreateEnclave @ 0x1408CF3D0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
 *     MiValidateZeroBits @ 0x14063414C (MiValidateZeroBits.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     ExSystemExceptionFilter @ 0x1407BEDE0 (ExSystemExceptionFilter.c)
 *     MiCreateEnclave @ 0x1408CDE8C (MiCreateEnclave.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtCreateEnclave(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T Size,
        SIZE_T InitialCommitment,
        ULONG EnclaveType,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  PVOID Pool; // r14
  char PreviousMode; // al
  __int64 v11; // rcx
  SIZE_T v12; // r12
  NTSTATUS Enclave; // ebx
  int v14; // ebx
  ULONG v15; // r9d
  __int64 v16; // rcx
  void *Process; // rdi
  _DWORD *v18; // r9
  __int64 v19; // r8
  _DWORD *v20; // r9
  _QWORD *Tag; // [rsp+20h] [rbp-F8h]
  char v23; // [rsp+50h] [rbp-C8h]
  _DWORD Size_4[3]; // [rsp+6Ch] [rbp-ACh] BYREF
  unsigned __int64 v27[2]; // [rsp+78h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+88h] [rbp-90h] BYREF
  SIZE_T v29; // [rsp+90h] [rbp-88h]
  ULONGLONG v30[2]; // [rsp+98h] [rbp-80h] BYREF
  _BYTE v31[48]; // [rsp+A8h] [rbp-70h] BYREF

  v29 = Size;
  v30[1] = (ULONGLONG)BaseAddress;
  v30[0] = ZeroBits;
  v27[1] = (unsigned __int64)EnclaveError;
  BugCheckParameter1 = 0LL;
  memset(v31, 0, sizeof(v31));
  v27[0] = 0LL;
  Pool = 0LL;
  memset(Size_4, 0, sizeof(Size_4));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v23 = PreviousMode;
  if ( EnclaveError && PreviousMode == 1 )
  {
    v11 = (__int64)EnclaveError;
    if ( (unsigned __int64)EnclaveError >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v11 = *(_DWORD *)v11;
  }
  if ( EnclaveType == 1 )
  {
LABEL_16:
    if ( qword_140C4EDC0 )
    {
      v14 = 4096;
      v12 = InitialCommitment;
      goto LABEL_18;
    }
LABEL_14:
    Enclave = -1073741637;
    goto LABEL_47;
  }
  if ( EnclaveType == 2 )
  {
    if ( (MEMORY[0x7FFE036C] & 4) == 0 )
      goto LABEL_14;
    goto LABEL_16;
  }
  if ( EnclaveType - 16 > 1 )
    goto LABEL_14;
  v12 = InitialCommitment;
  if ( InitialCommitment )
  {
LABEL_10:
    Enclave = -1073741581;
    goto LABEL_47;
  }
  if ( EnclaveInformationLength > 0x24 )
    goto LABEL_12;
  v14 = 0;
LABEL_18:
  if ( (int)MiValidateZeroBits(v30) < 0 )
  {
    Enclave = -1073741583;
    goto LABEL_47;
  }
  if ( !v29 )
  {
    Enclave = -1073741582;
    goto LABEL_47;
  }
  if ( v12 > v29 )
    goto LABEL_10;
  LOBYTE(v15) = v23;
  if ( v23 == 1 )
  {
    v16 = (__int64)BaseAddress;
    if ( (unsigned __int64)BaseAddress >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v16 = *(_QWORD *)v16;
  }
  v27[0] = (unsigned __int64)*BaseAddress;
  if ( EnclaveInformationLength )
  {
    if ( v14 && EnclaveInformationLength != v14 )
    {
LABEL_12:
      Enclave = -1073741820;
      goto LABEL_47;
    }
    Pool = MiAllocatePool(256, (EnclaveInformationLength + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 0x44456D4Du);
    *(_QWORD *)&Size_4[1] = Pool;
    if ( !Pool )
    {
      Enclave = -1073741670;
      goto LABEL_47;
    }
    if ( v23 == 1 )
    {
      if ( (unsigned __int64)EnclaveInformationLength - 1 > 0xFFFE )
      {
        if ( ((unsigned __int8)EnclaveInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)EnclaveInformation + EnclaveInformationLength > 0x7FFFFFFF0000LL
          || (char *)EnclaveInformation + EnclaveInformationLength < EnclaveInformation )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else if ( ((unsigned __int8)EnclaveInformation & 3) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
    }
    memmove(Pool, EnclaveInformation, EnclaveInformationLength);
    LOBYTE(v15) = v23;
  }
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
  }
  else
  {
    LODWORD(Tag) = 1834380621;
    Enclave = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)ProcessHandle,
                8LL,
                PsProcessType,
                v15,
                Tag,
                &BugCheckParameter1,
                0LL,
                0LL);
    if ( Enclave < 0 )
      goto LABEL_47;
    Process = (void *)BugCheckParameter1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v31, v18);
  }
  Enclave = MiCreateEnclave(
              (int)Process,
              v27,
              v30[0],
              v29,
              v12,
              EnclaveType,
              (__int64)Pool,
              EnclaveInformationLength,
              (__int64)Size_4);
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KiUnstackDetachProcess((__int64)v31, 0LL, v19, v20);
    ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
  }
LABEL_47:
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  if ( Enclave >= 0 )
    *BaseAddress = (PVOID)v27[0];
  if ( EnclaveError )
    *EnclaveError = Size_4[0];
  return Enclave;
}
