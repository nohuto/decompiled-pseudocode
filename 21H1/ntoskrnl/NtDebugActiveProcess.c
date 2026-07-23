/*
 * XREFs of NtDebugActiveProcess @ 0x140881970
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14062B1C0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     PsTestProtectedProcessIncompatibility @ 0x14064CEC8 (PsTestProtectedProcessIncompatibility.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x1408809BC (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x140881400 (DbgkpSetProcessDebugObject.c)
 *     PsRequestDebugSecureProcess @ 0x140908438 (PsRequestDebugSecureProcess.c)
 */

NTSTATUS __cdecl NtDebugActiveProcess(HANDLE ProcessHandle, HANDLE DebugObjectHandle)
{
  KPROCESSOR_MODE PreviousMode; // bp
  NTSTATUS result; // eax
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v7; // rdi
  _KPROCESS *Process; // rsi
  NTSTATUS v9; // ebx
  unsigned __int64 v10; // rax
  __int16 v11; // cx
  unsigned __int64 Count; // rax
  __int16 v13; // cx
  BOOLEAN v14; // al
  struct _KEVENT *v15; // rsi
  int Messages; // eax
  __int64 v17[5]; // [rsp+40h] [rbp-28h] BYREF
  PVOID v18; // [rsp+80h] [rbp+18h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v18 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v17[0] = 0LL;
  result = ObReferenceObjectByHandleWithTag(
             ProcessHandle,
             0x800u,
             (POBJECT_TYPE)PsProcessType,
             PreviousMode,
             0x4F676244u,
             &v18,
             0LL);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = (struct _EX_RUNDOWN_REF *)v18;
    Process = CurrentThread->ApcState.Process;
    if ( v18 == Process || v18 == PsInitialSystemProcess )
    {
      v9 = -1073741790;
    }
    else
    {
      LOBYTE(v5) = PreviousMode;
      if ( PsTestProtectedProcessIncompatibility(v5, (__int64)CurrentThread->ApcState.Process, (__int64)v18) )
      {
        v9 = -1073740014;
      }
      else if ( (v7[124].Count & 1) == 0 || (v9 = PsRequestDebugSecureProcess(v7), v9 >= 0) )
      {
        v10 = Process[1].AffinityPadding[10];
        if ( !v10
          || (v11 = *(_WORD *)(v10 + 8), v11 != 332) && v11 != 452
          || (Count = v7[176].Count) != 0 && ((v13 = *(_WORD *)(Count + 8), v13 == 332) || v13 == 452) )
        {
          Object = 0LL;
          v9 = ObReferenceObjectByHandle(DebugObjectHandle, 2u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
          if ( v9 >= 0 )
          {
            v14 = ExAcquireRundownProtection_0(v7 + 139);
            v15 = (struct _KEVENT *)Object;
            if ( v14 )
            {
              Messages = DbgkpPostFakeProcessCreateMessages((_KPROCESS *)v7, (struct _KEVENT *)Object, v17);
              v9 = DbgkpSetProcessDebugObject((ULONG_PTR)v7, v15, Messages, v17[0]);
              ExReleaseRundownProtection_0(v7 + 139);
            }
            else
            {
              v9 = -1073741558;
            }
            HalPutDmaAdapter((PADAPTER_OBJECT)v15);
          }
        }
        else
        {
          v9 = -1073741637;
        }
      }
    }
    ObfDereferenceObjectWithTag(v7, 0x4F676244u);
    return v9;
  }
  return result;
}
