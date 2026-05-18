/*
 * XREFs of sub_1800A1348 @ 0x1800A1348
 * Callers:
 *     sub_1800A8530 @ 0x1800A8530 (sub_1800A8530.c)
 *     sub_1800ABF34 @ 0x1800ABF34 (sub_1800ABF34.c)
 *     sub_1800BE380 @ 0x1800BE380 (sub_1800BE380.c)
 *     sub_1800C31B4 @ 0x1800C31B4 (sub_1800C31B4.c)
 *     sub_1800C5EE0 @ 0x1800C5EE0 (sub_1800C5EE0.c)
 *     sub_1800FB310 @ 0x1800FB310 (sub_1800FB310.c)
 * Callees:
 *     sub_1800F00AC @ 0x1800F00AC (sub_1800F00AC.c)
 */

__int64 __fastcall sub_1800A1348(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3[1];
  v6 = 0LL;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v3 = a3[1];
  }
  v4 = *(_QWORD *)(a1 + 18648);
  *(_QWORD *)&v6 = *a3;
  *((_QWORD *)&v6 + 1) = v3;
  return sub_1800F00AC(v4, a2, &v6);
}
