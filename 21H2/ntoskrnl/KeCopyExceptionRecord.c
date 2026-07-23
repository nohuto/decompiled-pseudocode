/*
 * XREFs of KeCopyExceptionRecord @ 0x140251E58
 * Callers:
 *     KiInitializeUserApc @ 0x140230744 (KiInitializeUserApc.c)
 *     KiDispatchException @ 0x1402612C0 (KiDispatchException.c)
 *     DbgkForwardException @ 0x1407323B0 (DbgkForwardException.c)
 *     DbgkpSendErrorMessage @ 0x1408874D0 (DbgkpSendErrorMessage.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 */

void *__fastcall KeCopyExceptionRecord(_OWORD *a1, __int64 a2)
{
  memset(a1, 0, 0x98uLL);
  *a1 = *(_OWORD *)a2;
  *((_QWORD *)a1 + 2) = *(_QWORD *)(a2 + 16);
  *((_DWORD *)a1 + 6) = *(_DWORD *)(a2 + 24);
  return memmove(a1 + 2, (const void *)(a2 + 32), 8LL * *(unsigned int *)(a2 + 24));
}
