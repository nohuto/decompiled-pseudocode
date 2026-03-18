/*
 * XREFs of ?IsSetWindowShowStateMaximize@@YGHE@Z @ 0x1A0637
 * Callers:
 *     ?xxxSetWindowShowState@@YG_NPAUtagWND@@EPAUtagRECT@@@Z @ 0x1A0652 (-xxxSetWindowShowState@@YG_NPAUtagWND@@EPAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall IsSetWindowShowStateMaximize(char a1)
{
  return a1 == 15 || a1 == 17 || a1 == 19;
}
