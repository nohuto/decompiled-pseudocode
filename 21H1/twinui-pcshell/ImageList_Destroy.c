/*
 * XREFs of ImageList_Destroy @ 0x18011AC8C
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_IMAGELIST@@P6AHPEAU1@@Z$1?ImageList_Destroy@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800C1568 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_IMAGELIST@@P6AHPEAU1@@Z$1-ImageList_.c)
 *     ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x1800C247C (-GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@.c)
 *     CreateBitmapFromIcon @ 0x1803650EC (CreateBitmapFromIcon.c)
 * Callees:
 *     _GetProcFromComCtl32 @ 0x18011AD98 (_GetProcFromComCtl32.c)
 */

BOOL __stdcall ImageList_Destroy(HIMAGELIST himl)
{
  __int64 (__fastcall *v1)(HIMAGELIST); // rax

  v1 = (__int64 (__fastcall *)(HIMAGELIST))qword_18059EA30;
  if ( qword_18059EA30 == -1 )
  {
    GetProcFromComCtl32(&qword_18059EA30, "ImageList_Destroy");
    v1 = (__int64 (__fastcall *)(HIMAGELIST))qword_18059EA30;
  }
  if ( v1 )
    LODWORD(v1) = v1(himl);
  return (int)v1;
}
