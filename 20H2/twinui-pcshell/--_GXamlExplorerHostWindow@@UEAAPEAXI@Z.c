/*
 * XREFs of ??_GXamlExplorerHostWindow@@UEAAPEAXI@Z @ 0x1802ECDA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1XamlExplorerHostWindow@@UEAA@XZ @ 0x1802F4640 (--1XamlExplorerHostWindow@@UEAA@XZ.c)
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
