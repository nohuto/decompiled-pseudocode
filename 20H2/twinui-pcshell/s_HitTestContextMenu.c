/*
 * XREFs of s_HitTestContextMenu @ 0x18047B50C
 * Callers:
 *     ?s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_HOW_SELECTED_FLAGS@@@Z @ 0x18047ABA4 (-s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 */

char __fastcall s_HitTestContextMenu(__int64 a1, POINT a2, _BYTE *a3)
{
  HWND v4; // rax
  WCHAR ClassName[264]; // [rsp+30h] [rbp-228h] BYREF

  *a3 = 0;
  v4 = WindowFromPoint(a2);
  if ( v4 )
  {
    LODWORD(v4) = GetClassNameW(v4, ClassName, 260);
    if ( (_DWORD)v4 )
    {
      LOBYTE(v4) = CompareStringOrdinal(ClassName, -1, L"#32768", -1, 1) == 2;
      *a3 = (_BYTE)v4;
    }
  }
  return (char)v4;
}
