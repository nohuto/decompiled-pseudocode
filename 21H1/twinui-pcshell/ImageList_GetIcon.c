/*
 * XREFs of ImageList_GetIcon @ 0x180091B30
 * Callers:
 *     ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x1800C247C (-GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@.c)
 * Callees:
 *     _GetProcFromComCtl32 @ 0x18011AD98 (_GetProcFromComCtl32.c)
 */

HICON __stdcall ImageList_GetIcon(HIMAGELIST himl, int i, UINT flags)
{
  HICON result; // rax

  result = (HICON)qword_18059E850;
  if ( qword_18059E850 == -1 )
  {
    GetProcFromComCtl32(&qword_18059E850, "ImageList_GetIcon", flags);
    result = (HICON)qword_18059E850;
  }
  if ( result )
    return (HICON)((__int64 (__fastcall *)(HIMAGELIST, _QWORD, _QWORD))result)(himl, 0LL, 0LL);
  return result;
}
