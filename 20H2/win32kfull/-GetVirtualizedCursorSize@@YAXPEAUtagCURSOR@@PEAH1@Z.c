/*
 * XREFs of ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C00956C4
 * Callers:
 *     _DrawIconEx @ 0x1C0091C78 (_DrawIconEx.c)
 *     NtUserDrawIconEx @ 0x1C0092430 (NtUserDrawIconEx.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C00951E8 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     NtUserGetIconSize @ 0x1C0106C90 (NtUserGetIconSize.c)
 * Callees:
 *     GetCursorSizeFromIndex @ 0x1C00281C8 (GetCursorSizeFromIndex.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x1C00957A4 (-ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z.c)
 */

void __fastcall GetVirtualizedCursorSize(struct tagCURSOR *a1, int *a2, int *a3)
{
  __int64 v6; // rcx
  int v7; // ebx
  unsigned int DpiForSystem; // eax
  INT CursorSizeFromIndex; // ebx

  *a2 = *((_DWORD *)a1 + 35);
  *a3 = *((_DWORD *)a1 + 36);
  v7 = 0;
  if ( ShouldVirtualizeIconCursorSize(a1) )
  {
    DpiForSystem = GetDpiForSystem(v6);
    if ( DpiForSystem >= 0x90 )
    {
      if ( DpiForSystem >= 0xC0 )
      {
        if ( DpiForSystem >= 0x120 )
          v7 = 4 - (DpiForSystem < 0x180);
        else
          v7 = 2;
      }
      else
      {
        v7 = 1;
      }
    }
    CursorSizeFromIndex = GetCursorSizeFromIndex(v7);
    *a2 = EngMulDiv(*a2, CursorSizeFromIndex, *((_DWORD *)a1 + 19));
    *a3 = EngMulDiv(*a3, CursorSizeFromIndex, *((_DWORD *)a1 + 19));
  }
}
