/*
 * XREFs of _NtUserGetWindowCompositionInfo@8 @ 0x164C1B
 * Callers:
 *     <none>
 * Callees:
 *     __GetWindowCompositionInfo@8 @ 0x6DCA6 (__GetWindowCompositionInfo@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

BOOL __stdcall NtUserGetWindowCompositionInfo(int a1, _BYTE *a2)
{
  NTSTATUS v2; // ebx
  int v3; // eax
  struct _NT_TIB *v4; // eax
  unsigned int v6[12]; // [esp+10h] [ebp-50h] BYREF
  CPPEH_RECORD ms_exc; // [esp+48h] [ebp-18h]

  ms_exc.registration.TryLevel = 0;
  if ( (unsigned int)a2 >= _MmUserProbeAddress )
    *(_BYTE *)_MmUserProbeAddress = 0;
  *a2 = *a2;
  a2[35] = a2[35];
  v2 = 0;
  v6[11] = 0;
  ms_exc.registration.TryLevel = -2;
  memset(v6, 0, 0x24u);
  EnterSharedCrit(0, 1);
  v3 = ValidateHwnd(a1);
  if ( v3 && _GetWindowCompositionInfo(v3, v6) )
  {
    qmemcpy(a2, v6, 0x24u);
    ms_exc.registration.TryLevel = -2;
  }
  else
  {
    v2 = -1073741816;
  }
  UserSessionSwitchLeaveCrit();
  if ( v2 < 0 )
  {
    v4 = (struct _NT_TIB *)RtlNtStatusToDosError(v2);
    UserSetLastError(v4);
  }
  return v2 >= 0;
}
