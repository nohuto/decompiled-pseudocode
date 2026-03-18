/*
 * XREFs of _NtUserCreateAcceleratorTable@8 @ 0xAB9D4
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __CreateAcceleratorTable@8 @ 0xABA4E (__CreateAcceleratorTable@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserCreateAcceleratorTable(volatile void *Address, unsigned int a2)
{
  int v2; // esi
  int *AcceleratorTable; // eax

  v2 = 0;
  EnterCrit(0, 1);
  if ( a2 - 1 > 0x7FFE )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  else
  {
    if ( a2 > 0x2AAAAAAA )
      ExRaiseAccessViolation();
    ProbeForRead(Address, 6 * a2, 1u);
    AcceleratorTable = (int *)_CreateAcceleratorTable(Address, 6 * a2);
    if ( AcceleratorTable )
      v2 = *AcceleratorTable;
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
