/*
 * XREFs of ?WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z @ 0x180038860
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@LampArrayRawInputProvider@@UEAAKXZ @ 0x180010790 (-Release@LampArrayRawInputProvider@@UEAAKXZ.c)
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x1800388B0 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 */

__int64 __fastcall LampArrayRawInputProvider::WorkerThreadProcThunk(LampArrayRawInputProvider *Parameter)
{
  DWORD v2; // edi
  HMODULE v3; // rbx

  if ( Parameter )
  {
    v2 = LampArrayRawInputProvider::WorkerThreadProc(Parameter);
    v3 = (HMODULE)*((_QWORD *)Parameter + 12);
    *((_QWORD *)Parameter + 12) = 0LL;
    LampArrayRawInputProvider::Release((ULONG_PTR)Parameter);
    FreeLibraryAndExitThread(v3, v2);
  }
  return 87LL;
}
