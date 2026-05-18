/*
 * XREFs of sub_18008B4F8 @ 0x18008B4F8
 * Callers:
 *     sub_18012BB39 @ 0x18012BB39 (sub_18012BB39.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18008B4F8(__int64 a1)
{
  volatile signed __int32 *v1; // rcx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 16);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
  }
  return result;
}
