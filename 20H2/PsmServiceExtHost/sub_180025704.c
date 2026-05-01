/*
 * XREFs of sub_180025704 @ 0x180025704
 * Callers:
 *     sub_180025F18 @ 0x180025F18 (sub_180025F18.c)
 *     sub_180027374 @ 0x180027374 (sub_180027374.c)
 *     sub_180081D04 @ 0x180081D04 (sub_180081D04.c)
 *     sub_180081D54 @ 0x180081D54 (sub_180081D54.c)
 *     sub_180083B4C @ 0x180083B4C (sub_180083B4C.c)
 *     sub_180083D0C @ 0x180083D0C (sub_180083D0C.c)
 * Callees:
 *     sub_180025000 @ 0x180025000 (sub_180025000.c)
 */

unsigned __int64 __fastcall sub_180025704(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbx

  v1 = a1 + 16;
  RtlAcquireSRWLockShared(a1 + 16);
  v3 = *(_QWORD *)(a1 + 8);
  if ( (v3 & 1) != 0 )
  {
    if ( v3 == 1 )
      v4 = 0LL;
    else
      v4 = v3 ^ (a1 | 1);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 8);
  }
  v5 = sub_180025000(v4);
  RtlReleaseSRWLockShared(v1);
  return v5;
}
