/*
 * XREFs of ?IsUnspecifiedFrequency@DMMVIDEOSIGNALMODE@@QEBA_NXZ @ 0x1C000B588
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1C013B368 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C013B62C (BmlCompareTargetModesWithConstraint.c)
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDEOSIGNALMODE::IsUnspecifiedFrequency(DMMVIDEOSIGNALMODE *this)
{
  return *((_DWORD *)this + 5) == -2 && *((_DWORD *)this + 6) == -2;
}
