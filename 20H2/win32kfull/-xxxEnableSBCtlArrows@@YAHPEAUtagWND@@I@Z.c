/*
 * XREFs of ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C024477C
 * Callers:
 *     xxxSBWndProc @ 0x1C0245C00 (xxxSBWndProc.c)
 * Callees:
 *     IsVisible @ 0x1C0041324 (IsVisible.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D40E8 (safe_cast_fnid_to_PSBWND.c)
 *     xxxInvalidateRect @ 0x1C0234E8C (xxxInvalidateRect.c)
 */

__int64 __fastcall xxxEnableSBCtlArrows(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  __int64 v6; // rax
  __int64 v7; // rsi
  int v8; // ebp
  unsigned int v9; // ebx
  struct tagWND *v10; // rcx

  v4 = a2;
  v6 = safe_cast_fnid_to_PSBWND((__int64)a1, a2, a3, a4);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  v8 = *(_DWORD *)(v6 + 12);
  v9 = v8 & 0xFFFFFFFC;
  if ( v4 )
    v9 = v8 | v4;
  *(_DWORD *)(v6 + 12) = v9;
  if ( v8 == v9 )
    return 0LL;
  if ( (unsigned int)IsVisible((__int64)a1) )
  {
    xxxInvalidateRect(v10, 0LL, 1);
    v9 = *(_DWORD *)(v7 + 12);
  }
  if ( (((unsigned __int8)v8 ^ (unsigned __int8)v9) & 1) != 0 )
    xxxWindowEvent(0x800Au, a1, -4, 1u, 1u);
  if ( (((unsigned __int8)v8 ^ (unsigned __int8)v9) & 2) != 0 )
    xxxWindowEvent(0x800Au, a1, -4, 5u, 1u);
  return 1LL;
}
