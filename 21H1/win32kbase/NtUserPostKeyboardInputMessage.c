/*
 * XREFs of NtUserPostKeyboardInputMessage @ 0x1C013D280
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C00612FC (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     ApiSetEditionPostKeyboardInputMessage @ 0x1C01CF820 (ApiSetEditionPostKeyboardInputMessage.c)
 */

__int64 __fastcall NtUserPostKeyboardInputMessage(int a1, ULONG64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rcx
  BOOL v10; // edx
  int v12; // edx
  int v13; // r8d
  __int16 v14; // r9
  __int16 v15; // r10
  __int16 v16; // r11
  unsigned int v17; // ebx
  ULONG v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int128 v21; // [rsp+68h] [rbp-40h]
  int v22; // [rsp+78h] [rbp-30h]

  EnterCrit(0LL, 1);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v7, v6);
  v10 = 0;
  if ( CurrentProcess )
    v10 = CurrentProcess == g_pepDwm;
  if ( v10 )
  {
    if ( a2 + 20 < a2 || a2 + 20 > MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v21 = *(_OWORD *)a2;
    v22 = *(_DWORD *)(a2 + 16);
    LOBYTE(v12) = CKeyboardProcessor::HandleLeftRightVKs(*(_QWORD *)(a2 + 8));
    v17 = ApiSetEditionPostKeyboardInputMessage(a1, v12, v13, (unsigned __int16)v21, v16, v14, v22, v13, v15, a3);
    v18 = RtlNtStatusToDosError(v17);
    UserSetLastError(v18, v19);
    UserSessionSwitchLeaveCrit(v20);
    return v17;
  }
  else
  {
    UserSessionSwitchLeaveCrit(v9);
    return 3221225506LL;
  }
}
