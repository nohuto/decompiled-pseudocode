/*
 * XREFs of NtUserInitializeGenericHidInjection @ 0x1C0134B80
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C008B340 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C0098C10 (Win32AllocPoolWithQuota.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C0169478 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_CreateGenericHidDevice @ 0x1C016D500 (RIMIDE_CreateGenericHidDevice.c)
 */

__int64 __fastcall NtUserInitializeGenericHidInjection(_OWORD *a1, _QWORD *a2)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID CurrentProcess; // rax
  __int64 v8; // rcx
  BOOL v9; // edx
  __int64 v10; // rdx
  ULONG64 v11; // rdx
  ULONG64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _OWORD *v15; // rcx
  unsigned __int16 epi16; // r14
  __int64 CurrentProcessWow64Process; // rax
  size_t v18; // rsi
  __int64 v19; // rax
  const void *v20; // r15
  __int64 v21; // rdx
  const void *v22; // r15
  char v24; // [rsp+20h] [rbp-98h]
  char v25; // [rsp+21h] [rbp-97h]
  _OWORD v26[6]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v27; // [rsp+D0h] [rbp+18h] BYREF

  v4 = 1;
  EnterCrit(0LL, 1);
  v27 = 0LL;
  memset(v26, 0, 0x40uLL);
  v24 = 0;
  v25 = 0;
  CurrentProcess = (PVOID)PsGetCurrentProcess(v6, v5);
  v9 = 0;
  if ( CurrentProcess )
    v9 = CurrentProcess == g_pepDwm;
  if ( !v9 && !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v4 = 0;
    UserSetLastError(5LL, v10);
    goto LABEL_40;
  }
  if ( ((PsGetCurrentProcessWow64Process(v8) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = a1 + 4;
  v11 = MmUserProbeAddress;
  if ( (unsigned __int64)(a1 + 4) > MmUserProbeAddress || v15 < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v26[0] = *a1;
  v26[1] = a1[1];
  v26[2] = a1[2];
  v26[3] = a1[3];
  epi16 = _mm_extract_epi16((__m128i)v26[3], 4);
  if ( epi16 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v15);
    if ( ((CurrentProcessWow64Process == 0 ? 3 : 0) & LOBYTE(v26[3])) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = *(_OWORD **)&v26[3];
    v11 = *(_QWORD *)&v26[3] + epi16;
    if ( v11 > MmUserProbeAddress || v11 < *(_QWORD *)&v26[3] )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v18 = WORD4(v26[2]);
  if ( !WORD4(v26[2]) )
    goto LABEL_27;
  v19 = PsGetCurrentProcessWow64Process(v15);
  if ( ((v19 == 0 ? 3 : 0) & LOBYTE(v26[2])) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = *(_QWORD *)&v26[2] + v18;
  if ( *(_QWORD *)&v26[2] + v18 > MmUserProbeAddress || v11 < *(_QWORD *)&v26[2] )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( !(_WORD)v18 )
  {
LABEL_27:
    if ( epi16 )
    {
      v22 = *(const void **)&v26[3];
      *(_QWORD *)&v26[3] = Win32AllocPoolWithQuota(epi16, 0x74697355u);
      if ( !*(_QWORD *)&v26[3] )
        goto LABEL_25;
      v25 = 1;
      memmove(*(void **)&v26[3], v22, epi16);
    }
    if ( *(_QWORD *)&v26[2] && (unsigned int)RIMIDE_CreateGenericHidDevice(v26, &v27) )
    {
      v12 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_QWORD *)MmUserProbeAddress;
      *a2 = v27;
    }
    else
    {
      v4 = 0;
      UserSetLastError(87LL, v11);
    }
    goto LABEL_36;
  }
  v20 = *(const void **)&v26[2];
  *(_QWORD *)&v26[2] = Win32AllocPoolWithQuota(v18, 0x74697355u);
  if ( *(_QWORD *)&v26[2] )
  {
    v24 = 1;
    memmove(*(void **)&v26[2], v20, v18);
    goto LABEL_27;
  }
LABEL_25:
  v4 = 0;
  UserSetLastError(8LL, v21);
LABEL_36:
  if ( v24 )
    Win32FreePool(*(__int64 *)&v26[2]);
  if ( v25 )
    Win32FreePool(*(__int64 *)&v26[3]);
LABEL_40:
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v4;
}
