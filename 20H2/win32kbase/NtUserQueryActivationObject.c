/*
 * XREFs of NtUserQueryActivationObject @ 0x1C00AE040
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x1C004B1D0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ?QueryActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@AEAU_tagActivationObjectInformation@@@Z @ 0x1C009222C (-QueryActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@AEAU_tagActivationObjectInforma.c)
 */

__int64 __fastcall NtUserQueryActivationObject(struct _LUID *a1, _OWORD *a2)
{
  int v4; // ebx
  CActivationObjectManager *v5; // rcx
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  ULONG64 v10; // rcx
  ULONG v12; // eax
  __int64 v13; // rdx
  __int128 v14; // [rsp+50h] [rbp-18h] BYREF
  struct _LUID v15; // [rsp+80h] [rbp+18h] BYREF

  v4 = 1;
  EnterSharedCrit(0, 1);
  v15 = 0LL;
  v14 = 0LL;
  v5 = (CActivationObjectManager *)&a1[1];
  if ( &a1[1] < a1 || (unsigned __int64)v5 > MmUserProbeAddress )
    a1 = (struct _LUID *)MmUserProbeAddress;
  v15 = *a1;
  v6 = CActivationObjectManager::QueryActivationObject(v5, &v15, (struct _tagActivationObjectInformation *)&v14);
  if ( v6 < 0 )
  {
    v4 = 0;
    v12 = RtlNtStatusToDosError(v6);
    UserSetLastError(v12, v13);
  }
  else
  {
    v10 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_OWORD *)MmUserProbeAddress;
    *a2 = v14;
  }
  UserSessionSwitchLeaveCrit(v10, v7, v8, v9);
  return v4;
}
