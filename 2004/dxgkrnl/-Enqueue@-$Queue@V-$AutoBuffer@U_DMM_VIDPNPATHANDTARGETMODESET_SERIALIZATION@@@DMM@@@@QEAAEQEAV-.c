/*
 * XREFs of ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C005B0FC
 * Callers:
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E0888 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E60E8 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C02E6944 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E8C40 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 * Callees:
 *     ?Release@NonReferenceCounted@@QEAA_KXZ @ 0x1C00190BC (-Release@NonReferenceCounted@@QEAA_KXZ.c)
 *     ?InsertTail@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@@@QEAAEQEAV?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@Z @ 0x1C005B7DC (-InsertTail@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@U-$DoubleLinkedL.c)
 *     ?RemoveHead@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@@@@QEAAPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@XZ @ 0x1C005BA18 (-RemoveHead@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@U-$DoubleLinkedLis.c)
 */

char __fastcall Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rax

  v3 = a1 + 3;
  if ( (_QWORD *)*v3 != v3 )
  {
    v4 = *v3 - 8LL;
    if ( *v3 != 8LL )
    {
      do
      {
        if ( v4 == a2 )
          break;
        v5 = *(_QWORD **)(v4 + 8);
        v4 = (__int64)(v5 - 1);
        if ( v5 == v3 )
          v4 = 0LL;
      }
      while ( v4 );
      if ( v4 )
        return 0;
    }
  }
  if ( (unsigned __int8)DoublyLinkedList<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>>>::InsertTail(a1 + 1) != 1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = a1[7];
  if ( v10 )
  {
    if ( a1[5] > v10 )
    {
      v11 = DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::RemoveHead(a1 + 1);
      NonReferenceCounted::Release((NonReferenceCounted *)(v11 + 24));
    }
  }
  return 1;
}
