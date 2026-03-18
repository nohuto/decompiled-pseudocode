/*
 * XREFs of PipProcessDevNodeTree @ 0x140726894
 * Callers:
 *     PnpDeviceActionWorker @ 0x14036BEB0 (PnpDeviceActionWorker.c)
 *     PnpProcessRebalance @ 0x14050A9EC (PnpProcessRebalance.c)
 *     PiRestartDevice @ 0x14071FC3C (PiRestartDevice.c)
 *     PipProcessDevNodeTree @ 0x140726894 (PipProcessDevNodeTree.c)
 *     PiProcessReenumeration @ 0x140731D54 (PiProcessReenumeration.c)
 *     PiProcessStartSystemDevices @ 0x1407BDF5C (PiProcessStartSystemDevices.c)
 *     PiProcessResourceRequirementsChanged @ 0x14089E2C8 (PiProcessResourceRequirementsChanged.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140254130 (RtlCopyUnicodeString.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     PoFxPrepareDevice @ 0x14036AC30 (PoFxPrepareDevice.c)
 *     PoFxIdleDevice @ 0x14036B4B4 (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x14036B634 (PoFxActivateDevice.c)
 *     PiCollapseEnumRequests @ 0x14037BEAC (PiCollapseEnumRequests.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x140508004 (McTemplateK0z_EtwWriteTransfer.c)
 *     PnpInsertNoopEvent @ 0x1405C6B94 (PnpInsertNoopEvent.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     PpDevNodeUnlockTree @ 0x140710630 (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14071068C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeLockTree @ 0x14071075C (PpDevNodeLockTree.c)
 *     PipProcessStartPhase2 @ 0x14072341C (PipProcessStartPhase2.c)
 *     PipProcessStartPhase1 @ 0x14072358C (PipProcessStartPhase1.c)
 *     PnpProcessAssignResources @ 0x140725C1C (PnpProcessAssignResources.c)
 *     PpDevCfgTraceDeviceStart @ 0x140725EA4 (PpDevCfgTraceDeviceStart.c)
 *     PipProcessDevNodeTree @ 0x140726894 (PipProcessDevNodeTree.c)
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x140726EAC (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PnpCheckForActiveDependencies @ 0x140726F40 (PnpCheckForActiveDependencies.c)
 *     PipCallDriverAddDevice @ 0x140727018 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x14072AA10 (PipEnumerateCompleted.c)
 *     PipEnumerateDevice @ 0x14072C4B8 (PipEnumerateDevice.c)
 *     IopAllocateUnicodeString @ 0x1407300CC (IopAllocateUnicodeString.c)
 *     PipProcessStartPhase3 @ 0x14073045C (PipProcessStartPhase3.c)
 *     PipSetDevNodeProblem @ 0x140734AA4 (PipSetDevNodeProblem.c)
 *     PipProcessRestartPhase1 @ 0x1408B0E4C (PipProcessRestartPhase1.c)
 *     PipProcessRestartPhase2 @ 0x1408B0F10 (PipProcessRestartPhase2.c)
 */

