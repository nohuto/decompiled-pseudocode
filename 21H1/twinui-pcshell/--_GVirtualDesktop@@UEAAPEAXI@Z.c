/*
 * XREFs of ??_GVirtualDesktop@@UEAAPEAXI@Z @ 0x180357510
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktop@@UEAA@XZ @ 0x1803573F8 (--1VirtualDesktop@@UEAA@XZ.c)
 */

VirtualDesktop *__fastcall VirtualDesktop::`scalar deleting destructor'(VirtualDesktop *this, char a2)
{
  VirtualDesktop::~VirtualDesktop(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x118);
  return this;
}
