/*
 * XREFs of _DWP_GetEnabledPopup@4 @ 0x1A1D7D
 * Callers:
 *     _GetActiveTrackPwnd@4 @ 0x14E1E4 (_GetActiveTrackPwnd@4.c)
 *     _DWP_GetEnabledPopupOffset@4 @ 0x1A1DFE (_DWP_GetEnabledPopupOffset@4.c)
 *     _xxxActivateEnabledPopup@4 @ 0x1A1E3A (_xxxActivateEnabledPopup@4.c)
 *     _xxxFlashEnabledPopup@4 @ 0x1A1F03 (_xxxFlashEnabledPopup@4.c)
 * Callees:
 *     __GhostWindowFromHungWindow@4 @ 0x72BC6 (__GhostWindowFromHungWindow@4.c)
 */

_DWORD *__thiscall DWP_GetEnabledPopup(_DWORD *this)
{
  int v1; // edx
  _DWORD *v2; // esi
  int v3; // edi
  _DWORD *i; // eax
  _DWORD *v5; // eax

  v1 = this[2];
  v2 = (_DWORD *)this[12];
  v3 = 0;
  while ( v2 != this )
  {
    if ( v2 )
    {
      if ( (*(_BYTE *)(v1 + 264) & 2) != 0 )
      {
        if ( v2[2] != v1 )
          goto LABEL_14;
      }
      else if ( *(_DWORD *)(v2[2] + 236) != *(_DWORD *)(v1 + 236) )
      {
        goto LABEL_14;
      }
      if ( (*(_BYTE *)(v2[5] + 23) & 0x18) == 0x10 )
      {
        for ( i = (_DWORD *)v2[16]; i; i = (_DWORD *)i[16] )
        {
          if ( i == this )
            goto LABEL_17;
        }
      }
LABEL_14:
      v2 = (_DWORD *)v2[12];
    }
    else
    {
      if ( v3 )
        return 0;
      v3 = 1;
      v2 = *(_DWORD **)(this[14] + 60);
    }
  }
  v2 = 0;
LABEL_17:
  if ( v2 )
  {
    v5 = _GhostWindowFromHungWindow(v2);
    if ( v5 )
      return v5;
  }
  return v2;
}
