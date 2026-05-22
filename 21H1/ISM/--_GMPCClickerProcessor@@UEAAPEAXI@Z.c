/*
 * XREFs of ??_GMPCClickerProcessor@@UEAAPEAXI@Z @ 0x1801986F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x1800836C4 (--1MPCInputProviderBase@@UEAA@XZ.c)
 */

MPCClickerProcessor *__fastcall MPCClickerProcessor::`scalar deleting destructor'(MPCClickerProcessor *this, char a2)
{
  *((_DWORD *)this + 1157) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1268);
  return this;
}
