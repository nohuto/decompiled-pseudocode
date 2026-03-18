/*
 * XREFs of EditionPostKeyboardInputMessage @ 0x1C01F7D9C
 * Callers:
 *     ApiSetEditionPostKeyboardInputMessage @ 0x1C01C98A0 (ApiSetEditionPostKeyboardInputMessage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EditionPostKeyboardInputMessage(
        unsigned int a1,
        char a2,
        __int64 a3,
        __int64 a4,
        __int16 a5,
        __int16 a6,
        unsigned __int16 a7)
{
  __int64 v8; // rdx

  if ( !qword_1C0253A68 )
    return 3221225659LL;
  v8 = a7;
  LOBYTE(v8) = a2;
  return ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))qword_1C0253A68)(a1, v8, 0LL);
}
