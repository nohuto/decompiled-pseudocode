/*
 * XREFs of sub_180068750 @ 0x180068750
 * Callers:
 *     sub_1800AAAB0 @ 0x1800AAAB0 (sub_1800AAAB0.c)
 *     sub_1800D6570 @ 0x1800D6570 (sub_1800D6570.c)
 *     sub_1800D86A8 @ 0x1800D86A8 (sub_1800D86A8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180068750(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  volatile signed __int32 *v5; // rdx
  volatile signed __int32 *v6; // rcx

  v2 = a2[1];
  result = *a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  v5 = *(volatile signed __int32 **)(a1 + 120);
  *(_QWORD *)(a1 + 112) = result;
  *(_QWORD *)(a1 + 120) = v2;
  if ( v5 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v6 = (volatile signed __int32 *)a2[1];
  if ( v6 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  return result;
}
