/*
 * XREFs of ?ToMicroseconds@TimeDelta@@QEBA_JXZ @ 0x18004F440
 * Callers:
 *     ?ToMilliseconds@TimeDelta@@QEBAHXZ @ 0x18004F3E0 (-ToMilliseconds@TimeDelta@@QEBAHXZ.c)
 *     ?ToSeconds@TimeDelta@@QEBAMXZ @ 0x180227E7C (-ToSeconds@TimeDelta@@QEBAMXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TimeDelta::ToMicroseconds(TimeDelta *this)
{
  __int64 result; // rax

  result = 0x7FFFFFFFFFFFFFFFLL;
  if ( *(_QWORD *)this != 0x7FFFFFFFFFFFFFFFLL )
    return 1000000LL * *(_QWORD *)this / Time::s_luFreq.QuadPart;
  return result;
}
