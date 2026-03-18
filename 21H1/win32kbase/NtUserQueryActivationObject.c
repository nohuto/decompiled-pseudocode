/*
 * XREFs of NtUserQueryActivationObject @ 0x1C0040320
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@AEAU_tagActivationObjectInformation@@@Z @ 0x1C001880C (-QueryActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@AEAU_tagActivationObjectInforma.c)
 *     EnterSharedCrit @ 0x1C008A1D0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 */

__int64 __fastcall NtUserQueryActivationObject(struct _LUID *a1, _OWORD *a2)
{
  int v4; // ebx
  CActivationObjectManager *v5; // rcx
  NTSTATUS v6; // eax
  ULONG64 v7; // rcx
  ULONG v9; // eax
  __int128 v10; // [rsp+50h] [rbp-18h] BYREF
  struct _LUID v11; // [rsp+80h] [rbp+18h] BYREF

  v4 = 1;
  EnterSharedCrit(0LL, 1LL);
  v11 = 0LL;
  v10 = 0LL;
  v5 = (CActivationObjectManager *)&a1[1];
  if ( &a1[1] < a1 || (unsigned __int64)v5 > MmUserProbeAddress )
    a1 = (struct _LUID *)MmUserProbeAddress;
  v11 = *a1;
  v6 = CActivationObjectManager::QueryActivationObject(v5, &v11, (struct _tagActivationObjectInformation *)&v10);
  if ( v6 < 0 )
  {
    v4 = 0;
    v9 = RtlNtStatusToDosError(v6);
    UserSetLastError(v9);
  }
  else
  {
    v7 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_OWORD *)MmUserProbeAddress;
    *a2 = v10;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v4;
}
