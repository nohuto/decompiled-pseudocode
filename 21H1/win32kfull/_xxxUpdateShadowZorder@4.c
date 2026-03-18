/*
 * XREFs of _xxxUpdateShadowZorder@4 @ 0x19D563
 * Callers:
 *     ?xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z @ 0x38532 (-xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     ?FindShadow@@YGPAUtagSHADOW@@PAUtagWND@@@Z @ 0x1FB0A (-FindShadow@@YGPAUtagSHADOW@@PAUtagWND@@@Z.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _SetWindowGroupBand@12 @ 0x97764 (_SetWindowGroupBand@12.c)
 */

struct tagSHADOW *__thiscall xxxUpdateShadowZorder(_DWORD *this)
{
  struct tagSHADOW *result; // eax
  int v3; // esi
  int v4; // eax
  void *v5; // edx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD v8[3]; // [esp+Ch] [ebp-Ch] BYREF

  v8[2] = 0;
  result = FindShadow(this);
  if ( result )
  {
    v3 = *((_DWORD *)result + 1);
    v4 = *(_DWORD *)(v3 + 20);
    if ( (*(_BYTE *)(this[5] + 16) & 8) == 0 || (*(_BYTE *)(v4 + 16) & 8) != 0 )
    {
      if ( (*(_BYTE *)(this[5] + 16) & 8) == 0 && (*(_BYTE *)(v4 + 16) & 8) != 0 )
        SetOrClrWF(0, v3, 0x808u, 1);
    }
    else
    {
      SetOrClrWF(1, v3, 0x808u, 1);
    }
    v5 = *(void **)(this[5] + 148);
    if ( *(void **)(*(_DWORD *)(v3 + 20) + 148) != v5 )
      SetWindowGroupBand((struct tagWND *)v3, v5, 0);
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v8[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v8;
    v8[1] = v3;
    HMLockObject(v3);
    xxxSetWindowPos(v3, (int)this, 0, 0, 0, 0, 19);
    return (struct tagSHADOW *)ThreadUnlock1();
  }
  return result;
}
