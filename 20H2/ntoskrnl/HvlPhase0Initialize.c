/*
 * XREFs of HvlPhase0Initialize @ 0x14078C780
 * Callers:
 *     KiInitializeKernel @ 0x14099FB00 (KiInitializeKernel.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140245E60 (HalSystemVectorDispatchEntry.c)
 *     HviIsAnyHypervisorPresent @ 0x1403A5150 (HviIsAnyHypervisorPresent.c)
 *     HvlpTryConfigureInterface @ 0x1403A881C (HvlpTryConfigureInterface.c)
 *     HvlQueryConnection @ 0x1403A8A50 (HvlQueryConnection.c)
 *     strstr @ 0x1403D0F10 (strstr.c)
 *     HvlpInitializeBootProcessor @ 0x1404F154C (HvlpInitializeBootProcessor.c)
 *     HvlpSetupBootProcessorEarlyHypercallPages @ 0x1404F2408 (HvlpSetupBootProcessorEarlyHypercallPages.c)
 *     HvlpDetermineEnlightenments @ 0x1404F8824 (HvlpDetermineEnlightenments.c)
 *     HvlpPhase0Enlightenments @ 0x1404F8CF4 (HvlpPhase0Enlightenments.c)
 *     HviGetHypervisorVersion @ 0x1405BD5F0 (HviGetHypervisorVersion.c)
 */

__int64 __fastcall HvlPhase0Initialize(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx

  HvlpFlags = (HviIsAnyHypervisorPresent() ? 0x1000 : 0) | HvlpFlags & 0xFFFFEFFF;
  if ( (int)HvlQueryConnection(0LL) >= 0 || (result = HvlpTryConfigureInterface(a1, v2, v3, v4), (int)result >= 0) )
  {
    result = HvlpSetupBootProcessorEarlyHypercallPages(a1);
    if ( (int)result >= 0 )
    {
      HvlHypervisorConnected = 1;
      HvlpDetermineEnlightenments(v7, v6, v8, v9);
      result = HalSystemVectorDispatchEntry();
      if ( (int)result >= 0 )
      {
        if ( (HvlpFlags & 2) != 0 && strstr(*(const char **)(KeLoaderBlock_0 + 216), "HYPERVISORDBG") )
          HvlpRootFlags |= 8u;
        if ( (HvlpFlags & 2) != 0 && (*(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3460LL) & 0x2000) != 0 )
          HvlpRootFlags |= 0x800u;
        result = HvlpPhase0Enlightenments(a1);
        if ( (int)result >= 0 )
        {
          result = HvlpInitializeBootProcessor(a1);
          v10 = result;
          if ( (int)result >= 0 )
          {
            HviGetHypervisorVersion(HvlpHypervisorVersion);
            return v10;
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
