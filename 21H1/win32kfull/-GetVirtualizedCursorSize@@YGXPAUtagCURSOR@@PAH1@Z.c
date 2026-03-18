/*
 * XREFs of ?GetVirtualizedCursorSize@@YGXPAUtagCURSOR@@PAH1@Z @ 0x750D8
 * Callers:
 *     ?_InternalGetIconInfo@@YG_NPAUtagCURSOR@@PAU_ICONINFO@@PAU_UNICODE_STRING@@2PAK_N@Z @ 0x74C30 (-_InternalGetIconInfo@@YG_NPAUtagCURSOR@@PAU_ICONINFO@@PAU_UNICODE_STRING@@2PAK_N@Z.c)
 *     _NtUserDrawIconEx@44 @ 0x90A70 (_NtUserDrawIconEx@44.c)
 *     __DrawIconEx@36 @ 0x90AF8 (__DrawIconEx@36.c)
 *     _NtUserGetIconSize@16 @ 0xA38AA (_NtUserGetIconSize@16.c)
 * Callees:
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     ?ShouldVirtualizeIconCursorSize@@YG_NPAUtagCURSOR@@@Z @ 0x752C8 (-ShouldVirtualizeIconCursorSize@@YG_NPAUtagCURSOR@@@Z.c)
 *     _GetCursorSizeFromIndex@4 @ 0xA2940 (_GetCursorSizeFromIndex@4.c)
 *     _GetCursorSizesIndexFromDpi@4 @ 0xA296A (_GetCursorSizesIndexFromDpi@4.c)
 */

void __userpurge GetVirtualizedCursorSize(INT *a1@<edx>, INT *a2@<ecx>, INT *a3, int *a4, int *a5)
{
  int DpiForSystem; // eax
  int CursorSizesIndexFromDpi; // eax
  INT CursorSizeFromIndex; // edi
  struct tagCURSOR *v10; // [esp+0h] [ebp-Ch]

  *a1 = a2[22];
  *a3 = a2[23];
  if ( ShouldVirtualizeIconCursorSize(v10) )
  {
    DpiForSystem = GetDpiForSystem();
    CursorSizesIndexFromDpi = GetCursorSizesIndexFromDpi(DpiForSystem);
    CursorSizeFromIndex = GetCursorSizeFromIndex(CursorSizesIndexFromDpi);
    *a1 = EngMulDiv(*a1, CursorSizeFromIndex, a2[10]);
    *a3 = EngMulDiv(*a3, CursorSizeFromIndex, a2[10]);
  }
}
