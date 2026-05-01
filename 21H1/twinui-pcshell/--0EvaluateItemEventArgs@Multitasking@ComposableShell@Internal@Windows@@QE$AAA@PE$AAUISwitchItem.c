/*
 * XREFs of ??0EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE$AAUISwitchItem@1234@W4SwitchItemInclusion@1234@@Z @ 0x1802D94DC
 * Callers:
 *     ?InternalEvaluateItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAA?AW4SwitchItemInclusion@2345@PE$AAUISwitchItem@2345@@Z @ 0x1802E2000 (-InternalEvaluateItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$A.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802CAA3C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1802CB468 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComposableShell::Multitasking::EvaluateItemEventArgs::EvaluateItemEventArgs(
        __int64 a1,
        __int64 a2)
{
  Platform::Object::Object(a1 + 16);
  *(_QWORD *)a1 = &Windows::Internal::ComposableShell::Multitasking::EvaluateItemEventArgs::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::__IEvaluateItemEventArgsPublicNonVirtuals'};
  *(_QWORD *)(a1 + 8) = &Windows::Internal::ComposableShell::Multitasking::EvaluateItemEventArgs::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs'};
  *(_QWORD *)(a1 + 16) = &Windows::Internal::ComposableShell::Multitasking::EvaluateItemEventArgs::`vftable'{for `Platform::Object'};
  *(_QWORD *)(a1 + 24) = &Windows::Internal::ComposableShell::Multitasking::EvaluateItemEventArgs::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 32) = &Windows::Internal::ComposableShell::Multitasking::EvaluateItemEventArgs::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  __abi_FTMWeakRefData::__abi_FTMWeakRefData(a1 + 56);
  *(_QWORD *)(a1 + 40) = __abi_winrt_ptr_ctor(a2);
  *(_DWORD *)(a1 + 48) = 2;
  return a1;
}
