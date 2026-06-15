/*
 * XREFs of sub_180105F64 @ 0x180105F64
 * Callers:
 *     sub_180108B84 @ 0x180108B84 (sub_180108B84.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_1801061E8 @ 0x1801061E8 (sub_1801061E8.c)
 *     sub_180106940 @ 0x180106940 (sub_180106940.c)
 *     sub_180106B9C @ 0x180106B9C (sub_180106B9C.c)
 *     sub_180108AAC @ 0x180108AAC (sub_180108AAC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180105F64(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // r14
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rax
  ATL::CAtlException *v11; // rbx
  __int64 v12; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+38h] [rbp-60h] BYREF
  __int64 v14; // [rsp+40h] [rbp-58h] BYREF
  __int64 v15; // [rsp+48h] [rbp-50h]
  __int64 v16; // [rsp+50h] [rbp-48h] BYREF
  char v17; // [rsp+58h] [rbp-40h]
  int v18; // [rsp+5Ch] [rbp-3Ch]
  __int128 v19; // [rsp+60h] [rbp-38h]
  char v20[8]; // [rsp+70h] [rbp-28h] BYREF
  ATL::CAtlException *v21; // [rsp+78h] [rbp-20h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a3;
  v5 = 0LL;
  v15 = 0LL;
  v13 = 0LL;
  v6 = sub_180106940();
  sub_1801061E8(&v13, v6);
  v7 = v13;
  if ( v13 )
  {
    v14 = v13;
    if ( !sub_180106B9C(a1, (unsigned int)&v14, (unsigned int)&v12, (unsigned int)&v23, (__int64)v20) )
    {
      try
      {
        v16 = 0LL;
        v17 = 1;
        v18 = 0;
        v19 = 0LL;
        v12 = 0LL;
        v23 = v7;
        v9 = sub_180108AAC(a1, &v23, &v16);
        v12 = v9;
      }
      catch ( ATL::CAtlException *v21 )
      {
        v11 = v21;
        if ( *(_DWORD *)v21 == -1073741571 )
          o__resetstkoflw();
        LODWORD(v23) = *(_DWORD *)v11;
        if ( (int)v23 < 0 )
        {
          v5 = v15;
          goto LABEL_9;
        }
        v3 = a3;
        v9 = v12;
      }
      v5 = v9 + 8;
      if ( v3 )
        *v3 = v9;
    }
  }
LABEL_9:
  sub_1800461B8(&v13);
  return v5;
}
