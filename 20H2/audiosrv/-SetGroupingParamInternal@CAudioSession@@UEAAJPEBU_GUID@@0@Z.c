/*
 * XREFs of ?SetGroupingParamInternal@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x18002C940
 * Callers:
 *     <none>
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002E410 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF__guid_ @ 0x1800C3FB0 (WPP_SF__guid_.c)
 */

__int64 __fastcall CAudioSession::SetGroupingParamInternal(
        CAudioSession *this,
        const struct _GUID *a2,
        const struct _GUID *a3)
{
  struct _GUID *v3; // rsi
  __int64 v6; // rax
  void (__fastcall *v7)(CAudioSession *); // rax

  v3 = (struct _GUID *)((char *)this + 284);
  v6 = *(_QWORD *)((char *)this + 284) - *(_QWORD *)&a2->Data1;
  if ( !v6 )
    v6 = *(_QWORD *)((char *)this + 292) - *(_QWORD *)a2->Data4;
  if ( v6 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids, a2);
    }
    v7 = *(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL);
    *v3 = *a2;
    v7(this);
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 496));
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
  }
  return 0LL;
}
