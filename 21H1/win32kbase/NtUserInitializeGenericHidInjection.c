/*
 * XREFs of NtUserInitializeGenericHidInjection @ 0x1C013A820
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C008F360 (Win32AllocPoolWithQuota.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C016F7C8 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_CreateGenericHidDevice @ 0x1C0173850 (RIMIDE_CreateGenericHidDevice.c)
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
  ULONG64 v11; // rcx
  _OWORD *v12; // rcx
  ULONG64 v13; // rdx
  unsigned __int16 epi16; // r14
  __int64 CurrentProcessWow64Process; // rax
  size_t v16; // rsi
  __int64 v17; // rax
  const void *v18; // r15
  __int64 v19; // rdx
  __int64 v20; // r8
  const void *v21; // r15
  char v23; // [rsp+20h] [rbp-98h]
  char v24; // [rsp+21h] [rbp-97h]
  _OWORD v25[6]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v26; // [rsp+D0h] [rbp+18h] BYREF

  v4 = 1;
  EnterCrit(0LL, 1);
  v26 = 0LL;
  memset(v25, 0, 0x40uLL);
  v23 = 0;
  v24 = 0;
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
  v12 = a1 + 4;
  v13 = MmUserProbeAddress;
  if ( (unsigned __int64)(a1 + 4) > MmUserProbeAddress || v12 < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v25[0] = *a1;
  v25[1] = a1[1];
  v25[2] = a1[2];
  v25[3] = a1[3];
  epi16 = _mm_extract_epi16((__m128i)v25[3], 4);
  if ( epi16 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v12);
    if ( ((CurrentProcessWow64Process == 0 ? 3 : 0) & LOBYTE(v25[3])) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = *(_OWORD **)&v25[3];
    v13 = *(_QWORD *)&v25[3] + epi16;
    if ( v13 > MmUserProbeAddress || v13 < *(_QWORD *)&v25[3] )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v16 = WORD4(v25[2]);
  if ( !WORD4(v25[2]) )
    goto LABEL_27;
  v17 = PsGetCurrentProcessWow64Process(v12);
  if ( ((v17 == 0 ? 3 : 0) & LOBYTE(v25[2])) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = *(_QWORD *)&v25[2] + v16;
  if ( *(_QWORD *)&v25[2] + v16 > MmUserProbeAddress || v13 < *(_QWORD *)&v25[2] )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( !(_WORD)v16 )
  {
LABEL_27:
    if ( epi16 )
    {
      v21 = *(const void **)&v25[3];
      *(_QWORD *)&v25[3] = Win32AllocPoolWithQuota(epi16, 0x74697355u);
      if ( !*(_QWORD *)&v25[3] )
        goto LABEL_25;
      v24 = 1;
      memmove(*(void **)&v25[3], v21, epi16);
    }
    if ( *(_QWORD *)&v25[2] && (unsigned int)RIMIDE_CreateGenericHidDevice(v25, &v26) )
    {
      v11 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_QWORD *)MmUserProbeAddress;
      *a2 = v26;
    }
    else
    {
      v4 = 0;
      UserSetLastError(87LL, v13);
    }
    goto LABEL_36;
  }
  v18 = *(const void **)&v25[2];
  *(_QWORD *)&v25[2] = Win32AllocPoolWithQuota(v16, 0x74697355u);
  if ( *(_QWORD *)&v25[2] )
  {
    v23 = 1;
    memmove(*(void **)&v25[2], v18, v16);
    goto LABEL_27;
  }
LABEL_25:
  v4 = 0;
  UserSetLastError(8LL, v19);
LABEL_36:
  if ( v23 )
    Win32FreePool(*(__int64 *)&v25[2], v13, v20);
  if ( v24 )
    Win32FreePool(*(__int64 *)&v25[3], v13, v20);
LABEL_40:
  UserSessionSwitchLeaveCrit(v11);
  return v4;
}
