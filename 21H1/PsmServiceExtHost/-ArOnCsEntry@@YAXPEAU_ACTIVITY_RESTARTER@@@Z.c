/*
 * XREFs of ?ArOnCsEntry@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180083CB8
 * Callers:
 *     ?ArCsStateChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180083790 (-ArCsStateChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ArOnCsEntry(struct _ACTIVITY_RESTARTER *a1)
{
  RtlAcquireSRWLockExclusive((char *)a1 + 48);
  GetCurrentThreadId();
  *((_BYTE *)a1 + 64) |= 1u;
  *((_DWORD *)a1 + 14) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 48);
}
