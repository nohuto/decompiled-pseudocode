/*
 * XREFs of ?OnFocusRequest@InputServiceProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180011470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputServiceProcessor::OnFocusRequest(
        InputServiceProcessor *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  *(_DWORD *)a4 = (*((_DWORD *)a2 + 1) >> 2) & 1;
  return 0LL;
}
