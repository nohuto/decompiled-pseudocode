/*
 * XREFs of NtUserGetPointerDeviceInputSpace @ 0x1C0133A70
 * Callers:
 *     <none>
 * Callees:
 *     ResolveMouseOrPointerDevice @ 0x1C0056940 (ResolveMouseOrPointerDevice.c)
 *     ?GetInputSpaceId@Mouse@InputConfig@@SA?AU_LUID@@XZ @ 0x1C006EF60 (-GetInputSpaceId@Mouse@InputConfig@@SA-AU_LUID@@XZ.c)
 *     EnterSharedCrit @ 0x1C0091220 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetPointerDeviceInputSpace(__int64 a1, struct _LUID *a2)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  ULONG64 v8; // rdx
  ULONG64 v9; // rcx
  struct _LUID InputSpaceId; // rax
  int v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  EnterSharedCrit(0LL, 1);
  v4 = 0;
  v13 = 0LL;
  v12 = 0;
  if ( (unsigned int)ResolveMouseOrPointerDevice(a1, &v13, &v12) )
  {
    if ( v12 )
      InputSpaceId = InputConfig::Mouse::GetInputSpaceId();
    else
      InputSpaceId = *(struct _LUID *)(v13 + 228);
    v9 = MmUserProbeAddress;
    v8 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (struct _LUID *)MmUserProbeAddress;
    *a2 = InputSpaceId;
    v4 = 1;
  }
  else
  {
    UserSetLastError(6LL, v5);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v6, v7);
  return v4;
}
