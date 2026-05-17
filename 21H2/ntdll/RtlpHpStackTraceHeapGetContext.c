/*
 * XREFs of RtlpHpStackTraceHeapGetContext @ 0x18010938C
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x1801089C0 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180109400 (RtlpHpStackTraceHeapSerialize.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1801095F8 (RtlpHpStackTraceRemoveStack.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x18000A530 (RtlRunOnceBeginInitialize.c)
 *     RtlRunOnceExecuteOnce @ 0x180043830 (RtlRunOnceExecuteOnce.c)
 */

__int64 __fastcall RtlpHpStackTraceHeapGetContext(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // rax
  volatile signed __int64 *v5; // rcx
  __int64 result; // rax
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = 104LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v4 = 368LL;
  v5 = (volatile signed __int64 *)(v4 + a1);
  if ( a2 )
    result = RtlRunOnceExecuteOnce(
               v5,
               (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpHpPerHeapStackTraceInitialize,
               0LL,
               &v7);
  else
    result = RtlRunOnceBeginInitialize(v5, 1, &v7);
  if ( (int)result >= 0 )
  {
    *a3 = v7;
    return 0LL;
  }
  return result;
}
