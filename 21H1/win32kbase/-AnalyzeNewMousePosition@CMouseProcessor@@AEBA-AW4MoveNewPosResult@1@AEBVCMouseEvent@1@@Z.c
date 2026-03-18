/*
 * XREFs of ?AnalyzeNewMousePosition@CMouseProcessor@@AEBA?AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z @ 0x1C003CD30
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0066094 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMouseProcessor::AnalyzeNewMousePosition(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // r8
  unsigned int v4; // ecx

  v2 = *(_DWORD **)(a2 + 8);
  if ( (v2[28] & 0x1000) != 0 )
    return 2LL;
  v4 = 0;
  if ( a1[876] == v2[13] && a1[877] == v2[14] )
  {
    if ( a1[878] != v2[15] || a1[879] != v2[16] )
      return 1;
  }
  else
  {
    return 2;
  }
  return v4;
}
