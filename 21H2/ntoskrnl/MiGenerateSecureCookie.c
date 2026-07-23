/*
 * XREFs of MiGenerateSecureCookie @ 0x1407D33D8
 * Callers:
 *     MiInitializeVadSecuring @ 0x140A93310 (MiInitializeVadSecuring.c)
 * Callees:
 *     ExGenRandom @ 0x1402D1110 (ExGenRandom.c)
 */

__int64 MiGenerateSecureCookie()
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = CurrentPrcb->KeSystemCalls ^ CurrentPrcb->InterruptTime ^ MEMORY[0xFFFFF78000000018] ^ __rdtsc() ^ ((unsigned __int64)MEMORY[0xFFFFF78000000014] << 32);
  v2 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  v3 = (v2 | (unsigned int)ExGenRandom(0)) ^ v1;
  if ( !v3 )
    return 1LL;
  return v3;
}
