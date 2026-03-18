/*
 * XREFs of ??0?$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA@PEAJ@Z @ 0x1C00B822C
 * Callers:
 *     ??0COPM@@QEAA@PEAJ@Z @ 0x1C00B814C (--0COPM@@QEAA@PEAJ@Z.c)
 * Callees:
 *     <none>
 */

struct _LOOKASIDE_LIST_EX **__fastcall COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>(
        struct _LOOKASIDE_LIST_EX **a1,
        NTSTATUS *a2)
{
  struct _LOOKASIDE_LIST_EX *PoolWithTag; // rax

  *a1 = 0LL;
  if ( *a2 >= 0 )
  {
    PoolWithTag = (struct _LOOKASIDE_LIST_EX *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x60uLL, 0x4D504F47u);
    *a1 = PoolWithTag;
    if ( PoolWithTag )
      *a2 = ExInitializeLookasideListEx(PoolWithTag, 0LL, 0LL, PagedPool, 2u, 0x1000uLL, 0x4D504F47u, 0);
    else
      *a2 = -1073741670;
  }
  return a1;
}
