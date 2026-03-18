/*
 * XREFs of ?CheckClipboardAccessForIntegrityLevel@@YGHUtagUIPI_INFO@@0@Z @ 0x1818DE
 * Callers:
 *     ?FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z @ 0x115FE (-FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z.c)
 *     ?CountNumClipFormatForIL@@YGKUtagUIPI_INFO@@PBUtagWINDOWSTATION@@@Z @ 0x12220 (-CountNumClipFormatForIL@@YGKUtagUIPI_INFO@@PBUtagWINDOWSTATION@@@Z.c)
 *     _NtUserGetUpdatedClipboardFormats@12 @ 0x1649A2 (_NtUserGetUpdatedClipboardFormats@12.c)
 *     __GetPriorityClipboardFormat@8 @ 0x182ECD (__GetPriorityClipboardFormat@8.c)
 * Callees:
 *     ?GetClipboardIL@@YGXUtagUIPI_INFO@@PAU1@@Z @ 0x181B16 (-GetClipboardIL@@YGXUtagUIPI_INFO@@PAU1@@Z.c)
 */

int __stdcall CheckClipboardAccessForIntegrityLevel(int a1, int a2, char a3, int a4)
{
  _DWORD v5[2]; // [esp+0h] [ebp-8h] BYREF

  v5[0] = 0;
  v5[1] = 0;
  GetClipboardIL(v5, a1, a2);
  return (unsigned __int8)CheckAccess(v5, &a3);
}
