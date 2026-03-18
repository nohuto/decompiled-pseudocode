/*
 * XREFs of EditionHandleRawInput @ 0x1C0062080
 * Callers:
 *     ApiSetEditionHandleRawInput @ 0x1C0061F70 (ApiSetEditionHandleRawInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EditionHandleRawInput(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        int a5,
        __int64 a6,
        __int16 a7,
        unsigned __int16 a8,
        int a9,
        __int64 a10)
{
  __int64 v11; // r9

  if ( !qword_1C02593B0 )
    return 0LL;
  v11 = a8;
  LOBYTE(v11) = a4;
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, int, __int64, __int16, unsigned __int16, int, __int64))qword_1C02593B0)(
           a1,
           a2,
           a3,
           v11,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10);
}
