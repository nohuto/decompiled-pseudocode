/*
 * XREFs of ??_GResultException@wil@@UEAAPEAXI@Z @ 0x1400306B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C938 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ResultException@wil@@UEAA@XZ @ 0x140030598 (--1ResultException@wil@@UEAA@XZ.c)
 */

wil::ResultException *__fastcall wil::ResultException::`scalar deleting destructor'(
        wil::ResultException *this,
        char a2)
{
  wil::ResultException::~ResultException(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
