/*
 * XREFs of NtRemoveProcessDebug @ 0x1408862B0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PsTestProtectedProcessIncompatibility @ 0x140697008 (PsTestProtectedProcessIncompatibility.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140707FE0 (ObpReferenceObjectByHandleWithTag.c)
 *     DbgkClearProcessDebugObject @ 0x140773150 (DbgkClearProcessDebugObject.c)
 */

NTSTATUS __cdecl NtRemoveProcessDebug(HANDLE ProcessHandle, HANDLE DebugObjectHandle)
{
  char PreviousMode; // si
  NTSTATUS result; // eax
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  NTSTATUS v7; // ebx
  __int64 v8; // rbx
  PVOID *Object; // [rsp+20h] [rbp-C8h]
  PVOID v10; // [rsp+40h] [rbp-A8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v11; // [rsp+48h] [rbp-A0h] BYREF
  _QWORD v12[14]; // [rsp+50h] [rbp-98h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = 0LL;
  LODWORD(Object) = 1332175428;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ProcessHandle,
             2048LL,
             PsProcessType,
             PreviousMode,
             Object,
             &v11,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    LOBYTE(v5) = PreviousMode;
    v6 = (_QWORD *)v11;
    if ( PsTestProtectedProcessIncompatibility(v5, (__int64)KeGetCurrentThread()->ApcState.Process, *(_QWORD *)&v11) )
    {
      v7 = -1073740014;
    }
    else
    {
      v8 = v6[124];
      if ( (v8 & 1) == 0
        || (memset(v12, 0, 0x68uLL),
            v12[2] = 0LL,
            v12[1] = v8,
            v7 = VslpEnterIumSecureMode(2u, 12, 0, (__int64)v12),
            v7 >= 0) )
      {
        v10 = 0LL;
        v7 = ObReferenceObjectByHandle(DebugObjectHandle, 2u, DbgkDebugObjectType, PreviousMode, &v10, 0LL);
        if ( v7 >= 0 )
        {
          v7 = DbgkClearProcessDebugObject((ULONG_PTR)v6, (__int64)v10);
          HalPutDmaAdapter((PADAPTER_OBJECT)v10);
        }
      }
    }
    ObfDereferenceObjectWithTag(v6, 0x4F676244u);
    return v7;
  }
  return result;
}
