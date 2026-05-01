/*
 * XREFs of ImageList_Create @ 0x18013F0F8
 * Callers:
 *     ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x1800D61BC (-GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@.c)
 *     CreateBitmapFromIcon @ 0x180385D5C (CreateBitmapFromIcon.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     _GetProcFromComCtl32 @ 0x18013F278 (_GetProcFromComCtl32.c)
 */

HIMAGELIST __stdcall ImageList_Create(int cx, int cy, UINT flags, int cInitial, int cGrow)
{
  HIMAGELIST result; // rax

  result = (HIMAGELIST)qword_1805CAC68;
  if ( qword_1805CAC68 == -1 )
  {
    GetProcFromComCtl32(&qword_1805CAC68, "ImageList_Create", flags);
    result = (HIMAGELIST)qword_1805CAC68;
  }
  if ( result )
    return (HIMAGELIST)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))result)(
                         (unsigned int)cx,
                         (unsigned int)cy,
                         flags);
  return result;
}
