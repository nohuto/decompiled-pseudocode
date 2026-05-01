/*
 * XREFs of ??_GXamlExplorerHostWindow@@UEAAPEAXI@Z @ 0x1802CBAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1XamlExplorerHostWindow@@UEAA@XZ @ 0x1802D3390 (--1XamlExplorerHostWindow@@UEAA@XZ.c)
 */

XamlExplorerHostWindow *__fastcall XamlExplorerHostWindow::`scalar deleting destructor'(
        XamlExplorerHostWindow *this,
        char a2)
{
  XamlExplorerHostWindow::~XamlExplorerHostWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
