/*
 * XREFs of PipProcessDevNodeTree @ 0x140726FC0
 * Callers:
 *     PnpDeviceActionWorker @ 0x14036DEC0 (PnpDeviceActionWorker.c)
 *     PnpProcessRebalance @ 0x14050B03C (PnpProcessRebalance.c)
 *     PiRestartDevice @ 0x140721AFC (PiRestartDevice.c)
 *     PipProcessDevNodeTree @ 0x140726FC0 (PipProcessDevNodeTree.c)
 *     PiProcessReenumeration @ 0x140737E00 (PiProcessReenumeration.c)
 *     PiProcessStartSystemDevices @ 0x1407C117C (PiProcessStartSystemDevices.c)
 *     PiProcessResourceRequirementsChanged @ 0x14089F5E8 (PiProcessResourceRequirementsChanged.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     RtlCopyUnicodeString @ 0x1402909B0 (RtlCopyUnicodeString.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     PoFxIdleDevice @ 0x14036B584 (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x14036B704 (PoFxActivateDevice.c)
 *     PoFxPrepareDevice @ 0x14036BBE4 (PoFxPrepareDevice.c)
 *     PiCollapseEnumRequests @ 0x14036D924 (PiCollapseEnumRequests.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x140508654 (McTemplateK0z_EtwWriteTransfer.c)
 *     PnpInsertNoopEvent @ 0x1405C7B94 (PnpInsertNoopEvent.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     PpDevNodeUnlockTree @ 0x1406A5D00 (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406A5D5C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeLockTree @ 0x1406A5E2C (PpDevNodeLockTree.c)
 *     PiProcessNewDeviceNode @ 0x140724960 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140725850 (PipEnumerateCompleted.c)
 *     PipProcessDevNodeTree @ 0x140726FC0 (PipProcessDevNodeTree.c)
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1407275D8 (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PnpCheckForActiveDependencies @ 0x14072766C (PnpCheckForActiveDependencies.c)
 *     PipCallDriverAddDevice @ 0x140727744 (PipCallDriverAddDevice.c)
 *     PipEnumerateDevice @ 0x140729138 (PipEnumerateDevice.c)
 *     PpDevCfgTraceDeviceStart @ 0x140729AB8 (PpDevCfgTraceDeviceStart.c)
 *     PnpProcessAssignResources @ 0x140729B0C (PnpProcessAssignResources.c)
 *     PipProcessStartPhase3 @ 0x14072ACC0 (PipProcessStartPhase3.c)
 *     PipProcessStartPhase1 @ 0x14072C90C (PipProcessStartPhase1.c)
 *     PipSetDevNodeProblem @ 0x140733048 (PipSetDevNodeProblem.c)
 *     PipProcessStartPhase2 @ 0x140734258 (PipProcessStartPhase2.c)
 *     IopAllocateUnicodeString @ 0x140734AFC (IopAllocateUnicodeString.c)
 *     PipProcessRestartPhase1 @ 0x1408B216C (PipProcessRestartPhase1.c)
 *     PipProcessRestartPhase2 @ 0x1408B2230 (PipProcessRestartPhase2.c)
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
  int v8; // edi
  unsigned __int16 *v9; // r14
  char v10; // si
  unsigned __int8 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // r8
  ULONG_PTR v14; // rbx
  int v15; // esi
  int v16; // edi
  int restarted; // eax
  int started; // eax
  int v19; // esi
  ULONG_PTR v20; // rax
  PADAPTER_OBJECT *v21; // rax
  __int64 v23; // rax
  int v24; // ebx
  _QWORD *v25; // rbx
  char v26; // [rsp+40h] [rbp-41h]
  char v27; // [rsp+44h] [rbp-3Dh]
  unsigned int v28; // [rsp+48h] [rbp-39h]
  PADAPTER_OBJECT *v29; // [rsp+50h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-19h] BYREF
  char v32; // [rsp+D0h] [rbp+4Fh] BYREF
  char v33; // [rsp+D8h] [rbp+57h]
  __int64 v34; // [rsp+E0h] [rbp+5Fh]
  int v35; // [rsp+E8h] [rbp+67h]

  v35 = a4;
  v34 = a3;
  v7 = a7;
  v29 = (PADAPTER_OBJECT *)MaxDataSize;
  v32 = 0;
  v8 = a4;
  v9 = (unsigned __int16 *)MaxDataSize;
  DestinationString = 0LL;
  if ( a2 && !*(_BYTE *)(a2 + 28) && a4 != 1 && !a7 && PiCollapseEnumRequests(a2) )
    v9 = (unsigned __int16 *)IopRootDeviceNode;
  v10 = 0;
  v28 = 0;
  v27 = 0;
  v11 = 0;
  v26 = 0;
  while ( 2 )
  {
    if ( !v7 )
    {
      if ( (byte_140C130BB & 8) != 0 )
        McTemplateK0z_EtwWriteTransfer(
          MaxDataSize,
          (const EVENT_DESCRIPTOR *)KMPnPEvt_AssignResources_Start,
          0LL,
          *((const wchar_t **)v9 + 6));
      LOBYTE(a2) = a5;
      a7 = 0;
      v26 = PnpProcessAssignResources(v9, a2, &a7);
      if ( (byte_140C130BB & 8) != 0 )
        McTemplateK0z_EtwWriteTransfer(
          v12,
          (const EVENT_DESCRIPTOR *)KMPnPEvt_AssignResources_Stop,
          v13,
          *((const wchar_t **)v9 + 6));
      if ( a7 )
      {
        if ( (unsigned int)PipProcessDevNodeTree((ULONG)IopRootDeviceNode, 0, 0, 1) == -1073741106 )
          v10 = 1;
        v27 = v10;
      }
    }
    a7 = 0;
    v14 = (ULONG_PTR)v9;
    v33 = 1;
    do
    {
      v15 = 1;
      if ( v27 )
        goto LABEL_103;
      if ( *(_DWORD *)(v14 + 300) != 769
        && (*(_DWORD *)(v14 + 396) & 0x6000) == 0
        && (unsigned __int8)PnpCheckForActiveDependencies(v14, 2LL, 0LL) )
      {
        PipSetDevNodeProblem(v14, 51LL, 0LL);
      }
      a2 = *(unsigned int *)(v14 + 396);
      if ( (a2 & 0x6000) != 0 )
        goto LABEL_75;
      switch ( *(_DWORD *)(v14 + 300) )
      {
        case 0x301:
          if ( v8 == 3 && (a2 & 0x2000000) != 0 || v7 )
            break;
          if ( !(unsigned __int8)PnpCheckForActiveDependencies(v14, 1LL, 0LL) )
          {
            v16 = PiProcessNewDeviceNode(v14);
            if ( v16 >= 0 )
              v15 = 0;
LABEL_67:
            if ( v16 == -1073741106 )
              goto LABEL_73;
            break;
          }
          PipSetDevNodeProblem(v14, 51LL, 0LL);
          break;
        case 0x302:
          if ( !v7 )
          {
            v16 = PipCallDriverAddDevice(v14);
            if ( v16 >= 0 )
            {
              PoFxPrepareDevice(v14, 0);
              v15 = 0;
              v26 = 1;
            }
            goto LABEL_67;
          }
          break;
        case 0x304:
          if ( v7 )
            break;
          PoFxActivateDevice(*(_QWORD *)(v14 + 32));
          *(_DWORD *)(v14 + 704) |= 0x200u;
          started = PipProcessStartPhase1(v14);
          goto LABEL_40;
        case 0x306:
          restarted = PipProcessStartPhase2(v14, a2, 0LL);
          goto LABEL_37;
        case 0x307:
          if ( (int)a2 < 0 )
          {
            v15 = 1;
            break;
          }
          restarted = PipProcessStartPhase3(v14, v8 != 1);
          goto LABEL_37;
        case 0x308:
          if ( v8 == 1 && (unsigned __int16 *)v14 != v9 )
            break;
          v15 = 2;
          if ( v7 || (a2 & 8) == 0 )
            break;
          v16 = PipEnumerateDevice(v14, a6, v11);
          if ( v16 != 259 )
          {
            if ( v16 < 0 )
              goto LABEL_67;
            goto LABEL_49;
          }
          v11 = 1;
          v15 = 1;
          break;
        case 0x30A:
          started = PipProcessRestartPhase1(v14, a6, v11);
LABEL_40:
          v16 = started;
          if ( started != 259 )
          {
            v15 = 0;
            goto LABEL_67;
          }
          v11 = 1;
          break;
        case 0x30B:
          restarted = PipProcessRestartPhase2(v14, a2, 0LL);
LABEL_37:
          v16 = restarted;
          if ( restarted < 0 )
          {
            v16 = -1073741106;
            goto LABEL_67;
          }
LABEL_49:
          v15 = 0;
          goto LABEL_67;
        case 0x30D:
          if ( (*(_DWORD *)(v14 + 704) & 0x200) != 0 )
          {
            PoFxIdleDevice(*(_QWORD *)(v14 + 32));
            *(_DWORD *)(v14 + 704) &= ~0x200u;
          }
          v16 = PipEnumerateCompleted(v14);
          v15 = 2;
          goto LABEL_67;
        default:
          break;
      }
      v32 = 0;
      v16 = PnpDeviceCompletionProcessCompletedRequests(0LL, 0LL, &v32);
      if ( v16 != -1073741106 )
      {
        if ( !v32 && a7 )
        {
          a7 = 0;
          v16 = PnpDeviceCompletionProcessCompletedRequests(0LL, 1LL, &v32);
          v11 &= -(v32 != 0);
        }
        if ( v16 != -1073741106 )
          goto LABEL_75;
      }
LABEL_73:
      if ( v7 )
      {
        v28 = v16;
LABEL_75:
        MaxDataSize = 1LL;
        if ( !v7 && (*(_DWORD *)(v14 + 704) & 1) != 0 )
        {
          PpDevCfgTraceDeviceStart(v14, a2, 0LL);
          MaxDataSize = 1LL;
        }
        if ( v11 && v15 && PnpAsyncOptions >= 0 )
          v15 = 1;
        v19 = v15 - 1;
        if ( v19 )
        {
          if ( v19 == 1 )
          {
            v20 = *(_QWORD *)(v14 + 8);
            if ( !v20 )
              goto LABEL_92;
LABEL_85:
            v14 = v20;
          }
        }
        else
        {
          while ( 1 )
          {
LABEL_92:
            if ( (unsigned __int16 *)v14 == v9 )
            {
              a7 = 1;
              LOBYTE(MaxDataSize) = -(v11 != 0);
              v33 &= MaxDataSize;
              goto LABEL_86;
            }
            v20 = *(_QWORD *)v14;
            if ( *(_QWORD *)v14 )
              goto LABEL_85;
            if ( v11 && PnpAsyncOptions > 0 )
              break;
            if ( *(_QWORD *)(v14 + 16) )
              v14 = *(_QWORD *)(v14 + 16);
          }
          v23 = *(_QWORD *)(v14 + 16);
          if ( v23 )
            v14 = *(_QWORD *)(v23 + 8);
          a7 = 1;
        }
LABEL_86:
        v21 = v29;
        v10 = v27;
        goto LABEL_87;
      }
LABEL_103:
      v10 = 0;
      v27 = 0;
      PnpDeviceCompletionProcessCompletedRequests(1LL, 1LL, &v32);
      v11 = 0;
      PipProcessDevNodeTree((ULONG)IopRootDeviceNode, a5, a6, 1);
      v24 = IopAllocateUnicodeString(&DestinationString, v9[20]);
      if ( v24 < 0 )
      {
        HalPutDmaAdapter(v29[4]);
        return (unsigned int)v24;
      }
      RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(v9 + 20));
      HalPutDmaAdapter(v29[4]);
      PpDevNodeUnlockTree(1);
      LODWORD(v29) = 0;
      memset(&Event, 0, sizeof(Event));
      KeInitializeEvent(&Event, NotificationEvent, 0);
      if ( (int)PnpInsertNoopEvent((__int64)&Event, (__int64)&v29) >= 0 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      PpDevNodeLockTree(1);
      v25 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
      RtlFreeAnsiString(&DestinationString);
      if ( !v25 )
        return 3221225473LL;
      v9 = *(unsigned __int16 **)(v25[39] + 40LL);
      v21 = (PADAPTER_OBJECT *)v9;
      v14 = (ULONG_PTR)v9;
      v29 = (PADAPTER_OBJECT *)v9;
LABEL_87:
      v8 = v35;
    }
    while ( v33 );
    if ( v26 )
      continue;
    break;
  }
  if ( !v7 )
    HalPutDmaAdapter(v21[4]);
  return v28;
}
