/*
 * XREFs of ImageList_GetIcon @ 0x1800921D0
 * Callers:
 *     ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x1800D61BC (-GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@.c)
 * Callees:
 *     _GetProcFromComCtl32 @ 0x18013F278 (_GetProcFromComCtl32.c)
 */

HICON __stdcall ImageList_GetIcon(HIMAGELIST himl, int i, UINT flags)
{
  HICON result; // rax

  result = (HICON)qword_1805CAA80;
  if ( qword_1805CAA80 == -1 )
  {
    GetProcFromComCtl32(&qword_1805CAA80, "ImageList_GetIcon", flags);
    result = (HICON)qword_1805CAA80;
  }
  if ( result )
    return (HICON)((__int64 (__fastcall *)(HIMAGELIST, _QWORD, _QWORD))result)(himl, 0LL, 0LL);
  return result;
}
