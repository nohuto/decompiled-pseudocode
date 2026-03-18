/*
 * XREFs of PspCatchCriticalBreak @ 0x14090D734
 * Callers:
 *     PspExitThread @ 0x14068390C (PspExitThread.c)
 *     PspTerminateThreadByPointer @ 0x14069A1F0 (PspTerminateThreadByPointer.c)
 *     PspTerminateAllThreads @ 0x14069A29C (PspTerminateAllThreads.c)
 * Callees:
 *     PsIsHostSilo @ 0x14020DC00 (PsIsHostSilo.c)
 *     KeStackAttachProcess @ 0x14023EE20 (KeStackAttachProcess.c)
 *     PsGetServerSiloState @ 0x14031BDAC (PsGetServerSiloState.c)
 *     DbgPrintEx @ 0x14037EFE0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     DbgPrompt @ 0x140583B60 (DbgPrompt.c)
 *     PsTerminateServerSilo @ 0x140908550 (PsTerminateServerSilo.c)
 */

void PspCatchCriticalBreak(const char *a1, ULONG_PTR a2, __int64 a3, __int64 a4, ...)
{
  char v6; // bl
  const CHAR *v7; // r8
  __int64 v8; // r9
  char v9; // bp
  char v10; // bl
  struct _KPROCESS *v11; // rdi
  CHAR Response[8]; // [rsp+30h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-60h] BYREF

  v6 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( (int)PsGetServerSiloState(a4) < 2 )
  {
    v9 = 0;
    if ( !(_BYTE)KdDebuggerEnabled )
    {
LABEL_15:
      v10 = *(_BYTE *)a2 & 0x7F;
      if ( v10 == 6 )
        v11 = *(struct _KPROCESS **)(a2 + 544);
      else
        v11 = (struct _KPROCESS *)a2;
      if ( PsIsHostSilo(a4) )
      {
        if ( v11 != KeGetCurrentThread()->ApcState.Process )
          KeStackAttachProcess(v11, &ApcState);
        KeBugCheckEx(0xEFu, a2, v10 == 6, 0LL, 0LL);
      }
      if ( !v9 )
        PsTerminateServerSilo(a4);
      return;
    }
    DbgPrintEx(0, 0, v7, a2, v8);
    while ( 1 )
    {
      if ( (_BYTE)KdDebuggerNotPresent )
        goto LABEL_14;
      DbgPrompt("Break, or Ignore (bi)? ", Response, 2u);
      if ( Response[0] == 66 )
        goto LABEL_11;
      if ( Response[0] != 73 )
        break;
LABEL_12:
      v6 = 1;
LABEL_13:
      if ( v6 )
        goto LABEL_14;
    }
    if ( Response[0] != 98 )
    {
      if ( Response[0] != 105 )
        goto LABEL_13;
      goto LABEL_12;
    }
LABEL_11:
    __debugbreak();
    goto LABEL_12;
  }
  v9 = 1;
  v6 = 1;
LABEL_14:
  if ( !v6 )
    goto LABEL_15;
}
