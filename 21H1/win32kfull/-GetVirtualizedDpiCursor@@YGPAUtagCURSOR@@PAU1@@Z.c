/*
 * XREFs of ?GetVirtualizedDpiCursor@@YGPAUtagCURSOR@@PAU1@@Z @ 0x7528E
 * Callers:
 *     _NtUserGetIconInfo@24 @ 0x74F2A (_NtUserGetIconInfo@24.c)
 *     _NtUserGetCursorFrameInfo@16 @ 0x75144 (_NtUserGetCursorFrameInfo@16.c)
 *     _NtUserDrawIconEx@44 @ 0x90A70 (_NtUserDrawIconEx@44.c)
 *     _NtUserGetIconSize@16 @ 0xA38AA (_NtUserGetIconSize@16.c)
 * Callees:
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     ?ShouldVirtualizeIconCursorSize@@YG_NPAUtagCURSOR@@@Z @ 0x752C8 (-ShouldVirtualizeIconCursorSize@@YG_NPAUtagCURSOR@@@Z.c)
 *     ?GetSizeForDpi@CCursorSizes@@QBEII@Z @ 0x752E8 (-GetSizeForDpi@CCursorSizes@@QBEII@Z.c)
 */

struct tagCURSOR *__thiscall GetVirtualizedDpiCursor(_DWORD *this)
{
  unsigned int DpiForSystem; // eax
  CCursorSizes *v3; // ecx
  unsigned int SizeForDpi; // ecx
  struct tagCURSOR *result; // eax
  struct tagCURSOR *v6; // [esp+0h] [ebp-4h]

  if ( !ShouldVirtualizeIconCursorSize(v6) )
    return (struct tagCURSOR *)this;
  DpiForSystem = GetDpiForSystem();
  SizeForDpi = CCursorSizes::GetSizeForDpi(v3, DpiForSystem);
  for ( result = (struct tagCURSOR *)this[6]; result; result = (struct tagCURSOR *)*((_DWORD *)result + 5) )
  {
    if ( *((_DWORD *)result + 10) == SizeForDpi )
      goto LABEL_5;
  }
  result = 0;
LABEL_5:
  if ( !result )
    return (struct tagCURSOR *)this;
  return result;
}
