/*
 * XREFs of sub_18013933C @ 0x18013933C
 * Callers:
 *     sub_1800661E0 @ 0x1800661E0 (sub_1800661E0.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_180138F94 @ 0x180138F94 (sub_180138F94.c)
 *     sub_18013957C @ 0x18013957C (sub_18013957C.c)
 */

__int64 __fastcall sub_18013933C(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // r15
  __int64 v4; // rsi
  int v5; // edi
  unsigned __int64 v6; // r14
  unsigned __int64 i; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  _BYTE *v10; // rdx
  __int64 v11; // rax
  ATL::CAtlException *v13; // rbx
  unsigned __int64 v14; // [rsp+20h] [rbp-248h]
  ATL::CAtlException *v15; // [rsp+28h] [rbp-240h] BYREF
  _BYTE v16[568]; // [rsp+30h] [rbp-238h] BYREF
  unsigned __int64 v19; // [rsp+288h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v5 = 0;
  v6 = *(_QWORD *)(a2 + 16);
  v14 = v6;
  for ( i = 0LL; ; ++i )
  {
    v19 = i;
    if ( i >= v6 || v5 < 0 )
      break;
    v8 = sub_18013957C(v4, i);
    if ( !v8 )
      sub_1800B8610(-2147467259);
    v9 = v8 + 16;
    v10 = v16;
    v11 = 4LL;
    do
    {
      *(_OWORD *)v10 = *(_OWORD *)v9;
      *((_OWORD *)v10 + 1) = *(_OWORD *)(v9 + 16);
      *((_OWORD *)v10 + 2) = *(_OWORD *)(v9 + 32);
      *((_OWORD *)v10 + 3) = *(_OWORD *)(v9 + 48);
      *((_OWORD *)v10 + 4) = *(_OWORD *)(v9 + 64);
      *((_OWORD *)v10 + 5) = *(_OWORD *)(v9 + 80);
      *((_OWORD *)v10 + 6) = *(_OWORD *)(v9 + 96);
      v10 += 128;
      *((_OWORD *)v10 - 1) = *(_OWORD *)(v9 + 112);
      v9 += 128LL;
      --v11;
    }
    while ( v11 );
    try
    {
      *(_QWORD *)v10 = *(_QWORD *)v9;
      *((_DWORD *)v10 + 2) = *(_DWORD *)(v9 + 8);
      v5 = 0;
      sub_180138F94(v3, (__int64)v16);
    }
    catch ( ATL::CAtlException *v15 )
    {
      v13 = v15;
      if ( *(_DWORD *)v15 == -1073741571 )
        o__resetstkoflw();
      v3 = a3;
      v4 = a2;
      v5 = *(_DWORD *)v13;
      v6 = v14;
      i = v19;
      continue;
    }
  }
  return (unsigned int)v5;
}
