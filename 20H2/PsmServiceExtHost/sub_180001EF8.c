/*
 * XREFs of sub_180001EF8 @ 0x180001EF8
 * Callers:
 *     sub_1800018B0 @ 0x1800018B0 (sub_1800018B0.c)
 * Callees:
 *     sub_180002080 @ 0x180002080 (sub_180002080.c)
 *     sub_18000220C @ 0x18000220C (sub_18000220C.c)
 *     sub_18000476C @ 0x18000476C (sub_18000476C.c)
 *     sub_180010810 @ 0x180010810 (sub_180010810.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180001EF8(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 a8,
        unsigned __int8 a9,
        int a10,
        unsigned __int8 a11,
        __int64 a12,
        __int64 a13,
        _QWORD *a14)
{
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rbx
  int v21; // esi
  __int64 v23; // [rsp+48h] [rbp-30h]
  __int64 v24; // [rsp+50h] [rbp-28h] BYREF

  v24 = 0LL;
  if ( a12 )
    sub_18000476C(a1, 2, a2, a3, a12);
  v18 = sub_180002080(&v24);
  v20 = v24;
  v21 = v18;
  if ( v18 < 0
    || (v23 = v24,
        *(_QWORD *)(v24 + 64) = a1,
        *(_DWORD *)(v20 + 16) = *(_DWORD *)(a1 + 16),
        *(_QWORD *)(v20 + 24) = *(_QWORD *)(a1 + 24),
        *(_QWORD *)(v20 + 1272) = *(_QWORD *)(a1 + 1272),
        v21 = sub_18000220C(a1, v19, a2, a3, a4, a5, a10, a13, a8, v23),
        v21 < 0) )
  {
    if ( v20 )
    {
      sub_180010810(v20);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
  else
  {
    if ( a12 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(a12 + 16)) <= 1 )
        __fastfail(0xEu);
      v20 = v24;
    }
    *(_QWORD *)(v20 + 1296) = a6;
    *(_QWORD *)(v20 + 1304) = a7;
    *(_DWORD *)(v20 + 1352) &= ~1u;
    *(_DWORD *)(v20 + 1352) = (*(_DWORD *)(v20 + 1352) | a11) ^ (a9 ^ (unsigned __int8)(*(_BYTE *)(v20 + 1352) | a11)) & 4;
    *(_QWORD *)(v20 + 1336) = a12;
    *a14 = v20;
  }
  return (unsigned int)v21;
}
