/*
 * XREFs of NtUserSetManipulationInputTarget @ 0x1C0138890
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C008B340 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     Win32AllocPoolWithQuota @ 0x1C0098C10 (Win32AllocPoolWithQuota.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01998E4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 */

__int64 __fastcall NtUserSetManipulationInputTarget(unsigned int a1, void *a2, unsigned int a3, char *Src)
{
  __int64 v5; // r14
  void *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID CurrentProcess; // rdx
  __int64 v12; // rcx
  BOOL v13; // eax
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r9
  __int128 v24; // [rsp+50h] [rbp-38h] BYREF
  __int64 v25; // [rsp+60h] [rbp-28h]

  v5 = a3;
  v8 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  EnterCrit(0LL, 1);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v10, v9);
  v13 = 0;
  if ( CurrentProcess )
    v13 = CurrentProcess == g_pepDwm;
  if ( !v13 )
  {
    v14 = 5LL;
LABEL_5:
    v15 = 0;
    UserSetLastError(v14, (__int64)CurrentProcess);
    goto LABEL_19;
  }
  if ( !(_DWORD)v5 )
  {
    v14 = 87LL;
    goto LABEL_5;
  }
  v20 = 4 * v5;
  if ( 4 * v5 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v12) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[v20] > MmUserProbeAddress || &Src[v20] < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v8 = (void *)Win32AllocPoolWithQuota(4 * v5, 0x6E616D55u);
  if ( v8 )
  {
    if ( qword_1C0251EC0 )
      qword_1C0251EC0(v8, &v24, Win32FreePool, v22);
    memmove(v8, Src, 4 * v5);
    v15 = CTouchProcessor::SetManipulationInputTarget(gpTouchProcessor, a1, v5, (unsigned int *)v8, a2);
  }
  else
  {
    v15 = 0;
    UserSetLastError(8LL, v21);
  }
LABEL_19:
  if ( v8 && qword_1C0251FE8 )
    qword_1C0251FE8(&v24);
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  return v15;
}
