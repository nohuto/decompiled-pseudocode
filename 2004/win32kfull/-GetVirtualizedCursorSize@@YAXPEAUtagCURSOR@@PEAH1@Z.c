/*
 * XREFs of ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C0067AAC
 * Callers:
 *     _DrawIconEx @ 0x1C0063888 (_DrawIconEx.c)
 *     NtUserDrawIconEx @ 0x1C0064040 (NtUserDrawIconEx.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C00675D0 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     NtUserGetIconSize @ 0x1C0106A00 (NtUserGetIconSize.c)
 * Callees:
 *     GetCursorSizeFromIndex @ 0x1C0049098 (GetCursorSizeFromIndex.c)
 *     ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x1C0067B8C (-ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z.c)
 *     GetDpiForSystem @ 0x1C00A4C48 (GetDpiForSystem.c)
 */

void __fastcall GetVirtualizedCursorSize(struct tagCURSOR *a1, int *a2, int *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  unsigned int DpiForSystem; // eax
  INT CursorSizeFromIndex; // ebx

  *a2 = *((_DWORD *)a1 + 35);
  *a3 = *((_DWORD *)a1 + 36);
  v8 = 0;
  if ( ShouldVirtualizeIconCursorSize(a1) )
  {
    DpiForSystem = GetDpiForSystem(v7, v6);
    if ( DpiForSystem >= 0x90 )
    {
      if ( DpiForSystem >= 0xC0 )
      {
        if ( DpiForSystem >= 0x120 )
          v8 = 4 - (DpiForSystem < 0x180);
        else
          v8 = 2;
      }
      else
      {
        v8 = 1;
      }
    }
    CursorSizeFromIndex = GetCursorSizeFromIndex(v8);
    *a2 = EngMulDiv(*a2, CursorSizeFromIndex, *((_DWORD *)a1 + 19));
    *a3 = EngMulDiv(*a3, CursorSizeFromIndex, *((_DWORD *)a1 + 19));
  }
}
