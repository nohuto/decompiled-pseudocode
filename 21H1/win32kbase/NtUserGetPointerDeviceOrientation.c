/*
 * XREFs of NtUserGetPointerDeviceOrientation @ 0x1C0139800
 * Callers:
 *     <none>
 * Callees:
 *     ResolveMouseOrPointerDevice @ 0x1C0048F70 (ResolveMouseOrPointerDevice.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00718AC (_anonymous_namespace_--GetMouseProcessor.c)
 *     EnterSharedCrit @ 0x1C008A1D0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetPointerDeviceOrientation(__int64 a1, _DWORD *a2)
{
  int v4; // esi
  int v5; // edi
  __int64 v6; // rdx
  ULONG64 v7; // rcx
  __int64 MouseProcessor; // rax
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF
  int v12; // [rsp+78h] [rbp+20h]

  EnterSharedCrit(0LL, 1);
  v4 = 1;
  v12 = 1;
  v5 = 0;
  v10[0] = 0LL;
  v11 = 0;
  if ( (unsigned int)ResolveMouseOrPointerDevice(a1, v10, &v11) )
  {
    if ( v11 || *(_DWORD *)(v10[0] + 24LL) == 7 )
    {
      MouseProcessor = anonymous_namespace_::GetMouseProcessor();
      if ( MouseProcessor )
        v4 = *(_DWORD *)(MouseProcessor + 2792);
      v12 = v4;
    }
    v7 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = v4;
    v5 = 1;
  }
  else
  {
    UserSetLastError(6LL, v6);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v5;
}
