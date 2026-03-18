/*
 * XREFs of ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0289310
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C00EE440 (NtGdiSetPUMPDOBJ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00EF148 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C013FB68 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     NtGdiStartPage @ 0x1C013FD90 (NtGdiStartPage.c)
 *     ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C01455D0 (-GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     NtGdiEngCreateBitmap @ 0x1C014F780 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngCreateDeviceSurface @ 0x1C014F8C0 (NtGdiEngCreateDeviceSurface.c)
 *     NtGdiEndPage @ 0x1C027DBC0 (NtGdiEndPage.c)
 *     ?bIsProcessLocalSystem@@YAHXZ @ 0x1C02893B8 (-bIsProcessLocalSystem@@YAHXZ.c)
 *     NtGdiSetDeviceGammaRamp @ 0x1C02B71B0 (NtGdiSetDeviceGammaRamp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bIsProcessLocalSystem(struct _EPROCESS *a1)
{
  unsigned int v1; // esi
  PACCESS_TOKEN v2; // rdi
  NTSTATUS v3; // ebx
  PVOID TokenInformation; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  TokenInformation = 0LL;
  v2 = PsReferencePrimaryToken(a1);
  v3 = SeQueryInformationToken(v2, TokenUser, &TokenInformation);
  PsDereferencePrimaryToken(v2);
  if ( v3 >= 0 )
  {
    v1 = RtlEqualSid(SeExports->SeLocalSystemSid, *(PSID *)TokenInformation);
    ExFreePoolWithTag(TokenInformation, 0);
  }
  return v1;
}
