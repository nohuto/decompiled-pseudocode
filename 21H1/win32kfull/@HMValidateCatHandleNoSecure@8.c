/*
 * XREFs of @HMValidateCatHandleNoSecure@8 @ 0x1B6F10
 * Callers:
 *     _xxxDDETrackGetMessageHook@4 @ 0x180099 (_xxxDDETrackGetMessageHook@4.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

int __fastcall HMValidateCatHandleNoSecure(unsigned int a1)
{
  int v2; // ebx
  PKTHREAD CurrentThread; // eax
  int v4; // edi
  int v5; // eax
  unsigned int v6; // esi

  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  W32GetThreadWin32Thread(CurrentThread);
  if ( (unsigned int)(unsigned __int16)a1 < *(_DWORD *)(_gpsi + 4) )
  {
    v4 = _gSharedInfo[1] + (unsigned __int16)a1 * _gSharedInfo[2];
    v5 = HMPkheFromPhe(v4);
    v6 = HIWORD(a1);
    if ( ((_WORD)v6 == *(_WORD *)(v4 + 14) || !(_WORD)v6 || (_WORD)v6 == 0xFFFF) && *(_BYTE *)(v4 + 12) == 1 )
      return *(_DWORD *)v5;
  }
  return v2;
}
