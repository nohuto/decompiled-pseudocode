/*
 * XREFs of ??$MakeAndInitialize@VXamlExplorerHostWindow@@V1@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@AEAKAEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIXamlExplorerHost@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlExplorerHostWindow@@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@AEAKAEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIXamlExplorerHost@@@Z @ 0x1802EC834
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VXamlExplorerHostWindow@@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@AEAKAEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIXamlExplorerHost@@@wil@@YA?AV?$ComPtr@VXamlExplorerHostWindow@@@WRL@Microsoft@@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@AEAKAEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIXamlExplorerHost@@@Z @ 0x1802EC8E0 (--$MakeAndInitializeOrThrow@VXamlExplorerHostWindow@@AEAPEAUIXamlExplorerHostWindowCreatedCallba.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0XamlExplorerHostWindow@@QEAA@XZ @ 0x1802ECF60 (--0XamlExplorerHostWindow@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@XamlExplorerHostWindow@@QEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@@Z @ 0x1802F5984 (-RuntimeClassInitialize@XamlExplorerHostWindow@@QEAAJPEAUIXamlExplorerHostWindowCreatedCallback@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<XamlExplorerHostWindow,XamlExplorerHostWindow,IXamlExplorerHostWindowCreatedCallback * &,unsigned long &,IPrivilegedPresentationOperations * &,IXamlExplorerHost * &>(
        XamlExplorerHostWindow **a1,
        struct IXamlExplorerHostWindowCreatedCallback **a2,
        unsigned int *a3,
        struct IPrivilegedPresentationOperations **a4,
        struct IXamlExplorerHost **a5)
{
  XamlExplorerHostWindow *v9; // rax
  int v10; // ebx
  XamlExplorerHostWindow *v11; // rsi
  struct IPrivilegedPresentationOperations *v12; // r9
  unsigned int v13; // r8d
  struct IXamlExplorerHostWindowCreatedCallback *v14; // rdx
  struct IXamlExplorerHost *v16; // [rsp+20h] [rbp-28h]
  XamlExplorerHostWindow *v17; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (XamlExplorerHostWindow *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v11 = XamlExplorerHostWindow::XamlExplorerHostWindow(v9);
    v12 = *a4;
    v13 = *a3;
    v14 = *a2;
    v16 = *a5;
    v17 = v11;
    v10 = XamlExplorerHostWindow::RuntimeClassInitialize(v11, v14, v13, v12, v16);
    if ( v10 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
      v10 = 0;
      *a1 = v11;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
