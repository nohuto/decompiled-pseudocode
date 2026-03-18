/*
 * XREFs of __OpenWindowStation@12 @ 0x7E7F2
 * Callers:
 *     _NtUserOpenWindowStation@8 @ 0x7DBDA (_NtUserOpenWindowStation@8.c)
 *     _xxxResolveDesktop@20 @ 0x7DE28 (_xxxResolveDesktop@20.c)
 *     _xxxResolveDesktopForWOW@4 @ 0x154BAD (_xxxResolveDesktopForWOW@4.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall _OpenWindowStation(int a1, int a2, int a3)
{
  NTSTATUS v3; // eax
  ULONG v5; // eax
  int v6; // [esp+14h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

  v6 = 0;
  v3 = ObOpenObjectByName(a1, ExWindowStationObjectType, 1, 0, a2, 0, &v6);
  if ( v3 < 0 )
  {
    ms_exc.registration.TryLevel = 0;
    v5 = RtlNtStatusToDosError(v3);
    UserSetLastError(v5);
    ms_exc.registration.TryLevel = -2;
    return 0;
  }
  return v6;
}
