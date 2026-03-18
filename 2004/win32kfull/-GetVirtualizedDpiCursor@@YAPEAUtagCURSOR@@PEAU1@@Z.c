/*
 * XREFs of ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0067B4C
 * Callers:
 *     NtUserDrawIconEx @ 0x1C0064040 (NtUserDrawIconEx.c)
 *     NtUserGetIconInfo @ 0x1C0067DA0 (NtUserGetIconInfo.c)
 *     NtUserGetIconSize @ 0x1C0106A00 (NtUserGetIconSize.c)
 *     NtUserGetCursorFrameInfo @ 0x1C0154010 (NtUserGetCursorFrameInfo.c)
 * Callees:
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C00431EC (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x1C0067B8C (-ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z.c)
 *     GetDpiForSystem @ 0x1C00A4C48 (GetDpiForSystem.c)
 *     ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x1C0112BF8 (-GetSizeForDpi@CCursorSizes@@QEBAII@Z.c)
 */

struct tagCURSOR *__fastcall GetVirtualizedDpiCursor(struct tagCURSOR *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagCURSOR *result; // rax
  unsigned int DpiForSystem; // eax
  CCursorSizes *v6; // rcx
  int SizeForDpi; // eax

  if ( !ShouldVirtualizeIconCursorSize(a1) )
    return a1;
  DpiForSystem = GetDpiForSystem(v3, v2);
  SizeForDpi = CCursorSizes::GetSizeForDpi(v6, DpiForSystem);
  result = FindDPICursor(a1, SizeForDpi);
  if ( !result )
    return a1;
  return result;
}
