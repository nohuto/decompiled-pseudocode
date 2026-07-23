/*
 * XREFs of HalpSetPlatformFlags @ 0x140A66198
 * Callers:
 *     HalpSetupAcpiPhase0 @ 0x140A64D20 (HalpSetupAcpiPhase0.c)
 * Callees:
 *     strstr @ 0x1403D19F0 (strstr.c)
 */

void __fastcall HalpSetPlatformFlags(__int64 a1, __int64 a2)
{
  const char *v3; // rcx
  __int16 v4; // ax

  if ( (!a2 || (v3 = *(const char **)(a2 + 216)) == 0LL || !strstr(v3, "FORCELEGACYPLATFORM"))
    && *(_BYTE *)(a1 + 8) >= 5u )
  {
    if ( (*(_DWORD *)(a1 + 112) & 0x100000) != 0 )
      HalpPlatformFlags &= ~1u;
    v4 = *(_WORD *)(a1 + 109);
    if ( (v4 & 2) == 0 )
    {
      HalpPlatformFlags &= ~2u;
      v4 = *(_WORD *)(a1 + 109);
    }
    if ( (v4 & 0x20) != 0 )
      HalpPlatformFlags &= ~4u;
    off_140C00860[0] = (__int64 (__fastcall *)())HalpAcpiAoacCapable;
    if ( (*(_DWORD *)(a1 + 112) & 0x200000) != 0 )
      HalpPlatformFlags |= 8u;
  }
}
