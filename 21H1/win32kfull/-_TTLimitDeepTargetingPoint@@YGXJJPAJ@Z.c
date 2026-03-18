/*
 * XREFs of ?_TTLimitDeepTargetingPoint@@YGXJJPAJ@Z @ 0x1B8833
 * Callers:
 *     _TouchTargetingRankForRectDeep@32 @ 0x1B944B (_TouchTargetingRankForRectDeep@32.c)
 * Callees:
 *     __TTHmToPixels@8 @ 0x1B97AF (__TTHmToPixels@8.c)
 *     __TTPixelsToHm@8 @ 0x1B97F4 (__TTPixelsToHm@8.c)
 */

void __userpurge _TTLimitDeepTargetingPoint(int a1@<edx>, int a2@<ecx>, int *a3, int a4, int *a5)
{
  __int64 v8; // rax
  int v9; // eax
  int v10; // esi
  int v11; // [esp+14h] [ebp+8h]

  v8 = a2 - *a3;
  v11 = *a3;
  if ( _TTPixelsToHm((HIDWORD(v8) ^ v8) - HIDWORD(v8), a1) > 200 )
  {
    v9 = _TTHmToPixels(200, a1);
    if ( a2 <= v11 )
      v10 = v9 + a2;
    else
      v10 = a2 - v9;
    *a3 = v10;
  }
}
