/*
 * XREFs of ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0095764
 * Callers:
 *     NtUserDrawIconEx @ 0x1C0092430 (NtUserDrawIconEx.c)
 *     NtUserGetIconInfo @ 0x1C0094D90 (NtUserGetIconInfo.c)
 *     NtUserGetIconSize @ 0x1C0106C90 (NtUserGetIconSize.c)
 *     NtUserGetCursorFrameInfo @ 0x1C0156940 (NtUserGetCursorFrameInfo.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C007A050 (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x1C00957A4 (-ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z.c)
 *     ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x1C0113B54 (-GetSizeForDpi@CCursorSizes@@QEBAII@Z.c)
 */

struct tagCURSOR *__fastcall GetVirtualizedDpiCursor(struct tagCURSOR *a1)
{
  __int64 v2; // rcx
  struct tagCURSOR *result; // rax
  unsigned int DpiForSystem; // eax
  CCursorSizes *v5; // rcx
  int SizeForDpi; // eax

  if ( !ShouldVirtualizeIconCursorSize(a1) )
    return a1;
  DpiForSystem = GetDpiForSystem(v2);
  SizeForDpi = CCursorSizes::GetSizeForDpi(v5, DpiForSystem);
  result = FindDPICursor(a1, SizeForDpi);
  if ( !result )
    return a1;
  return result;
}
