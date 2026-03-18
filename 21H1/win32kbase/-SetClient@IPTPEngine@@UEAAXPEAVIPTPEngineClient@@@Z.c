/*
 * XREFs of ?SetClient@IPTPEngine@@UEAAXPEAVIPTPEngineClient@@@Z @ 0x1C00C3550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IPTPEngine::SetClient(IPTPEngine *this, struct IPTPEngineClient *a2)
{
  *((_QWORD *)this + 1) = a2;
}
