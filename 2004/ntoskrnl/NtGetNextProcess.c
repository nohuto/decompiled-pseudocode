/*
 * XREFs of NtGetNextProcess @ 0x1407784D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     PsGetCurrentServerSilo @ 0x14027D7E0 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x14027D828 (PsIsProcessInSilo.c)
 *     PspLockUnlockProcessExclusive @ 0x140351204 (PspLockUnlockProcessExclusive.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F5C50 (ObReferenceObjectByHandleWithTag.c)
 *     ObOpenObjectByPointer @ 0x140667220 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     SeCreateAccessState @ 0x140668A20 (SeCreateAccessState.c)
 *     SeDeleteAccessState @ 0x14067A200 (SeDeleteAccessState.c)
 *     PsGetNextProcess @ 0x140698790 (PsGetNextProcess.c)
 *     PsGetPreviousProcess @ 0x14090B378 (PsGetPreviousProcess.c)
 */

NTSTATUS __cdecl NtGetNextProcess(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Flags,
        PHANDLE NewProcessHandle)
{
  KPROCESSOR_MODE PreviousMode; // r12
  ULONG v9; // r14d
  __int64 v10; // rcx
  NTSTATUS result; // eax
  ULONG v12; // r15d
  unsigned __int64 PreviousProcess; // rax
  __int64 v14; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 CurrentServerSilo; // rax
  NTSTATUS AccessState; // esi
  unsigned __int64 NextProcess; // rax
  bool v19; // zf
  bool v20; // [rsp+40h] [rbp-208h]
  PVOID Object; // [rsp+58h] [rbp-1F0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-1E8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-1E0h]
  struct _KTHREAD *v25; // [rsp+78h] [rbp-1D0h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+90h] [rbp-1B8h] BYREF
  _BYTE v27[224]; // [rsp+130h] [rbp-118h] BYREF

  Object = 0LL;
  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v27, 0, sizeof(v27));
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = HandleAttributes & (PreviousMode != 0 ? 7666 : 73714);
  if ( PreviousMode )
  {
    v10 = (__int64)NewProcessHandle;
    if ( (unsigned __int64)NewProcessHandle >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v10 = *(_QWORD *)v10;
  }
  *NewProcessHandle = 0LL;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  if ( !ProcessHandle
    || (result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   0x6E457350u,
                   &Object,
                   0LL),
        result >= 0) )
  {
    v12 = Flags & 1;
    if ( v12 )
      PreviousProcess = PsGetPreviousProcess(Object);
    else
      PreviousProcess = PsGetNextProcess(Object);
    v14 = PreviousProcess;
    if ( !PreviousProcess )
      return -2147483622;
    v20 = SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) != 0;
    CurrentThread = KeGetCurrentThread();
    v25 = CurrentThread;
    CurrentServerSilo = PsGetCurrentServerSilo();
    v24 = CurrentServerSilo;
    while ( 1 )
    {
      if ( (*(_DWORD *)(v14 + 1124) & 0x4000000) != 0 )
        goto LABEL_13;
      PspLockUnlockProcessExclusive(v14, (__int64)CurrentThread);
      if ( (*(_DWORD *)(v14 + 1124) & 0x4000000) != 0 )
        break;
LABEL_27:
      if ( v12 )
        NextProcess = PsGetPreviousProcess((PVOID)v14);
      else
        NextProcess = PsGetNextProcess((_QWORD *)v14);
      v14 = NextProcess;
      v19 = NextProcess == 0;
      CurrentServerSilo = v24;
      if ( v19 )
      {
        AccessState = -2147483622;
LABEL_21:
        if ( v14 )
          ObfDereferenceObjectWithTag((PVOID)v14, 0x6E457350u);
        return AccessState;
      }
    }
    CurrentServerSilo = v24;
LABEL_13:
    if ( PsIsProcessInSilo((struct _KPROCESS *)v14, CurrentServerSilo) )
    {
      AccessState = SeCreateAccessState((int)&PassedAccessState, (int)v27, DesiredAccess, (__int64)PsProcessType + 76);
      if ( AccessState < 0 )
        goto LABEL_21;
      if ( v20 )
      {
        if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
          PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
        else
          PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
        PassedAccessState.RemainingDesiredAccess = 0;
      }
      AccessState = ObOpenObjectByPointer(
                      (PVOID)v14,
                      v9,
                      &PassedAccessState,
                      0,
                      (POBJECT_TYPE)PsProcessType,
                      PreviousMode,
                      &Handle);
      SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)&PassedAccessState);
      if ( AccessState >= 0 )
      {
        *NewProcessHandle = Handle;
        goto LABEL_21;
      }
      if ( AccessState != -1073741790 )
        goto LABEL_21;
      CurrentThread = v25;
    }
    goto LABEL_27;
  }
  return result;
}
