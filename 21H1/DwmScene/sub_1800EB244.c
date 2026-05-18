/*
 * XREFs of sub_1800EB244 @ 0x1800EB244
 * Callers:
 *     sub_18008AA90 @ 0x18008AA90 (sub_18008AA90.c)
 *     sub_180095DC0 @ 0x180095DC0 (sub_180095DC0.c)
 *     sub_1800A8530 @ 0x1800A8530 (sub_1800A8530.c)
 *     sub_1800A9F84 @ 0x1800A9F84 (sub_1800A9F84.c)
 *     sub_1800AAAB0 @ 0x1800AAAB0 (sub_1800AAAB0.c)
 *     sub_1800ABF34 @ 0x1800ABF34 (sub_1800ABF34.c)
 *     sub_1800B2DF4 @ 0x1800B2DF4 (sub_1800B2DF4.c)
 *     sub_1800B38C0 @ 0x1800B38C0 (sub_1800B38C0.c)
 *     sub_1800EAE84 @ 0x1800EAE84 (sub_1800EAE84.c)
 *     sub_1800EB364 @ 0x1800EB364 (sub_1800EB364.c)
 *     sub_1800F8650 @ 0x1800F8650 (sub_1800F8650.c)
 *     sub_1800F89F0 @ 0x1800F89F0 (sub_1800F89F0.c)
 *     sub_1800F9464 @ 0x1800F9464 (sub_1800F9464.c)
 *     sub_1800FA430 @ 0x1800FA430 (sub_1800FA430.c)
 *     sub_1800FAFA0 @ 0x1800FAFA0 (sub_1800FAFA0.c)
 *     sub_1800FB0F8 @ 0x1800FB0F8 (sub_1800FB0F8.c)
 *     sub_1800FB1D0 @ 0x1800FB1D0 (sub_1800FB1D0.c)
 *     sub_1800FB310 @ 0x1800FB310 (sub_1800FB310.c)
 *     sub_1800FC140 @ 0x1800FC140 (sub_1800FC140.c)
 *     sub_1800FE1B4 @ 0x1800FE1B4 (sub_1800FE1B4.c)
 * Callees:
 *     sub_18007FC94 @ 0x18007FC94 (sub_18007FC94.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800EB244(__int64 a1)
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
  v5 = sub_18007FC94(v1);
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
