/*
 * XREFs of ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180081D54
 * Callers:
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BF28 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180007E1C (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800086C4 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     CemRcTableGetFirst @ 0x180025464 (CemRcTableGetFirst.c)
 *     ?HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180025C28 (-HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     CemRcTableGetNext @ 0x180027194 (CemRcTableGetNext.c)
 *     ?HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x1800279FC (-HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x1800343C0 (-HampWakeManagerReleaseLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x1800343F4 (-HampWakeManagerAcquireLockExclusive@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 */

void __fastcall HampWakeManagerPreRundown(struct _HAM_WAKE_REFERENCE_MANAGER *a1)
{
  __int64 v2; // rdx
  struct _HAM_HOST_WAKE_CONTEXT *i; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  struct _HAM_HOST_WAKE_CONTEXT *v6; // rdi
  struct _HAM_CLIENT_CONTEXT *v7; // rcx

  HampWakeManagerAcquireLockExclusive(a1);
  *((_BYTE *)a1 + 104) |= 1u;
  HampWakeManagerReleaseLockExclusive(a1, v2);
  for ( i = (struct _HAM_HOST_WAKE_CONTEXT *)CemRcTableGetFirst((__int64)a1 + 32);
        ;
        i = (struct _HAM_HOST_WAKE_CONTEXT *)CemRcTableGetNext(v6) )
  {
    v6 = i;
    if ( !i )
      break;
    HampWakeContextAcquireLockExclusive(i, v4);
    *((_BYTE *)v6 + 185) |= 0x20u;
    HampWakeContextQueueWorker(v6);
    HampWakeContextReleaseLockExclusive(v6, v5);
    TpWaitForWork(*((_QWORD *)v6 + 12), 0LL);
  }
  v7 = (struct _HAM_CLIENT_CONTEXT *)*((_QWORD *)a1 + 1);
  if ( v7 )
  {
    HampClientDestroy(v7);
    *((_QWORD *)a1 + 1) = 0LL;
  }
}
