/*
 * XREFs of NtGetNextThread @ 0x1406E03F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObOpenObjectByPointer @ 0x1405E0F20 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     SeDeleteAccessState @ 0x140602120 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x140613740 (SeCreateAccessState.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14062B1C0 (ObReferenceObjectByHandleWithTag.c)
 *     PsGetNextProcessThread @ 0x14069A050 (PsGetNextProcessThread.c)
 *     PsSynchronizeWithThreadInsertion @ 0x140903098 (PsSynchronizeWithThreadInsertion.c)
 */

NTSTATUS __cdecl NtGetNextThread(
        HANDLE ProcessHandle,
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Flags,
        PHANDLE NewThreadHandle)
{
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v10; // rcx
  NTSTATUS result; // eax
  NTSTATUS AccessState; // esi
  _DWORD *NextProcessThread; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  PVOID v15; // r13
  PVOID v16; // rcx
  bool v17; // [rsp+40h] [rbp-208h]
  PVOID Object; // [rsp+48h] [rbp-200h] BYREF
  ACCESS_MASK v19; // [rsp+50h] [rbp-1F8h]
  PVOID v20; // [rsp+58h] [rbp-1F0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-1E8h] BYREF
  _DWORD *v22; // [rsp+68h] [rbp-1E0h]
  PHANDLE v23; // [rsp+70h] [rbp-1D8h]
  struct _KTHREAD *v24; // [rsp+80h] [rbp-1C8h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+90h] [rbp-1B8h] BYREF
  _BYTE v26[224]; // [rsp+130h] [rbp-118h] BYREF

  v19 = DesiredAccess;
  v23 = NewThreadHandle;
  Object = 0LL;
  v20 = 0LL;
  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v26, 0, sizeof(v26));
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v10 = (__int64)NewThreadHandle;
    if ( (unsigned __int64)NewThreadHandle >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v10 = *(_QWORD *)v10;
  }
  *NewThreadHandle = 0LL;
  if ( Flags )
    return -1073741811;
  result = ObReferenceObjectByHandleWithTag(
             ProcessHandle,
             0x400u,
             (POBJECT_TYPE)PsProcessType,
             PreviousMode,
             0x6E457350u,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    if ( ThreadHandle )
    {
      AccessState = ObReferenceObjectByHandleWithTag(
                      ThreadHandle,
                      0,
                      (POBJECT_TYPE)PsThreadType,
                      PreviousMode,
                      0x6E457350u,
                      &v20,
                      0LL);
      if ( AccessState < 0 )
        goto LABEL_26;
      if ( *((PVOID *)v20 + 68) != Object )
      {
        ObfDereferenceObjectWithTag(v20, 0x6E457350u);
        AccessState = -1073741811;
        goto LABEL_26;
      }
    }
    NextProcessThread = PsGetNextProcessThread((__int64)Object, v20);
    v22 = NextProcessThread;
    if ( NextProcessThread )
    {
      v17 = SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) != 0;
      CurrentThread = KeGetCurrentThread();
      v24 = CurrentThread;
      v15 = Object;
      do
      {
        if ( (NextProcessThread[324] & 2) != 0
          || (PsSynchronizeWithThreadInsertion(NextProcessThread, CurrentThread), (NextProcessThread[324] & 2) != 0) )
        {
          AccessState = SeCreateAccessState((int)&PassedAccessState, (int)v26, v19, (__int64)PsProcessType + 76);
          if ( AccessState < 0 )
            goto LABEL_20;
          if ( v17 )
          {
            if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
              PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
            else
              PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
            PassedAccessState.RemainingDesiredAccess = 0;
          }
          AccessState = ObOpenObjectByPointer(
                          NextProcessThread,
                          HandleAttributes & (PreviousMode != 0 ? 7666 : 73714),
                          &PassedAccessState,
                          0,
                          (POBJECT_TYPE)PsThreadType,
                          PreviousMode,
                          &Handle);
          SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)&PassedAccessState);
          if ( AccessState >= 0 )
          {
            *v23 = Handle;
            goto LABEL_20;
          }
          if ( AccessState != -1073741790 )
            goto LABEL_20;
        }
        NextProcessThread = PsGetNextProcessThread((__int64)v15, NextProcessThread);
        v22 = NextProcessThread;
        CurrentThread = v24;
      }
      while ( NextProcessThread );
      AccessState = -2147483622;
LABEL_20:
      ObfDereferenceObjectWithTag(v15, 0x6E457350u);
      if ( !NextProcessThread )
        return AccessState;
      v16 = NextProcessThread;
LABEL_22:
      ObfDereferenceObjectWithTag(v16, 0x6E457350u);
      return AccessState;
    }
    AccessState = -2147483622;
LABEL_26:
    v16 = Object;
    goto LABEL_22;
  }
  return result;
}
