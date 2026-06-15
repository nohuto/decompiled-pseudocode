/*
 * XREFs of sub_180017B60 @ 0x180017B60
 * Callers:
 *     sub_18003BD34 @ 0x18003BD34 (sub_18003BD34.c)
 *     unknown_libname_46 @ 0x18003C32C (unknown_libname_46.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180017B60(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 16LL))(v1);
      return (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 8LL))(v1, 1LL);
    }
  }
  return result;
}
