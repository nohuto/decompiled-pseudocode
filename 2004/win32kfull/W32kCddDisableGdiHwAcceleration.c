/*
 * XREFs of W32kCddDisableGdiHwAcceleration @ 0x1C0107170
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C01071B0 (GetAppCompatFlags2QuadWord.c)
 */

__int64 W32kCddDisableGdiHwAcceleration()
{
  unsigned __int64 AppCompatFlags2QuadWord; // rbx

  AppCompatFlags2QuadWord = 0LL;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    AppCompatFlags2QuadWord = GetAppCompatFlags2QuadWord(0LL);
  return (AppCompatFlags2QuadWord >> 34) & 1;
}
