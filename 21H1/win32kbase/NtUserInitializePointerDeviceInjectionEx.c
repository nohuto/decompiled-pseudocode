/*
 * XREFs of NtUserInitializePointerDeviceInjectionEx @ 0x1C013ADF0
 * Callers:
 *     NtUserInitializePointerDeviceInjection @ 0x1C013ADC0 (NtUserInitializePointerDeviceInjection.c)
 * Callees:
 *     HMValidateSharedHandle @ 0x1C006DE88 (HMValidateSharedHandle.c)
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     NtUserRemoveInjectionDevice @ 0x1C013D420 (NtUserRemoveInjectionDevice.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C016F7C8 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C0173AE4 (RIMIDE_InitializePointerDeviceInjection.c)
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
  _QWORD *v14; // rcx
  int v15; // ebx
  __int64 v17; // [rsp+50h] [rbp-18h] BYREF

  EnterCrit(0LL, 1);
  v10 = 0;
  v17 = 0LL;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v12 = 5LL;
LABEL_18:
    v15 = 0;
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
    v15 = RIMIDE_InitializePointerDeviceInjection(a1, a2, v10, a4, 0, a5, (__int64)&v17);
    if ( v15 )
    {
      v14 = a6;
      if ( (unsigned __int64)a6 >= MmUserProbeAddress )
        v14 = (_QWORD *)MmUserProbeAddress;
      *v14 = *v14;
      *a6 = v17;
    }
  }
  else
  {
    v15 = 0;
  }
LABEL_19:
  UserSessionSwitchLeaveCrit((__int64)v14);
  return v15;
}
