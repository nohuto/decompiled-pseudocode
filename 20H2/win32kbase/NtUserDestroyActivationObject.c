/*
 * XREFs of NtUserDestroyActivationObject @ 0x1C0005140
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x1C004B1D0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ?DestroyActivationObjectInternal@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C0091868 (-DestroyActivationObjectInternal@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 *     ?GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z @ 0x1C0092314 (-GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z.c)
 */

__int64 __fastcall NtUserDestroyActivationObject(struct _LUID *a1)
{
  int v2; // edi
  struct CActivationObject *ActivationObjectFromLuid; // rax
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  ULONG v7; // eax
  struct _LUID v8; // [rsp+58h] [rbp+10h] BYREF

  v2 = 1;
  EnterSharedCrit(0LL, 1LL);
  v8 = 0LL;
  if ( &a1[1] < a1 || (unsigned __int64)&a1[1] > MmUserProbeAddress )
    a1 = (struct _LUID *)MmUserProbeAddress;
  v8 = *a1;
  ActivationObjectFromLuid = CActivationObjectManager::GetActivationObjectFromLuid(qword_1C024A720, &v8);
  v4 = CActivationObjectManager::DestroyActivationObjectInternal(qword_1C024A720, ActivationObjectFromLuid);
  if ( v4 < 0 )
  {
    v2 = 0;
    v7 = RtlNtStatusToDosError(v4);
    UserSetLastError(v7);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v2;
}
