/*
 * XREFs of ?GetPackageSid@CProcess@@UEAAPEBGXZ @ 0x18001F280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall CProcess::GetPackageSid(CProcess *this)
{
  return (const unsigned __int16 *)*((_QWORD *)this + 27);
}
