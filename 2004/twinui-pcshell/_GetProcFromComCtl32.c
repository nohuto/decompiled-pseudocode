/*
 * XREFs of _GetProcFromComCtl32 @ 0x18013F3B8
 * Callers:
 *     ImageList_Add @ 0x18009242C (ImageList_Add.c)
 *     ImageList_GetIcon @ 0x180092490 (ImageList_GetIcon.c)
 *     ?CreateIconFromBitmap@@YAJIPEAUHBITMAP__@@PEAPEAUHICON__@@@Z @ 0x1800EE510 (-CreateIconFromBitmap@@YAJIPEAUHBITMAP__@@PEAPEAUHICON__@@@Z.c)
 *     HIMAGELIST_QueryInterface @ 0x18013F1D0 (HIMAGELIST_QueryInterface.c)
 *     ImageList_Create @ 0x18013F238 (ImageList_Create.c)
 *     ImageList_Destroy @ 0x18013F2AC (ImageList_Destroy.c)
 *     ImageList_ReplaceIcon @ 0x18013F300 (ImageList_ReplaceIcon.c)
 *     PremultiplyAlphaChannel @ 0x18013F364 (PremultiplyAlphaChannel.c)
 * Callees:
 *     DelayLoadCC @ 0x18013F170 (DelayLoadCC.c)
 */

__int64 __fastcall GetProcFromComCtl32(__int64 *a1, const CHAR *a2)
{
  __int64 v3; // rbx
  HMODULE v4; // rcx
  __int64 result; // rax

  v3 = 0LL;
  v4 = g_hinstCC;
  if ( g_hinstCC || (result = DelayLoadCC(), (v4 = g_hinstCC) != 0LL) )
  {
    result = (__int64)GetProcAddress(v4, a2);
    v3 = result;
  }
  *a1 = v3;
  return result;
}
