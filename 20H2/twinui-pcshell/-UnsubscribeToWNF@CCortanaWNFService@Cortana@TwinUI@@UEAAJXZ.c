/*
 * XREFs of ?UnsubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJXZ @ 0x180212140
 * Callers:
 *     ??_GCCortanaWNFService@Cortana@TwinUI@@QEAAPEAXI@Z @ 0x18020625C (--_GCCortanaWNFService@Cortana@TwinUI@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?SafeUnsubscribeWnf@@YAXPEAPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x180211C3C (-SafeUnsubscribeWnf@@YAXPEAPEAU_WNF_USER_SUBSCRIPTION@@@Z.c)
 */

__int64 __fastcall TwinUI::Cortana::CCortanaWNFService::UnsubscribeToWNF(TwinUI::Cortana::CCortanaWNFService *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  SafeUnsubscribeWnf((struct _WNF_USER_SUBSCRIPTION **)this + 1);
  SafeUnsubscribeWnf((struct _WNF_USER_SUBSCRIPTION **)this + 2);
  SafeUnsubscribeWnf((struct _WNF_USER_SUBSCRIPTION **)this + 3);
  SafeUnsubscribeWnf((struct _WNF_USER_SUBSCRIPTION **)this + 4);
  SafeUnsubscribeWnf((struct _WNF_USER_SUBSCRIPTION **)this + 5);
  SafeUnsubscribeWnf((struct _WNF_USER_SUBSCRIPTION **)this + 6);
  return 0LL;
}
