/*
 * XREFs of ExpTryAcquireResourceShared @ 0x14038F7DC
 * Callers:
 *     ExAcquireFastResourceShared @ 0x14038F4D0 (ExAcquireFastResourceShared.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1405B4FA0 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     <none>
 */

char __fastcall ExpTryAcquireResourceShared(__int64 a1)
{
  int v2; // ecx
  char result; // al

  v2 = *(_DWORD *)(a1 + 64);
  if ( v2 && (*(char *)(a1 + 26) < 0 || *(_DWORD *)(a1 + 76)) )
    return 0;
  result = 1;
  *(_WORD *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 64) = v2 + 1;
  return result;
}
