/*
 * XREFs of ?IsUnspecifiedFrequency@DMMVIDEOSIGNALMODE@@QEBA_NXZ @ 0x1C000B238
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1C0136B18 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C0136DDC (BmlCompareTargetModesWithConstraint.c)
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDEOSIGNALMODE::IsUnspecifiedFrequency(DMMVIDEOSIGNALMODE *this)
{
  return *((_DWORD *)this + 5) == -2 && *((_DWORD *)this + 6) == -2;
}
