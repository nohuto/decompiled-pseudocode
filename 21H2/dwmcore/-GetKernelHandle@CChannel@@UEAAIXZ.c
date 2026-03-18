/*
 * XREFs of ?GetKernelHandle@CChannel@@UEAAIXZ @ 0x1800FA5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CChannel::GetKernelHandle(CChannel *this)
{
  return *((unsigned int *)this + 14);
}
