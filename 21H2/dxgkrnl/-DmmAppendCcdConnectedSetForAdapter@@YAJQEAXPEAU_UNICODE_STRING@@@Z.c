/*
 * XREFs of ?DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z @ 0x1C01B0070
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_0_1_ @ 0x1C01A23A0 (_BtlPreAcquireSharedAccess_-CCD_BTL_CONNECTIVITY_COLLECTOR--_AppendConnectedSetAdaptersCallback_.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0011C8C (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     MonitorGetCCDMonitorID @ 0x1C01B0200 (MonitorGetCCDMonitorID.c)
 */

__int64 __fastcall DmmAppendCcdConnectedSetForAdapter(DXGADAPTER *a1, struct _UNICODE_STRING *a2)
{
  unsigned int v4; // r14d
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  unsigned int v10; // ebp
  DXGMONITOR *v11; // r12
  __int64 v12; // rax
  unsigned int Length; // eax
  unsigned int MaximumLength; // r8d
  int CCDMonitorID; // eax
  __int64 v17[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v19; // [rsp+80h] [rbp+18h]
  unsigned __int16 *v20; // [rsp+88h] [rbp+20h]

  v4 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v5 = *((_QWORD *)a1 + 349);
  if ( !v5 )
    return 0LL;
  v6 = *(_QWORD *)(v5 + 104);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v17, v6);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v6 + 120) + 72LL));
  v7 = *(_QWORD *)(v6 + 120);
  v8 = *(_QWORD *)(v7 + 24);
  if ( v8 == v7 + 24 )
    goto LABEL_13;
  v9 = v8 - 8;
  if ( !v9 )
    goto LABEL_13;
  v10 = -1073741789;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v9 + 92) )
    {
      v11 = *(DXGMONITOR **)(v9 + 112);
      if ( v11 )
        break;
    }
LABEL_10:
    v12 = *(_QWORD *)(v9 + 8);
    v9 = v12 - 8;
    if ( v12 == v7 + 24 )
      v9 = 0LL;
    if ( !v9 )
      goto LABEL_13;
  }
  Length = a2->Length;
  MaximumLength = a2->MaximumLength;
  if ( (unsigned __int16)Length >= (unsigned __int16)MaximumLength )
    goto LABEL_14;
  v20 = &a2->Buffer[(unsigned __int64)a2->Length >> 1];
  v19 = (MaximumLength - (unsigned __int64)Length) >> 1;
  CCDMonitorID = MonitorGetCCDMonitorID(v11, v19, v20);
  v4 = CCDMonitorID;
  if ( CCDMonitorID == -2147483643 || CCDMonitorID == -1073741789 )
    goto LABEL_14;
  if ( CCDMonitorID >= 0 )
  {
    v4 = 0;
    v18 = 0LL;
    RtlStringCchLengthW(v20, (unsigned int)v19, &v18);
    a2->Length += 2 * v18;
    if ( a2->Length >= a2->MaximumLength )
      goto LABEL_14;
    a2->Buffer[(unsigned __int64)a2->Length >> 1] = 94;
    a2->Length += 2;
    goto LABEL_10;
  }
  WdLogSingleEntry2(3LL, v11, CCDMonitorID);
LABEL_13:
  v10 = v4;
LABEL_14:
  ReferenceCounted::Release((ReferenceCounted *)(v7 + 64));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v17[0] + 40));
  return v10;
}
