/*
 * XREFs of ?bIsProcessLocalSystem@@YGHPAU_EPROCESS@@@Z @ 0x1E7C30
 * Callers:
 *     ?GreDoBanding@@YGHPAUHDC__@@HPAU_POINTL@@PAUtagSIZE@@@Z @ 0x1D7212 (-GreDoBanding@@YGHPAUHDC__@@HPAU_POINTL@@PAUtagSIZE@@@Z.c)
 *     ?GreStartDocInternal@@YGHPAUHDC__@@PAU_DOCINFOW@@PAHH@Z @ 0x1D7909 (-GreStartDocInternal@@YGHPAUHDC__@@PAU_DOCINFOW@@PAHH@Z.c)
 *     _NtGdiEndPage@4 @ 0x1D93FF (_NtGdiEndPage@4.c)
 *     _NtGdiStartPage@4 @ 0x1D9D27 (_NtGdiStartPage@4.c)
 *     ?bIsProcessLocalSystem@@YGHXZ @ 0x1E7C8E (-bIsProcessLocalSystem@@YGHXZ.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     _NtGdiEngCreateBitmap@24 @ 0x217CD3 (_NtGdiEngCreateBitmap@24.c)
 *     _NtGdiEngCreateDeviceSurface@16 @ 0x217F3F (_NtGdiEngCreateDeviceSurface@16.c)
 *     _NtGdiSetPUMPDOBJ@16 @ 0x21AE6D (_NtGdiSetPUMPDOBJ@16.c)
 *     _NtGdiSetDeviceGammaRamp@8 @ 0x21C706 (_NtGdiSetDeviceGammaRamp@8.c)
 * Callees:
 *     <none>
 */

int __thiscall bIsProcessLocalSystem(struct _KPROCESS *this)
{
  int v1; // ebx
  PACCESS_TOKEN v2; // edi
  NTSTATUS v3; // esi
  PVOID TokenInformation; // [esp+Ch] [ebp-4h] BYREF

  v1 = 0;
  TokenInformation = 0;
  v2 = PsReferencePrimaryToken(this);
  v3 = SeQueryInformationToken(v2, TokenUser, &TokenInformation);
  PsDereferencePrimaryToken(v2);
  if ( v3 >= 0 )
  {
    v1 = RtlEqualSid(_SeExports->SeLocalSystemSid, *(PSID *)TokenInformation);
    ExFreePoolWithTag(TokenInformation, 0);
  }
  return v1;
}
