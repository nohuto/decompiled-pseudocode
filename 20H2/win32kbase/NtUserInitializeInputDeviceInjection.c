/*
 * XREFs of NtUserInitializeInputDeviceInjection @ 0x1C0132BA0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateSharedHandle @ 0x1C0032848 (HMValidateSharedHandle.c)
 *     EnterCrit @ 0x1C0045880 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C0059700 (Win32AllocPoolWithQuota.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C0166F18 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_InitializeDeviceInjection @ 0x1C016B0EC (RIMIDE_InitializeDeviceInjection.c)
 */

__int64 __fastcall NtUserInitializeInputDeviceInjection(
        unsigned __int16 a1,
        unsigned __int16 a2,
        char *a3,
        unsigned int a4,
        unsigned __int64 a5,
        int a6,
        _QWORD *a7)
{
  __int64 v7; // r14
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  ULONG64 v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ebx
  void *v20; // rax
  __int64 v22; // [rsp+58h] [rbp-40h]
  __int64 v23; // [rsp+60h] [rbp-38h] BYREF

  v7 = a4;
  EnterCrit(0, 1);
  v10 = 0LL;
  v11 = 0LL;
  v23 = 0LL;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v13 = 5LL;
LABEL_24:
    v19 = 0;
    UserSetLastError(v13, v12);
    goto LABEL_25;
  }
  v14 = 32 * v7;
  if ( (unsigned __int64)(32 * v7) > 0xFFFFFFFF || !(_DWORD)v7 || (unsigned int)(a6 - 1) > 2 )
  {
    v13 = 87LL;
    goto LABEL_24;
  }
  v15 = a5;
  if ( !a5 || (v11 = HMValidateSharedHandle(a5)) != 0 )
  {
    if ( v14 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v15) == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[v14] > MmUserProbeAddress || &a3[v14] < a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v20 = (void *)Win32AllocPoolWithQuota((unsigned int)v14, 0x74697355u);
    v10 = (__int64)v20;
    v22 = (__int64)v20;
    if ( !v20 )
      ExRaiseStatus(-1073741801);
    memmove(v20, a3, 32 * v7);
    v19 = RIMIDE_InitializeDeviceInjection(a1, a2, v10, (unsigned int)v7, v11, a6, &v23);
    if ( v19 )
    {
      v17 = (__int64)a7;
      v15 = MmUserProbeAddress;
      v16 = a7;
      if ( (unsigned __int64)a7 >= MmUserProbeAddress )
        v16 = (_QWORD *)MmUserProbeAddress;
      *v16 = *v16;
      *a7 = v23;
      v10 = v22;
    }
  }
  else
  {
    v19 = 0;
  }
  if ( v10 )
    Win32FreePool(v10);
LABEL_25:
  UserSessionSwitchLeaveCrit(v15, (__int64)v16, v17, v18);
  return v19;
}
