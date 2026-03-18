/*
 * XREFs of HvlPhase0Initialize @ 0x140824AA0
 * Callers:
 *     KiInitializeKernel @ 0x140A580F0 (KiInitializeKernel.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140203DC0 (HalSystemVectorDispatchEntry.c)
 *     HvlQueryConnection @ 0x1403AC4C0 (HvlQueryConnection.c)
 *     HvlpTryConfigureInterface @ 0x1403BF6EC (HvlpTryConfigureInterface.c)
 *     HviIsAnyHypervisorPresent @ 0x1403C03A0 (HviIsAnyHypervisorPresent.c)
 *     strstr @ 0x1403E0C40 (strstr.c)
 *     HvlpInitializeBootProcessor @ 0x140544754 (HvlpInitializeBootProcessor.c)
 *     HvlpSetupBootProcessorEarlyHypercallPages @ 0x14054558C (HvlpSetupBootProcessorEarlyHypercallPages.c)
 *     HvlpDetermineEnlightenments @ 0x14054C1A4 (HvlpDetermineEnlightenments.c)
 *     HvlpPhase0Enlightenments @ 0x14054C654 (HvlpPhase0Enlightenments.c)
 *     HviGetHypervisorVersion @ 0x140647BBC (HviGetHypervisorVersion.c)
 */

__int64 __fastcall HvlPhase0Initialize(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx

  HvlpFlags = (HviIsAnyHypervisorPresent() ? 0x1000 : 0) | HvlpFlags & 0xFFFFEFFF;
  if ( (int)HvlQueryConnection(0LL) >= 0 || (result = HvlpTryConfigureInterface(a1), (int)result >= 0) )
  {
    result = HvlpSetupBootProcessorEarlyHypercallPages(a1);
    if ( (int)result >= 0 )
    {
      HvlHypervisorConnected = 1;
      HvlpDetermineEnlightenments();
      result = HalSystemVectorDispatchEntry();
      if ( (int)result >= 0 )
      {
        if ( (HvlpFlags & 2) != 0 && strstr(*(const char **)(KeLoaderBlock_0 + 216), "HYPERVISORDBG") )
          HvlpRootFlags |= 8u;
        if ( (HvlpFlags & 2) != 0 && (*(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3492LL) & 0x2000) != 0 )
          HvlpRootFlags |= 0x800u;
        result = HvlpPhase0Enlightenments(a1);
        if ( (int)result >= 0 )
        {
          result = HvlpInitializeBootProcessor(a1);
          v3 = result;
          if ( (int)result >= 0 )
          {
            HviGetHypervisorVersion(HvlpHypervisorVersion);
            return v3;
          }
        }
      }
    }
  }
  else if ( (_DWORD)result == -1070264320 )
  {
    return 0LL;
  }
  return result;
}
