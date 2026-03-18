/*
 * XREFs of _NtGdiEngComputeGlyphSet@12 @ 0x217A62
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     _EngComputeGlyphSet@12 @ 0xDFC3C (_EngComputeGlyphSet@12.c)
 *     ?WriteFD_GLYPHSET@@YGHPAU_FD_GLYPHSET@@0K@Z @ 0xE0034 (-WriteFD_GLYPHSET@@YGHPAU_FD_GLYPHSET@@0K@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z @ 0x1F40D8 (-_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z.c)
 */

char *__userpurge NtGdiEngComputeGlyphSet@<eax>(
        struct _FD_GLYPHSET *a1@<ebx>,
        INT nCodePage,
        INT nFirstChar,
        INT cChars)
{
  char *v4; // edi
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  UMPDOBJ *v8; // esi
  FD_GLYPHSET *v9; // eax
  FD_GLYPHSET *v10; // ebx
  char *cjThis; // eax
  char *v12; // eax
  unsigned int v15; // [esp+0h] [ebp-8h]
  struct _FD_GLYPHSET *cCharsa; // [esp+18h] [ebp+10h]

  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 57);
    v9 = EngComputeGlyphSet(nCodePage, nFirstChar, cChars);
    v10 = v9;
    if ( v9 )
    {
      cjThis = (char *)v9->cjThis;
      cCharsa = (struct _FD_GLYPHSET *)cjThis;
      if ( cjThis )
      {
        v12 = UMPDOBJ::_AllocUserMem(v8, cjThis, 0);
        v4 = v12;
        if ( v12 )
          v4 = WriteFD_GLYPHSET(v10, v12, cCharsa, a1, v15) != 0 ? v12 : 0;
      }
      EngFreeMem(v10);
    }
    if ( v8 )
      --*((_DWORD *)v8 + 57);
  }
  return v4;
}
