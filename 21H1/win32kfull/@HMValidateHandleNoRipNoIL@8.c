/*
 * XREFs of @HMValidateHandleNoRipNoIL@8 @ 0x1B6F70
 * Callers:
 *     _xxxDDETrackGetMessageHook@4 @ 0x180099 (_xxxDDETrackGetMessageHook@4.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

int __fastcall HMValidateHandleNoRipNoIL(int a1)
{
  int v2; // edi
  PKTHREAD CurrentThread; // eax
  int v4; // esi
  int *v5; // eax
  PKTHREAD v6; // eax

  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  W32GetThreadWin32Thread(CurrentThread);
  if ( (unsigned int)(unsigned __int16)a1 < *(_DWORD *)(_gpsi + 4) )
  {
    v4 = _gSharedInfo[1] + (unsigned __int16)a1 * _gSharedInfo[2];
    v5 = (int *)HMPkheFromPhe(v4);
    if ( (HIWORD(a1) == *(_WORD *)(v4 + 14) || !HIWORD(a1) || HIWORD(a1) == 0xFFFF)
      && (*(_BYTE *)(v4 + 13) & 1) == 0
      && *(_BYTE *)(v4 + 12) == 11 )
    {
      v2 = *v5;
    }
  }
  v6 = KeGetCurrentThread();
  if ( (*(_DWORD *)(W32GetThreadWin32Thread(v6) + 264) & 0x20000000) != 0 )
    return ValidateHandleSecure(a1, 1) != 0 ? v2 : 0;
  return v2;
}
