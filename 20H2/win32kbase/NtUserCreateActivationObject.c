/*
 * XREFs of NtUserCreateActivationObject @ 0x1C00AD380
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0045880 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAX_KAEAU_LUID@@@Z @ 0x1C0091A34 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAX_KAEAU_LUI.c)
 */

__int64 __fastcall NtUserCreateActivationObject(void *a1, unsigned __int64 *a2, ULONG_PTR a3)
{
  struct _LUID *v3; // rsi
  struct _OBJECT_ATTRIBUTES *v6; // rdx
  struct _OBJECT_ATTRIBUTES *v7; // r8
  char v8; // r9
  int v9; // ebx
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  ULONG64 v14; // rcx
  __int64 v16; // rcx
  char v17; // [rsp+20h] [rbp-68h]
  struct _LUID v18; // [rsp+90h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp+18h]

  BugCheckParameter2 = a3;
  v3 = (struct _LUID *)a3;
  EnterCrit(0, 1);
  v9 = 0;
  v18 = 0LL;
  if ( !a1 )
  {
    v16 = 87LL;
LABEL_12:
    UserSetLastError(v16, (__int64)v6);
    goto LABEL_9;
  }
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    a2 = (unsigned __int64 *)MmUserProbeAddress;
  v10 = CActivationObjectManager::CreateActivationObject(
          (CActivationObjectManager *)&v18,
          v6,
          v7,
          v8,
          v17,
          a1,
          *a2,
          &v18);
  if ( v10 < 0 )
  {
    v16 = RtlNtStatusToDosError(v10);
    goto LABEL_12;
  }
  v9 = 1;
  v14 = MmUserProbeAddress;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (struct _LUID *)MmUserProbeAddress;
  *v3 = v18;
LABEL_9:
  UserSessionSwitchLeaveCrit(v14, v11, v12, v13);
  return v9;
}
