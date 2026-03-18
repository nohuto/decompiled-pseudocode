/*
 * XREFs of ?QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SGXK@Z @ 0x228EC4
 * Callers:
 *     _lambda_95c27c6d3719cab4b30ebc7bb5fd2a18_::operator() @ 0x87504 (_lambda_95c27c6d3719cab4b30ebc7bb5fd2a18_--operator().c)
 * Callees:
 *     <none>
 */

void __thiscall UmfdHostLifeTimeManager::QueueTryResurrectPffApc(void *this)
{
  int v2; // esi
  PKTHREAD CurrentThread; // eax

  if ( this )
  {
    v2 = Win32AllocPoolNonPaged(48, 1668309319);
    if ( v2 )
    {
      CurrentThread = KeGetCurrentThread();
      KeInitializeApc(
        v2,
        CurrentThread,
        0,
        SpbApcBegin,
        RundownAPCInvalidateCOMPOSITEDWnd,
        UmfdHostLifeTimeManager::TryResurrectPffApcRoutine,
        0,
        0);
      KeInsertQueueApc(v2, this, 0, 0);
    }
  }
}
