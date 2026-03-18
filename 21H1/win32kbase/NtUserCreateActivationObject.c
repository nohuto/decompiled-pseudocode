/*
 * XREFs of NtUserCreateActivationObject @ 0x1C003F6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAX_KAEAU_LUID@@@Z @ 0x1C0018014 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAX_KAEAU_LUI.c)
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 */

__int64 __fastcall NtUserCreateActivationObject(void *a1, unsigned __int64 *a2, ULONG_PTR a3)
{
  struct _LUID *v3; // rsi
  struct _OBJECT_ATTRIBUTES *v6; // rdx
  struct _OBJECT_ATTRIBUTES *v7; // r8
  char v8; // r9
  int v9; // ebx
  NTSTATUS v10; // eax
  ULONG64 v11; // rcx
  __int64 v13; // rcx
  char v14; // [rsp+20h] [rbp-68h]
  struct _LUID v15; // [rsp+90h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp+18h]

  BugCheckParameter2 = a3;
  v3 = (struct _LUID *)a3;
  EnterCrit(0LL, 1LL);
  v9 = 0;
  v15 = 0LL;
  if ( !a1 )
  {
    v13 = 87LL;
LABEL_12:
    UserSetLastError(v13);
    goto LABEL_9;
  }
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    a2 = (unsigned __int64 *)MmUserProbeAddress;
  v10 = CActivationObjectManager::CreateActivationObject(
          (CActivationObjectManager *)&v15,
          v6,
          v7,
          v8,
          v14,
          a1,
          *a2,
          &v15);
  if ( v10 < 0 )
  {
    v13 = RtlNtStatusToDosError(v10);
    goto LABEL_12;
  }
  v9 = 1;
  v11 = MmUserProbeAddress;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (struct _LUID *)MmUserProbeAddress;
  *v3 = v15;
LABEL_9:
  UserSessionSwitchLeaveCrit(v11);
  return v9;
}
