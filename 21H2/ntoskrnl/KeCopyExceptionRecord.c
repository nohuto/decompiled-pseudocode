/*
 * XREFs of KeCopyExceptionRecord @ 0x14025E1EC
 * Callers:
 *     KiDispatchException @ 0x140299280 (KiDispatchException.c)
 *     KiInitializeUserApc @ 0x14029A86C (KiInitializeUserApc.c)
 *     DbgkForwardException @ 0x1406EA7D0 (DbgkForwardException.c)
 *     DbgkpSendErrorMessage @ 0x14092A29C (DbgkpSendErrorMessage.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall KeCopyExceptionRecord(_OWORD *a1, __int64 a2)
{
  memset(a1, 0, 0x98uLL);
  *a1 = *(_OWORD *)a2;
  *((_QWORD *)a1 + 2) = *(_QWORD *)(a2 + 16);
  *((_DWORD *)a1 + 6) = *(_DWORD *)(a2 + 24);
  return memmove(a1 + 2, (const void *)(a2 + 32), 8LL * *(unsigned int *)(a2 + 24));
}
