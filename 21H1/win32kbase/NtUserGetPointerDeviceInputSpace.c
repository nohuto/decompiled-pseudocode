/*
 * XREFs of NtUserGetPointerDeviceInputSpace @ 0x1C0139710
 * Callers:
 *     <none>
 * Callees:
 *     ResolveMouseOrPointerDevice @ 0x1C0048F70 (ResolveMouseOrPointerDevice.c)
 *     ?GetInputSpaceId@Mouse@InputConfig@@SA?AU_LUID@@XZ @ 0x1C0063F30 (-GetInputSpaceId@Mouse@InputConfig@@SA-AU_LUID@@XZ.c)
 *     EnterSharedCrit @ 0x1C008A1D0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetPointerDeviceInputSpace(__int64 a1, struct _LUID *a2)
{
  int v4; // edi
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  struct _LUID InputSpaceId; // rax
  int v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  EnterSharedCrit(0LL, 1);
  v4 = 0;
  v10 = 0LL;
  v9 = 0;
  if ( (unsigned int)ResolveMouseOrPointerDevice(a1, &v10, &v9) )
  {
    if ( v9 )
      InputSpaceId = InputConfig::Mouse::GetInputSpaceId();
    else
      InputSpaceId = *(struct _LUID *)(v10 + 228);
    v6 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (struct _LUID *)MmUserProbeAddress;
    *a2 = InputSpaceId;
    v4 = 1;
  }
  else
  {
    UserSetLastError(6LL, v5);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
