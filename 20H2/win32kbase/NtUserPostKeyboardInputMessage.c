/*
 * XREFs of NtUserPostKeyboardInputMessage @ 0x1C0135290
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C002D59C (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     EnterCrit @ 0x1C0045880 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ApiSetEditionPostKeyboardInputMessage @ 0x1C01C7520 (ApiSetEditionPostKeyboardInputMessage.c)
 */

__int64 __fastcall NtUserPostKeyboardInputMessage(int a1, ULONG64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _BOOL8 v12; // rdx
  int v14; // edx
  int v15; // r8d
  __int16 v16; // r9
  __int16 v17; // r10
  __int16 v18; // r11
  unsigned int v19; // ebx
  ULONG v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int128 v26; // [rsp+68h] [rbp-40h]
  int v27; // [rsp+78h] [rbp-30h]

  EnterCrit(0, 1);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v7, v6);
  v12 = 0LL;
  if ( CurrentProcess )
    v12 = CurrentProcess == g_pepDwm;
  if ( v12 )
  {
    if ( a2 + 20 < a2 || a2 + 20 > MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v26 = *(_OWORD *)a2;
    v27 = *(_DWORD *)(a2 + 16);
    LOBYTE(v14) = CKeyboardProcessor::HandleLeftRightVKs(*(_QWORD *)(a2 + 8));
    v19 = ApiSetEditionPostKeyboardInputMessage(a1, v14, v15, (unsigned __int16)v26, v18, v16, v27, v15, v17, a3);
    v20 = RtlNtStatusToDosError(v19);
    UserSetLastError(v20, v21);
    UserSessionSwitchLeaveCrit(v23, v22, v24, v25);
    return v19;
  }
  else
  {
    UserSessionSwitchLeaveCrit(v9, v12, v10, v11);
    return 3221225506LL;
  }
}
