/*
 * XREFs of ImageList_GetIcon @ 0x180092490
 * Callers:
 *     ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x1800D497C (-GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@.c)
 * Callees:
 *     _GetProcFromComCtl32 @ 0x18013F3B8 (_GetProcFromComCtl32.c)
 */

HICON __stdcall ImageList_GetIcon(HIMAGELIST himl, int i, UINT flags)
{
  HICON result; // rax

  result = (HICON)qword_1805CBA40;
  if ( qword_1805CBA40 == -1 )
  {
    GetProcFromComCtl32(&qword_1805CBA40, "ImageList_GetIcon", flags);
    result = (HICON)qword_1805CBA40;
  }
  if ( result )
    return (HICON)((__int64 (__fastcall *)(HIMAGELIST, _QWORD, _QWORD))result)(himl, 0LL, 0LL);
  return result;
}
