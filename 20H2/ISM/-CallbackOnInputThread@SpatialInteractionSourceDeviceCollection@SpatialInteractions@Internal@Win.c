/*
 * XREFs of ?CallbackOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800CEBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036AD4 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??4?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800CE458 (--4-$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Interna.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::CallbackOnInputThread(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a2)
{
  RTL_SRWLOCK *v3; // rdi
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *v12; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v13[56]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+68h] [rbp-20h]

  v3 = (RTL_SRWLOCK *)((char *)this + 656);
  while ( 1 )
  {
    v14 = 0LL;
    AcquireSRWLockExclusive(v3);
    if ( !*((_QWORD *)this + 81) )
      break;
    v6 = (__int64 *)*((_QWORD *)this + 77);
    if ( v6 )
      v7 = *v6;
    else
      v7 = 0LL;
    std::function<void (Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *)>::operator=(
      (__int64)v13,
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 8 * (*((_QWORD *)this + 80) & (*(_QWORD *)(v7 + 16) - 1LL))));
    std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(
      *(_QWORD *)(*((_QWORD *)this + 78) + 8 * (*((_QWORD *)this + 80) & (*((_QWORD *)this + 79) - 1LL))),
      v8);
    if ( (*((_QWORD *)this + 81))-- == 1LL )
      *((_QWORD *)this + 80) = 0LL;
    else
      ++*((_QWORD *)this + 80);
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
    if ( v14 )
    {
      v12 = a2;
      (*(void (__fastcall **)(__int64, struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks **))(*(_QWORD *)v14 + 16LL))(
        v14,
        &v12);
    }
    std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)v13, v9);
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)v13, v5);
  return 0LL;
}
