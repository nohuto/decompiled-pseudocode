/*
 * XREFs of sub_180083D0C @ 0x180083D0C
 * Callers:
 *     sub_180083790 @ 0x180083790 (sub_180083790.c)
 * Callees:
 *     sub_180025704 @ 0x180025704 (sub_180025704.c)
 *     sub_180027434 @ 0x180027434 (sub_180027434.c)
 *     sub_180083F70 @ 0x180083F70 (sub_180083F70.c)
 *     sub_180084130 @ 0x180084130 (sub_180084130.c)
 *     sub_1800841A0 @ 0x1800841A0 (sub_1800841A0.c)
 */

unsigned __int64 __fastcall sub_180083D0C(__int64 a1)
{
  unsigned __int64 result; // rax
  _QWORD *v3; // rbx

  RtlAcquireSRWLockExclusive(a1 + 48);
  GetCurrentThreadId();
  *(_BYTE *)(a1 + 64) &= ~1u;
  *(_DWORD *)(a1 + 56) = 0;
  RtlReleaseSRWLockExclusive(a1 + 48);
  for ( result = sub_180025704(a1); ; result = sub_180027434(v3) )
  {
    v3 = (_QWORD *)result;
    if ( !result )
      break;
    sub_1800841A0(result);
    sub_180084130(v3);
    sub_180083F70(v3);
  }
  return result;
}
