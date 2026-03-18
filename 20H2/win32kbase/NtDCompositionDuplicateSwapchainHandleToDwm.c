/*
 * XREFs of NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C01CC950
 * Callers:
 *     <none>
 * Callees:
 *     GreUnlockDwmState @ 0x1C005E7D0 (GreUnlockDwmState.c)
 *     ReferenceDwmProcess @ 0x1C0066F60 (ReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C0066FA4 (CheckOrAcquireDwmStateLock.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

__int64 __fastcall NtDCompositionDuplicateSwapchainHandleToDwm(__int64 a1, HANDLE *a2)
{
  struct _KPROCESS *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // r15
  signed int v8; // edi
  __int64 CurrentProcess; // rax
  HANDLE Handle; // [rsp+48h] [rbp-70h] BYREF
  struct _KPROCESS *v12; // [rsp+50h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-60h] BYREF

  v4 = 0LL;
  v12 = 0LL;
  v7 = CheckOrAcquireDwmStateLock();
  Handle = 0LL;
  v8 = a2 == 0LL ? 0xC000000D : 0;
  if ( a2 )
  {
    v4 = (struct _KPROCESS *)ReferenceDwmProcess();
    v12 = v4;
    if ( !v4 )
      v8 = -1073741811;
  }
  if ( v8 < 0
    || (CurrentProcess = PsGetCurrentProcess(v6, v5),
        v8 = ObDuplicateObject(CurrentProcess, a1, v4, &Handle, 0, 0, 6, 0),
        v8 < 0) )
  {
    if ( Handle )
    {
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(v4, &ApcState);
      ObCloseHandle(Handle, 1);
      KeUnstackDetachProcess(&ApcState);
    }
  }
  else
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = Handle;
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( v7 )
    GreUnlockDwmState();
  return (unsigned int)v8;
}
