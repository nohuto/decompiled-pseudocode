/*
 * XREFs of HalpArtInitialize @ 0x1404D5EC0
 * Callers:
 *     <none>
 * Callees:
 *     HalUpdateTimerCapabilities @ 0x1403A1A30 (HalUpdateTimerCapabilities.c)
 *     HalpArtAvailable @ 0x1403AD1CC (HalpArtAvailable.c)
 */

__int64 __fastcall HalpArtInitialize(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rax
  int v3; // edi
  int v4; // ebx
  char v5; // al
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  v8 = 0;
  v4 = ~(CurrentPrcb->CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore - 1);
  v5 = HalpArtAvailable(&v7, &v8);
  if ( (v4 & a1[2]) == (v4 & v8) && *a1 == (_DWORD)v7 && a1[1] == HIDWORD(v7) )
  {
    if ( !v5 )
      v3 = 24576;
    HalUpdateTimerCapabilities((__int64)a1, v3, 0);
  }
  else
  {
    HalpTimerAuxiliaryClockEnabled = 0;
  }
  return 0LL;
}
