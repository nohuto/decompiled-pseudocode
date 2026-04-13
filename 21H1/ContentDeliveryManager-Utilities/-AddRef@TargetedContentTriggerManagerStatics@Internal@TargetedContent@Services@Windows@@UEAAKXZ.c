/*
 * XREFs of ?AddRef@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAKXZ @ 0x180022B70
 * Callers:
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x180026B90 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft@.c)
 *     ?AddRef@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@WCI@EAAKXZ @ 0x180026BE0 (-AddRef@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@WCI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::AddRef(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics *this)
{
  signed __int32 v1; // r8d
  unsigned int v2; // ebx

  v1 = *((_DWORD *)this + 17);
  v2 = 0x7FFFFFFF;
  if ( v1 != 0x7FFFFFFF )
  {
    do
    {
      if ( v1 == _InterlockedCompareExchange((volatile signed __int32 *)this + 17, v1 + 1, v1) )
        break;
      v1 = *((_DWORD *)this + 17);
    }
    while ( v1 != 0x7FFFFFFF );
    if ( v1 != 0x7FFFFFFF )
      v2 = v1 + 1;
  }
  if ( (*((_BYTE *)this + 88) & 4) == 0 && v2 == 2 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return v2;
}
