/*
 * XREFs of ?OnFocusRequest@TapProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180181D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TapProcessor::OnFocusRequest(
        TapProcessor *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int v4; // ecx
  __int64 result; // rax

  *(_DWORD *)a4 = 0;
  v4 = *(_DWORD *)a4;
  if ( (*((_BYTE *)a2 + 4) & 0xC6) == 4 )
    v4 = 3;
  result = 0LL;
  *(_DWORD *)a4 = v4;
  return result;
}
