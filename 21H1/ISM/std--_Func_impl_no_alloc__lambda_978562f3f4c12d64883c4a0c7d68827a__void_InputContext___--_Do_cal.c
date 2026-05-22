/*
 * XREFs of std::_Func_impl_no_alloc__lambda_978562f3f4c12d64883c4a0c7d68827a__void_InputContext___::_Do_call @ 0x1800B3540
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000F088 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_978562f3f4c12d64883c4a0c7d68827a__void_InputContext___::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 *v4; // rcx
  __int64 result; // rax

  v2 = *a2;
  v4 = (__int64 *)(*a2 + 16LL);
  if ( !*v4 )
    Microsoft::WRL::ComPtr<IInputTarget>::operator=(v4, *(__int64 **)(a1 + 8));
  *(_QWORD *)(v2 + 88) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 96LL);
  result = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(v2 + 96) = *(_DWORD *)(result + 104);
  return result;
}
