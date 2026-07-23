/*
 * XREFs of HalpMceInit @ 0x1409A1E4C
 * Callers:
 *     HalpInitializeMce @ 0x1409A1D4C (HalpInitializeMce.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402695B0 (KeQueryActiveProcessorCountEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14029C6E0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14029C840 (KeSetSystemGroupAffinityThread.c)
 *     HalpHvInitMcaPcrContext @ 0x1403C5920 (HalpHvInitMcaPcrContext.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x1404C22D0 (HalpHvInitMcaStatusMsrCache.c)
 *     HalpHvSetMachineCheckHandlerState @ 0x1404C2E20 (HalpHvSetMachineCheckHandlerState.c)
 *     HalpMceInitProcessor @ 0x1409A1F7C (HalpMceInitProcessor.c)
 */

void __fastcall HalpMceInit(__int64 a1)
{
  ULONG v2; // edi
  ULONG ActiveProcessorCount; // ebp
  int *v4; // rsi
  unsigned int v5; // edx
  _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 i; // rbx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-48h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( (HalpFeatureBits & 4) == 0 || !*(_BYTE *)(a1 + 42) )
    HalpMcaEnabled = 0;
  if ( !HalpMcaEnabled && (HalpFeatureBits & 8) == 0 )
    HalpMceEnabled = 0;
  v2 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    v4 = KiProcessorIndexToNumberMappingTable;
    do
    {
      v5 = *v4;
      Affinity.Reserved[1] = 0;
      Affinity.Reserved[2] = 0;
      *(_DWORD *)&Affinity.Group = (unsigned __int16)(v5 >> 6);
      Affinity.Mask = 1LL << (v5 & 0x3F);
      if ( v2 )
        p_PreviousAffinity = 0LL;
      else
        p_PreviousAffinity = &PreviousAffinity;
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      HalpHvInitMcaPcrContext();
      for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; i; i = *(_QWORD *)(i + 176) )
        HalpMceInitProcessor(a1, *(_QWORD *)(i + 164));
      ++v2;
      ++v4;
    }
    while ( v2 < ActiveProcessorCount );
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( HalpHvWheaEnlightenedCpuManager )
  {
    if ( HalpMceEnabled )
    {
      HalpHvInitMcaStatusMsrCache();
      HalpHvSetMachineCheckHandlerState();
    }
  }
}
