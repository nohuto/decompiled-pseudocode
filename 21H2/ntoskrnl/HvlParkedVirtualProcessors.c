/*
 * XREFs of HvlParkedVirtualProcessors @ 0x1404F7ED0
 * Callers:
 *     PpmParkReportMask @ 0x140235E70 (PpmParkReportMask.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x1402CCE60 (KeIsEmptyAffinityEx.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x1403905DC (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvcallInitiateHypercall @ 0x140390610 (HvcallInitiateHypercall.c)
 */

char HvlParkedVirtualProcessors()
{
  char result; // al
  __int64 v1; // rbx
  unsigned __int64 v2; // rcx
  _BYTE *i; // rdx
  unsigned __int64 v4; // rcx

  result = HvlpEnlightenments;
  if ( (HvlpEnlightenments & 8) != 0 )
  {
    result = HvlpUseExtendedProcessorSetHypercalls();
    v1 = 0LL;
    if ( !result )
    {
      if ( !(unsigned int)KeIsEmptyAffinityEx(PpmPerfCoreParkingMask) )
      {
        v2 = qword_140C11478;
        if ( !HvlpVirtualProcessorsIdentityMapped )
        {
          for ( i = &unk_140D006C3; ; i += 4 )
          {
            if ( (v2 & 1) != 0 )
              v1 |= 1LL << *(i - 2);
            v4 = v2 >> 1;
            if ( !v4 )
              break;
            if ( (v4 & 1) != 0 )
              v1 |= 1LL << *i;
            v2 = v4 >> 1;
            if ( !v2 )
              break;
          }
        }
      }
      return HvcallInitiateHypercall(65545);
    }
  }
  return result;
}
