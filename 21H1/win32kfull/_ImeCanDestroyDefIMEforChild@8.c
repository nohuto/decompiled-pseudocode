/*
 * XREFs of _ImeCanDestroyDefIMEforChild@8 @ 0xCB942
 * Callers:
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 * Callees:
 *     _unsafe_cast_fnid_or_class_to_PIMEWND@4 @ 0x1DB34 (_unsafe_cast_fnid_or_class_to_PIMEWND@4.c)
 *     ??9?$SharedPointerBase@UtagWND@@@@QBEEH@Z @ 0x2A4F2 (--9-$SharedPointerBase@UtagWND@@@@QBEEH@Z.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _IsChildSameThread@8 @ 0x14F148 (_IsChildSameThread@8.c)
 */

int __fastcall ImeCanDestroyDefIMEforChild(_DWORD *a1, int a2)
{
  ULONG *v2; // eax
  ULONG v3; // ecx
  ULONG v4; // eax
  _DWORD *v6; // ecx
  _DWORD *v7; // esi

  v2 = (ULONG *)unsafe_cast_fnid_or_class_to_PIMEWND(a1);
  if ( !v2 )
    return 0;
  v3 = *v2;
  if ( !*v2 || v3 == -1 )
    return 0;
  v4 = _MmUserProbeAddress;
  if ( v3 < _MmUserProbeAddress )
    v4 = v3;
  if ( (*(_BYTE *)(v4 + 24) & 0x10) == 0 || SharedPointerBase<tagWND>::operator!=(a1 + 16, (int)(a1 + 16)) && *v6 != a2 )
    return 0;
  v7 = *(_DWORD **)(a2 + 56);
  if ( !v7 || *(_DWORD *)(a2 + 8) == v7[2] )
    return 0;
  do
  {
    if ( v7 == (_DWORD *)_GetDesktopWindow(v7) )
      break;
    if ( IsChildSameThread() )
      return 0;
    v7 = (_DWORD *)v7[14];
  }
  while ( v7 );
  return 1;
}
