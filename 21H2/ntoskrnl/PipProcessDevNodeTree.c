/*
 * XREFs of PipProcessDevNodeTree @ 0x1407413C4
 * Callers:
 *     PnpDeviceActionWorker @ 0x140381DA0 (PnpDeviceActionWorker.c)
 *     PnpProcessRebalance @ 0x1405106DC (PnpProcessRebalance.c)
 *     PiRestartDevice @ 0x140733E00 (PiRestartDevice.c)
 *     PipProcessDevNodeTree @ 0x1407413C4 (PipProcessDevNodeTree.c)
 *     PiProcessReenumeration @ 0x14076DA10 (PiProcessReenumeration.c)
 *     PiProcessStartSystemDevices @ 0x1407D3F6C (PiProcessStartSystemDevices.c)
 *     PiProcessResourceRequirementsChanged @ 0x1408A2848 (PiProcessResourceRequirementsChanged.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     PoFxPrepareDevice @ 0x14036F4B0 (PoFxPrepareDevice.c)
 *     PoFxIdleDevice @ 0x14036FCE4 (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x14036FE64 (PoFxActivateDevice.c)
 *     PiCollapseEnumRequests @ 0x14037D268 (PiCollapseEnumRequests.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x14050DCF4 (McTemplateK0z_EtwWriteTransfer.c)
 *     PnpInsertNoopEvent @ 0x1405CEEA0 (PnpInsertNoopEvent.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14062D4E0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14062E9D0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14062EA64 (PpDevNodeLockTree.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     PipSetDevNodeProblem @ 0x1407396AC (PipSetDevNodeProblem.c)
 *     PipProcessStartPhase2 @ 0x14073DEBC (PipProcessStartPhase2.c)
 *     PipProcessStartPhase1 @ 0x14073E02C (PipProcessStartPhase1.c)
 *     PnpProcessAssignResources @ 0x14074074C (PnpProcessAssignResources.c)
 *     PpDevCfgTraceDeviceStart @ 0x1407409D4 (PpDevCfgTraceDeviceStart.c)
 *     PipProcessDevNodeTree @ 0x1407413C4 (PipProcessDevNodeTree.c)
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1407419DC (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PnpCheckForActiveDependencies @ 0x140741A70 (PnpCheckForActiveDependencies.c)
 *     PipCallDriverAddDevice @ 0x140741B48 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x140744650 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140745540 (PipEnumerateCompleted.c)
 *     PipEnumerateDevice @ 0x140746FE8 (PipEnumerateDevice.c)
 *     IopAllocateUnicodeString @ 0x14074986C (IopAllocateUnicodeString.c)
 *     PipProcessStartPhase3 @ 0x14074AD30 (PipProcessStartPhase3.c)
 *     PipProcessRestartPhase1 @ 0x1408B53CC (PipProcessRestartPhase1.c)
 *     PipProcessRestartPhase2 @ 0x1408B5490 (PipProcessRestartPhase2.c)
 */

