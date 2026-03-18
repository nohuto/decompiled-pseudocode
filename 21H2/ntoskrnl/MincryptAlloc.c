/*
 * XREFs of MincryptAlloc @ 0x140A34108
 * Callers:
 *     SymCryptCallbackAlloc @ 0x140656B70 (SymCryptCallbackAlloc.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall MincryptAlloc(__int64 a1)
{
  return ExAllocatePool2(258LL, a1, 1919109443LL);
}
