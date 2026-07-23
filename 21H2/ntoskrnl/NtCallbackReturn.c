/*
 * XREFs of NtCallbackReturn @ 0x1404029A0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

NTSTATUS __cdecl NtCallbackReturn(PVOID OutputBuffer, ULONG OutputLength, NTSTATUS Status)
{
  struct _KTHREAD *CurrentThread; // r11
  _QWORD *InitialStack; // r10
  __int64 v5; // r9
  NTSTATUS result; // eax
  __int64 v7; // r8
  _KTRAP_FRAME *TrapFrame; // rbx
  bool v9; // zf
  unsigned __int64 Dr1; // rdx
  unsigned __int64 Dr3; // rdx
  char *v12; // rcx
  unsigned __int64 v13; // rcx

  CurrentThread = KeGetCurrentThread();
  InitialStack = CurrentThread->InitialStack;
  v5 = InitialStack[4];
  if ( v5 >= 0 )
  {
    if ( v5 > 0 )
      KeBugCheckEx(0x1CDu, (ULONG_PTR)CurrentThread, InitialStack[4], 0LL, 0LL);
    return -1073741224;
  }
  else
  {
    result = Status;
    **(_QWORD **)(v5 + 216) = OutputBuffer;
    **(_DWORD **)(v5 + 224) = OutputLength;
    _disable();
    v7 = *(_QWORD *)(v5 + 208);
    TrapFrame = CurrentThread->TrapFrame;
    CurrentThread->TrapFrame = (_KTRAP_FRAME *)v7;
    v9 = (CurrentThread->Header.Reserved1 & 3) == 0;
    *(_WORD *)(v7 + 256) = 0;
    if ( !v9 )
    {
      Dr1 = TrapFrame->Dr1;
      *(_QWORD *)(v7 + 216) = TrapFrame->Dr0;
      *(_QWORD *)(v7 + 224) = Dr1;
      Dr3 = TrapFrame->Dr3;
      *(_QWORD *)(v7 + 232) = TrapFrame->Dr2;
      *(_QWORD *)(v7 + 240) = Dr3;
      *(_QWORD *)(v7 + 256) = TrapFrame->Dr7;
    }
    v12 = (char *)InitialStack[2];
    CurrentThread->StackBase = v12;
    CurrentThread->StackLimit = &v12[-(unsigned int)KeKernelStackSize];
    v13 = InitialStack[5];
    CurrentThread->InitialStack = (void *)v13;
    if ( (KiKvaShadow & 1) != 0 )
      __writegsqword(0x9008u, v13);
    else
      *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 4) = v13;
    __writegsqword(0x1A8u, v13);
    _enable();
  }
  return result;
}
