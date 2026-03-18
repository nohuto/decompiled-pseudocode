/*
 * XREFs of PspSetMinimalProcessName @ 0x140781DCC
 * Callers:
 *     PsCreateMinimalProcess @ 0x140781A6C (PsCreateMinimalProcess.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 *     PspSetProcessShortName @ 0x14065E164 (PspSetProcessShortName.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspSetMinimalProcessName(__int64 a1, const void **a2)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rdi
  void *v6; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned __int16 *)a2 + 16LL, 0x6E497350u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  PoolWithTag[1] = PoolWithTag + 2;
  *(_WORD *)PoolWithTag = *(_WORD *)a2;
  *((_WORD *)PoolWithTag + 1) = *(_WORD *)a2;
  memmove(PoolWithTag + 2, a2[1], *(unsigned __int16 *)a2);
  v6 = *(void **)(a1 + 1472);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  *(_QWORD *)(a1 + 1472) = v5;
  PspSetProcessShortName(a1, (unsigned __int16 *)a2);
  return 0LL;
}
