/*
 * XREFs of KiSetControlEnforcement @ 0x14099F500
 * Callers:
 *     KiInitializeKernel @ 0x14099E6F0 (KiInitializeKernel.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall KiSetControlEnforcement(__int64 a1, _QWORD *a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v13; // rax

  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 141) - 1) <= 1u && (unsigned int)result >= 7 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RCX & 0x80u) != 0LL )
      KiCetCapable = 1;
  }
  if ( KiCetCapable && (*a2 & 0x800000LL) != 0 )
  {
    result = MEMORY[0xFFFFF780000005F0];
    if ( (MEMORY[0xFFFFF780000005F0] & 0x800) != 0 )
    {
      *a2 |= 0x400000000000uLL;
      *(_QWORD *)(a1 + 34208) |= 0x400000000000uLL;
      v13 = __readcr4();
      result = v13 | 0x800000;
      __writecr4(result);
      KiUserCetAllowed = 1;
    }
  }
  return result;
}
