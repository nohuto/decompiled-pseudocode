/*
 * XREFs of NtCommitRegistryTransaction @ 0x14065CD00
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     CmpCommitLightWeightTransaction @ 0x14065CE0C (CmpCommitLightWeightTransaction.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtCommitRegistryTransaction(HANDLE Handle, int a2)
{
  NTSTATUS v4; // eax
  PVOID v5; // rdi
  int v6; // ebx
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  __int128 v9; // [rsp+38h] [rbp-50h] BYREF
  _OWORD v10[3]; // [rsp+48h] [rbp-40h] BYREF

  v9 = 0LL;
  memset(v10, 0, sizeof(v10));
  CmpInitializeThreadInfo((__int64)&v9);
  if ( (unsigned __int8)CmpAcquireShutdownRundown() )
  {
    if ( a2 )
    {
      v6 = -1073741811;
    }
    else
    {
      Object = 0LL;
      v4 = ObReferenceObjectByHandle(
             Handle,
             8u,
             CmRegistryTransactionType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
      v5 = Object;
      v6 = v4;
      if ( v4 >= 0 )
      {
        CmpAttachToRegistryProcess(v10);
        v6 = CmpCommitLightWeightTransaction(v5);
        CmpDetachFromRegistryProcess(v10);
        if ( v6 >= 0 )
          v6 = 0;
      }
      if ( v5 )
        ObfDereferenceObject(v5);
    }
    CmpReleaseShutdownRundown();
  }
  else
  {
    v6 = -1073741431;
  }
  CmCleanupThreadInfo((__int64 *)&v9);
  return (unsigned int)v6;
}
