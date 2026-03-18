/*
 * XREFs of ?xxxEnableSBCtlArrows@@YGHPAUtagWND@@I@Z @ 0x1A2F8E
 * Callers:
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 * Callees:
 *     _IsVisible@4 @ 0x2D3FC (_IsVisible@4.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _safe_cast_fnid_to_PSBWND@4 @ 0x1436EC (_safe_cast_fnid_to_PSBWND@4.c)
 *     _xxxInvalidateRect@12 @ 0x1965AB (_xxxInvalidateRect@12.c)
 */

int __fastcall xxxEnableSBCtlArrows(struct tagEVENTHOOK *a1, int a2)
{
  int v4; // eax
  _DWORD *v5; // ecx
  int v6; // edi
  unsigned int v7; // ebx
  int v8; // ecx
  int v10; // [esp+Ch] [ebp-8h]

  v4 = safe_cast_fnid_to_PSBWND(a1);
  v10 = v4;
  if ( !v4 )
    return 0;
  v6 = *(_DWORD *)(v4 + 8);
  v7 = a2 ? a2 | v6 : v6 & 0xFFFFFFFC;
  *(_DWORD *)(v4 + 8) = v7;
  if ( v6 == v7 )
    return 0;
  if ( IsVisible(v5) )
  {
    xxxInvalidateRect(v8, 0, 1);
    v7 = *(_DWORD *)(v10 + 8);
  }
  if ( (((unsigned __int8)v6 ^ (unsigned __int8)v7) & 1) != 0 )
    xxxWindowEvent(0x800Au, a1, 0xFFFFFFFC, (struct tagWND *)1, 1);
  if ( (((unsigned __int8)v6 ^ (unsigned __int8)v7) & 2) != 0 )
    xxxWindowEvent(0x800Au, a1, 0xFFFFFFFC, (struct tagWND *)5, 1);
  return 1;
}
