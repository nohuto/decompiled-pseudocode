/*
 * XREFs of NtSetPointerDeviceInputSpace @ 0x1C0137970
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00A3EC0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1C016D620 (RIMSetPointerDeviceInputSpace.c)
 */

__int64 __fastcall NtSetPointerDeviceInputSpace(char *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v6; // ebx
  PVOID v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  _BOOL8 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 *v15; // rcx
  __int128 *v16; // rdx
  NTSTATUS v17; // eax
  PVOID v19; // [rsp+20h] [rbp-78h] BYREF
  __int64 v20; // [rsp+30h] [rbp-68h] BYREF
  __int128 v21; // [rsp+50h] [rbp-48h]
  __int128 v22; // [rsp+60h] [rbp-38h] BYREF

  v6 = 1;
  EnterCrit(0LL, 1);
  v7 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  CurrentProcess = (PVOID)PsGetCurrentProcess(v9, v8);
  v11 = 0LL;
  if ( CurrentProcess )
    v11 = CurrentProcess == g_pepDwm;
  if ( !v11 )
  {
    v6 = 0;
    v12 = 5LL;
LABEL_5:
    UserSetLastError(v12, v11);
    goto LABEL_20;
  }
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &v19) >= 0 )
  {
    if ( a2 )
    {
      v15 = (__int64 *)a2;
      if ( a2 + 8 < a2 || a2 + 8 > MmUserProbeAddress )
        v15 = (__int64 *)MmUserProbeAddress;
      v20 = *v15;
    }
    if ( a3 )
    {
      v16 = (__int128 *)a3;
      if ( a3 + 16 < a3 || a3 + 16 > MmUserProbeAddress )
        v16 = (__int128 *)MmUserProbeAddress;
      v21 = *v16;
      v22 = v21;
    }
    v7 = v19;
    v17 = RIMSetPointerDeviceInputSpace(
            v19,
            (unsigned __int64)&v20 & -(__int64)(a2 != 0),
            (unsigned __int64)&v22 & -(__int64)(a3 != 0));
    if ( v17 < 0 )
    {
      v6 = 0;
      v12 = RtlNtStatusToDosError(v17);
      goto LABEL_5;
    }
  }
  else
  {
    v6 = 0;
    UserSetLastError(87LL, v14);
    v7 = v19;
  }
LABEL_20:
  if ( v7 )
    ObfDereferenceObject(v7);
  UserSessionSwitchLeaveCrit(v13);
  return v6;
}
