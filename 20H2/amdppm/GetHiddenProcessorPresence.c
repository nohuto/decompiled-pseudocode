/*
 * XREFs of GetHiddenProcessorPresence @ 0x1C0022374
 * Callers:
 *     ProcLibGlobalInit @ 0x1C003778C (ProcLibGlobalInit.c)
 * Callees:
 *     <none>
 */

__int64 GetHiddenProcessorPresence()
{
  unsigned int v0; // ebx
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 0;
  v0 = 1;
  if ( (int)HvlQueryStartedProcessors(&v3, 0LL) >= 0 && (int)HvlQueryActiveProcessors(&v2, 0LL) >= 0 && v3 > v2 )
    return 2;
  return v0;
}
