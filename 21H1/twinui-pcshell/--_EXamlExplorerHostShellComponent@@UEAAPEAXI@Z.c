/*
 * XREFs of ??_EXamlExplorerHostShellComponent@@UEAAPEAXI@Z @ 0x1802C793C
 * Callers:
 *     ??_EXamlExplorerHostShellComponent@@WDA@EAAPEAXI@Z @ 0x1800D2F50 (--_EXamlExplorerHostShellComponent@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1XamlExplorerHostShellComponent@@UEAA@XZ @ 0x1802C75A8 (--1XamlExplorerHostShellComponent@@UEAA@XZ.c)
 */

XamlExplorerHostShellComponent *__fastcall XamlExplorerHostShellComponent::`vector deleting destructor'(
        XamlExplorerHostShellComponent *this,
        char a2)
{
  XamlExplorerHostShellComponent::~XamlExplorerHostShellComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF8);
  return this;
}
