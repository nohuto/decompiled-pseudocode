/*
 * XREFs of ?IsForegroundShellFrameQueueAccessible@@YGHPBUtagTHREADINFO@@@Z @ 0xA49E0
 * Callers:
 *     ?xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z @ 0x6A7C0 (-xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YGHHPAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0xA4996 (-IsGpqForegroundAccessibleExplicit@@YGHHPAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsForegroundShellFrameQueueAccessible(_DWORD *this)
{
  BOOL result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax

  result = 0;
  if ( IsImmersiveAppRestricted(this[58]) )
  {
    v3 = this[59];
    if ( _gpqForeground == v3 && (*(_DWORD *)(v3 + 284) & 0x2000000) != 0 )
    {
      v4 = *(_DWORD *)(_gpqForeground + 60);
      v5 = v4 ? *(_DWORD *)(v4 + 8) : 0;
      if ( v5 && *(_DWORD *)(v5 + 232) == this[58] )
        return 1;
    }
  }
  return result;
}
