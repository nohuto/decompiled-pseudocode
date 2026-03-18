/*
 * XREFs of ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C00913B8
 * Callers:
 *     DrawFrameControl @ 0x1C0036FB0 (DrawFrameControl.c)
 *     ?DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C003879C (-DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 * Callees:
 *     GreSetTextColor @ 0x1C0092300 (GreSetTextColor.c)
 *     GreExtTextOutWInternal @ 0x1C009A950 (GreExtTextOutWInternal.c)
 */

__int64 __fastcall DrawIt(HDC a1, struct tagRECT *a2, __int16 a3, __int16 a4)
{
  int v5; // r12d
  __int64 v7; // [rsp+98h] [rbp+20h] BYREF

  LOWORD(v7) = a4;
  v5 = a3 & 0x100;
  GreSetTextColor(a1);
  GreExtTextOutWInternal(a1, 0LL, (__int64)&v7, 1, 0LL, 0LL, 0);
  if ( v5 )
  {
    GreSetTextColor(a1);
    GreExtTextOutWInternal(a1, 0LL, (__int64)&v7, 1, 0LL, 0LL, 0);
  }
  GreSetTextColor(a1);
  return 1LL;
}
