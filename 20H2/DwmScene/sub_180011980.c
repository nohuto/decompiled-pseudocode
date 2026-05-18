/*
 * XREFs of sub_180011980 @ 0x180011980
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000DC98 @ 0x18000DC98 (sub_18000DC98.c)
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_180082B74 @ 0x180082B74 (sub_180082B74.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180011980(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int128 v9; // xmm3
  unsigned int v10; // ebx
  signed __int32 v11; // eax
  __int128 v13; // [rsp+20h] [rbp-29h]
  _OWORD v14[4]; // [rsp+30h] [rbp-19h] BYREF
  __int128 v15; // [rsp+70h] [rbp+27h] BYREF
  __int64 retaddr; // [rsp+A8h] [rbp+5Fh]

  v15 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v13 = 0LL;
  v5 = *(_QWORD *)(v4 + 80);
  if ( v5 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(v5 + 8);
      if ( !v11 )
        break;
      if ( v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v11 + 1, v11) )
      {
        *(_QWORD *)&v13 = *(_QWORD *)(v4 + 72);
        v6 = *(_QWORD *)(v4 + 80);
        *((_QWORD *)&v13 + 1) = v6;
        goto LABEL_3;
      }
    }
  }
  v6 = 0LL;
LABEL_3:
  sub_1800615B4(v13 + 16, &v15);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v13 + 1))(*((_QWORD *)&v13 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v13 + 1) + 8LL))(*((_QWORD *)&v13 + 1));
    }
  }
  v7 = a2[1];
  v8 = a2[2];
  v9 = a2[3];
  v14[0] = *a2;
  v14[1] = v7;
  v14[2] = v8;
  v14[3] = v9;
  if ( (unsigned __int8)sub_180082B74(*(_QWORD *)(a1 + 16), v14) )
  {
    v10 = 0;
  }
  else
  {
    v10 = -2147024809;
    sub_18000DC98(retaddr, 232, (__int64)"SpectreLightNode.cpp", 0x80070057);
  }
  if ( BYTE8(v15) )
    sub_180061A34(v15);
  return v10;
}
