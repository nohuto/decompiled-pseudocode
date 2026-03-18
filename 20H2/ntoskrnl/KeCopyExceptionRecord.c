/*
 * XREFs of KeCopyExceptionRecord @ 0x14033192C
 * Callers:
 *     KiDispatchException @ 0x1402E7710 (KiDispatchException.c)
 *     KiInitializeUserApc @ 0x1402E8960 (KiInitializeUserApc.c)
 *     DbgkForwardException @ 0x14072DF80 (DbgkForwardException.c)
 *     DbgkpSendErrorMessage @ 0x140889DD0 (DbgkpSendErrorMessage.c)
 * Callees:
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 */

void *__fastcall KeCopyExceptionRecord(_OWORD *a1, __int64 a2)
{
  memset(a1, 0, 0x98uLL);
  *a1 = *(_OWORD *)a2;
  *((_QWORD *)a1 + 2) = *(_QWORD *)(a2 + 16);
  *((_DWORD *)a1 + 6) = *(_DWORD *)(a2 + 24);
  return memmove(a1 + 2, (const void *)(a2 + 32), 8LL * *(unsigned int *)(a2 + 24));
}
