/*
 * XREFs of ?GetProcessId@InputDestTarget@@UEBAKXZ @ 0x18001DFB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputDestTarget::GetProcessId(InputDestTarget *this)
{
  return *((unsigned int *)this + 4);
}
