/*
 * XREFs of NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C01CECD0
 * Callers:
 *     <none>
 * Callees:
 *     GreUnlockDwmState @ 0x1C00A59D0 (GreUnlockDwmState.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C00A695C (CheckOrAcquireDwmStateLock.c)
 *     ReferenceDwmProcess @ 0x1C00A6AB0 (ReferenceDwmProcess.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

__int64 __fastcall NtDCompositionDuplicateSwapchainHandleToDwm(__int64 a1, HANDLE *a2)
{
  struct _KPROCESS *v4; // rsi
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  int v7; // r8d
  char v8; // r15
  signed int v9; // edi
  __int64 CurrentProcess; // rax
  HANDLE Handle; // [rsp+48h] [rbp-70h] BYREF
  struct _KPROCESS *v13; // [rsp+50h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-60h] BYREF

  v4 = 0LL;
  v13 = 0LL;
  v8 = CheckOrAcquireDwmStateLock();
  Handle = 0LL;
  v9 = a2 == 0LL ? 0xC000000D : 0;
  if ( a2 )
  {
    v4 = (struct _KPROCESS *)ReferenceDwmProcess();
    v13 = v4;
    if ( !v4 )
      v9 = -1073741811;
  }
  if ( v9 < 0 )
    goto LABEL_10;
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  v9 = ObDuplicateObject(CurrentProcess, a1, v4, &Handle, 0, 0, 6, 0);
  if ( v9 < 0 )
    goto LABEL_10;
  v6 = (ULONG64)(a2 + 1);
  if ( a2 + 1 < a2 || v6 > MmUserProbeAddress )
  {
    v6 = MmUserProbeAddress;
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  *a2 = Handle;
  if ( v9 < 0 )
  {
LABEL_10:
    if ( Handle )
    {
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(v4, &ApcState);
      ObCloseHandle(Handle, 1);
      KeUnstackDetachProcess(&ApcState);
    }
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( v8 )
    GreUnlockDwmState(v6, v5, v7);
  return (unsigned int)v9;
}
