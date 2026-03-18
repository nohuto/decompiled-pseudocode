/*
 * XREFs of ProcessMultipleCommands @ 0x1C001B4A0
 * Callers:
 *     NVMeIoCompletionQueueCreate @ 0x1C0018040 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C0018720 (NVMeIoSubmissionQueueCreate.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeRequestComplete @ 0x1C000F468 (NVMeRequestComplete.c)
 *     ProcessMultipleCommandsInSpecificQueue @ 0x1C001B560 (ProcessMultipleCommandsInSpecificQueue.c)
 */

char __fastcall ProcessMultipleCommands(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  char result; // al
  int v6; // eax
  __int64 v7; // rbx

  v3 = a2;
  if ( *(_WORD *)(GetSrbExtension(a2) + 4244) )
  {
    result = 4;
    *(_BYTE *)(v4 + 3) = 4;
    return result;
  }
  v6 = *(_DWORD *)(a1 + 24);
  if ( (v6 & 0x10) != 0 )
  {
    result = 14;
    goto LABEL_7;
  }
  if ( (v6 & 0x100) != 0 )
  {
    result = 4;
LABEL_7:
    *(_BYTE *)(v4 + 3) = result;
    if ( v3 )
    {
      do
      {
        v7 = *(_QWORD *)(v3 + 40);
        result = NVMeRequestComplete(a1, v3, 0LL);
        v3 = v7;
      }
      while ( v7 );
    }
    return result;
  }
  result = ProcessMultipleCommandsInSpecificQueue(a1, v4, a1 + 288, *(unsigned __int16 *)(a1 + 276));
  if ( !result )
  {
    while ( v3 )
    {
      if ( *(_BYTE *)(v3 + 3) == 5 )
        result = ProcessCommand(a1, v3);
      v3 = *(_QWORD *)(v3 + 40);
    }
  }
  return result;
}
