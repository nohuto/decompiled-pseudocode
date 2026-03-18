/*
 * XREFs of MNCreateAnimationBitmap @ 0x1C022241C
 * Callers:
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0018AAC (GreCreateCompatibleBitmapInternal.c)
 */

__int64 __fastcall MNCreateAnimationBitmap(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v5; // rbx

  result = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 56LL), a2, a3, 0, 0LL, 0LL);
  v5 = result;
  if ( result )
  {
    if ( a1 == gMenuState[0] )
      GreSetBitmapOwner(result, 0LL);
    GreSelectBitmap(*(_QWORD *)(a1 + 136), v5);
    result = 1LL;
    *(_QWORD *)(a1 + 128) = v5;
  }
  return result;
}
