/*
 * XREFs of sub_18006149C @ 0x18006149C
 * Callers:
 *     sub_18001703C @ 0x18001703C (sub_18001703C.c)
 *     sub_18001E08C @ 0x18001E08C (sub_18001E08C.c)
 *     sub_18001E2D4 @ 0x18001E2D4 (sub_18001E2D4.c)
 *     sub_18001E51C @ 0x18001E51C (sub_18001E51C.c)
 *     sub_18001E764 @ 0x18001E764 (sub_18001E764.c)
 *     sub_18001E9AC @ 0x18001E9AC (sub_18001E9AC.c)
 *     sub_1800D6F28 @ 0x1800D6F28 (sub_1800D6F28.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006149C(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rbx
  __int64 result; // rax
  volatile signed __int32 *v5; // rcx

  v2 = *(volatile signed __int32 **)(a1 + 8);
  if ( v2 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      result = (unsigned int)_InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  v5 = *(volatile signed __int32 **)(a2 + 8);
  if ( v5 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return result;
}
