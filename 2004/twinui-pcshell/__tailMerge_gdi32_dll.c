/*
 * XREFs of __tailMerge_gdi32_dll @ 0x18009141E
 * Callers:
 *     __imp_load_GetStockObject @ 0x180091412 (__imp_load_GetStockObject.c)
 *     __imp_load_CreateCompatibleBitmap @ 0x18009149D (__imp_load_CreateCompatibleBitmap.c)
 *     __imp_load_DeleteObject @ 0x1800914B0 (__imp_load_DeleteObject.c)
 *     __imp_load_CombineRgn @ 0x1800914C2 (__imp_load_CombineRgn.c)
 *     __imp_load_CreateRectRgnIndirect @ 0x1800914D4 (__imp_load_CreateRectRgnIndirect.c)
 *     __imp_load_GetObjectW @ 0x1800914E6 (__imp_load_GetObjectW.c)
 *     __imp_load_CreateDIBSection @ 0x1800914F8 (__imp_load_CreateDIBSection.c)
 *     __imp_load_CreateCompatibleDC @ 0x18009150A (__imp_load_CreateCompatibleDC.c)
 *     __imp_load_SelectObject @ 0x18009151C (__imp_load_SelectObject.c)
 *     __imp_load_DeleteDC @ 0x18009152E (__imp_load_DeleteDC.c)
 *     __imp_load_GetDIBits @ 0x180091540 (__imp_load_GetDIBits.c)
 *     __imp_load_SetDIBits @ 0x180091552 (__imp_load_SetDIBits.c)
 *     __imp_load_StretchDIBits @ 0x180091564 (__imp_load_StretchDIBits.c)
 *     __imp_load_GdiAlphaBlend @ 0x180091576 (__imp_load_GdiAlphaBlend.c)
 *     __imp_load_SetBkColor @ 0x180091588 (__imp_load_SetBkColor.c)
 *     __imp_load_BitBlt @ 0x18009159A (__imp_load_BitBlt.c)
 *     __imp_load_GetDeviceCaps @ 0x1800915AC (__imp_load_GetDeviceCaps.c)
 *     __imp_load_SetStretchBltMode @ 0x1800921FF (__imp_load_SetStretchBltMode.c)
 *     __imp_load_SetBkMode @ 0x180092211 (__imp_load_SetBkMode.c)
 *     __imp_load_StretchBlt @ 0x180092223 (__imp_load_StretchBlt.c)
 *     __imp_load_CreateSolidBrush @ 0x180092235 (__imp_load_CreateSolidBrush.c)
 *     __imp_load_GetCurrentObject @ 0x180092247 (__imp_load_GetCurrentObject.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180088DF0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_gdi32_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_GDI32_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
