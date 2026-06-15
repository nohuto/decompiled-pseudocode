/*
 * XREFs of ?Terminate@CAudioThreadPool@@QEAAJXZ @ 0x180105C30
 * Callers:
 *     ?MyServiceTerminate@@YAXXZ @ 0x1801162B4 (-MyServiceTerminate@@YAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioThreadPool::Terminate(CAudioThreadPool *this)
{
  struct CAudioThreadPool *v1; // rbx
  struct _TP_CLEANUP_GROUP *v2; // rcx

  v1 = ThreadPool;
  v2 = (struct _TP_CLEANUP_GROUP *)*((_QWORD *)ThreadPool + 10);
  if ( v2 )
  {
    CloseThreadpoolCleanupGroupMembers(v2, 0, 0LL);
    CloseThreadpoolCleanupGroup(*((PTP_CLEANUP_GROUP *)v1 + 10));
    *((_QWORD *)v1 + 10) = 0LL;
  }
  return 0LL;
}
