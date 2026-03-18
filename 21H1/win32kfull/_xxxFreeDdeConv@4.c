/*
 * XREFs of _xxxFreeDdeConv@4 @ 0x180896
 * Callers:
 *     ?xxxCleanupDdeConv@@YGXPAUtagWND@@@Z @ 0x17F222 (-xxxCleanupDdeConv@@YGXPAUtagWND@@@Z.c)
 *     _xxxCleanupAndFreeDdeConv@4 @ 0x180056 (_xxxCleanupAndFreeDdeConv@4.c)
 *     _xxxDDETrackGetMessageHook@4 @ 0x180099 (_xxxDDETrackGetMessageHook@4.c)
 *     _xxxDDETrackWindowDying@8 @ 0x180709 (_xxxDDETrackWindowDying@8.c)
 * Callees:
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     ?PopState@@YGXPAUtagDDECONV@@@Z @ 0x17EB1A (-PopState@@YGXPAUtagDDECONV@@@Z.c)
 *     ?UnlinkConv@@YGPAUtagDDECONV@@PAU1@@Z @ 0x17ECA6 (-UnlinkConv@@YGPAUtagDDECONV@@PAU1@@Z.c)
 */

_DWORD *__thiscall xxxFreeDdeConv(_DWORD *this)
{
  _DWORD *v1; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  TOKEN_TYPE v9; // eax
  void *v10; // ecx
  _DWORD v12[3]; // [esp+Ch] [ebp-Ch] BYREF

  v1 = this;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q((int)this, 4, 0xEu, 56, (int)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids, (char)this);
  if ( v1 )
  {
    if ( (v1[10] & 2) != 0 || (*(_BYTE *)(_HMPheFromObject(v1[6]) + 13) & 1) != 0 )
      goto LABEL_10;
    v12[2] = 0;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v12[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v12;
    v12[1] = v1;
    HMLockObject(v1);
    v4 = (_DWORD *)v1[5];
    v5 = v4 ? *v4 : 0;
    _PostMessage(v1[6], 993, v5, 0);
    v1 = (_DWORD *)ThreadUnlock1();
    if ( v1 )
    {
LABEL_10:
      v6 = v1[4];
      if ( v6 && (*(_BYTE *)(v1[2] + 264) & 1) != 0 )
        *(_DWORD *)(v6 + 40) |= 2u;
      UnlinkConv(v1);
      v7 = v1[11];
      if ( v7 )
      {
        --*(_WORD *)(v7 + 74);
        v8 = v1[11];
        if ( !*(_WORD *)(v8 + 74) && !*(_WORD *)(v8 + 72) )
        {
          v9 = SeTokenType(*(PACCESS_TOKEN *)(v8 + 24));
          v10 = *(void **)(v1[11] + 24);
          if ( v9 == TokenPrimary || v10 )
            ObfDereferenceObject(v10);
          Win32FreePool(v1[11]);
        }
        v1[11] = 0;
      }
      HMAssignmentUnlock(v1 + 4);
      HMAssignmentUnlock(v1 + 6);
      HMAssignmentUnlock(v1 + 5);
      if ( !HMMarkObjectDestroy(v1) )
        return v1;
      while ( v1[7] )
        PopState(v1);
      HMFreeObject(v1);
    }
  }
  return 0;
}
