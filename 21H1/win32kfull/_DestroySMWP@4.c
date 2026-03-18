/*
 * XREFs of _DestroySMWP@4 @ 0x349E4
 * Callers:
 *     ?_DeferWindowPos@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x32E22 (-_DeferWindowPos@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     _xxxEndDeferWindowPosEx@8 @ 0x34486 (_xxxEndDeferWindowPosEx@8.c)
 *     _NtUserDeferWindowPosAndBand@40 @ 0x749C8 (_NtUserDeferWindowPosAndBand@40.c)
 *     ?UnrefAndDestroySMWP@@YGXPAUtagSMWP@@@Z @ 0x13FBB8 (-UnrefAndDestroySMWP@@YGXPAUtagSMWP@@@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall DestroySMWP(int a1)
{
  BOOL v2; // ebx
  int v3; // ecx
  int v4; // eax
  _DWORD *v5; // ecx
  int result; // eax
  int v7; // ebx
  int v8; // [esp+8h] [ebp-4h]
  _DWORD *v9; // [esp+14h] [ebp+8h]

  if ( (*(_BYTE *)(a1 + 12) & 2) != 0 )
  {
    result = HMMarkObjectDestroy(a1);
    if ( !result )
      return result;
    v2 = 1;
  }
  else
  {
    v2 = a1 != _gSMWP[0];
  }
  v3 = *(_DWORD *)(a1 + 24);
  if ( v3 )
  {
    v4 = *(_DWORD *)(a1 + 16) - 1;
    v8 = v4;
    if ( v4 >= 0 )
    {
      v5 = (_DWORD *)(v3 + 92);
      v9 = v5;
      do
      {
        if ( *v5 )
        {
          GreDeleteObject(*v5);
          v4 = v8;
          v5 = v9;
        }
        v5 += 32;
        --v4;
        v9 = v5;
        v8 = v4;
      }
      while ( v4 >= 0 );
    }
    if ( v2 )
      Win32FreePool(*(_DWORD *)(a1 + 24));
  }
  if ( (*(_BYTE *)(a1 + 12) & 2) != 0 )
    return HMFreeObject(a1);
  if ( v2 )
    return Win32FreePool(a1);
  result = _gdwPUDFlags;
  _gdwPUDFlags &= ~0x40000000u;
  if ( *(int *)(a1 + 20) > 8 )
  {
    result = Win32AllocPool(512, 2004054869);
    v7 = result;
    if ( result )
    {
      result = Win32FreePool(*(_DWORD *)(a1 + 24));
      *(_DWORD *)(a1 + 24) = v7;
      *(_DWORD *)(a1 + 20) = 4;
    }
  }
  *(_DWORD *)(a1 + 12) &= ~4u;
  return result;
}
