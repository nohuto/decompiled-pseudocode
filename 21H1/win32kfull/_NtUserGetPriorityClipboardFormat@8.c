/*
 * XREFs of _NtUserGetPriorityClipboardFormat@8 @ 0x1641D6
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     __GetPriorityClipboardFormat@8 @ 0x182ECD (__GetPriorityClipboardFormat@8.c)
 */

int __stdcall NtUserGetPriorityClipboardFormat(volatile void *Address, unsigned int a2)
{
  int PriorityClipboardFormat; // [esp+14h] [ebp-20h]

  EnterSharedCrit(0, 1);
  if ( a2 > 0x3FFFFFFF )
    ExRaiseAccessViolation();
  ProbeForRead(Address, 4 * a2, 1u);
  PriorityClipboardFormat = _GetPriorityClipboardFormat(Address, a2);
  UserSessionSwitchLeaveCrit();
  return PriorityClipboardFormat;
}
