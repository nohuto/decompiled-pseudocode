/*
 * XREFs of _FreeThreadsWindowHooks@0 @ 0x12E20
 * Callers:
 *     <none>
 * Callees:
 *     _FreeHook@4 @ 0x12EC8 (_FreeHook@4.c)
 *     ?UnlinkHook@@YGXPAUtagHOOK@@@Z @ 0x12F22 (-UnlinkHook@@YGXPAUtagHOOK@@@Z.c)
 */

int __usercall FreeThreadsWindowHooks@<eax>(struct tagHOOK *a1@<esi>)
{
  int result; // eax
  int v2; // ebx
  int v3; // esi
  struct tagHOOK *v4; // [esp-8h] [ebp-10h]
  int v5; // [esp+4h] [ebp-4h]

  result = _gptiCurrent;
  if ( _gptiCurrent && *(_DWORD *)(_gptiCurrent + 248) )
  {
    v4 = a1;
    HMAssignmentUnlock(_gptiCurrent + 376);
    v2 = 20;
    while ( 1 )
    {
      v3 = *(_DWORD *)(_gptiCurrent + v2 + 492);
      if ( v3 )
        break;
      result = *(_DWORD *)(_gptiCurrent + 252);
      v3 = *(_DWORD *)(v2 + result);
      if ( v3 )
        break;
LABEL_6:
      v2 += 4;
      if ( v2 > 80 )
      {
        *(_DWORD *)(_gptiCurrent + 372) = 0;
        return result;
      }
    }
    while ( 1 )
    {
      v5 = *(_DWORD *)(v3 + 20);
      if ( v5 )
        goto LABEL_12;
      if ( (*(_BYTE *)(v3 + 32) & 1) == 0 )
        break;
LABEL_14:
      if ( *(_DWORD *)(v3 + 8) == _gptiCurrent )
        FreeHook(v3);
      result = v5;
      v3 = v5;
      if ( !v5 )
        goto LABEL_6;
    }
    v5 = *(_DWORD *)(v2 + *(_DWORD *)(_gptiCurrent + 252));
LABEL_12:
    if ( (*(_BYTE *)(v3 + 32) & 1) == 0 )
    {
      UnlinkHook(v4);
      *(_DWORD *)(v3 + 32) |= 0x80u;
      *(_DWORD *)(v3 + 20) = 0;
    }
    goto LABEL_14;
  }
  return result;
}
