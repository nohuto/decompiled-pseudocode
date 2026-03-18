/*
 * XREFs of MiLockSetPfnPriority @ 0x140386110
 * Callers:
 *     MiDeleteVa @ 0x140330730 (MiDeleteVa.c)
 *     MiResolvePageFileFault @ 0x1403927C4 (MiResolvePageFileFault.c)
 *     MiUpdateOldPteWorker @ 0x14045BF06 (MiUpdateOldPteWorker.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
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
