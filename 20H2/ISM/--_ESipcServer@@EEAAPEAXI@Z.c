/*
 * XREFs of ??_ESipcServer@@EEAAPEAXI@Z @ 0x1800BF1B0
 * Callers:
 *     ??_ESipcServer@@GBI@EAAPEAXI@Z @ 0x18004B000 (--_ESipcServer@@GBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SipcServer@@EEAA@XZ @ 0x1800BEECC (--1SipcServer@@EEAA@XZ.c)
 */

SipcServer *__fastcall SipcServer::`vector deleting destructor'(SipcServer *this, char a2)
{
  SipcServer::~SipcServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC0);
  return this;
}
