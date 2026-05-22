/*
 * XREFs of ?WorkerThreadProcThunk@ConsumerControlManager@@CAKPEAX@Z @ 0x1800A0640
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ConsumerControlManager@@UEAAKXZ @ 0x1800A04B0 (-Release@ConsumerControlManager@@UEAAKXZ.c)
 *     ?WorkerThreadProc@ConsumerControlManager@@AEAAJXZ @ 0x1800A056C (-WorkerThreadProc@ConsumerControlManager@@AEAAJXZ.c)
 */

__int64 __fastcall ConsumerControlManager::WorkerThreadProcThunk(ConsumerControlManager *Parameter)
{
  DWORD v2; // edi
  HMODULE v3; // rbx

  if ( Parameter )
  {
    v2 = ConsumerControlManager::WorkerThreadProc(Parameter);
    v3 = (HMODULE)*((_QWORD *)Parameter + 11);
    *((_QWORD *)Parameter + 11) = 0LL;
    ConsumerControlManager::Release(Parameter);
    FreeLibraryAndExitThread(v3, v2);
  }
  return 87LL;
}
