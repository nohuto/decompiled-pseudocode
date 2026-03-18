/*
 * XREFs of _NtUserGetKeyNameText@12 @ 0x16355B
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserGetKeyNameText(int a1, volatile void *Address, unsigned int a3)
{
  int KeyNameText; // esi

  EnterSharedCrit(0, 1);
  if ( a3 > 0x7FFFFFFF )
    ExRaiseAccessViolation();
  ProbeForWrite(Address, 2 * a3, 1u);
  KeyNameText = _GetKeyNameText(a1, Address, a3);
  UserSessionSwitchLeaveCrit();
  return KeyNameText;
}
