/*
 * XREFs of _GetProcFromComCtl32 @ 0x18011AD98
 * Callers:
 *     ImageList_Add @ 0x180091ACC (ImageList_Add.c)
 *     ImageList_GetIcon @ 0x180091B30 (ImageList_GetIcon.c)
 *     ?CreateIconFromBitmap@@YAJIPEAUHBITMAP__@@PEAPEAUHICON__@@@Z @ 0x1800C9B10 (-CreateIconFromBitmap@@YAJIPEAUHBITMAP__@@PEAPEAUHICON__@@@Z.c)
 *     HIMAGELIST_QueryInterface @ 0x18011ABB0 (HIMAGELIST_QueryInterface.c)
 *     ImageList_Create @ 0x18011AC18 (ImageList_Create.c)
 *     ImageList_Destroy @ 0x18011AC8C (ImageList_Destroy.c)
 *     ImageList_ReplaceIcon @ 0x18011ACE0 (ImageList_ReplaceIcon.c)
 *     PremultiplyAlphaChannel @ 0x18011AD44 (PremultiplyAlphaChannel.c)
 * Callees:
 *     DelayLoadCC @ 0x18011AB50 (DelayLoadCC.c)
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
