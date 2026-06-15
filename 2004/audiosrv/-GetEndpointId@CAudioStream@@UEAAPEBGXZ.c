/*
 * XREFs of ?GetEndpointId@CAudioStream@@UEAAPEBGXZ @ 0x180045860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall CAudioStream::GetEndpointId(CAudioStream *this)
{
  return (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 72LL))(*((_QWORD *)this + 7));
}
