/*
 * XREFs of IopProcessWorkItem @ 0x14035A390
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     PsImpersonateContainerOfThread @ 0x14026B3F0 (PsImpersonateContainerOfThread.c)
 *     PspRevertContainerImpersonation @ 0x14026D9F0 (PspRevertContainerImpersonation.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     EtwTraceThreadWorkItem @ 0x1405A2800 (EtwTraceThreadWorkItem.c)
 */

struct _KTHREAD *__fastcall IopProcessWorkItem(__int64 a1, __int64 a2)
{
  _WORD *v2; // rbp
  void (__fastcall *v4)(_WORD *, __int64, __int64); // rdi
  int v5; // r14d
  __int64 v6; // rcx
  __int64 v7; // rcx
  void *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  struct _KTHREAD *result; // rax
  _WORD *v14; // rcx
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(_WORD **)(a1 + 40);
  v4 = *(void (__fastcall **)(_WORD *, __int64, __int64))(a1 + 32);
  v5 = 0;
  v15 = 0LL;
  v6 = *(_QWORD *)&NullGuid.Data1 - *(_QWORD *)(a1 + 68);
  if ( !v6 )
    v6 = *(_QWORD *)NullGuid.Data4 - *(_QWORD *)(a1 + 76);
  if ( v6 )
  {
    v5 = 1;
    v15 = *(_OWORD *)(a1 + 68);
    KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)&v15;
  }
  v7 = *(_QWORD *)(a1 + 56);
  if ( v7 )
  {
    PsImpersonateContainerOfThread(v7, a2);
    v8 = *(void **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    EtwTraceThreadWorkItem(v4, 1344LL);
  v9 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)(a1 + 64) )
  {
    v4(v2, v9, a1);
  }
  else
  {
    if ( *v2 == 3 )
      v14 = v2;
    else
      v14 = 0LL;
    ((void (__fastcall *)(_WORD *, __int64))v4)(v14, v9);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    EtwTraceThreadWorkItem(v4, 1345LL);
  ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  if ( v5 )
    KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = 0LL;
  if ( v8 )
  {
    PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread(), v10, v11, v12);
    ObfDereferenceObjectWithTag(v8, 0x746C6644u);
  }
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    KeBugCheckEx(1u, (ULONG_PTR)v4, KeGetCurrentThread()->ApcStateIndex, KeGetCurrentThread()->CombinedApcDisable, 0LL);
  return result;
}
