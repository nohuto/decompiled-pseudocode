/*
 * XREFs of ApiSetEditionPostKeyboardInputMessage @ 0x1C01C98A0
 * Callers:
 *     NtUserPostKeyboardInputMessage @ 0x1C01375E0 (NtUserPostKeyboardInputMessage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     EditionPostKeyboardInputMessage @ 0x1C01F7D9C (EditionPostKeyboardInputMessage.c)
 */

__int64 __fastcall ApiSetEditionPostKeyboardInputMessage(
        int a1,
        char a2,
        int a3,
        unsigned __int16 a4,
        __int16 a5,
        __int16 a6,
        __int16 a7,
        int a8,
        __int16 a9,
        __int64 a10)
{
  unsigned int v13; // ebx
  int v14; // eax

  v13 = -1073741637;
  if ( qword_1C0253A60 )
    v14 = qword_1C0253A60();
  else
    v14 = -1073741637;
  if ( v14 >= 0 )
    return (unsigned int)EditionPostKeyboardInputMessage(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  return v13;
}
