/*
 * XREFs of IsDeallocateSupported @ 0x1C0004618
 * Callers:
 *     FormInquiryBlockLimitsData @ 0x1C00012E8 (FormInquiryBlockLimitsData.c)
 *     ScsiUnmapRequest @ 0x1C0001C54 (ScsiUnmapRequest.c)
 *     FormInquiryBlockProvisioningData @ 0x1C0010760 (FormInquiryBlockProvisioningData.c)
 * Callees:
 *     <none>
 */

char __fastcall IsDeallocateSupported(__int64 a1)
{
  char v1; // dl

  v1 = 1;
  if ( (*(_DWORD *)(a1 + 56) & 1) != 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 1608) + 520LL) & 4) == 0 )
    return 0;
  return v1;
}
