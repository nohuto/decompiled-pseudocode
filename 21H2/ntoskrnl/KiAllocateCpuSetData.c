/*
 * XREFs of KiAllocateCpuSetData @ 0x140A41960
 * Callers:
 *     KeStartAllProcessors @ 0x140A4E568 (KeStartAllProcessors.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     KiCreateCpuSetForProcessor @ 0x14099F1FC (KiCreateCpuSetForProcessor.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall KiAllocateCpuSetData(unsigned int a1)
{
  __int64 result; // rax
  char *v3; // rdi
  __int64 v4; // rcx

  if ( KiMaximumGroups != 1 )
    a1 = (unsigned __int16)KiMaximumGroups << 6;
  result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 32 * a1, 0x2020654Bu);
  v3 = (char *)result;
  if ( result )
  {
    memset((void *)result, 0, 32 * a1);
    KiCpuSetAffinities = v3;
    v4 = 8LL * a1;
    KiCpuSetAffinitiesShadow = &v3[v4];
    KiCpuSetData = (__int64)&v3[v4 + v4];
    LODWORD(KiCpuSetAffinitySize) = 8 * a1;
    KiCreateCpuSetForProcessor(KiProcessorBlock[0]);
    return 1LL;
  }
  return result;
}
