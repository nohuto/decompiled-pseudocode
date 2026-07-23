/*
 * XREFs of KeUpdateQosGroupingSets @ 0x140398F4C
 * Callers:
 *     PpmPerfArbitratorApplyProcessorState @ 0x140398DF4 (PpmPerfArbitratorApplyProcessorState.c)
 * Callees:
 *     KiIsQosGroupingActive @ 0x140398FA4 (KiIsQosGroupingActive.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall KeUpdateQosGroupingSets(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 result; // rax
  _QWORD *v5; // r9
  __int128 v6; // xmm0
  __int64 v7; // r11
  __int64 v8; // r10
  __int64 v9; // rbx
  __int64 v10; // rdx
  signed __int64 v11; // rcx
  signed __int64 v12; // rbx
  unsigned __int128 v13; // rt0
  unsigned __int8 v14; // tt
  __int64 v15; // [rsp+38h] [rbp-18h]

  v3 = a2;
  result = KiIsQosGroupingActive(a1, a2, a3);
  if ( (_BYTE)result )
  {
    v6 = *(_OWORD *)(v5[24] + 352LL);
    v7 = *(_QWORD *)(v5[24] + 360LL);
    v8 = *(_QWORD *)(v5[24] + 352LL);
    while ( 1 )
    {
      v9 = v5[25];
      v10 = v5[4235];
      v11 = *((_QWORD *)&v6 + 1);
      if ( (unsigned int)(v3 - 1) > 1 )
      {
        v12 = v8 & ~v9;
        v11 = ~v10 & *((_QWORD *)&v6 + 1);
      }
      else
      {
        v12 = v8 | v9;
        if ( (v10 & v12) == v10 )
          v11 = v10 | *((_QWORD *)&v6 + 1);
      }
      *(_QWORD *)&v13 = v8;
      *((_QWORD *)&v13 + 1) = v7;
      v14 = _InterlockedCompareExchange128(
              (volatile signed __int64 *)(v5[24] + 352LL),
              v11,
              v12,
              (signed __int64 *)&v13);
      v15 = v13 >> 64;
      result = v13;
      v7 = v13 >> 64;
      v8 = v13;
      if ( v14 )
        break;
      *((_QWORD *)&v6 + 1) = v15;
    }
  }
  return result;
}
