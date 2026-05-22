/*
 * XREFs of ??_EMPCButtonHoldHelper@@UEAAPEAXI@Z @ 0x180084F70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

MPCButtonHoldHelper *__fastcall MPCButtonHoldHelper::`vector deleting destructor'(MPCButtonHoldHelper *this, char a2)
{
  *(_QWORD *)this = &MPCButtonHoldHelper::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
