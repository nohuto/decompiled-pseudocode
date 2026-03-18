/*
 * XREFs of _NtUserGetClipboardFormatName@12 @ 0xAE72A
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserGetClipboardFormatName(unsigned __int16 a1, volatile void *Address, unsigned int a3)
{
  int v3; // esi

  v3 = 0;
  if ( a3 > 0x7FFFFFFF )
    ExRaiseAccessViolation();
  ProbeForWrite(Address, 2 * a3, 1u);
  if ( a1 >= 0xC000u )
    return UserGetAtomName(a1, Address, a3);
  UserSetLastError((struct _NT_TIB *)0x57);
  return v3;
}
