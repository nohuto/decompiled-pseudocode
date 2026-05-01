/*
 * XREFs of ??_GXamlAllUpViewHost@@UEAAPEAXI@Z @ 0x1802FE610
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1XamlAllUpViewHost@@UEAA@XZ @ 0x1802FC788 (--1XamlAllUpViewHost@@UEAA@XZ.c)
 */

XamlAllUpViewHost *__fastcall XamlAllUpViewHost::`scalar deleting destructor'(XamlAllUpViewHost *this, char a2)
{
  XamlAllUpViewHost::~XamlAllUpViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2C8);
  return this;
}