__int64 __fastcall PipProcessDevNodeTree(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        unsigned __int8 a6,
        char a7)
{
  char v7; // r15
  int v8; // ebx
  __int64 v9; // r8
  int v10; // edi
  int v11; // r13d
  unsigned __int16 *v12; // r14
  bool v13; // al
  char v14; // si
  unsigned __int8 v15; // r12
  __int64 v16; // rcx
  __int64 v17; // r8
  ULONG_PTR v18; // rbx
  int v19; // esi
  char v20; // al
  __int64 v21; // rdx
  int v22; // edi
  int restarted; // eax
  int started; // eax
  unsigned int v25; // edx
  int v26; // eax
  int v27; // esi
  ULONG_PTR v28; // rax
  PADAPTER_OBJECT *v29; // rax
  __int64 v31; // rax
  int v32; // ebx
  _QWORD *v33; // rbx
  char v34; // [rsp+40h] [rbp-41h]
  char v35; // [rsp+44h] [rbp-3Dh]
  unsigned int v36; // [rsp+48h] [rbp-39h]
  PADAPTER_OBJECT *v37; // [rsp+50h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-19h] BYREF
  char v40; // [rsp+D0h] [rbp+4Fh] BYREF
  char v41; // [rsp+D8h] [rbp+57h]
  __int64 v42; // [rsp+E0h] [rbp+5Fh]
  int v43; // [rsp+E8h] [rbp+67h]

  v43 = a4;
  v42 = a3;
  v7 = a7;
  v8 = a3;
  v9 = 0LL;
  v37 = (PADAPTER_OBJECT *)a1;
  v40 = 0;
  v10 = a4;
  v11 = a2;
  v12 = (unsigned __int16 *)a1;
  DestinationString = 0LL;
  if ( a2 )
  {
    if ( !*(_BYTE *)(a2 + 28) && a4 != 1 && !a7 )
    {
      v13 = PiCollapseEnumRequests(a2);
      v9 = 0LL;
      if ( v13 )
        v12 = (unsigned __int16 *)IopRootDeviceNode;
    }
  }
  v14 = 0;
  v36 = 0;
  v35 = 0;
  v15 = 0;
  v34 = 0;
  while ( 2 )
  {
    if ( !v7 )
    {
      if ( (byte_140C1327B & 8) != 0 )
        McTemplateK0z_EtwWriteTransfer(
          a1,
          (const EVENT_DESCRIPTOR *)KMPnPEvt_AssignResources_Start,
          0LL,
          *((const wchar_t **)v12 + 6));
      a7 = 0;
      v34 = PnpProcessAssignResources((__int64)v12, a5, (__int64)&a7);
      if ( (byte_140C1327B & 8) != 0 )
        McTemplateK0z_EtwWriteTransfer(
          v16,
          (const EVENT_DESCRIPTOR *)KMPnPEvt_AssignResources_Stop,
          v17,
          *((const wchar_t **)v12 + 6));
      v9 = 0LL;
      if ( a7 )
      {
        if ( (unsigned int)PipProcessDevNodeTree((_DWORD)IopRootDeviceNode, v11, v8, v10, 0, 0, 1) == -1073741106 )
          v14 = 1;
        v9 = 0LL;
        v35 = v14;
      }
    }
    a7 = 0;
    v18 = (ULONG_PTR)v12;
    v41 = 1;
    do
    {
      v19 = 1;
      if ( v35 )
        goto LABEL_106;
      if ( *(_DWORD *)(v18 + 300) != 769 && (*(_DWORD *)(v18 + 396) & 0x6000) == 0 )
      {
        v20 = PnpCheckForActiveDependencies(v18, 2LL, 0LL);
        v9 = 0LL;
        if ( v20 )
        {
          PipSetDevNodeProblem(v18, 51, 0);
          v9 = 0LL;
        }
      }
      v21 = *(unsigned int *)(v18 + 396);
      if ( (v21 & 0x6000) != 0 )
        goto LABEL_77;
      switch ( *(_DWORD *)(v18 + 300) )
      {
        case 0x301:
          if ( v10 == 3 && (v21 & 0x2000000) != 0 || v7 )
            goto LABEL_68;
          if ( (unsigned __int8)PnpCheckForActiveDependencies(v18, 1LL, 0LL) )
          {
            PipSetDevNodeProblem(v18, 51, 0);
            goto LABEL_68;
          }
          v22 = PiProcessNewDeviceNode(v18);
          if ( v22 >= 0 )
            v19 = 0;
          goto LABEL_67;
        case 0x302:
          if ( v7 )
            goto LABEL_68;
          v22 = PipCallDriverAddDevice(v18);
          if ( v22 >= 0 )
          {
            PoFxPrepareDevice(v18, 0);
            v19 = 0;
            v34 = 1;
          }
          goto LABEL_67;
        case 0x304:
          if ( v7 )
            goto LABEL_68;
          PoFxActivateDevice(*(_QWORD *)(v18 + 32));
          v25 = a6;
          *(_DWORD *)(v18 + 704) |= 0x200u;
          started = PipProcessStartPhase1(v18, v25, v15);
LABEL_40:
          v22 = started;
          if ( started == 259 )
          {
            v15 = 1;
LABEL_68:
            v40 = 0;
            v26 = PnpDeviceCompletionProcessCompletedRequests(0LL, 0LL, &v40);
            v9 = 0LL;
            v22 = v26;
            if ( v26 != -1073741106 )
            {
              if ( !v40 && a7 )
              {
                a7 = 0;
                v22 = PnpDeviceCompletionProcessCompletedRequests(0LL, 1LL, &v40);
                v15 &= -(v40 != 0);
                v9 = 0LL;
              }
              if ( v22 != -1073741106 )
                goto LABEL_77;
            }
            goto LABEL_75;
          }
          v19 = 0;
          goto LABEL_67;
        case 0x306:
          restarted = PipProcessStartPhase2(v18, v21, 0LL);
          goto LABEL_37;
        case 0x307:
          if ( (int)v21 < 0 )
          {
            v19 = 1;
            goto LABEL_68;
          }
          restarted = PipProcessStartPhase3(v18, v10 != 1);
          goto LABEL_37;
      }
      if ( *(_DWORD *)(v18 + 300) != 776 )
      {
        if ( *(_DWORD *)(v18 + 300) != 778 )
        {
          if ( *(_DWORD *)(v18 + 300) != 779 )
          {
            if ( *(_DWORD *)(v18 + 300) != 781 )
              goto LABEL_68;
            if ( (*(_DWORD *)(v18 + 704) & 0x200) != 0 )
            {
              PoFxIdleDevice(*(_QWORD *)(v18 + 32));
              *(_DWORD *)(v18 + 704) &= ~0x200u;
            }
            v22 = PipEnumerateCompleted(v18, v21, v9);
            v19 = 2;
            goto LABEL_67;
          }
          restarted = PipProcessRestartPhase2(v18, v21, 0LL);
LABEL_37:
          v22 = restarted;
          if ( restarted < 0 )
          {
            v22 = -1073741106;
            goto LABEL_67;
          }
LABEL_49:
          v19 = 0;
          goto LABEL_67;
        }
        started = PipProcessRestartPhase1(v18, a6, v15);
        goto LABEL_40;
      }
      if ( v10 == 1 && (unsigned __int16 *)v18 != v12 )
        goto LABEL_68;
      v19 = 2;
      if ( v7 || (v21 & 8) == 0 )
        goto LABEL_68;
      v22 = PipEnumerateDevice(v18, a6, v15);
      if ( v22 == 259 )
      {
        v15 = 1;
        v19 = 1;
        goto LABEL_68;
      }
      if ( v22 >= 0 )
        goto LABEL_49;
LABEL_67:
      if ( v22 != -1073741106 )
        goto LABEL_68;
      v9 = 0LL;
LABEL_75:
      if ( v7 )
      {
        v36 = v22;
LABEL_77:
        a1 = 1LL;
        if ( !v7 && (*(_DWORD *)(v18 + 704) & 1) != 0 )
        {
          PpDevCfgTraceDeviceStart((_DWORD *)v18);
          v9 = 0LL;
          a1 = 1LL;
        }
        if ( v15 && v19 && PnpAsyncOptions >= 0 )
          v19 = 1;
        v27 = v19 - 1;
        if ( v27 )
        {
          if ( v27 == 1 )
          {
            v28 = *(_QWORD *)(v18 + 8);
            if ( !v28 )
              goto LABEL_94;
LABEL_87:
            v18 = v28;
          }
        }
        else
        {
          while ( 1 )
          {
LABEL_94:
            if ( (unsigned __int16 *)v18 == v12 )
            {
              a7 = 1;
              LOBYTE(a1) = -(v15 != 0);
              v41 &= a1;
              goto LABEL_88;
            }
            v28 = *(_QWORD *)v18;
            if ( *(_QWORD *)v18 )
              goto LABEL_87;
            if ( v15 && PnpAsyncOptions > 0 )
              break;
            if ( *(_QWORD *)(v18 + 16) )
              v18 = *(_QWORD *)(v18 + 16);
          }
          v31 = *(_QWORD *)(v18 + 16);
          if ( v31 )
            v18 = *(_QWORD *)(v31 + 8);
          a7 = 1;
        }
LABEL_88:
        v29 = v37;
        v14 = v35;
        goto LABEL_89;
      }
      v10 = v43;
LABEL_106:
      v14 = 0;
      v35 = 0;
      PnpDeviceCompletionProcessCompletedRequests(1LL, 1LL, &v40);
      v15 = 0;
      PipProcessDevNodeTree((_DWORD)IopRootDeviceNode, v11, v42, v10, a5, a6, 1);
      v32 = IopAllocateUnicodeString(&DestinationString, v12[20]);
      if ( v32 < 0 )
      {
        HalPutDmaAdapter(v37[4]);
        return (unsigned int)v32;
      }
      RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(v12 + 20));
      HalPutDmaAdapter(v37[4]);
      PpDevNodeUnlockTree(1);
      LODWORD(v37) = 0;
      memset(&Event, 0, sizeof(Event));
      KeInitializeEvent(&Event, NotificationEvent, 0);
      if ( (int)PnpInsertNoopEvent((__int64)&Event, (__int64)&v37) >= 0 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      PpDevNodeLockTree(1);
      v33 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
      RtlFreeAnsiString(&DestinationString);
      v9 = 0LL;
      if ( !v33 )
        return 3221225473LL;
      v12 = *(unsigned __int16 **)(v33[39] + 40LL);
      v29 = (PADAPTER_OBJECT *)v12;
      v18 = (ULONG_PTR)v12;
      v37 = (PADAPTER_OBJECT *)v12;
LABEL_89:
      v10 = v43;
    }
    while ( v41 );
    v8 = v42;
    if ( v34 )
      continue;
    break;
  }
  if ( !v7 )
    HalPutDmaAdapter(v29[4]);
  return v36;
}
