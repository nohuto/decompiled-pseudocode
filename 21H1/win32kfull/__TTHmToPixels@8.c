/*
 * XREFs of __TTHmToPixels@8 @ 0x1B97AF
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YGXPAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x17A5BF (-xxxPointerInsideNCTargeting@@YGXPAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K.c)
 *     ?_TTAdjustContactSide@@YGXJPAJ0J@Z @ 0x1B8521 (-_TTAdjustContactSide@@YGXJPAJ0J@Z.c)
 *     ?_TTLimitDeepTargetingPoint@@YGXJJPAJ@Z @ 0x1B8833 (-_TTLimitDeepTargetingPoint@@YGXJJPAJ@Z.c)
 *     _TouchTargetingDownrank@8 @ 0x1B8E01 (_TouchTargetingDownrank@8.c)
 * Callees:
 *     _LongLongToLong@12 @ 0xC28DA (_LongLongToLong@12.c)
 *     __alldiv @ 0xF91D3 (__alldiv.c)
 */

int __fastcall _TTHmToPixels(int a1, int a2)
{
  int v2; // ebx
  LONG *v4; // [esp+0h] [ebp-10h]

  v2 = 0x7FFFFFFF;
  if ( LongLongToLong(1000LL * a1 / a2, v4) >= 0 )
    return 0;
  return v2;
}
