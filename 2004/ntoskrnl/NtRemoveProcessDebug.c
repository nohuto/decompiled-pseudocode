/*
 * XREFs of NtRemoveProcessDebug @ 0x140883060
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     VslpEnterIumSecureMode @ 0x1402E56B0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405F5CD0 (ObpReferenceObjectByHandleWithTag.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1406B5EA8 (PsTestProtectedProcessIncompatibility.c)
 *     DbgkClearProcessDebugObject @ 0x140760860 (DbgkClearProcessDebugObject.c)
 */

NTSTATUS __cdecl NtRemoveProcessDebug(HANDLE ProcessHandle, HANDLE DebugObjectHandle)
{
  char PreviousMode; // si
  NTSTATUS result; // eax
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  NTSTATUS v7; // ebx
  __int64 v8; // rbx
  PVOID Object; // [rsp+40h] [rbp-A8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v10; // [rsp+48h] [rbp-A0h] BYREF
  _QWORD v11[14]; // [rsp+50h] [rbp-98h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = 0LL;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ProcessHandle,
             2048,
             (__int64)PsProcessType,
             PreviousMode,
             0x4F676244u,
             &v10,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    LOBYTE(v5) = PreviousMode;
    v6 = (_QWORD *)v10;
    if ( PsTestProtectedProcessIncompatibility(v5, (__int64)KeGetCurrentThread()->ApcState.Process, *(_QWORD *)&v10) )
    {
      v7 = -1073740014;
    }
    else
    {
      v8 = v6[124];
      if ( (v8 & 1) == 0
        || (memset(v11, 0, 0x68uLL),
            v11[2] = 0LL,
            v11[1] = v8,
            v7 = VslpEnterIumSecureMode(2u, 12, 0, (__int64)v11),
            v7 >= 0) )
      {
        Object = 0LL;
        v7 = ObReferenceObjectByHandle(DebugObjectHandle, 2u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
        if ( v7 >= 0 )
        {
          v7 = DbgkClearProcessDebugObject((ULONG_PTR)v6, (__int64)Object);
          HalPutDmaAdapter((PADAPTER_OBJECT)Object);
        }
      }
    }
    ObfDereferenceObjectWithTag(v6, 0x4F676244u);
    return v7;
  }
  return result;
}
