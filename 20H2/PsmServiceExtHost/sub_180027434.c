/*
 * XREFs of sub_180027434 @ 0x180027434
 * Callers:
 *     sub_180023FA0 @ 0x180023FA0 (sub_180023FA0.c)
 *     sub_1800245D0 @ 0x1800245D0 (sub_1800245D0.c)
 *     sub_180025F18 @ 0x180025F18 (sub_180025F18.c)
 *     sub_180027374 @ 0x180027374 (sub_180027374.c)
 *     sub_180027598 @ 0x180027598 (sub_180027598.c)
 *     sub_180081D04 @ 0x180081D04 (sub_180081D04.c)
 *     sub_180081D54 @ 0x180081D54 (sub_180081D54.c)
 *     sub_180083B4C @ 0x180083B4C (sub_180083B4C.c)
 *     sub_180083D0C @ 0x180083D0C (sub_180083D0C.c)
 * Callees:
 *     sub_180025000 @ 0x180025000 (sub_180025000.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 */

unsigned __int64 __fastcall sub_180027434(_QWORD *a1)
{
  unsigned __int64 v2; // rsi
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  __int64 i; // rcx
  _QWORD *v6; // rdx
  unsigned __int64 v7; // rbx

  v2 = a1[4] & 0xFFFFFFFFFFFFFFFCuLL;
  RtlAcquireSRWLockShared(v2 + 16);
  v3 = (_QWORD *)a1[1];
  v4 = a1;
  if ( v3 )
  {
    v6 = (_QWORD *)*v3;
    if ( *v3 )
    {
      do
      {
        v3 = v6;
        v6 = (_QWORD *)*v6;
      }
      while ( v6 );
    }
  }
  else
  {
    for ( i = a1[2]; ; i = v3[2] )
    {
      v3 = (_QWORD *)(i & 0xFFFFFFFFFFFFFFFCuLL);
      if ( !v3 || (_QWORD *)*v3 == v4 )
        break;
      v4 = v3;
    }
  }
  v7 = sub_180025000((unsigned __int64)v3);
  RtlReleaseSRWLockShared(v2 + 16);
  sub_1800274E0(a1);
  return v7;
}
