/*
 * XREFs of ?_GetScaledPoint@CDragVisual@@AEAA?AUtagPOINT@@W4ScaledPointType@1@@Z @ 0x180403EB4
 * Callers:
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x180405530 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 */

_DWORD *__fastcall CDragVisual::_GetScaledPoint(__int64 a1, _DWORD *a2, int a3)
{
  HWND v5; // rcx
  int v7; // r15d
  int v8; // r8d
  int v9; // edi
  int v10; // ecx
  int v11; // ebp
  int v12; // esi
  int v13; // eax
  _DWORD *result; // rax
  struct tagRECT Rect; // [rsp+20h] [rbp-48h] BYREF

  v5 = *(HWND *)(a1 + 152);
  Rect = 0LL;
  GetWindowRect(v5, &Rect);
  v7 = *(_DWORD *)(a1 + 200);
  v8 = (Rect.right - Rect.left) / 2 + Rect.left;
  v9 = (Rect.bottom - Rect.top) / 2 + Rect.top;
  v10 = *(_DWORD *)(a1 + 196);
  v11 = v9;
  if ( v8 <= *(_DWORD *)(a1 + 192) )
    v8 = *(_DWORD *)(a1 + 192);
  if ( v8 < v7 )
    v7 = v8;
  if ( v9 <= v10 )
    v11 = *(_DWORD *)(a1 + 196);
  if ( v11 >= *(_DWORD *)(a1 + 204) )
  {
    v9 = *(_DWORD *)(a1 + 204);
    v11 = v9;
  }
  else if ( v9 <= v10 )
  {
    v9 = *(_DWORD *)(a1 + 196);
  }
  v12 = 0;
  if ( a3 == 1 )
    v13 = 0;
  else
    v13 = MulDiv(*(_DWORD *)(a1 + 336) - v7, *(_DWORD *)(a1 + 284), *(_DWORD *)(a1 + 344));
  *a2 = v7 + v13;
  if ( a3 != 1 )
    v12 = MulDiv(*(_DWORD *)(a1 + 340) - v11, *(_DWORD *)(a1 + 284), *(_DWORD *)(a1 + 344));
  result = a2;
  a2[1] = v12 + v9;
  return result;
}
