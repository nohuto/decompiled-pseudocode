/*
 * XREFs of _xxxGetListBoxInfo@4 @ 0x1A701A
 * Callers:
 *     _NtUserGetListBoxInfo@4 @ 0x16371B (_NtUserGetListBoxInfo@4.c)
 * Callees:
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _unsafe_cast_fnid_or_class_to_PLBWND_LISTBOX@4 @ 0x143812 (_unsafe_cast_fnid_or_class_to_PLBWND_LISTBOX@4.c)
 */

int __thiscall xxxGetListBoxInfo(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // ebx
  PRKPROCESS *v5; // edi
  _DWORD *v6; // ecx
  int v7; // [esp+14h] [ebp-20h]

  v2 = 0;
  v3 = (_DWORD *)unsafe_cast_fnid_or_class_to_PLBWND_LISTBOX(this);
  if ( !v3 )
    return xxxSendMessage(this, 0, 0);
  v5 = *(PRKPROCESS **)(this[2] + 232);
  if ( v5 == (PRKPROCESS *)PsGetCurrentProcessWin32Process() )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    KeAttachProcess(*v5);
  }
  v6 = (_DWORD *)*v3;
  if ( *v3 )
  {
    if ( (v6[19] & 0x40000) != 0 )
      v2 = v6[15];
    else
      v2 = v6[6];
  }
  if ( v7 )
    KeDetachProcess();
  return v2;
}
