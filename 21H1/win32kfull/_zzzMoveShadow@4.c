/*
 * XREFs of _zzzMoveShadow@4 @ 0x19D67F
 * Callers:
 *     ?xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z @ 0x38532 (-xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z.c)
 * Callees:
 *     ?FindShadow@@YGPAUtagSHADOW@@PAUtagWND@@@Z @ 0x1FB0A (-FindShadow@@YGPAUtagSHADOW@@PAUtagWND@@@Z.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _zzzUpdateLayeredWindow@40 @ 0xBABAE (_zzzUpdateLayeredWindow@40.c)
 */

struct tagSHADOW *__thiscall zzzMoveShadow(void *this)
{
  struct tagSHADOW *result; // eax
  int v2; // ecx
  struct tagSHADOW *v3; // esi
  int v4; // edx
  int v5; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD v8[3]; // [esp+Ch] [ebp-14h] BYREF
  _DWORD v9[2]; // [esp+18h] [ebp-8h] BYREF

  v8[2] = 0;
  result = FindShadow(this);
  v3 = result;
  if ( result )
  {
    v4 = *(_DWORD *)(v2 + 20);
    v9[0] = *(_DWORD *)(v4 + 52);
    v9[1] = *(_DWORD *)(v4 + 56);
    v5 = *((_DWORD *)result + 1);
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v8[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v8;
    v8[1] = v5;
    if ( v5 )
      HMLockObject(v5);
    zzzUpdateLayeredWindow(*((struct tagEVENTHOOK **)v3 + 1), 0, (int)v9, 0, 0, 0, 0, 0, 0, 0);
    return (struct tagSHADOW *)ThreadUnlock1();
  }
  return result;
}
