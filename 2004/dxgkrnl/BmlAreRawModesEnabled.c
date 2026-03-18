/*
 * XREFs of BmlAreRawModesEnabled @ 0x1C0137E08
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1C0137CC8 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C02EBA28 (BmlGetRecommendedContentSizeForPath.c)
 *     _BmlGetPathModeListForPath @ 0x1C02EC4D0 (_BmlGetPathModeListForPath.c)
 * Callees:
 *     <none>
 */

bool __fastcall BmlAreRawModesEnabled(__int64 a1, unsigned int a2)
{
  return (*(_DWORD *)(a1 + 4) & 0x20000) != 0
      || (*(_DWORD *)(a1 + 8) & 4) != 0
      || (**(_QWORD **)(104LL * a2 + a1 + 16) & 0x80000000000000LL) != 0;
}
