/*
 * XREFs of ??_GSipcPort@@UEAAPEAXI@Z @ 0x1800BF1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SipcPort@@UEAA@XZ @ 0x1800BEE8C (--1SipcPort@@UEAA@XZ.c)
 */

SipcPort *__fastcall SipcPort::`scalar deleting destructor'(SipcPort *this, char a2)
{
  SipcPort::~SipcPort(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
