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

int __fastcall RtlpHpStackTraceHeapGetContext(int a1, int a2, _DWORD *a3)
{
  volatile signed __int32 *v3; // eax
  int result; // eax
  int v5; // [esp+0h] [ebp-4h] BYREF

  v5 = a1;
  v3 = (volatile signed __int32 *)(a1 + (*(_DWORD *)(a1 + 8) == -571548178 ? 84 : 208));
  if ( a2 )
    result = RtlRunOnceExecuteOnce((int)v3, (int (__stdcall *)(int, int, int))RtlpHpPerHeapStackTraceInitialize, 0, &v5);
  else
    result = RtlRunOnceBeginInitialize(v3, 1, (unsigned __int32 *)&v5);
  if ( result >= 0 )
  {
    *a3 = v5;
    return 0;
  }
  return result;
}
