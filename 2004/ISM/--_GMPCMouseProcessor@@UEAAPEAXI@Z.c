/*
 * XREFs of ??_GMPCMouseProcessor@@UEAAPEAXI@Z @ 0x180194CA8
 * Callers:
 *     ??_EMPCMouseProcessor@@WBA@EAAPEAXI@Z @ 0x18004D230 (--_EMPCMouseProcessor@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCMouseProcessor@@UEAA@XZ @ 0x180194B24 (--1MPCMouseProcessor@@UEAA@XZ.c)
 */

MPCMouseProcessor *__fastcall MPCMouseProcessor::`scalar deleting destructor'(MPCMouseProcessor *this, char a2)
{
  MPCMouseProcessor::~MPCMouseProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20F8);
  return this;
}
