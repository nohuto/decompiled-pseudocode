/*
 * XREFs of KeCopyExceptionRecord @ 0x1402D3BE8
 * Callers:
 *     KiDispatchException @ 0x140273320 (KiDispatchException.c)
 *     KiInitializeUserApc @ 0x1402B2594 (KiInitializeUserApc.c)
 *     DbgkForwardException @ 0x1407321F0 (DbgkForwardException.c)
 *     DbgkpSendErrorMessage @ 0x140887370 (DbgkpSendErrorMessage.c)
 * Callees:
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 */

void *__fastcall KeCopyExceptionRecord(_OWORD *a1, __int64 a2)
{
  memset(a1, 0, 0x98uLL);
  *a1 = *(_OWORD *)a2;
  *((_QWORD *)a1 + 2) = *(_QWORD *)(a2 + 16);
  *((_DWORD *)a1 + 6) = *(_DWORD *)(a2 + 24);
  return memmove(a1 + 2, (const void *)(a2 + 32), 8LL * *(unsigned int *)(a2 + 24));
}
