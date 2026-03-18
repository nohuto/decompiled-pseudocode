/*
 * XREFs of _MNCreateAnimationBitmap@12 @ 0x1844E8
 * Callers:
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 */

int __fastcall MNCreateAnimationBitmap(HDC a1, int a2, int a3)
{
  int result; // eax
  int v5; // esi

  result = GreCreateCompatibleBitmapInternal(*(HDC *)(_gpDispInfo + 28), a2, a3, 0, 0, 0);
  v5 = result;
  if ( result )
  {
    if ( a1 == _gMenuState[0] )
      GreSetBitmapOwner(result, 0);
    GreSelectBitmap(*((_DWORD *)a1 + 24), v5);
    *((_DWORD *)a1 + 23) = v5;
    return 1;
  }
  return result;
}
