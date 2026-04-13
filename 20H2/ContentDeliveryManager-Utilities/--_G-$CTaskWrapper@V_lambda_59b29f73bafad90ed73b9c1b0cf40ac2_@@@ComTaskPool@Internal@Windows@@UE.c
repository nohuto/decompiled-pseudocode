/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_59b29f73bafad90ed73b9c1b0cf40ac2_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180051080
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004DD50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINoti.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_59b29f73bafad90ed73b9c1b0cf40ac2_>::`scalar deleting destructor'(
        __int64 a1,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  volatile signed __int64 *v6; // rcx

  v4 = *(_QWORD *)(a1 + 48);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *(volatile signed __int64 **)(a1 + 16);
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::Release(v6);
  *(_DWORD *)(a1 + 12) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete((void *)a1);
  return a1;
}
