/*
 * XREFs of ?CalcDesktopId@@YGKPAUtagDESKTOP@@@Z @ 0xA9DD4
 * Callers:
 *     ?xxxCreateDesktopEx2@@YGJPAUtagWINDOWSTATION@@PAU_ACCESS_STATE@@DPAU_UNICODE_STRING@@KPAPAX@Z @ 0xA9B34 (-xxxCreateDesktopEx2@@YGJPAUtagWINDOWSTATION@@PAU_ACCESS_STATE@@DPAU_UNICODE_STRING@@KPAPAX@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CalcDesktopId(int a1)
{
  int v1; // edx

  v1 = gdwDesktopId + 1;
  gdwDesktopId = v1;
  if ( v1 == 0xFFFF )
  {
    LOWORD(v1) = 1;
    gdwDesktopId = 1;
  }
  return (unsigned __int16)v1 | ((a1 ^ gCookie) << 16);
}
