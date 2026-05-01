/*
 * XREFs of sub_180070928 @ 0x180070928
 * Callers:
 *     sub_180063764 @ 0x180063764 (sub_180063764.c)
 * Callees:
 *     sub_180005700 @ 0x180005700 (sub_180005700.c)
 */

__int64 __fastcall sub_180070928(_DWORD *a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  RtlAcquireSRWLockExclusive(a1);
  a1[2] = GetCurrentThreadId();
  a1[10] |= 1u;
  while ( a1[19] )
    sub_180005700((__int64)a1, (__int64)(a1 + 8), 0LL);
  a1[2] = 0;
  RtlReleaseSRWLockExclusive(a1);
  while ( 1 )
  {
    result = (unsigned int)a1[21];
    v3 = result;
    if ( !(_DWORD)result )
      break;
    RtlWaitOnAddress(a1 + 21, &v3, 4LL);
  }
  return result;
}
