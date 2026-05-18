/*
 * XREFs of sub_1800D5EAC @ 0x1800D5EAC
 * Callers:
 *     sub_1800EC774 @ 0x1800EC774 (sub_1800EC774.c)
 *     sub_1800EDD9C @ 0x1800EDD9C (sub_1800EDD9C.c)
 *     sub_1800EDEC0 @ 0x1800EDEC0 (sub_1800EDEC0.c)
 *     sub_1800EDFAC @ 0x1800EDFAC (sub_1800EDFAC.c)
 *     sub_1800EE680 @ 0x1800EE680 (sub_1800EE680.c)
 *     sub_1800F06B0 @ 0x1800F06B0 (sub_1800F06B0.c)
 *     sub_180104770 @ 0x180104770 (sub_180104770.c)
 *     unknown_libname_77 @ 0x180129893 (unknown_libname_77.c)
 *     unknown_libname_153 @ 0x18012A27B (unknown_libname_153.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D5EAC(__int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax
  volatile signed __int32 *v4; // rbx

  v1 = *(volatile signed __int32 **)(a1 + 24);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedDecrement(v1 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      result = (unsigned int)_InterlockedDecrement(v1 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  v4 = *(volatile signed __int32 **)(a1 + 8);
  if ( v4 )
  {
    result = (unsigned int)_InterlockedDecrement(v4 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      result = (unsigned int)_InterlockedDecrement(v4 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return result;
}
