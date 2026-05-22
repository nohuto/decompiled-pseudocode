/*
 * XREFs of ?GetThreadId@InputDestTarget@@UEBAKXZ @ 0x18001DCF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputDestTarget::GetThreadId(InputDestTarget *this)
{
  return *((unsigned int *)this + 5);
}
