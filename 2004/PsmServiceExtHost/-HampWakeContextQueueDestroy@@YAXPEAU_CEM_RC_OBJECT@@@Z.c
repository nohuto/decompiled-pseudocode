/*
 * XREFs of ?HampWakeContextQueueDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18002A940
 * Callers:
 *     <none>
 * Callees:
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180007E1C (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x1800279FC (-HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 */

void __fastcall HampWakeContextQueueDestroy(struct _CEM_RC_OBJECT *a1, __int64 a2)
{
  __int64 v3; // rdx

  if ( *((_QWORD *)a1 + 12) )
  {
    HampWakeContextAcquireLockExclusive(a1, a2);
    *((_BYTE *)a1 + 184) |= 8u;
    HampWakeContextReleaseLockExclusive(a1, v3);
    TpPostWork(*((_QWORD *)a1 + 12));
  }
  else
  {
    HampWakeContextDestroy(a1);
  }
}
