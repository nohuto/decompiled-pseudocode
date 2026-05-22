/*
 * XREFs of std::_Func_impl_no_alloc__lambda_3cfa35e9c796ca0beab8e1187c70cfaf__void_Microsoft::WRL::ComPtr_BamoInputObserverClientProxy__const_&_::_Do_call @ 0x180044D80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E60 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Func_impl_no_alloc__lambda_3cfa35e9c796ca0beab8e1187c70cfaf__void_Microsoft::WRL::ComPtr_BamoInputObserverClientProxy__const___::_Do_call(
        __int64 a1,
        __int64 (__fastcall ****a2)(_QWORD))
{
  __int64 result; // rax
  __int64 (__fastcall ***v4)(_QWORD); // rcx
  __int64 (__fastcall ***v5)(_QWORD); // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall ****v6)(_QWORD); // [rsp+38h] [rbp+10h]

  v5 = *a2;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v5);
  v6 = &v5;
  result = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD))v5[1][3])(v5 + 1, *(_QWORD *)(a1 + 8));
  v4 = v5;
  if ( v5 )
  {
    v5 = 0LL;
    return (*v4)[1](v4);
  }
  return result;
}