__int64 __fastcall PipProcessDevNodeTree(
        __int64 MaxDataSize,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        unsigned __int8 a6,
        char a7)
{
  char v7; // r15
  __int64 v8; // r8
  int v9; // edi
  unsigned __int16 *v10; // r14
  bool v11; // al
  char v12; // si
  unsigned __int8 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // r8
  ULONG_PTR v16; // rbx
  int v17; // esi
  char v18; // al
  __int64 v19; // rdx
  int v20; // edi
  int restarted; // eax
  int started; // eax
  unsigned int v23; // edx
  int v24; // eax
  int v25; // esi
  ULONG_PTR v26; // rax
  PADAPTER_OBJECT *v27; // rax
  __int64 v29; // rax
  int v30; // ebx
  _QWORD *v31; // rbx
  char v32; // [rsp+40h] [rbp-41h]
  char v33; // [rsp+44h] [rbp-3Dh]
  unsigned int v34; // [rsp+48h] [rbp-39h]
  PADAPTER_OBJECT *v35; // [rsp+50h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-19h] BYREF
  char v38; // [rsp+D0h] [rbp+4Fh] BYREF
  char v39; // [rsp+D8h] [rbp+57h]
  __int64 v40; // [rsp+E0h] [rbp+5Fh]
  int v41; // [rsp+E8h] [rbp+67h]

  v41 = a4;
  v40 = a3;
  v7 = a7;
  v8 = 0LL;
  v35 = (PADAPTER_OBJECT *)MaxDataSize;
  v38 = 0;
  v9 = a4;
  v10 = (unsigned __int16 *)MaxDataSize;
  DestinationString = 0LL;
  if ( a2 )
  {
    if ( !*(_BYTE *)(a2 + 28) && a4 != 1 && !a7 )
    {
      v11 = PiCollapseEnumRequests(a2);
      v8 = 0LL;
      if ( v11 )
        v10 = (unsigned __int16 *)IopRootDeviceNode;
    }
  }
  v12 = 0;
  v34 = 0;
  v33 = 0;
  v13 = 0;
  v32 = 0;
  while ( 2 )
  {
    if ( !v7 )
    {
      if ( (byte_140C1307B & 8) != 0 )
        McTemplateK0z_EtwWriteTransfer(
          MaxDataSize,
          (const EVENT_DESCRIPTOR *)KMPnPEvt_AssignResources_Start,
          0LL,
          *((const wchar_t **)v10 + 6));
      a7 = 0;
      v32 = PnpProcessAssignResources((__int64)v10, a5, (__int64)&a7);
      if ( (byte_140C1307B & 8) != 0 )
        McTemplateK0z_EtwWriteTransfer(
          v14,
          (const EVENT_DESCRIPTOR *)KMPnPEvt_AssignResources_Stop,
          v15,
          *((const wchar_t **)v10 + 6));
      v8 = 0LL;
      if ( a7 )
      {
        if ( (unsigned int)PipProcessDevNodeTree((ULONG)IopRootDeviceNode, 0, 0, 1) == -1073741106 )
          v12 = 1;
        v8 = 0LL;
        v33 = v12;
      }
    }
    a7 = 0;
    v16 = (ULONG_PTR)v10;
    v39 = 1;
    do
    {
      v17 = 1;
      if ( v33 )
        goto LABEL_105;
      if ( *(_DWORD *)(v16 + 300) != 769 && (*(_DWORD *)(v16 + 396) & 0x6000) == 0 )
      {
        v18 = PnpCheckForActiveDependencies(v16, 2LL, 0LL);
        v8 = 0LL;
        if ( v18 )
        {
          PipSetDevNodeProblem(v16, 51LL, 0LL);
          v8 = 0LL;
        }
      }
      v19 = *(unsigned int *)(v16 + 396);
      if ( (v19 & 0x6000) != 0 )
        goto LABEL_77;
      switch ( *(_DWORD *)(v16 + 300) )
      {
        case 0x301:
          if ( v9 == 3 && (v19 & 0x2000000) != 0 || v7 )
            goto LABEL_68;
          if ( (unsigned __int8)PnpCheckForActiveDependencies(v16, 1LL, 0LL) )
          {
            PipSetDevNodeProblem(v16, 51LL, 0LL);
            goto LABEL_68;
          }
          v20 = PiProcessNewDeviceNode(v16);
          if ( v20 >= 0 )
            v17 = 0;
          goto LABEL_67;
        case 0x302:
          if ( v7 )
            goto LABEL_68;
          v20 = PipCallDriverAddDevice(v16);
          if ( v20 >= 0 )
          {
            PoFxPrepareDevice(v16, 0);
            v17 = 0;
            v32 = 1;
          }
          goto LABEL_67;
        case 0x304:
          if ( v7 )
            goto LABEL_68;
          PoFxActivateDevice(*(_QWORD *)(v16 + 32));
          v23 = a6;
          *(_DWORD *)(v16 + 704) |= 0x200u;
          started = PipProcessStartPhase1(v16, v23, v13);
          goto LABEL_40;
        case 0x306:
          restarted = PipProcessStartPhase2(v16, v19, 0LL);
          goto LABEL_37;
        case 0x307:
          if ( (int)v19 < 0 )
          {
            v17 = 1;
            goto LABEL_68;
          }
          restarted = PipProcessStartPhase3(v16, v9 != 1);
LABEL_37:
          v20 = restarted;
          if ( restarted < 0 )
          {
            v20 = -1073741106;
            goto LABEL_67;
          }
          goto LABEL_49;
        case 0x308:
          if ( v9 == 1 && (unsigned __int16 *)v16 != v10 )
            goto LABEL_68;
          v17 = 2;
          if ( v7 || (v19 & 8) == 0 )
            goto LABEL_68;
          v20 = PipEnumerateDevice(v16, a6, v13);
          if ( v20 == 259 )
          {
            v13 = 1;
            v17 = 1;
            goto LABEL_68;
          }
          if ( v20 < 0 )
            goto LABEL_67;
LABEL_49:
          v17 = 0;
          goto LABEL_67;
        case 0x30A:
          started = PipProcessRestartPhase1(v16, a6, v13);
LABEL_40:
          v20 = started;
          if ( started == 259 )
          {
            v13 = 1;
            goto LABEL_68;
          }
          v17 = 0;
          goto LABEL_67;
        case 0x30B:
          restarted = PipProcessRestartPhase2(v16, v19, 0LL);
          goto LABEL_37;
      }
      if ( *(_DWORD *)(v16 + 300) != 781 )
        goto LABEL_68;
      if ( (*(_DWORD *)(v16 + 704) & 0x200) != 0 )
      {
        PoFxIdleDevice(*(_QWORD *)(v16 + 32));
        *(_DWORD *)(v16 + 704) &= ~0x200u;
      }
      v20 = PipEnumerateCompleted(v16, v19, v8);
      v17 = 2;
LABEL_67:
      if ( v20 == -1073741106 )
      {
        v8 = 0LL;
        goto LABEL_75;
      }
LABEL_68:
      v38 = 0;
      v24 = PnpDeviceCompletionProcessCompletedRequests(0LL, 0LL, &v38);
      v8 = 0LL;
      v20 = v24;
      if ( v24 != -1073741106 )
      {
        if ( !v38 && a7 )
        {
          a7 = 0;
          v20 = PnpDeviceCompletionProcessCompletedRequests(0LL, 1LL, &v38);
          v13 &= -(v38 != 0);
          v8 = 0LL;
        }
        if ( v20 != -1073741106 )
          goto LABEL_77;
      }
LABEL_75:
      if ( v7 )
      {
        v34 = v20;
LABEL_77:
        MaxDataSize = 1LL;
        if ( !v7 && (*(_DWORD *)(v16 + 704) & 1) != 0 )
        {
          PpDevCfgTraceDeviceStart((_DWORD *)v16);
          v8 = 0LL;
          MaxDataSize = 1LL;
        }
        if ( v13 && v17 && PnpAsyncOptions >= 0 )
          v17 = 1;
        v25 = v17 - 1;
        if ( v25 )
        {
          if ( v25 == 1 )
          {
            v26 = *(_QWORD *)(v16 + 8);
            if ( !v26 )
              goto LABEL_94;
LABEL_87:
            v16 = v26;
          }
        }
        else
        {
          while ( 1 )
          {
LABEL_94:
            if ( (unsigned __int16 *)v16 == v10 )
            {
              a7 = 1;
              LOBYTE(MaxDataSize) = -(v13 != 0);
              v39 &= MaxDataSize;
              goto LABEL_88;
            }
            v26 = *(_QWORD *)v16;
            if ( *(_QWORD *)v16 )
              goto LABEL_87;
            if ( v13 && PnpAsyncOptions > 0 )
              break;
            if ( *(_QWORD *)(v16 + 16) )
              v16 = *(_QWORD *)(v16 + 16);
          }
          v29 = *(_QWORD *)(v16 + 16);
          if ( v29 )
            v16 = *(_QWORD *)(v29 + 8);
          a7 = 1;
        }
LABEL_88:
        v27 = v35;
        v12 = v33;
        goto LABEL_89;
      }
LABEL_105:
      v12 = 0;
      v33 = 0;
      PnpDeviceCompletionProcessCompletedRequests(1LL, 1LL, &v38);
      v13 = 0;
      PipProcessDevNodeTree((ULONG)IopRootDeviceNode, a5, a6, 1);
      v30 = IopAllocateUnicodeString(&DestinationString, v10[20]);
      if ( v30 < 0 )
      {
        HalPutDmaAdapter(v35[4]);
        return (unsigned int)v30;
      }
      RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(v10 + 20));
      HalPutDmaAdapter(v35[4]);
      PpDevNodeUnlockTree(1);
      LODWORD(v35) = 0;
      memset(&Event, 0, sizeof(Event));
      KeInitializeEvent(&Event, NotificationEvent, 0);
      if ( (int)PnpInsertNoopEvent((__int64)&Event, (__int64)&v35) >= 0 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      PpDevNodeLockTree(1);
      v31 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
      RtlFreeAnsiString(&DestinationString);
      v8 = 0LL;
      if ( !v31 )
        return 3221225473LL;
      v10 = *(unsigned __int16 **)(v31[39] + 40LL);
      v27 = (PADAPTER_OBJECT *)v10;
      v16 = (ULONG_PTR)v10;
      v35 = (PADAPTER_OBJECT *)v10;
LABEL_89:
      v9 = v41;
    }
    while ( v39 );
    if ( v32 )
      continue;
    break;
  }
  if ( !v7 )
    HalPutDmaAdapter(v27[4]);
  return v34;
}
