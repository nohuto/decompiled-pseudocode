/*
 * XREFs of sub_1800F7D60 @ 0x1800F7D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F7D60(__int64 a1)
{
  __int64 result; // rax

  result = IsHdAudioProtocolNotifyRundownSupported();
  if ( (_DWORD)result )
    return TS_AudioProtocolNotifyRundown(a1);
  return result;
}
