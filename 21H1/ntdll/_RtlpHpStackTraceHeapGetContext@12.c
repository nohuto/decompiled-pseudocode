/*
 * XREFs of _RtlpHpStackTraceHeapGetContext@12 @ 0x4B36E4D5
 * Callers:
 *     _RtlpHpStackTraceAddStack@8 @ 0x4B36DDE3 (_RtlpHpStackTraceAddStack@8.c)
 *     _RtlpHpStackTraceHeapSerialize@8 @ 0x4B36E530 (_RtlpHpStackTraceHeapSerialize@8.c)
 *     _RtlpHpStackTraceRemoveStack@8 @ 0x4B36E701 (_RtlpHpStackTraceRemoveStack@8.c)
 * Callees:
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 *     _RtlRunOnceBeginInitialize@12 @ 0x4B2B2320 (_RtlRunOnceBeginInitialize@12.c)
 */

NTSTATUS __fastcall RtlpHpStackTraceHeapGetContext(_DWORD *a1, int a2, PVOID *a3)
{
  _RTL_RUN_ONCE *v3; // eax
  NTSTATUS result; // eax
  PVOID Context; // [esp+0h] [ebp-4h] BYREF

  Context = a1;
  v3 = (_RTL_RUN_ONCE *)((char *)a1 + (a1[2] == -571548178 ? 84 : 208));
  if ( a2 )
    result = RtlRunOnceExecuteOnce(v3, (PRTL_RUN_ONCE_INIT_FN)RtlpHpPerHeapStackTraceInitialize, 0, &Context);
  else
    result = RtlRunOnceBeginInitialize(v3, 1u, &Context);
  if ( result >= 0 )
  {
    *a3 = Context;
    return 0;
  }
  return result;
}
