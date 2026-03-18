/*
 * XREFs of ?DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z @ 0x1C0123418
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_0_1_ @ 0x1C0118910 (_BtlPreAcquireSharedAccess_-CCD_BTL_CONNECTIVITY_COLLECTOR--_AppendConnectedSetAdaptersCallback_.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C00093C0 (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     MonitorGetCCDMonitorID @ 0x1C012588C (MonitorGetCCDMonitorID.c)
 */

__int64 __fastcall DmmAppendCcdConnectedSetForAdapter(DXGADAPTER *a1, struct _UNICODE_STRING *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdi
  unsigned int v13; // ebp
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v18; // r13
  __int64 v19; // rcx
  int CCDMonitorID; // eax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int16 *v27; // [rsp+70h] [rbp+18h]
  __int64 v28; // [rsp+78h] [rbp+20h] BYREF

  LODWORD(v6) = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v23);
  }
  v7 = *((_QWORD *)a1 + 337);
  if ( !v7 )
    return 0LL;
  v8 = *(_QWORD *)(v7 + 88);
  if ( !v8 )
  {
    v24 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v24 + 24) = a1;
    WdLogEvent5_WdError(v24);
    return 3223192373LL;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v28, v8);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 80) + 72LL));
  v10 = *(_QWORD *)(v8 + 80);
  v11 = *(_QWORD *)(v10 + 24);
  if ( v11 == v10 + 24 )
    goto LABEL_13;
  v12 = v11 - 8;
  if ( !v12 )
    goto LABEL_13;
  v13 = -1073741789;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v12 + 88) )
    {
      v14 = *(_QWORD *)(v12 + 112);
      if ( v14 )
        break;
    }
LABEL_10:
    v15 = *(_QWORD *)(v12 + 8);
    v12 = v15 - 8;
    if ( v15 == v10 + 24 )
      v12 = 0LL;
    if ( !v12 )
      goto LABEL_13;
  }
  if ( a2->Length >= a2->MaximumLength )
    goto LABEL_14;
  v18 = (a2->MaximumLength - (unsigned __int64)a2->Length) >> 1;
  v19 = *(_QWORD *)(v12 + 112);
  v27 = &a2->Buffer[(unsigned __int64)a2->Length >> 1];
  CCDMonitorID = MonitorGetCCDMonitorID(v19, (unsigned int)v18, v27);
  v6 = CCDMonitorID;
  if ( CCDMonitorID == -2147483643 || CCDMonitorID == -1073741789 )
    goto LABEL_14;
  if ( CCDMonitorID >= 0 )
  {
    LODWORD(v6) = 0;
    v26 = 0LL;
    RtlStringCchLengthW(v27, (unsigned int)v18, &v26);
    a2->Length += 2 * v26;
    if ( a2->Length >= a2->MaximumLength )
      goto LABEL_14;
    v9 = 94LL;
    a2->Buffer[(unsigned __int64)a2->Length >> 1] = 94;
    a2->Length += 2;
    goto LABEL_10;
  }
  v25 = WdLogNewEntry5_WdWarning(v21, v9, v22);
  *(_QWORD *)(v25 + 24) = v14;
  *(_QWORD *)(v25 + 32) = v6;
  WdLogEvent5_WdWarning(v25);
LABEL_13:
  v13 = v6;
LABEL_14:
  ReferenceCounted::Release((ReferenceCounted *)(v10 + 64), v9);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v28 + 40), v16);
  return v13;
}
