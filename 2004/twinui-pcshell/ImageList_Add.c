/*
 * XREFs of ImageList_Add @ 0x18009242C
 * Callers:
 *     ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x1800D497C (-GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     _GetProcFromComCtl32 @ 0x18013F3B8 (_GetProcFromComCtl32.c)
 */

int __stdcall ImageList_Add(HIMAGELIST himl, HBITMAP hbmImage, HBITMAP hbmMask)
{
  __int64 (__fastcall *v3)(HIMAGELIST, HBITMAP, _QWORD); // rax

  v3 = (__int64 (__fastcall *)(HIMAGELIST, HBITMAP, _QWORD))qword_1805CBA48;
  if ( qword_1805CBA48 == -1 )
  {
    GetProcFromComCtl32(&qword_1805CBA48, "ImageList_Add", hbmMask);
    v3 = (__int64 (__fastcall *)(HIMAGELIST, HBITMAP, _QWORD))qword_1805CBA48;
  }
  if ( v3 )
    return v3(himl, hbmImage, 0LL);
  else
    return -1;
}
