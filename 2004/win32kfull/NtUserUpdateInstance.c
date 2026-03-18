/*
 * XREFs of NtUserUpdateInstance @ 0x1C0204C50
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C003109C (HMValidateHandleNoRip.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxChangeMonitorFlags @ 0x1C011DFD0 (xxxChangeMonitorFlags.c)
 */

__int64 __fastcall NtUserUpdateInstance(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v6; // ebx
  _DWORD *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // eax

  v6 = 0;
  EnterCrit(0LL, 1LL);
  v7 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v7 = (_DWORD *)MmUserProbeAddress;
  *v7 = *v7;
  v8 = HMValidateHandleNoRip(a1, 9);
  if ( v8 )
  {
    xxxChangeMonitorFlags(v8, a3);
    v12 = MonitorFlags;
  }
  else
  {
    v6 = 16390;
    v12 = 0;
  }
  *a2 = v12;
  UserSessionSwitchLeaveCrit(v10, v9, v11);
  return v6;
}
