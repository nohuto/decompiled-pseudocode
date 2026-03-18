/*
 * XREFs of MiLockSetPfnPriority @ 0x140314EA0
 * Callers:
 *     MiDeleteVa @ 0x140242B90 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x140244AA0 (MiAgePteWorker.c)
 *     MmUnmapViewInSystemCache @ 0x140247350 (MmUnmapViewInSystemCache.c)
 *     MiResolvePageFileFault @ 0x140313F9C (MiResolvePageFileFault.c)
 *     MiUpdateOldPteWorker @ 0x140537258 (MiUpdateOldPteWorker.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockSetPfnPriority(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  __int64 result; // rax
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  v4 = a2;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v7, a2, a3, a4);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  *(_BYTE *)(a1 + 35) ^= (v4 ^ *(_BYTE *)(a1 + 35)) & 7;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
