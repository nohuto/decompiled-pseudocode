/*
 * XREFs of NtSetShellCursorState @ 0x1C0137B50
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C0035910 (IsShellProcess.c)
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C008F360 (Win32AllocPoolWithQuota.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     ?CheckCapability@@YAJPEBG@Z @ 0x1C0133380 (-CheckCapability@@YAJPEBG@Z.c)
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C01A5BB4 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 *     SetContentOrientation @ 0x1C01B1C80 (SetContentOrientation.c)
 */

__int64 __fastcall NtSetShellCursorState(const unsigned __int16 *a1, char *Src, unsigned int a3)
{
  __int64 v3; // r14
  unsigned int v5; // r13d
  struct tagRECT *v6; // rdi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  NTSTATUS v10; // ecx
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  CCursorClip *v17; // rcx
  __int64 v18; // rcx
  int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // r8

  v3 = a3;
  v5 = (unsigned int)a1;
  v6 = 0LL;
  v7 = CheckCapability(a1);
  if ( v7 < 0 )
  {
    v10 = v7;
LABEL_26:
    v13 = 0;
    v14 = RtlNtStatusToDosError(v10);
    goto LABEL_27;
  }
  if ( !gbOSTestSigningEnabled )
  {
    v11 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v9) + 820);
    if ( (v11 & 0x30) == 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
      if ( !(unsigned int)IsShellProcess(CurrentProcessWin32Process) )
      {
        v13 = 0;
        v14 = 5LL;
LABEL_27:
        UserSetLastError(v14, v8);
        goto LABEL_28;
      }
    }
  }
  if ( v5 - 1 > 3 )
  {
LABEL_8:
    v13 = 0;
    v14 = 87LL;
    goto LABEL_27;
  }
  if ( (_DWORD)v3 )
  {
    v15 = 16 * v3;
    if ( (unsigned __int64)(16 * v3) > 0xFFFFFFFF )
      goto LABEL_8;
    if ( (unsigned int)v15 >= 0x2710000
      || (v6 = (struct tagRECT *)Win32AllocPoolWithQuota((unsigned int)v15, 0x63736355u)) == 0LL )
    {
      v13 = 0;
      v14 = 8LL;
      goto LABEL_27;
    }
    if ( v15 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v16) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v15] > MmUserProbeAddress || &Src[v15] < Src )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v6, Src, (unsigned int)v15);
  }
  else if ( Src )
  {
    goto LABEL_8;
  }
  v13 = 1;
  EnterCrit(0LL, 1);
  v19 = CCursorClip::SetShellClip(v17, v6, v3);
  if ( v19 >= 0 )
    SetContentOrientation(v5);
  UserSessionSwitchLeaveCrit(v18);
  if ( v19 < 0 )
  {
    v10 = v19;
    goto LABEL_26;
  }
LABEL_28:
  if ( !v13 && v6 )
    Win32FreePool((__int64)v6, v20, v21);
  return v13;
}
