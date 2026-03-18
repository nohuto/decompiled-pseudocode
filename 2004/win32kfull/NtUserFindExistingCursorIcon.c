/*
 * XREFs of NtUserFindExistingCursorIcon @ 0x1C00AE3E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C004AC8C (UserSetLastStatus.c)
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z @ 0x1C00AE188 (-_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00AE624 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserFindExistingCursorIcon(unsigned int *a1, unsigned int *a2, ULONG64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  const unsigned __int16 *v11; // rdi
  ULONG64 v12; // rdx
  unsigned int **v13; // rax
  unsigned int *v14; // rax
  __int64 v15; // rcx
  WCHAR *v16; // rdx
  ULONG64 v17; // r8
  _BYTE **v18; // rax
  NTSTATUS v19; // eax
  unsigned __int16 Atom; // ax
  struct tagCURSOR *ExistingCursorIcon; // rax
  int v23; // [rsp+20h] [rbp-2A8h]
  unsigned int v24; // [rsp+20h] [rbp-2A8h]
  struct tagCURSOR *v25; // [rsp+40h] [rbp-288h]
  struct _UNICODE_STRING v26; // [rsp+50h] [rbp-278h] BYREF
  __int128 v27; // [rsp+60h] [rbp-268h] BYREF
  __int64 v28; // [rsp+70h] [rbp-258h]
  __int128 v29; // [rsp+78h] [rbp-250h]
  unsigned __int16 v30[256]; // [rsp+A0h] [rbp-228h] BYREF

  v29 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  if ( a3 >= MmUserProbeAddress )
    a3 = MmUserProbeAddress;
  v27 = *(_OWORD *)a3;
  v28 = *(_QWORD *)(a3 + 16);
  v6 = 0LL;
  if ( (_QWORD)v27 )
  {
    v25 = (struct tagCURSOR *)HMValidateHandle(v27, 3u);
    if ( !v25 )
      goto LABEL_35;
  }
  else
  {
    v25 = 0LL;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v10 = *a1;
  v23 = *a1;
  LODWORD(v29) = *a1;
  v11 = (const unsigned __int16 *)*((_QWORD *)a1 + 1);
  *((_QWORD *)&v29 + 1) = v11;
  if ( ((unsigned __int8)v11 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = (ULONG64)v11 + (unsigned __int16)v10 + 2;
  v13 = (unsigned int **)MmUserProbeAddress;
  if ( v12 < MmUserProbeAddress && (unsigned __int16)v10 <= HIWORD(v23) )
  {
    if ( (v10 & 1) != 0 )
    {
LABEL_16:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v12);
      v13 = (unsigned int **)MmUserProbeAddress;
      goto LABEL_17;
    }
    if ( v12 > (unsigned __int64)v11 )
      goto LABEL_18;
  }
  if ( (v10 & 1) != 0 )
    goto LABEL_16;
LABEL_17:
  *(_BYTE *)*v13 = 0;
  v13 = (unsigned int **)MmUserProbeAddress;
LABEL_18:
  v14 = *v13;
  if ( a2 >= v14 )
    a2 = v14;
  v15 = *a2;
  v24 = *a2;
  *(_DWORD *)&v26.Length = *a2;
  v16 = (WCHAR *)*((_QWORD *)a2 + 1);
  v26.Buffer = v16;
  if ( ((unsigned __int64)v16 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    goto LABEL_30;
  if ( ((unsigned __int8)v16 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v17 = (ULONG64)v16 + (unsigned __int16)v15 + 2;
  v18 = (_BYTE **)MmUserProbeAddress;
  if ( v17 < MmUserProbeAddress && (unsigned __int16)v15 <= HIWORD(v24) )
  {
    if ( (v15 & 1) != 0 )
    {
LABEL_28:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v16);
      v18 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_29;
    }
    if ( v17 > (unsigned __int64)v16 )
      goto LABEL_30;
  }
  if ( (v15 & 1) != 0 )
    goto LABEL_28;
LABEL_29:
  **v18 = 0;
LABEL_30:
  v19 = RtlStringCchCopyW(v30, 0x100uLL, v11);
  if ( v19 < 0 )
  {
    UserSetLastStatus(v19, 1);
  }
  else
  {
    Atom = UserFindAtom(v30);
    if ( Atom )
    {
      ExistingCursorIcon = _FindExistingCursorIcon(Atom, &v26, v25, (struct tagCURSORFIND *)&v27);
      if ( ExistingCursorIcon )
        v6 = *(_QWORD *)ExistingCursorIcon;
    }
  }
LABEL_35:
  UserSessionSwitchLeaveCrit(v8, v7, v9);
  return v6;
}
