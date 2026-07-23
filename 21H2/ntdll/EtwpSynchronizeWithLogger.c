/*
 * XREFs of EtwpSynchronizeWithLogger @ 0x18004F868
 * Callers:
 *     EtwpStopUmLogger @ 0x18004BEF0 (EtwpStopUmLogger.c)
 *     EtwpFlushUmLogger @ 0x18004FA7C (EtwpFlushUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x180111000 (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x1801114C0 (EtwpUpdateUmLogger.c)
 * Callees:
 *     NtWaitForSingleObject @ 0x18009D680 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x18009D7C0 (ZwSetEvent.c)
 */

__int64 __fastcall EtwpSynchronizeWithLogger(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 332) |= a2;
  ZwSetEvent(*(HANDLE *)(a1 + 128), 0LL);
  NtWaitForSingleObject(*(HANDLE *)(a1 + 136), 0, 0LL);
  result = *(unsigned int *)(a1 + 40);
  *(_DWORD *)(a1 + 332) &= ~a2;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}
