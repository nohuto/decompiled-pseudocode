/*
 * XREFs of NtUserShutdownBlockReasonCreate @ 0x1C011BCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0094684 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     InternalSetProp @ 0x1C00C7238 (InternalSetProp.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     _GetAncestor @ 0x1C011BE54 (_GetAncestor.c)
 *     InternalRemoveProp @ 0x1C015CFA4 (InternalRemoveProp.c)
 *     QueueShutdownData @ 0x1C01D2B5C (QueueShutdownData.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonCreate(__int64 a1, volatile void *a2, unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  char *v13; // rax
  char *v14; // rdi
  __int64 v15; // rax
  __int64 v17; // rcx

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v9 = 0LL;
  if ( !v8 )
    goto LABEL_15;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5, v7);
  v6 = *(_QWORD *)(v8 + 16);
  if ( *(_QWORD *)(v6 + 424) != CurrentProcessWin32Process )
  {
    v9 = 5LL;
    goto LABEL_15;
  }
  if ( v8 != GetAncestor(v8, 2LL) || a3 > 0x101 )
  {
    v17 = 87LL;
LABEL_19:
    UserSetLastError(v17, v11, v12);
    goto LABEL_15;
  }
  v13 = (char *)Win32AllocPool(2LL * (a3 + 1), 1919054677LL);
  v14 = v13;
  if ( !v13 )
  {
    v17 = 8LL;
    goto LABEL_19;
  }
  if ( a3 )
  {
    ProbeForRead(a2, 2LL * (a3 + 1), 2u);
    RtlStringCchCopyW(v14, a3 + 1, (char *)a2);
  }
  else
  {
    *(_WORD *)v13 = 0;
  }
  v15 = InternalRemoveProp(v8, (unsigned __int16)gatomShutdownBlockingReason, 1LL);
  if ( v15 )
    Win32FreePool(v15);
  if ( (unsigned int)InternalSetProp(v8, (unsigned __int16)gatomShutdownBlockingReason, (__int64)v14, 1u) )
  {
    if ( gptiShutdownWaiter )
      QueueShutdownData(a1, 1uLL);
    v9 = 1LL;
  }
  else
  {
    Win32FreePool(v14);
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v6);
  return v9;
}
