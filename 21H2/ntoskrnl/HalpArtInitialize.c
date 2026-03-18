/*
 * XREFs of HalpArtInitialize @ 0x140522FB0
 * Callers:
 *     <none>
 * Callees:
 *     HalUpdateTimerCapabilities @ 0x1403B3120 (HalUpdateTimerCapabilities.c)
 *     HalpArtAvailable @ 0x1403BE95C (HalpArtAvailable.c)
 */

__int64 __fastcall HalpArtInitialize(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rax
  int v3; // edi
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v5 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = ~(CurrentPrcb->CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore - 1);
  if ( HalpArtAvailable(&v5, &v6) && (v3 & a1[2]) == (v3 & v6) && *a1 == (_DWORD)v5 && a1[1] == HIDWORD(v5) )
    HalUpdateTimerCapabilities((__int64)a1, 0, 0);
  else
    HalpTimerAuxiliaryClockEnabled = 0;
  return 0LL;
}
