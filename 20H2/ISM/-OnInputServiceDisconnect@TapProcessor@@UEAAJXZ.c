/*
 * XREFs of ?OnInputServiceDisconnect@TapProcessor@@UEAAJXZ @ 0x18001E5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TapProcessor::OnInputServiceDisconnect(TapProcessor *this)
{
  *((_BYTE *)this + 56) = 0;
  return 0LL;
}
