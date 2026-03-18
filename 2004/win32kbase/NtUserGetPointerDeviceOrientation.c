/*
 * XREFs of NtUserGetPointerDeviceOrientation @ 0x1C0133B60
 * Callers:
 *     <none>
 * Callees:
 *     ResolveMouseOrPointerDevice @ 0x1C0056940 (ResolveMouseOrPointerDevice.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00747EC (_anonymous_namespace_--GetMouseProcessor.c)
 *     EnterSharedCrit @ 0x1C0091220 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetPointerDeviceOrientation(__int64 a1, _DWORD *a2)
{
  int v4; // esi
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG64 v9; // rcx
  __int64 MouseProcessor; // rax
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF
  int v14; // [rsp+78h] [rbp+20h]

  EnterSharedCrit(0LL, 1);
  v4 = 1;
  v14 = 1;
  v5 = 0;
  v12[0] = 0LL;
  v13 = 0;
  if ( (unsigned int)ResolveMouseOrPointerDevice(a1, v12, &v13) )
  {
    if ( v13 || *(_DWORD *)(v12[0] + 24LL) == 7 )
    {
      MouseProcessor = anonymous_namespace_::GetMouseProcessor();
      if ( MouseProcessor )
        v4 = *(_DWORD *)(MouseProcessor + 2792);
      v14 = v4;
    }
    v9 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = v4;
    v5 = 1;
  }
  else
  {
    UserSetLastError(6LL, v6);
  }
  UserSessionSwitchLeaveCrit(v9, v6, v7, v8);
  return v5;
}
