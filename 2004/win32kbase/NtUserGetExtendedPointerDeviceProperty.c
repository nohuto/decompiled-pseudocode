/*
 * XREFs of NtUserGetExtendedPointerDeviceProperty @ 0x1C01335F0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0074300 (HMValidateHandle.c)
 *     EnterSharedCrit @ 0x1C0091220 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     RIMGetExtendedPointerDeviceProperty @ 0x1C016DD30 (RIMGetExtendedPointerDeviceProperty.c)
 */

__int64 __fastcall NtUserGetExtendedPointerDeviceProperty(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  ULONG64 v12; // rdx
  NTSTATUS v13; // eax
  __int128 v15; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+40h] [rbp-48h]
  __int128 v17; // [rsp+60h] [rbp-28h]
  int v18; // [rsp+70h] [rbp-18h]

  EnterSharedCrit(0LL, 1);
  v15 = 0LL;
  v16 = 0;
  v5 = 0;
  if ( !a2 )
    goto LABEL_2;
  v11 = HMValidateHandle(a1, 0x13u);
  if ( !v11 )
  {
    v6 = 6LL;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(v11 + 200) & 0x80u) == 0 )
  {
LABEL_2:
    v6 = 87LL;
LABEL_3:
    UserSetLastError(v6, v4);
    goto LABEL_15;
  }
  v12 = a2;
  if ( a2 + 20 < a2 || a2 + 20 > MmUserProbeAddress )
    v12 = MmUserProbeAddress;
  v17 = *(_OWORD *)v12;
  v18 = *(_DWORD *)(v12 + 16);
  v15 = v17;
  v16 = v18;
  v13 = RIMGetExtendedPointerDeviceProperty(*(_QWORD *)(v11 + 480), &v15);
  if ( v13 < 0 )
  {
    v6 = RtlNtStatusToDosError(v13);
    goto LABEL_3;
  }
  v8 = MmUserProbeAddress;
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  *(_OWORD *)a2 = v15;
  *(_DWORD *)(a2 + 16) = v16;
  v5 = 1;
LABEL_15:
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v5;
}
