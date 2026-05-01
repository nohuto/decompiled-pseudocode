/*
 * XREFs of ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x1800D497C
 * Callers:
 *     ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x1800D4A20 (-GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$un.c)
 * Callees:
 *     ImageList_Add @ 0x18009242C (ImageList_Add.c)
 *     ImageList_GetIcon @ 0x180092490 (ImageList_GetIcon.c)
 *     ImageList_Create @ 0x18013F238 (ImageList_Create.c)
 *     ImageList_Destroy @ 0x18013F2AC (ImageList_Destroy.c)
 */

// Hidden C++ exception states: #wind=1
HICON __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromBitmap(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this,
        HBITMAP a2)
{
  int v3; // r9d
  struct _IMAGELIST *v4; // rax
  HBITMAP v5; // r8
  struct _IMAGELIST *v6; // rbx
  int v7; // edx
  UINT v8; // r8d
  HICON Icon; // rdi
  int v11; // [rsp+20h] [rbp-38h]
  _BYTE pv[4]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+34h] [rbp-24h]
  int cy; // [rsp+38h] [rbp-20h]

  if ( GetObjectW(a2, 32, pv) )
  {
    v4 = ImageList_Create(v13, cy, 0x20021u, v3, v11);
    v6 = v4;
    if ( v4 && ImageList_Add(v4, a2, v5) != -1 )
    {
      Icon = ImageList_GetIcon(v6, v7, v8);
      ImageList_Destroy(v6);
      return Icon;
    }
    if ( v6 )
      ImageList_Destroy(v6);
  }
  return 0LL;
}
