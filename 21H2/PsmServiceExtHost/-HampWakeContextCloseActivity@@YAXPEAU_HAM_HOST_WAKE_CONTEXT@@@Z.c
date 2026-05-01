/*
 * XREFs of ?HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003453C
 * Callers:
 *     ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180020170 (-HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180022758 (-HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     CemRcObjectDereference @ 0x1800273B0 (CemRcObjectDereference.c)
 *     ?HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x1800345C0 (-HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x1800345F4 (-HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 */

void __fastcall HampWakeContextCloseActivity(struct _HAM_HOST_WAKE_CONTEXT *a1)
{
  HampWakeManagerAcquireLockExclusive(*((struct _HAM_WAKE_REFERENCE_MANAGER **)a1 + 7));
  RtlRbRemoveNode(*((_QWORD *)a1 + 7) + 80LL, (char *)a1 + 64);
  *((_QWORD *)a1 + 10) = -1LL;
  HampWakeManagerReleaseLockExclusive(*((struct _HAM_WAKE_REFERENCE_MANAGER **)a1 + 7));
  HamSrvCloseActivity(*(struct _HAM_CLIENT_CONTEXT **)(*((_QWORD *)a1 + 7) + 8LL), *((_QWORD *)a1 + 11));
  *((_QWORD *)a1 + 11) = -1LL;
  CemRcObjectDereference(a1);
  *((_QWORD *)a1 + 18) = 0LL;
  *((_QWORD *)a1 + 19) = 0LL;
  *((_BYTE *)a1 + 160) &= ~2u;
}
