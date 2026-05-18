/*
 * XREFs of sub_180082188 @ 0x180082188
 * Callers:
 *     sub_18007EAF8 @ 0x18007EAF8 (sub_18007EAF8.c)
 *     sub_180081464 @ 0x180081464 (sub_180081464.c)
 * Callees:
 *     sub_180083A6C @ 0x180083A6C (sub_180083A6C.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180082188(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  volatile signed __int32 *v5; // rcx
  __int64 result; // rax

  sub_180083A6C(a1);
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
    v4 = a2[1];
  }
  v5 = *(volatile signed __int32 **)(a1 + 136);
  result = *a2;
  *(_QWORD *)(a1 + 128) = *a2;
  *(_QWORD *)(a1 + 136) = v4;
  if ( v5 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return result;
}
