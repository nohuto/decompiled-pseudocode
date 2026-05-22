/*
 * XREFs of ?OnFocusRequest@HotkeyContextualProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18017FF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HotkeyContextualProcessor::OnFocusRequest(
        HotkeyContextualProcessor *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  __int64 result; // rax

  result = 0LL;
  *(_DWORD *)a4 = (*((_DWORD *)a2 + 1) & 6) == 4;
  return result;
}
