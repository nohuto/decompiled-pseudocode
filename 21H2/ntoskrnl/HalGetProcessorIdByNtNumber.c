/*
 * XREFs of HalGetProcessorIdByNtNumber @ 0x1403B4DA0
 * Callers:
 *     HalGetMessageRoutingInfo @ 0x1403AFF80 (HalGetMessageRoutingInfo.c)
 *     HalpInterruptGenerateMessage @ 0x1403D5B40 (HalpInterruptGenerateMessage.c)
 *     KeRegisterProcessorChangeCallback @ 0x140858460 (KeRegisterProcessorChangeCallback.c)
 *     PnprIsProcessorDevice @ 0x140952738 (PnprIsProcessorDevice.c)
 *     HalpInterruptReinitialize @ 0x140A505D4 (HalpInterruptReinitialize.c)
 *     HalpDpStartProcessor @ 0x140A629D4 (HalpDpStartProcessor.c)
 *     PnprQuiesceProcessorDpc @ 0x140A687F0 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x1402949F0 (KeGetProcessorNumberFromIndex.c)
 */

NTSTATUS __fastcall HalGetProcessorIdByNtNumber(ULONG a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  NTSTATUS result; // eax
  int v5; // edx
  ULONG_PTR i; // rcx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp+8h] BYREF

  ProcNumber = 0;
  v3 = HalpInterruptProcessorCount;
  if ( a1 >= (unsigned int)HalpInterruptProcessorCount )
    return -1073741811;
  result = KeGetProcessorNumberFromIndex(a1, &ProcNumber);
  if ( result >= 0 )
  {
    v5 = 0;
    if ( v3 )
    {
      for ( i = HalpInterruptProcessorState + 13;
            !*(_BYTE *)(i - 1)
         || !*(_BYTE *)i
         || *(_WORD *)(i + 3) != ProcNumber.Group
         || *(_BYTE *)(i + 5) != ProcNumber.Number;
            i += 64LL )
      {
        if ( ++v5 >= v3 )
          return -1073741275;
      }
      *a2 = *(_DWORD *)(i - 13);
      return 0;
    }
    else
    {
      return -1073741275;
    }
  }
  return result;
}
