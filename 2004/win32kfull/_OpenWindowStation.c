/*
 * XREFs of _OpenWindowStation @ 0x1C00C5234
 * Callers:
 *     NtUserOpenWindowStation @ 0x1C00C4110 (NtUserOpenWindowStation.c)
 *     xxxResolveDesktop @ 0x1C00C45C0 (xxxResolveDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01EA074 (xxxResolveDesktopForWOW.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall OpenWindowStation(__int64 a1, int a2, __int64 a3)
{
  NTSTATUS v3; // eax
  ULONG v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0LL;
  LOBYTE(a3) = 1;
  v3 = ObOpenObjectByName(a1, ExWindowStationObjectType, a3, 0LL, a2, 0LL, &v8);
  if ( v3 < 0 )
  {
    v5 = RtlNtStatusToDosError(v3);
    UserSetLastError(v5, v6, v7);
    return 0LL;
  }
  return v8;
}
