/*
 * XREFs of ?IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z @ 0x1C001E50C
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1C01B5890 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C01B5B6C (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareTargetModeWithVirtualRefreshRate @ 0x1C01BC66C (BmlCompareTargetModeWithVirtualRefreshRate.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsUnspecifiedFrequency(const struct _D3DDDI_RATIONAL *a1)
{
  return *a1 == 0xFFFFFFFEFFFFFFFEuLL || a1->Numerator == -1 && a1->Denominator == -1;
}
