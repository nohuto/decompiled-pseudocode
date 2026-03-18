/*
 * XREFs of HalpProcessorResumeFromIdle @ 0x14032A980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

unsigned __int64 HalpProcessorResumeFromIdle()
{
  unsigned __int64 result; // rax

  result = (unsigned int)HalpPmuInUse;
  if ( HalpPmuInUse )
  {
    result = (unsigned int)HalpPmuInUse;
    if ( (HalpPmuInUse & 1) == 0 )
    {
      result = *((_QWORD *)HalpProfileInterface[0] + 9);
      if ( result )
        return ((__int64 (*)(void))result)();
    }
  }
  return result;
}
