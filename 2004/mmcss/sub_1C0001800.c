/*
 * XREFs of sub_1C0001800 @ 0x1C0001800
 * Callers:
 *     sub_1C0004874 @ 0x1C0004874 (sub_1C0004874.c)
 *     sub_1C000A800 @ 0x1C000A800 (sub_1C000A800.c)
 *     sub_1C000C8B4 @ 0x1C000C8B4 (sub_1C000C8B4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0001800(unsigned int a1)
{
  __int64 result; // rax

  if ( !a1 )
    return KeAlertThread(Object, 0LL);
  _m_prefetchw(&dword_1C0007260);
  result = (unsigned int)_InterlockedOr(&dword_1C0007260, a1);
  if ( (result & 0x8000) != 0 )
    return KeAlertThread(Object, 0LL);
  return result;
}
