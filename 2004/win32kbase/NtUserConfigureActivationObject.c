/*
 * XREFs of NtUserConfigureActivationObject @ 0x1C0131E70
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C008B340 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_STATE@@2@Z @ 0x1C012CB30 (-ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHAN.c)
 */

__int64 __fastcall NtUserConfigureActivationObject(struct _LUID *a1, unsigned int a2, unsigned int a3, int a4)
{
  int v8; // ebx
  ULONG64 v9; // rcx
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG v15; // eax
  __int64 v16; // rdx
  struct _LUID v18; // [rsp+40h] [rbp-18h] BYREF

  v8 = 1;
  EnterCrit(0LL, 1);
  v18 = 0LL;
  v9 = (ULONG64)&a1[1];
  if ( &a1[1] < a1 || v9 > MmUserProbeAddress )
    a1 = (struct _LUID *)MmUserProbeAddress;
  v18 = *a1;
  v10 = CActivationObjectManager::ConfigureActivationObject(v9, &v18, a2, a3, a4);
  if ( v10 < 0 )
  {
    v8 = 0;
    v15 = RtlNtStatusToDosError(v10);
    UserSetLastError(v15, v16);
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v8;
}
