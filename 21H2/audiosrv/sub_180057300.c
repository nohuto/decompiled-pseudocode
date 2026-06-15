/*
 * XREFs of sub_180057300 @ 0x180057300
 * Callers:
 *     sub_18000C210 @ 0x18000C210 (sub_18000C210.c)
 *     sub_180038C20 @ 0x180038C20 (sub_180038C20.c)
 *     sub_180056F44 @ 0x180056F44 (sub_180056F44.c)
 *     sub_180057BD8 @ 0x180057BD8 (sub_180057BD8.c)
 *     sub_18005C61C @ 0x18005C61C (sub_18005C61C.c)
 *     sub_18005F460 @ 0x18005F460 (sub_18005F460.c)
 *     sub_180060CC8 @ 0x180060CC8 (sub_180060CC8.c)
 *     sub_180060E70 @ 0x180060E70 (sub_180060E70.c)
 *     sub_1800658CC @ 0x1800658CC (sub_1800658CC.c)
 *     sub_180065A0C @ 0x180065A0C (sub_180065A0C.c)
 *     sub_1800CF240 @ 0x1800CF240 (sub_1800CF240.c)
 *     sub_1800DDD90 @ 0x1800DDD90 (sub_1800DDD90.c)
 *     sub_1800F3680 @ 0x1800F3680 (sub_1800F3680.c)
 *     sub_1800F51F4 @ 0x1800F51F4 (sub_1800F51F4.c)
 *     sub_180115D60 @ 0x180115D60 (sub_180115D60.c)
 *     sub_1801352FC @ 0x1801352FC (sub_1801352FC.c)
 *     sub_180138CA4 @ 0x180138CA4 (sub_180138CA4.c)
 *     sub_18013BD54 @ 0x18013BD54 (sub_18013BD54.c)
 *     sub_1801403F0 @ 0x1801403F0 (sub_1801403F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180057300(_WORD *a1, __int64 a2, __int64 a3)
{
  signed int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // r8
  __int16 v6; // ax
  _WORD *v7; // rax

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    if ( a2 )
    {
      v4 = 2147483646 - a2;
      v5 = a3 - (_QWORD)a1;
      do
      {
        if ( !(v4 + a2) )
          break;
        v6 = *(_WORD *)((char *)a1 + v5);
        if ( !v6 )
          break;
        *a1++ = v6;
        --a2;
      }
      while ( a2 );
    }
    v7 = a1 - 1;
    if ( a2 )
      v7 = a1;
    v3 = a2 == 0 ? 0x8007007A : 0;
    *v7 = 0;
  }
  return (unsigned int)v3;
}
