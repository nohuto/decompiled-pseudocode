/*
 * XREFs of IoMmuAllocatePage @ 0x1C0056DD0
 * Callers:
 *     IoMmuUpdatePfn @ 0x1C0057520 (IoMmuUpdatePfn.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     IoMmuCompareIoMmuPagePfn @ 0x1C0056F80 (IoMmuCompareIoMmuPagePfn.c)
 */

__int64 *__fastcall IoMmuAllocatePage(__int64 a1, __int64 a2)
{
  char v2; // bl
  __m128i *v4; // rdi
  __m128i *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rsi
  __int64 v11; // rax
  __m128i si128; // xmm0
  _QWORD *v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // [rsp+38h] [rbp+10h] BYREF

  v16 = a2;
  v2 = 0;
  v4 = 0LL;
  if ( *(_QWORD *)(a1 + 24) )
  {
    v5 = (__m128i *)operator new[](0x50uLL, 0x74727044u, (POOL_TYPE)512);
    v4 = v5;
  }
  else
  {
    v5 = (__m128i *)operator new[](0x28uLL, 0x74727044u, (POOL_TYPE)512);
  }
  v10 = (__int64 *)v5;
  if ( v5 )
  {
    v5[2].m128i_i64[0] = v16;
    v5[1].m128i_i32[2] = 0;
    if ( v4 )
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      v4[2].m128i_i32[2] = 0;
      v4[3] = si128;
      v4[4] = si128;
    }
    v14 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      while ( 1 )
      {
        if ( (int)IoMmuCompareIoMmuPagePfn(&v16, v14) < 0 )
        {
          v15 = (_QWORD *)*v14;
          if ( !*v14 )
            break;
        }
        else
        {
          v15 = (_QWORD *)v14[1];
          if ( !v15 )
          {
            v2 = 1;
            break;
          }
        }
        v14 = v15;
      }
    }
    LOBYTE(v8) = v2;
    RtlAvlInsertNodeEx(a1, v14, v8, v10);
    return v10;
  }
  else
  {
    v11 = WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
    *(_QWORD *)(v11 + 24) = 259LL;
    WdLogEvent5_WdLowResource(v11);
    return 0LL;
  }
}
