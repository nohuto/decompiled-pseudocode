/*
 * XREFs of IopProcessWorkItem @ 0x1402F9DA0
 * Callers:
 *     <none>
 * Callees:
 *     PsImpersonateContainerOfThread @ 0x1402C0590 (PsImpersonateContainerOfThread.c)
 *     PspRevertContainerImpersonation @ 0x1402C43E0 (PspRevertContainerImpersonation.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     EtwTraceThreadWorkItem @ 0x1405A85F0 (EtwTraceThreadWorkItem.c)
 */

struct _KTHREAD *__fastcall IopProcessWorkItem(__int64 a1)
{
  _WORD *v1; // rbp
  void (__fastcall *v3)(_WORD *, __int64, __int64); // rdi
  int v4; // r14d
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9
  struct _KTHREAD *result; // rax
  _WORD *v13; // rcx
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_WORD **)(a1 + 40);
  v3 = *(void (__fastcall **)(_WORD *, __int64, __int64))(a1 + 32);
  v4 = 0;
  v14 = 0LL;
  v5 = *(_QWORD *)&NullGuid.Data1 - *(_QWORD *)(a1 + 68);
  if ( !v5 )
    v5 = *(_QWORD *)NullGuid.Data4 - *(_QWORD *)(a1 + 76);
  if ( v5 )
  {
    v4 = 1;
    v14 = *(_OWORD *)(a1 + 68);
    KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)&v14;
  }
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 )
  {
    PsImpersonateContainerOfThread(v6);
    v7 = *(void **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    EtwTraceThreadWorkItem(v3, 1344LL);
  v8 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)(a1 + 64) )
  {
    v3(v1, v8, a1);
  }
  else
  {
    if ( *v1 == 3 )
      v13 = v1;
    else
      v13 = 0LL;
    ((void (__fastcall *)(_WORD *, __int64))v3)(v13, v8);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    EtwTraceThreadWorkItem(v3, 1345LL);
  ObfDereferenceObjectWithTag(v1, 0x746C6644u);
  if ( v4 )
    KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = 0LL;
  if ( v7 )
  {
    PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread(), v9, v10, v11);
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
  }
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    KeBugCheckEx(1u, (ULONG_PTR)v3, KeGetCurrentThread()->ApcStateIndex, KeGetCurrentThread()->CombinedApcDisable, 0LL);
  return result;
}
