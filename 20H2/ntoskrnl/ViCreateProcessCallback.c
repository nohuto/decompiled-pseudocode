/*
 * XREFs of ViCreateProcessCallback @ 0x14032AEB0
 * Callers:
 *     <none>
 * Callees:
 *     ViCreateProcessCallbackInternal @ 0x1409DFAB4 (ViCreateProcessCallbackInternal.c)
 */

void __fastcall ViCreateProcessCallback(HANDLE ParentId, HANDLE ProcessId, BOOLEAN Create)
{
  HANDLE v3; // rax

  v3 = ProcessId;
  if ( ViVerifierEnabled )
  {
    LOBYTE(ProcessId) = Create;
    ViCreateProcessCallbackInternal(v3, ProcessId);
  }
}
