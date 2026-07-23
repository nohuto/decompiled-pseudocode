/*
 * XREFs of RtlpHpStackTraceHeapGetContext @ 0x18010934C
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x180108980 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x1801093C0 (RtlpHpStackTraceHeapSerialize.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1801095B8 (RtlpHpStackTraceRemoveStack.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x18000A530 (RtlRunOnceBeginInitialize.c)
 *     RtlRunOnceExecuteOnce @ 0x180043830 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS __fastcall RtlpHpStackTraceHeapGetContext(__int64 a1, int a2, PVOID *a3)
{
  __int64 v4; // rax
  _RTL_RUN_ONCE *v5; // rcx
  NTSTATUS result; // eax
  PVOID Context; // [rsp+30h] [rbp+8h] BYREF

  v4 = 104LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v4 = 368LL;
  v5 = (_RTL_RUN_ONCE *)(v4 + a1);
  if ( a2 )
    result = RtlRunOnceExecuteOnce(v5, (PRTL_RUN_ONCE_INIT_FN)RtlpHpPerHeapStackTraceInitialize, 0LL, &Context);
  else
    result = RtlRunOnceBeginInitialize(v5, 1u, &Context);
  if ( result >= 0 )
  {
    *a3 = Context;
    return 0;
  }
  return result;
}
