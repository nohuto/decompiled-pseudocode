/*
 * XREFs of sub_1800706FC @ 0x1800706FC
 * Callers:
 *     sub_180014E9C @ 0x180014E9C (sub_180014E9C.c)
 * Callees:
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_180041058 @ 0x180041058 (sub_180041058.c)
 *     sub_1800410C4 @ 0x1800410C4 (sub_1800410C4.c)
 *     sub_18006B6B4 @ 0x18006B6B4 (sub_18006B6B4.c)
 */

__int64 __fastcall sub_1800706FC(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  char *v5; // rbx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_1800410C4(*(_QWORD *)(a1 + 24) + 16LL, v7);
  while ( 1 )
  {
    v4 = sub_180041058(v7);
    v5 = (char *)v4;
    if ( !v4 )
      break;
    if ( *(_QWORD *)(v4 + 56) == a1 )
      sub_18006B6B4(v4, 2, 14, a2);
    sub_1800265B0(v5);
  }
  return RtlReleaseSRWLockShared(v7[0] + 16LL);
}
