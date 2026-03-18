/*
 * XREFs of _W32kCddDisableGdiHwAcceleration@0 @ 0xA147E
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _GetAppCompatFlags2QuadWord@4 @ 0xA14BE (_GetAppCompatFlags2QuadWord@4.c)
 */

int __stdcall W32kCddDisableGdiHwAcceleration()
{
  __int64 v0; // rdi
  PKTHREAD CurrentThread; // eax
  char v2; // dl

  v0 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( W32GetThreadWin32Thread(CurrentThread) )
  {
    GetAppCompatFlags2QuadWord(0);
    LOBYTE(v0) = v2;
  }
  LODWORD(v0) = v0 & 4;
  if ( v0 )
    HIDWORD(v0) = 1;
  return HIDWORD(v0);
}
