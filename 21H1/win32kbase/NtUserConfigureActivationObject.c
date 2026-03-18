/*
 * XREFs of NtUserConfigureActivationObject @ 0x1C0137E60
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_STATE@@2@Z @ 0x1C0132B20 (-ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHAN.c)
 */

__int64 __fastcall NtUserConfigureActivationObject(struct _LUID *a1, unsigned int a2, unsigned int a3, int a4)
{
  int v8; // ebx
  ULONG64 v9; // rcx
  NTSTATUS v10; // eax
  __int64 v11; // rcx
  ULONG v12; // eax
  __int64 v13; // rdx
  struct _LUID v15; // [rsp+40h] [rbp-18h] BYREF

  v8 = 1;
  EnterCrit(0LL, 1);
  v15 = 0LL;
  v9 = (ULONG64)&a1[1];
  if ( &a1[1] < a1 || v9 > MmUserProbeAddress )
    a1 = (struct _LUID *)MmUserProbeAddress;
  v15 = *a1;
  v10 = CActivationObjectManager::ConfigureActivationObject(v9, &v15, a2, a3, a4);
  if ( v10 < 0 )
  {
    v8 = 0;
    v12 = RtlNtStatusToDosError(v10);
    UserSetLastError(v12, v13);
  }
  UserSessionSwitchLeaveCrit(v11);
  return v8;
}
