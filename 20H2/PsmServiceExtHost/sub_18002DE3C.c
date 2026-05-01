/*
 * XREFs of sub_18002DE3C @ 0x18002DE3C
 * Callers:
 *     sub_1800018B0 @ 0x1800018B0 (sub_1800018B0.c)
 *     sub_180004474 @ 0x180004474 (sub_180004474.c)
 *     sub_18002CAD4 @ 0x18002CAD4 (sub_18002CAD4.c)
 * Callees:
 *     sub_18000BF80 @ 0x18000BF80 (sub_18000BF80.c)
 *     sub_18002DFB0 @ 0x18002DFB0 (sub_18002DFB0.c)
 */

__int64 __fastcall sub_18002DE3C(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // r13
  unsigned int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // r10
  int v11; // r9d
  __int64 v12; // rdi

  v6 = 0LL;
  v7 = sub_18000BF80(a1, a2);
  v8 = -1073741275;
  RtlAcquireSRWLockShared(a1 + 32);
  while ( 1 )
  {
    v9 = *(_DWORD *)(a1 + 2532) & 0x1F;
    v10 = v7 & (-1LL << (*(_BYTE *)(a1 + 2532) & 0x1F));
    if ( v6 )
      goto LABEL_5;
    v11 = *(_DWORD *)(a1 + 2532) >> 5;
    if ( !v11 )
      break;
    v9 = (37
        * (BYTE6(v10)
         + 37
         * (BYTE5(v10)
          + 37
          * (BYTE4(v10)
           + 37 * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
        + HIBYTE(v10)) & (unsigned int)(v11 - 1);
    v6 = *(_QWORD *)(a1 + 2536) + 8 * v9;
LABEL_5:
    while ( 1 )
    {
      v6 = *(_QWORD *)v6;
      if ( (v6 & 1) != 0 )
        break;
      if ( v10 == ((-1LL << (*(_BYTE *)(a1 + 2532) & 0x1F)) & *(_QWORD *)(v6 + 8)) )
        goto LABEL_7;
    }
    v6 = 0LL;
LABEL_7:
    if ( !v6 )
      break;
    v12 = v6 - 1392;
    if ( (unsigned __int8)sub_18002DFB0(v9, a2, v6 - 1392 + 88) )
    {
      v8 = 0;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 16)) <= 1 )
        __fastfail(0xEu);
      *a3 = v12;
      break;
    }
  }
  RtlReleaseSRWLockShared(a1 + 32);
  return v8;
}
