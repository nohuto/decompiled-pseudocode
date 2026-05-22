/*
 * XREFs of ??_EMPCInputProviderBase@@UEAAPEAXI@Z @ 0x18007DC20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x1800836C4 (--1MPCInputProviderBase@@UEAA@XZ.c)
 */

MPCInputProviderBase *__fastcall MPCInputProviderBase::`vector deleting destructor'(
        MPCInputProviderBase *this,
        char a2)
{
  MPCInputProviderBase::~MPCInputProviderBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1210);
  return this;
}
