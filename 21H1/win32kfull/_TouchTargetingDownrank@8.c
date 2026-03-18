/*
 * XREFs of _TouchTargetingDownrank@8 @ 0x1B8E01
 * Callers:
 *     ?_TTWindowPenalty@@YGIPAUtagWND@@PAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x17A562 (-_TTWindowPenalty@@YGIPAUtagWND@@PAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 * Callees:
 *     ?_TTRank@@YGGJ@Z @ 0x1B887D (-_TTRank@@YGGJ@Z.c)
 *     __TTHmToPixels@8 @ 0x1B97AF (__TTHmToPixels@8.c)
 */

int __fastcall TouchTargetingDownrank(int a1, int a2)
{
  int v2; // eax
  int v3; // ecx
  int result; // eax
  void *v5; // eax

  v2 = *(_DWORD *)(a1 + 184);
  v3 = *(_DWORD *)(a1 + 188);
  if ( a2 == 1 )
  {
    if ( v2 >= v3 )
      v2 = v3;
    result = _TTHmToPixels(600, v2);
    if ( result <= 40 )
      return 40;
  }
  else
  {
    if ( v2 >= v3 )
      v2 = v3;
    v5 = (void *)_TTHmToPixels(200, v2);
    return (unsigned __int16)_TTRank(v5);
  }
  return result;
}
