/*
 * XREFs of NtUserInitializePointerDeviceInjectionEx @ 0x1C0132E00
 * Callers:
 *     NtUserInitializePointerDeviceInjection @ 0x1C0132DD0 (NtUserInitializePointerDeviceInjection.c)
 * Callees:
 *     HMValidateSharedHandle @ 0x1C0032848 (HMValidateSharedHandle.c)
 *     EnterCrit @ 0x1C0045880 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     NtUserRemoveInjectionDevice @ 0x1C0135430 (NtUserRemoveInjectionDevice.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C0166F18 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C016B234 (RIMIDE_InitializePointerDeviceInjection.c)
 */

__int64 __fastcall NtUserInitializePointerDeviceInjectionEx(
        int a1,
        int a2,
        unsigned __int64 a3,
        int a4,
        int a5,
        _QWORD *a6)
{
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  ULONG64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ebx
  __int64 v20; // [rsp+50h] [rbp-18h] BYREF

  EnterCrit(0, 1);
  v10 = 0;
  v20 = 0LL;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v12 = 5LL;
LABEL_18:
    v18 = 0;
    UserSetLastError(v12, v11);
    goto LABEL_19;
  }
  if ( a1 == 3 )
  {
    if ( a2 != 1 )
      goto LABEL_17;
  }
  else if ( a1 != 2 || (unsigned int)(a2 - 1) > 0xFF )
  {
    goto LABEL_17;
  }
  if ( (unsigned int)(a4 - 1) > 2 )
  {
LABEL_17:
    v12 = 87LL;
    goto LABEL_18;
  }
  if ( !a3 || (v13 = HMValidateSharedHandle(a3), v10 = v13, v13) )
  {
    v18 = RIMIDE_InitializePointerDeviceInjection(a1, a2, v10, a4, 0, a5, (__int64)&v20);
    if ( v18 )
    {
      v16 = (__int64)a6;
      v14 = MmUserProbeAddress;
      v15 = a6;
      if ( (unsigned __int64)a6 >= MmUserProbeAddress )
        v15 = (_QWORD *)MmUserProbeAddress;
      *v15 = *v15;
      *a6 = v20;
    }
  }
  else
  {
    v18 = 0;
  }
LABEL_19:
  UserSessionSwitchLeaveCrit((__int64)v15, v14, v16, v17);
  return v18;
}
