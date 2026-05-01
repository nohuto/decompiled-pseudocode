/*
 * XREFs of ?InternalEvaluateItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAA?AW4SwitchItemInclusion@2345@PE$AAUISwitchItem@2345@@Z @ 0x1803032B0
 * Callers:
 *     ?AddSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x1802FE820 (-AddSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$A.c)
 *     ?UpdateItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPEAUDataViewItemState@12345@@Z @ 0x180307F44 (-UpdateItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EBCEC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE$AAUISwitchItem@1234@W4SwitchItemInclusion@1234@@Z @ 0x1802FA78C (--0EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE$AAUISwitchItem.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::InternalEvaluateItem(
        _DWORD *a1,
        __int64 a2)
{
  void *v4; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rsi
  unsigned int v8; // esi

  v4 = Platform::Details::Heap::Allocate(0x38uLL, 0x50uLL);
  v5 = Windows::Internal::ComposableShell::Multitasking::EvaluateItemEventArgs::EvaluateItemEventArgs((__int64)v4, a2);
  v6 = (_QWORD *)__abi_winrt_ptr_ctor(v5);
  v7 = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v6 )
    v7 = v6 + 1;
  (*(void (__fastcall **)(_DWORD *, _DWORD *, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, a1 + 2, v7);
  v8 = a1[20];
  if ( (*(unsigned int (__fastcall **)(_QWORD *))(v6[1] + 72LL))(v6 + 1) != 2 )
    v8 = (*(__int64 (__fastcall **)(_QWORD *))(v6[1] + 72LL))(v6 + 1);
  (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  return v8;
}
