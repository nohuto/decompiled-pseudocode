/*
 * XREFs of ?DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02E4444
 * Callers:
 *     DpiFdoHandleTargetConnectionState @ 0x1C02CA934 (DpiFdoHandleTargetConnectionState.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C001A994 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02E5AB8 (-DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 */

__int64 __fastcall DmmDestroyDynamicVideoPresentTarget(
        PERESOURCE *a1,
        unsigned int a2,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 Address; // rbx
  __int64 v10; // rdx
  DMMVIDEOPRESENTTARGETSET *v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+20h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v8);
  }
  Address = (__int64)a1[337]->Address;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v13, Address);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(Address + 80) + 72LL));
  v12 = *(DMMVIDEOPRESENTTARGETSET **)(Address + 80);
  LODWORD(Address) = DMMVIDEOPRESENTTARGETSET::DestroyDynamicVideoPresentTarget(v12, a2, a3);
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)&v12, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v13 + 40), v10);
  return (unsigned int)Address;
}
