/*
 * XREFs of sub_18006C9B0 @ 0x18006C9B0
 * Callers:
 *     sub_18006C090 @ 0x18006C090 (sub_18006C090.c)
 * Callees:
 *     sub_18006CC08 @ 0x18006CC08 (sub_18006CC08.c)
 *     sub_180070408 @ 0x180070408 (sub_180070408.c)
 */

signed __int64 __fastcall sub_18006C9B0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  _QWORD *v9; // r8
  _QWORD *v10; // rdx
  signed __int64 v11; // r9
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  unsigned int v14; // ecx
  __int64 **v15; // r8
  __int64 *v16; // rax
  signed __int64 result; // rax

  v4 = *a1;
  sub_180070408(*a1 + 48);
  *(_QWORD *)(a4 + 56) = a2;
  v9 = *(_QWORD **)(a2 + 32);
  v10 = (_QWORD *)(a4 + 88);
  if ( *v9 != a2 + 24 )
    goto LABEL_11;
  *v10 = a2 + 24;
  *(_QWORD *)(a4 + 96) = v9;
  *v9 = v10;
  *(_QWORD *)(a2 + 32) = v10;
  ++*(_DWORD *)(a2 + 60);
  sub_18006CC08(v4, a2);
  *(_QWORD *)(a4 + 64) = a3;
  v12 = *(_QWORD **)(a3 + 88);
  v13 = (_QWORD *)(a4 + 104);
  if ( *v12 != a3 + 80 )
    goto LABEL_11;
  *v13 = a3 + 80;
  *(_QWORD *)(a4 + 112) = v12;
  *v12 = v13;
  *(_QWORD *)(a3 + 88) = v13;
  v14 = v11 + 13;
  if ( v11 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 16), (unsigned int)v11) <= v11 )
    __fastfail(v14);
  if ( v11 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a4 + 16), v11) <= v11 )
    __fastfail(v14);
  *(_QWORD *)(a4 + 48) = a1;
  v15 = (__int64 **)a1[6];
  v16 = (__int64 *)(a4 + 72);
  if ( *v15 != a1 + 5 )
LABEL_11:
    __fastfail(3u);
  *v16 = (__int64)(a1 + 5);
  *(_QWORD *)(a4 + 80) = v15;
  *v15 = v16;
  a1[6] = (__int64)v16;
  result = v11 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a4 + 16), v11);
  if ( result <= v11 )
    __fastfail(v14);
  return result;
}
