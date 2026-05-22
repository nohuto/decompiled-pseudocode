/*
 * XREFs of ?WaitForCompletion@ChainedThreadpoolWorker@ThreadHelpers@@QEAAXXZ @ 0x180166D80
 * Callers:
 *     ??1ChainedThreadpoolWorker@ThreadHelpers@@QEAA@XZ @ 0x180157B0C (--1ChainedThreadpoolWorker@ThreadHelpers@@QEAA@XZ.c)
 *     ??1SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x1801580D8 (--1SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ThreadHelpers::ChainedThreadpoolWorker::WaitForCompletion(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  char Ptr; // si
  struct _TP_WORK *v4; // rbx

  v1 = this + 2;
  AcquireSRWLockShared(this + 2);
  Ptr = (char)this[15].Ptr;
  v4 = (struct _TP_WORK *)this[14].Ptr;
  if ( v1 )
    ReleaseSRWLockShared(v1);
  if ( Ptr )
    WaitForThreadpoolWorkCallbacks(v4, 0);
}
