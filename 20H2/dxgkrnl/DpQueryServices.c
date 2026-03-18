/*
 * XREFs of DpQueryServices @ 0x1C0196980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpQueryServices(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned int v3; // edi
  __int64 v4; // rbp
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 (__fastcall *v11)(); // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 (__fastcall *v15)(); // rax
  __int64 v16; // rax
  __int64 v17; // rax

  v3 = 0;
  v4 = (int)a2;
  if ( !a1
    || !a3
    || (v7 = *(_QWORD *)(a1 + 64)) == 0
    || *(_DWORD *)(v7 + 16) != 1953656900
    || (a2 = 1LL, (unsigned int)(*(_DWORD *)(v7 + 20) - 2) > 1) )
  {
    v3 = -1073741811;
LABEL_53:
    v17 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    return v3;
  }
  if ( KeGetCurrentIrql() )
  {
    v3 = -1073741811;
    if ( *(_DWORD *)(*(_QWORD *)(v7 + 40) + 28LL) >= 0x2003u )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, 1LL);
      v12[3] = 275LL;
      v12[4] = 21LL;
      v12[5] = -1073741811LL;
      WdLogEvent5_WdCriticalError(v12);
    }
    goto LABEL_53;
  }
  v8 = (unsigned int)v4;
  if ( !(_DWORD)v4 )
  {
    if ( a3[1] != 1 )
      goto LABEL_48;
    if ( *a3 == 56 )
    {
      if ( !*(_QWORD *)(v7 + 680) )
      {
        v3 = -1073741823;
        v14 = WdLogNewEntry5_WdWarning((unsigned int)v4, 1LL, v7);
        *(_QWORD *)(v14 + 24) = -1073741823LL;
        goto LABEL_32;
      }
      v9 = *(_QWORD *)(v7 + 24);
      *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
      *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
      *((_QWORD *)a3 + 6) = DpiAgpSetAgpCommand;
      *((_QWORD *)a3 + 4) = &DpiAgpAllocatePool;
      v11 = DpiAgpFreePool;
LABEL_23:
      *((_QWORD *)a3 + 5) = v11;
      goto LABEL_16;
    }
LABEL_49:
    v3 = -1073741811;
    v13 = WdLogNewEntry5_WdWarning(v8, 1LL, v7);
    v16 = *a3;
    goto LABEL_50;
  }
  v8 = (unsigned int)(v4 - 1);
  if ( (_DWORD)v4 == 1 )
  {
    if ( a3[1] != 1 )
      goto LABEL_48;
    if ( *a3 != 56 )
      goto LABEL_49;
    *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
    *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
    *((_QWORD *)a3 + 4) = DpiDbgReportCreate;
    *((_QWORD *)a3 + 5) = DpiDbgReportSecondaryData;
    v15 = DpiDbgReportComplete;
    goto LABEL_43;
  }
  v8 = (unsigned int)(v4 - 2);
  if ( (_DWORD)v4 == 2 )
  {
    if ( a3[1] != 1 )
      goto LABEL_48;
    if ( *a3 != 56 )
      goto LABEL_49;
    *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
    *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
    *((_QWORD *)a3 + 4) = TdrTimedOperationStart;
    *((_QWORD *)a3 + 5) = TdrTimedOperationDelay;
    v15 = (__int64 (__fastcall *)())TdrTimedOperationWaitForSingleObject;
LABEL_43:
    *((_QWORD *)a3 + 1) = 0LL;
    *((_QWORD *)a3 + 6) = v15;
    goto LABEL_17;
  }
  v8 = (unsigned int)(v4 - 3);
  if ( (_DWORD)v4 == 3 )
  {
    if ( a3[1] != 1 )
      goto LABEL_48;
    if ( *a3 == 72 )
    {
      v9 = *(_QWORD *)(v7 + 24);
      *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
      *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
      *((_QWORD *)a3 + 4) = &DpOpenSpbResource;
      *((_QWORD *)a3 + 5) = DpCloseSpbResource;
      *((_QWORD *)a3 + 6) = &DpReadSpbResource;
      *((_QWORD *)a3 + 7) = &DpWriteSpbResource;
      *((_QWORD *)a3 + 8) = &DpSpbResourceIoControl;
      goto LABEL_16;
    }
    goto LABEL_49;
  }
  v8 = (unsigned int)(v4 - 4);
  if ( (_DWORD)v4 != 4 )
  {
    v8 = (unsigned int)(v4 - 5);
    if ( (_DWORD)v4 != 5 )
    {
      if ( (_DWORD)v4 != 6 )
      {
        v3 = -1073741811;
        v13 = WdLogNewEntry5_WdWarning(v8, 1LL, v7);
        *(_QWORD *)(v13 + 24) = v4;
LABEL_33:
        WdLogEvent5_WdWarning(v13);
        return v3;
      }
      if ( *(_BYTE *)(v7 + 1158) )
      {
        if ( *a3 == 80 )
        {
          v9 = *(_QWORD *)(v7 + 24);
          *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
          *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
          *((_QWORD *)a3 + 4) = &DpiIndirectCbSendMessage;
          *((_QWORD *)a3 + 5) = DpiIndirectCbForceDisplaySwitch;
          *((_QWORD *)a3 + 6) = DpiIndirectCbDisableRenderD3Requests;
          *((_QWORD *)a3 + 7) = DpiIndirectCbNotifyCursorSupportChange;
          *((_QWORD *)a3 + 8) = DpiIndirectCbOpmSetSrmList;
          *((_QWORD *)a3 + 9) = DpiIndirectCbOpmGetSrmListVersion;
          goto LABEL_16;
        }
        goto LABEL_49;
      }
      goto LABEL_31;
    }
    if ( a3[1] != 1 )
      goto LABEL_48;
    if ( *a3 == 48 )
    {
      v9 = *(_QWORD *)(v7 + 24);
      *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
      *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
      *((_QWORD *)a3 + 4) = &DpiEnumSystemFirmwareTables;
      v11 = (__int64 (__fastcall *)())DpiReadSystemFirmwareTable;
      goto LABEL_23;
    }
    goto LABEL_49;
  }
  if ( !*(_BYTE *)(v7 + 1154) )
  {
LABEL_31:
    v3 = -1073741816;
    v14 = WdLogNewEntry5_WdWarning(v8, 1LL, v7);
    *(_QWORD *)(v14 + 24) = a1;
LABEL_32:
    v13 = v14;
    goto LABEL_33;
  }
  if ( *a3 != 40 )
    goto LABEL_49;
  if ( a3[1] != 1 )
  {
LABEL_48:
    v3 = -1073741811;
    v13 = WdLogNewEntry5_WdWarning(v8, 1LL, v7);
    v16 = a3[1];
LABEL_50:
    *(_QWORD *)(v13 + 24) = v16;
    goto LABEL_33;
  }
  v9 = *(_QWORD *)(v7 + 24);
  *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
  *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
  *((_QWORD *)a3 + 4) = DpGetPostDisplayInfoPlusEdid;
LABEL_16:
  *((_QWORD *)a3 + 1) = v9;
LABEL_17:
  WdpInterfaceReferenceNop();
  return v3;
}
