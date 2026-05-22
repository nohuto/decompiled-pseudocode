/*
 * XREFs of ??_GMPCGamepadProcessor@@UEAAPEAXI@Z @ 0x180191C94
 * Callers:
 *     ??_EMPCGamepadProcessor@@W7EAAPEAXI@Z @ 0x18004D150 (--_EMPCGamepadProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCGamepadProcessor@@UEAA@XZ @ 0x1801918FC (--1MPCGamepadProcessor@@UEAA@XZ.c)
 */

MPCGamepadProcessor *__fastcall MPCGamepadProcessor::`scalar deleting destructor'(MPCGamepadProcessor *this, char a2)
{
  MPCGamepadProcessor::~MPCGamepadProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1450);
  return this;
}
