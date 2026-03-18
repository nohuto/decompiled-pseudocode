/*
 * XREFs of NtSetPointerDeviceInputSpace @ 0x1C012F630
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00230E0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     EnterCrit @ 0x1C0045880 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1C0164D70 (RIMSetPointerDeviceInputSpace.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 *v18; // rcx
  __int128 *v19; // rdx
  NTSTATUS v20; // eax
  PVOID v22; // [rsp+20h] [rbp-78h] BYREF
  __int64 v23; // [rsp+30h] [rbp-68h] BYREF
  __int128 v24; // [rsp+50h] [rbp-48h]
  __int128 v25; // [rsp+60h] [rbp-38h] BYREF

  v6 = 1;
  EnterCrit(0, 1);
  v7 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v25 = 0LL;
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
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &v22) >= 0 )
  {
    if ( a2 )
    {
      v18 = (__int64 *)a2;
      if ( a2 + 8 < a2 || a2 + 8 > MmUserProbeAddress )
        v18 = (__int64 *)MmUserProbeAddress;
      v23 = *v18;
    }
    if ( a3 )
    {
      v19 = (__int128 *)a3;
      if ( a3 + 16 < a3 || a3 + 16 > MmUserProbeAddress )
        v19 = (__int128 *)MmUserProbeAddress;
      v24 = *v19;
      v25 = v24;
    }
    v7 = v22;
    v20 = RIMSetPointerDeviceInputSpace(
            v22,
            (unsigned __int64)&v23 & -(__int64)(a2 != 0),
            (unsigned __int64)&v25 & -(__int64)(a3 != 0));
    if ( v20 < 0 )
    {
      v6 = 0;
      v12 = RtlNtStatusToDosError(v20);
      goto LABEL_5;
    }
  }
  else
  {
    v6 = 0;
    UserSetLastError(87LL, v17);
    v7 = v22;
  }
LABEL_20:
  if ( v7 )
    ObfDereferenceObject(v7);
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v6;
}
