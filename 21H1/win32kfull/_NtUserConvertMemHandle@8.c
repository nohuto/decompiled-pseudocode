/*
 * XREFs of _NtUserConvertMemHandle@8 @ 0x16070E
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     __ConvertMemHandle@8 @ 0x182DD4 (__ConvertMemHandle@8.c)
 */

int __stdcall NtUserConvertMemHandle(volatile void *Address, SIZE_T Length)
{
  int v2; // esi

  EnterCrit(0, 1);
  ProbeForRead(Address, Length, 1u);
  v2 = _ConvertMemHandle(Address, Length);
  UserSessionSwitchLeaveCrit();
  return v2;
}
