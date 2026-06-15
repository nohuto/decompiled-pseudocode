/*
 * XREFs of ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x1800341B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180034220 (-AddInterface@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV-$CComPtr@.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800BE26C (WPP_SF_q.c)
 */

__int64 __fastcall CAudioSession::AddSessionNotification(CAudioSession *this, struct ISessionInternalEvents *a2)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 79LL, &WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids, a2);
  }
  if ( a2 )
    (*(void (__fastcall **)(struct ISessionInternalEvents *))(*(_QWORD *)a2 + 8LL))(a2);
  CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::AddInterface((LPCRITICAL_SECTION)((char *)this + 496));
  return 0LL;
}
