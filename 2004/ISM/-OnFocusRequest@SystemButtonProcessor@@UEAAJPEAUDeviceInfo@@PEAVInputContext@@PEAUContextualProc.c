/*
 * XREFs of ?OnFocusRequest@SystemButtonProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180011720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemButtonProcessor::OnFocusRequest(
        SystemButtonProcessor *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int v4; // eax

  *(_DWORD *)a4 = 0;
  v4 = *(_DWORD *)a4;
  if ( *((char *)a2 + 4) < 0 )
    v4 = 1;
  *(_DWORD *)a4 = v4;
  return 0LL;
}
