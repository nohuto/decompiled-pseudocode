/*
 * XREFs of _NtUserUpdatePerUserSystemParameters@4 @ 0xD7846
 * Callers:
 *     <none>
 * Callees:
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall NtUserUpdatePerUserSystemParameters(int a1)
{
  int updated; // esi
  union _LARGE_INTEGER CurrentTime; // [esp+8h] [ebp-50h] BYREF
  _DWORD v4[17]; // [esp+10h] [ebp-48h] BYREF

  memset(v4, 0, 0x40u);
  EtwActivityIdControl(3u, (LPGUID)&v4[1]);
  CurrentTime.QuadPart = 0LL;
  KeQuerySystemTime(&CurrentTime);
  *(union _LARGE_INTEGER *)&v4[14] = CurrentTime;
  v4[5] = 32;
  LOBYTE(v4[11]) = -1;
  EnterCrit(0, 1);
  updated = xxxUpdatePerUserSystemParameters(a1, v4);
  UserSessionSwitchLeaveCrit();
  return updated;
}
