/*
 * XREFs of sub_1800EB4D8 @ 0x1800EB4D8
 * Callers:
 *     sub_1800EB300 @ 0x1800EB300 (sub_1800EB300.c)
 * Callees:
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800EB4D8(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rdx
  volatile signed __int32 *v3; // rbx
  __int64 v4; // r8
  signed __int32 v5; // eax
  __int64 v6; // [rsp+20h] [rbp-18h]

  v1 = a1;
  v2 = 0LL;
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v4 + 8);
      if ( !v5 )
        break;
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) )
      {
        v2 = *(_QWORD *)(a1 + 56);
        v3 = *(volatile signed __int32 **)(a1 + 64);
        break;
      }
    }
  }
  v6 = v2;
  if ( v2 )
    sub_1800839A4(v2);
  if ( v3 && _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *, __int64, __int64, __int64, __int64, volatile signed __int32 *))v3)(
      v3,
      v2,
      v4,
      v1,
      v6,
      v3);
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  }
}
