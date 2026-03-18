/*
 * XREFs of _zzzUpdateShadowAlpha@4 @ 0x19D6F9
 * Callers:
 *     _NtUserSetLayeredWindowAttributes@16 @ 0x1FA2E (_NtUserSetLayeredWindowAttributes@16.c)
 * Callees:
 *     ?FindShadow@@YGPAUtagSHADOW@@PAUtagWND@@@Z @ 0x1FB0A (-FindShadow@@YGPAUtagSHADOW@@PAUtagWND@@@Z.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _zzzUpdateLayeredWindow@40 @ 0xBABAE (_zzzUpdateLayeredWindow@40.c)
 *     __GetLayeredWindowAttributes@16 @ 0x153A92 (__GetLayeredWindowAttributes@16.c)
 */

struct tagSHADOW *__thiscall zzzUpdateShadowAlpha(void *this)
{
  struct tagSHADOW *result; // eax
  struct tagSHADOW *v3; // ebx
  unsigned int v4; // edx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  PKTHREAD v7; // eax
  int v8; // eax
  int v9; // [esp+Ch] [ebp-28h] BYREF
  unsigned int v10; // [esp+10h] [ebp-24h]
  int v11; // [esp+14h] [ebp-20h]
  _DWORD v12[3]; // [esp+18h] [ebp-1Ch] BYREF
  struct HWND__ v13; // [esp+24h] [ebp-10h] BYREF
  unsigned int v14; // [esp+28h] [ebp-Ch] BYREF
  unsigned int v15; // [esp+2Ch] [ebp-8h] BYREF
  char v16; // [esp+33h] [ebp-1h] BYREF

  v9 = 0;
  v12[2] = 0;
  v10 = 0;
  v11 = 0;
  result = FindShadow(this);
  v3 = result;
  v16 = v4;
  v14 = v4;
  v15 = v4;
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v12[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v12;
    v12[1] = this;
    if ( this )
      HMLockObject(this);
    if ( _GetLayeredWindowAttributes((int)this, &v13, &v16, &v14) && (v14 & 2) != 0 )
    {
      HIBYTE(v15) = 1;
      BYTE2(v15) = v16;
      v14 = *((_DWORD *)v3 + 1);
      v7 = KeGetCurrentThread();
      v8 = W32GetThreadWin32Thread(v7);
      v9 = *(_DWORD *)(v8 + 228);
      *(_DWORD *)(v8 + 228) = &v9;
      v10 = v14;
      if ( v14 )
        HMLockObject(v14);
      zzzUpdateLayeredWindow(*((struct tagEVENTHOOK **)v3 + 1), 0, 0, 0, 0, 0, 0, (int)&v15, 2u, 0);
      ThreadUnlock1();
    }
    return (struct tagSHADOW *)ThreadUnlock1();
  }
  return result;
}
