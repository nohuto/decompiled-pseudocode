/*
 * XREFs of ??0critical_section@wil@@QEAA@K@Z @ 0x180063F0C
 * Callers:
 *     ?Create@VirtualTouchpadContextProvider@@CAJPEAPEAV1@@Z @ 0x18014578C (-Create@VirtualTouchpadContextProvider@@CAJPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

struct _RTL_CRITICAL_SECTION *__fastcall wil::critical_section::critical_section(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSectionEx(this, 0, 0);
  return this;
}
