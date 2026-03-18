/*
 * XREFs of _zzzCloakShadow@8 @ 0x19D618
 * Callers:
 *     _zzzSetWindowCompositionCloak@12 @ 0x1C5F8 (_zzzSetWindowCompositionCloak@12.c)
 * Callees:
 *     _zzzSetWindowCompositionCloak@12 @ 0x1C5F8 (_zzzSetWindowCompositionCloak@12.c)
 *     ?FindShadow@@YGPAUtagSHADOW@@PAUtagWND@@@Z @ 0x1FB0A (-FindShadow@@YGPAUtagSHADOW@@PAUtagWND@@@Z.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

struct tagSHADOW *__thiscall zzzCloakShadow(void *this)
{
  struct tagSHADOW *result; // eax
  int v2; // edx
  struct tagSHADOW *v3; // esi
  int v4; // edi
  BOOL v5; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v8[2] = 0;
  result = FindShadow(this);
  v3 = result;
  if ( result )
  {
    v4 = *((_DWORD *)result + 1);
    v5 = v2 != 0;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v8[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v8;
    v8[1] = v4;
    if ( v4 )
      HMLockObject(v4);
    zzzSetWindowCompositionCloak(*((_DWORD **)v3 + 1), 0, v5);
    return (struct tagSHADOW *)ThreadUnlock1();
  }
  return result;
}
