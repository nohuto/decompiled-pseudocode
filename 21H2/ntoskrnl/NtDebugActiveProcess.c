/*
 * XREFs of NtDebugActiveProcess @ 0x140885D80
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     PsTestProtectedProcessIncompatibility @ 0x140607578 (PsTestProtectedProcessIncompatibility.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406F0B80 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x140884DCC (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x140885810 (DbgkpSetProcessDebugObject.c)
 *     PsRequestDebugSecureProcess @ 0x14090CAB8 (PsRequestDebugSecureProcess.c)
 */

NTSTATUS __fastcall NtDebugActiveProcess(void *a1, void *a2)
{
  KPROCESSOR_MODE PreviousMode; // bp
  NTSTATUS result; // eax
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v7; // rdi
  _KPROCESS *Process; // rsi
  int v9; // ebx
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
             a1,
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
          v9 = ObReferenceObjectByHandle(a2, 2u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
          if ( v9 >= 0 )
          {
            v14 = ExAcquireRundownProtection_0(v7 + 139);
            v15 = (struct _KEVENT *)Object;
            if ( v14 )
            {
              Messages = DbgkpPostFakeProcessCreateMessages((_KPROCESS *)v7, (struct _KEVENT *)Object, v17);
              v9 = DbgkpSetProcessDebugObject((__int64)v7, v15, Messages, v17[0]);
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
