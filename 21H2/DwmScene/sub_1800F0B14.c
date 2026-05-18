/*
 * XREFs of sub_1800F0B14 @ 0x1800F0B14
 * Callers:
 *     sub_180090360 @ 0x180090360 (sub_180090360.c)
 *     sub_18009B690 @ 0x18009B690 (sub_18009B690.c)
 *     sub_1800ADE00 @ 0x1800ADE00 (sub_1800ADE00.c)
 *     sub_1800AF854 @ 0x1800AF854 (sub_1800AF854.c)
 *     sub_1800B0380 @ 0x1800B0380 (sub_1800B0380.c)
 *     sub_1800B1804 @ 0x1800B1804 (sub_1800B1804.c)
 *     sub_1800B86C4 @ 0x1800B86C4 (sub_1800B86C4.c)
 *     sub_1800B9190 @ 0x1800B9190 (sub_1800B9190.c)
 *     sub_1800F0754 @ 0x1800F0754 (sub_1800F0754.c)
 *     sub_1800F0C34 @ 0x1800F0C34 (sub_1800F0C34.c)
 *     sub_1800FDF20 @ 0x1800FDF20 (sub_1800FDF20.c)
 *     sub_1800FE2C0 @ 0x1800FE2C0 (sub_1800FE2C0.c)
 *     sub_1800FED34 @ 0x1800FED34 (sub_1800FED34.c)
 *     sub_1800FFD00 @ 0x1800FFD00 (sub_1800FFD00.c)
 *     sub_180100870 @ 0x180100870 (sub_180100870.c)
 *     sub_1801009C8 @ 0x1801009C8 (sub_1801009C8.c)
 *     sub_180100AA0 @ 0x180100AA0 (sub_180100AA0.c)
 *     sub_180100BE0 @ 0x180100BE0 (sub_180100BE0.c)
 *     sub_180101A10 @ 0x180101A10 (sub_180101A10.c)
 *     sub_180103A84 @ 0x180103A84 (sub_180103A84.c)
 * Callees:
 *     sub_180085564 @ 0x180085564 (sub_180085564.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F0B14(__int64 a1)
{
  __int64 v1; // r8
  volatile signed __int32 *v2; // rbx
  __int64 v3; // rdx
  signed __int32 v4; // eax
  __int64 v5; // rdi

  v1 = 0LL;
  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(v3 + 8);
      if ( !v4 )
        break;
      if ( v4 == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v4 + 1, v4) )
      {
        v1 = *(_QWORD *)(a1 + 56);
        v2 = *(volatile signed __int32 **)(a1 + 64);
        break;
      }
    }
  }
  v5 = sub_180085564(v1);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  return v5;
}
