/*
 * XREFs of NtUserGetExtendedPointerDeviceProperty @ 0x1C0139290
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0070320 (HMValidateHandle.c)
 *     EnterSharedCrit @ 0x1C008A1D0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     RIMGetExtendedPointerDeviceProperty @ 0x1C0174058 (RIMGetExtendedPointerDeviceProperty.c)
 */

__int64 __fastcall NtUserGetExtendedPointerDeviceProperty(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rcx
  ULONG64 v7; // rcx
  __int64 v8; // rax
  ULONG64 v9; // rdx
  NTSTATUS v10; // eax
  __int128 v12; // [rsp+30h] [rbp-58h] BYREF
  int v13; // [rsp+40h] [rbp-48h]
  __int128 v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+70h] [rbp-18h]

  EnterSharedCrit(0LL, 1);
  v12 = 0LL;
  v13 = 0;
  v5 = 0;
  if ( !a2 )
    goto LABEL_2;
  v8 = HMValidateHandle(a1, 0x13u);
  if ( !v8 )
  {
    v6 = 6LL;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(v8 + 200) & 0x80u) == 0 )
  {
LABEL_2:
    v6 = 87LL;
LABEL_3:
    UserSetLastError(v6, v4);
    goto LABEL_15;
  }
  v9 = a2;
  if ( a2 + 20 < a2 || a2 + 20 > MmUserProbeAddress )
    v9 = MmUserProbeAddress;
  v14 = *(_OWORD *)v9;
  v15 = *(_DWORD *)(v9 + 16);
  v12 = v14;
  v13 = v15;
  v10 = RIMGetExtendedPointerDeviceProperty(*(_QWORD *)(v8 + 480), &v12);
  if ( v10 < 0 )
  {
    v6 = RtlNtStatusToDosError(v10);
    goto LABEL_3;
  }
  v7 = MmUserProbeAddress;
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  *(_OWORD *)a2 = v12;
  *(_DWORD *)(a2 + 16) = v13;
  v5 = 1;
LABEL_15:
  UserSessionSwitchLeaveCrit(v7);
  return v5;
}
