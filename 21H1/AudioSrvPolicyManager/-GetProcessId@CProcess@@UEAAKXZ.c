/*
 * XREFs of ?GetProcessId@CProcess@@UEAAKXZ @ 0x18001FC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::GetProcessId(CProcess *this)
{
  return *((unsigned int *)this + 44);
}
