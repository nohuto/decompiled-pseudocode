/*
 * XREFs of NtUserGetRequiredCursorSizes @ 0x1C01100E0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     ?HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPEAUtagCURSORSIZEINFO@@@Z @ 0x1C011018C (-HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPEAUtagCURSORSIZEINFO@@@Z.c)
 */

__int64 __fastcall NtUserGetRequiredCursorSizes(unsigned __int64 a1, volatile void *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdi
  int v9; // ebx
  __int64 CurrentProcessWow64Process; // rax
  CCursorSizes *v11; // rcx

  EnterCrit(0LL, 1LL);
  v4 = HMValidateHandle(a1, 3u);
  v8 = v4;
  v9 = 0;
  if ( v4 && *(_QWORD *)(v4 + 48) == v4 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6);
    ProbeForWrite(a2, 0x28uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    CCursorSizes::HandleRequestCursorSizesRequest(v11, (struct tagCURSORSIZEINFO *)a2);
    *(_DWORD *)(v8 + 80) |= 0x4000u;
    v9 = 1;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v9;
}
