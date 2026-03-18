/*
 * XREFs of _zzzImeCanDestroyDefIME@8 @ 0x1D148
 * Callers:
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 * Callees:
 *     _zzzImeSetFutureOwner@8 @ 0x18ECA (_zzzImeSetFutureOwner@8.c)
 *     _ImeCheckTopmost@4 @ 0x1C1D4 (_ImeCheckTopmost@4.c)
 *     _unsafe_cast_fnid_or_class_to_PIMEWND@4 @ 0x1DB34 (_unsafe_cast_fnid_or_class_to_PIMEWND@4.c)
 *     _DwmAsyncOwnerChange@12 @ 0x732BC (_DwmAsyncOwnerChange@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall zzzImeCanDestroyDefIME(_DWORD *a1, _DWORD *a2)
{
  ULONG *v4; // eax
  ULONG v5; // ecx
  ULONG v6; // eax
  _DWORD *v7; // ebx
  _DWORD *v8; // eax
  _DWORD *i; // edx
  int v11; // [esp+18h] [ebp-20h]

  v4 = (ULONG *)unsafe_cast_fnid_or_class_to_PIMEWND();
  if ( !v4 )
    return 0;
  v5 = *v4;
  if ( !*v4 || v5 == -1 )
    return 0;
  v6 = _MmUserProbeAddress;
  if ( v5 < _MmUserProbeAddress )
    v6 = v5;
  if ( (*(_BYTE *)(v6 + 24) & 4) != 0 )
    return 0;
  v7 = a1 + 16;
  v8 = (_DWORD *)a1[16];
  if ( v8 )
  {
    while ( v8 != a2 )
    {
      if ( !v8 )
        return 0;
      v8 = (_DWORD *)v8[16];
    }
    if ( !v8 )
      return 0;
  }
  for ( i = a2; i; i = (_DWORD *)i[16] )
  {
    v11 = *(_DWORD *)(i[19] + 4);
    if ( (*(_BYTE *)(v11 + 10) & 1) != 0 || *(_WORD *)v11 == *(_WORD *)(_gpsi + 498) )
      return 0;
  }
  zzzImeSetFutureOwner(a1, a2);
  ImeCheckTopmost(a1);
  if ( *v7 && a2 != (_DWORD *)*v7 )
    return 0;
  *(_DWORD *)(a1[5] + 40) = 0;
  HMAssignmentUnlock(a1 + 16);
  if ( IsWindowDesktopComposed(a1) )
  {
    ReferenceDwmApiPort();
    DwmAsyncOwnerChange(0);
  }
  return 1;
}
