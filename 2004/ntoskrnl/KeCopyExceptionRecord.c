/*
 * XREFs of KeCopyExceptionRecord @ 0x140360B78
 * Callers:
 *     KiInitializeUserApc @ 0x1402E30B0 (KiInitializeUserApc.c)
 *     KiDispatchException @ 0x1402E5930 (KiDispatchException.c)
 *     DbgkForwardException @ 0x14071FF90 (DbgkForwardException.c)
 *     DbgkpSendErrorMessage @ 0x140884280 (DbgkpSendErrorMessage.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 */

void *__fastcall KeCopyExceptionRecord(_OWORD *a1, __int64 a2)
{
  memset(a1, 0, 0x98uLL);
  *a1 = *(_OWORD *)a2;
  *((_QWORD *)a1 + 2) = *(_QWORD *)(a2 + 16);
  *((_DWORD *)a1 + 6) = *(_DWORD *)(a2 + 24);
  return memmove(a1 + 2, (const void *)(a2 + 32), 8LL * *(unsigned int *)(a2 + 24));
}
