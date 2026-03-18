/*
 * XREFs of _I_PlaySoundkPostMessage@24 @ 0xA1C0C
 * Callers:
 *     _PlaySoundPostMessage@12 @ 0x27A3F0 (_PlaySoundPostMessage@12.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall I_PlaySoundkPostMessage(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return _NdrAsyncClientCall2(&pStubDescriptor, &pFormat, a1, a2, a3, a4, 0, &unk_274B48);
}
