/*
 * XREFs of _HotKeyProcessor::RegisterHotKeyClient_::_1_::catch$6 @ 0x1801A1A2F
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0sqq_EventWriteTransfer @ 0x180149230 (McTemplateU0sqq_EventWriteTransfer.c)
 */

__int64 __fastcall HotKeyProcessor::RegisterHotKeyClient_::_1_::catch_6(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 80) = -2147024882;
  if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
    McTemplateU0sqq_EventWriteTransfer(a1, a2, "HotKeyProcessor::RegisterHotKeyClient", 172LL, 14);
  return 0LL;
}
