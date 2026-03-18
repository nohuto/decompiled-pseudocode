/*
 * XREFs of ?xxxCleanupDdeConv@@YGXPAUtagWND@@@Z @ 0x17F222
 * Callers:
 *     _xxxDDETrackGetMessageHook@4 @ 0x180099 (_xxxDDETrackGetMessageHook@4.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     ?xxxFreeListFree@@YGXPAUtagFREELIST@@@Z @ 0x17F7F9 (-xxxFreeListFree@@YGXPAUtagFREELIST@@@Z.c)
 *     _xxxFreeDdeConv@4 @ 0x180896 (_xxxFreeDdeConv@4.c)
 */

void __thiscall xxxCleanupDdeConv(void *this)
{
  int i; // esi
  int v3; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  struct tagFREELIST *v6; // [esp+0h] [ebp-18h]
  int v7; // [esp+Ch] [ebp-Ch] BYREF
  int v8; // [esp+10h] [ebp-8h]
  int v9; // [esp+14h] [ebp-4h]

LABEL_1:
  for ( i = _GetProp((int)this, (unsigned __int16)atomDDETrack, 1); i; i = *(_DWORD *)(i + 12) )
  {
    if ( (*(_BYTE *)(i + 40) & 7) == 7 && (*(_BYTE *)(*(_DWORD *)(i + 16) + 40) & 2) != 0 )
    {
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v3 = 0;
      if ( *(_DWORD *)(i + 36) )
      {
        v3 = 1;
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        v7 = *(_DWORD *)(ThreadWin32Thread + 228);
        *(_DWORD *)(ThreadWin32Thread + 228) = &v7;
        v8 = i;
        HMLockObject(i);
        *(_DWORD *)(i + 36) = 0;
        xxxFreeListFree(v6);
      }
      if ( (*(_BYTE *)(_HMPheFromObject(i) + 13) & 1) == 0 )
      {
        *(_DWORD *)(i + 16) = xxxFreeDdeConv(*(_DWORD *)(i + 16));
        xxxFreeDdeConv(i);
      }
      if ( v3 )
        ThreadUnlock1();
      goto LABEL_1;
    }
  }
}
