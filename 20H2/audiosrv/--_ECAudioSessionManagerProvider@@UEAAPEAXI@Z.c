/*
 * XREFs of ??_ECAudioSessionManagerProvider@@UEAAPEAXI@Z @ 0x1800D0D20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAudioSessionManagerProvider@@UEAA@XZ @ 0x1800D0B20 (--1CAudioSessionManagerProvider@@UEAA@XZ.c)
 */

CAudioSessionManagerProvider *__fastcall CAudioSessionManagerProvider::`vector deleting destructor'(
        CAudioSessionManagerProvider *this,
        char a2)
{
  CAudioSessionManagerProvider::~CAudioSessionManagerProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
