/*
 * XREFs of PipProcessDevNodeTree @ 0x140777578
 * Callers:
 *     PnpDeviceActionWorker @ 0x1402DD320 (PnpDeviceActionWorker.c)
 *     PiProcessDeviceResetAction @ 0x140560174 (PiProcessDeviceResetAction.c)
 *     PnpProcessRebalance @ 0x140564C24 (PnpProcessRebalance.c)
 *     PiRestartDevice @ 0x1406617B0 (PiRestartDevice.c)
 *     PiProcessReenumeration @ 0x140764BE0 (PiProcessReenumeration.c)
 *     PipProcessDevNodeTree @ 0x140777578 (PipProcessDevNodeTree.c)
 *     PiProcessStartSystemDevices @ 0x140863BE8 (PiProcessStartSystemDevices.c)
 *     PiProcessResourceRequirementsChanged @ 0x140947934 (PiProcessResourceRequirementsChanged.c)
 * Callees:
 *     PiCollapseEnumRequests @ 0x14025A690 (PiCollapseEnumRequests.c)
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PoFxPrepareDevice @ 0x1402D2238 (PoFxPrepareDevice.c)
 *     PoFxIdleDevice @ 0x1402D25CC (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x1402D2848 (PoFxActivateDevice.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x140561048 (McTemplateK0z_EtwWriteTransfer.c)
 *     PiProcessNewDeviceNodeAsync @ 0x1406E60B0 (PiProcessNewDeviceNodeAsync.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1406EA5EC (PnpSynchronizeDeviceEventQueue.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     PiDevCfgLogDeviceStarted @ 0x1407456F8 (PiDevCfgLogDeviceStarted.c)
 *     PipProcessStartPhase1 @ 0x1407491FC (PipProcessStartPhase1.c)
 *     PnpProcessAssignResources @ 0x140749294 (PnpProcessAssignResources.c)
 *     PipEnumerateDevice @ 0x14074B420 (PipEnumerateDevice.c)
 *     PipSetDevNodeProblem @ 0x140765114 (PipSetDevNodeProblem.c)
 *     PipProcessStartPhase2 @ 0x140768EA8 (PipProcessStartPhase2.c)
 *     IopAllocateUnicodeString @ 0x140769784 (IopAllocateUnicodeString.c)
 *     PipProcessStartPhase3 @ 0x14076BE08 (PipProcessStartPhase3.c)
 *     PipEnumerateCompleted @ 0x14076F8AC (PipEnumerateCompleted.c)
 *     PipCallDriverAddDevice @ 0x1407743C8 (PipCallDriverAddDevice.c)
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14077572C (PpDevNodeLockTree.c)
 *     PipProcessDevNodeTree @ 0x140777578 (PipProcessDevNodeTree.c)
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x140777B74 (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PnpCheckForActiveDependencies @ 0x140777C08 (PnpCheckForActiveDependencies.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140779C10 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PipProcessRestartPhase1 @ 0x14095B2D4 (PipProcessRestartPhase1.c)
 *     PipProcessRestartPhase2 @ 0x14095B398 (PipProcessRestartPhase2.c)
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
  char v7; // r14
  int v8; // ebx
  int v9; // edi
  int v10; // r12d
  char *v11; // rsi
  PVOID *v12; // r13
  __int64 v13; // r9
  char v14; // dl
  unsigned __int8 v15; // r15
  __int64 v16; // rcx
  ULONG_PTR v17; // rbx
  int v18; // edi
  int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  int v22; // edx
  __int64 v23; // r9
  int v24; // ecx
  int v25; // edi
  ULONG_PTR v26; // rax
  char v27; // al
  int v29; // eax
  bool v30; // zf
  int v31; // eax
  int started; // eax
  unsigned int v33; // edx
  int restarted; // eax
  bool v35; // al
  int UnicodeString; // ebx
  __int64 v37; // rbx
  int v38; // eax
  __int64 v39; // rax
  char v40; // [rsp+40h] [rbp-28h]
  char v41; // [rsp+41h] [rbp-27h]
  unsigned int v42; // [rsp+44h] [rbp-24h]
  unsigned int v43; // [rsp+48h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF
  char v45; // [rsp+B0h] [rbp+48h] BYREF
  char v46; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v47; // [rsp+C0h] [rbp+58h]
  int v48; // [rsp+C8h] [rbp+60h]

  v48 = a4;
  v47 = a3;
  v7 = a7;
  v46 = 0;
  v8 = a4;
  v9 = a3;
  v10 = a2;
  v11 = (char *)a1;
  v12 = (PVOID *)a1;
  v13 = 1LL;
  DestinationString = 0LL;
  if ( a2 )
  {
    if ( v8 != 1 && !*(_BYTE *)(a2 + 28) && !a7 )
    {
      v35 = PiCollapseEnumRequests(a2);
      a1 = (__int64)IopRootDeviceNode;
      v13 = 1LL;
      if ( v35 )
        v11 = (char *)IopRootDeviceNode;
    }
  }
  LOBYTE(a1) = 0;
  v14 = 1;
  v43 = 0;
  v42 = a1;
  v15 = 0;
  v41 = 0;
  a7 = 1;
  while ( 2 )
  {
    if ( !v7 )
    {
      if ( (byte_140C0DD4B & 8) != 0 )
        McTemplateK0z_EtwWriteTransfer(
          a1,
          (const EVENT_DESCRIPTOR *)KMPnPEvt_AssignResources_Start,
          a3,
          *((const wchar_t **)v11 + 6));
      v45 = 0;
      v41 = PnpProcessAssignResources((__int64)v11, a5, (__int64)&v45);
      if ( (byte_140C0DD4B & 8) != 0 )
        McTemplateK0z_EtwWriteTransfer(
          v16,
          (const EVENT_DESCRIPTOR *)KMPnPEvt_AssignResources_Stop,
          a3,
          *((const wchar_t **)v11 + 6));
      if ( v45 )
      {
        v38 = PipProcessDevNodeTree((_DWORD)IopRootDeviceNode, v10, v9, v8, 0, 0, 1);
        LODWORD(a1) = (unsigned __int8)v42;
        v13 = 1LL;
        if ( v38 == -1073741106 )
          LODWORD(a1) = 1;
        v42 = a1;
      }
      else
      {
        LOBYTE(a1) = v42;
        v13 = 1LL;
      }
      v14 = a7;
    }
    v40 = 0;
    v17 = (ULONG_PTR)v11;
    v45 = 1;
    do
    {
      v18 = 1;
      if ( !(_BYTE)a1 )
      {
        if ( v14 )
        {
          v19 = *(_DWORD *)(v17 + 704);
          if ( (v19 & 0x10000) != 0 )
            *(_DWORD *)(v17 + 704) = v19 & 0xFFFEFFFF;
        }
        if ( (unsigned int)(*(_DWORD *)(v17 + 300) - 769) > 1 && (*(_DWORD *)(v17 + 396) & 0x6000) == 0 )
        {
          if ( (unsigned __int8)PnpCheckForActiveDependencies(v17, 2LL) )
            PipSetDevNodeProblem(v17, 51, 0);
          v13 = 1LL;
        }
        v20 = *(unsigned int *)(v17 + 396);
        if ( (v20 & 0x6000) == 0 )
        {
          if ( *(_DWORD *)(v17 + 300) == 769 )
          {
            if ( v48 == 3 && (v20 & 0x2000000) != 0 || v7 )
              goto LABEL_41;
            if ( (unsigned __int8)PnpCheckForActiveDependencies(v17, 1LL) )
            {
              PipSetDevNodeProblem(v17, 51, 0);
              goto LABEL_41;
            }
            v31 = PiProcessNewDeviceNodeAsync(v17, a6);
            v22 = v31;
            if ( v31 != 259 )
            {
              if ( v31 >= 0 )
                goto LABEL_94;
              goto LABEL_40;
            }
LABEL_98:
            v15 = 1;
            goto LABEL_41;
          }
          if ( *(_DWORD *)(v17 + 300) == 772 )
          {
            if ( v7 || (*(_DWORD *)(v17 + 704) & 0x10000) != 0 )
              goto LABEL_41;
            v22 = PipCallDriverAddDevice(v17, v47);
            if ( v22 >= 0 )
            {
              PoFxPrepareDevice(v17, 0);
              v18 = 0;
              v41 = 1;
              goto LABEL_41;
            }
            if ( *(_DWORD *)(v17 + 300) == 772 )
              *(_DWORD *)(v17 + 704) |= 0x10000u;
            goto LABEL_40;
          }
          if ( *(_DWORD *)(v17 + 300) != 774 )
          {
            switch ( *(_DWORD *)(v17 + 300) )
            {
              case 0x308:
                started = PipProcessStartPhase2(v17, v20, a3);
                break;
              case 0x309:
                if ( (int)v20 < 0 )
                {
                  v18 = 1;
                  goto LABEL_41;
                }
                started = PipProcessStartPhase3(v17, v48 != 1, a3);
                break;
              case 0x30A:
                if ( v48 == 1 && (char *)v17 != v11 )
                  goto LABEL_41;
                v18 = 2;
                if ( v7 || (v20 & 8) == 0 )
                  goto LABEL_41;
                v21 = PipEnumerateDevice(v17, a6, v15);
                v22 = v21;
                if ( v21 == 259 )
                {
                  v15 = 1;
                  v18 = 1;
                  goto LABEL_41;
                }
                if ( v21 < 0 )
                  goto LABEL_40;
                goto LABEL_34;
              case 0x30C:
                restarted = PipProcessRestartPhase1(v17, a6, v15, 1LL);
                goto LABEL_97;
              case 0x30D:
                started = PipProcessRestartPhase2(v17, v20, a3, 1LL);
                break;
              case 0x30F:
                if ( (*(_DWORD *)(v17 + 704) & 0x200) != 0 )
                {
                  PoFxIdleDevice(*(_QWORD *)(v17 + 32));
                  *(_DWORD *)(v17 + 704) &= ~0x200u;
                }
                v22 = PipEnumerateCompleted(v17);
                v18 = 2;
                goto LABEL_40;
              default:
                goto LABEL_41;
            }
            if ( started >= 0 )
            {
LABEL_94:
              v18 = 0;
              goto LABEL_41;
            }
            v22 = -1073741106;
LABEL_40:
            if ( v22 == -1073741106 )
            {
LABEL_108:
              if ( !v7 )
                goto LABEL_109;
              v43 = v22;
LABEL_47:
              if ( v15 && v18 && PnpAsyncOptions >= 0 || (v25 = v18 - 1) == 0 )
              {
                while ( 1 )
                {
LABEL_49:
                  if ( (char *)v17 == v11 )
                  {
                    v40 = 1;
                    v14 = 0;
                    v45 &= -(v15 != 0);
                    a7 = 0;
                    v27 = v45;
                    goto LABEL_53;
                  }
                  v26 = *(_QWORD *)v17;
                  if ( *(_QWORD *)v17 )
                    goto LABEL_51;
                  if ( v15 && PnpAsyncOptions > 0 )
                    break;
                  if ( *(_QWORD *)(v17 + 16) )
                    v17 = *(_QWORD *)(v17 + 16);
                }
                v39 = *(_QWORD *)(v17 + 16);
                if ( v39 )
                  v17 = *(_QWORD *)(v39 + 8);
                v40 = 1;
              }
              else if ( v25 == 1 )
              {
                v26 = *(_QWORD *)(v17 + 8);
                if ( !v26 )
                  goto LABEL_49;
LABEL_51:
                v17 = v26;
              }
              goto LABEL_52;
            }
LABEL_41:
            v46 = 0;
            v22 = PnpDeviceCompletionProcessCompletedRequests(0LL, 0LL, &v46, v13);
            if ( v22 != -1073741106 )
            {
              if ( !v40 )
                goto LABEL_45;
              if ( v46 )
                goto LABEL_45;
              v22 = PnpDeviceCompletionProcessCompletedRequests(0LL, 1LL, &v46, v23);
              v40 = 0;
              v15 &= -(v46 != 0);
              if ( v22 != -1073741106 )
                goto LABEL_45;
            }
            goto LABEL_108;
          }
          if ( v7 )
            goto LABEL_41;
          PoFxActivateDevice(*(_QWORD *)(v17 + 32));
          v33 = a6;
          *(_DWORD *)(v17 + 704) |= 0x200u;
          restarted = PipProcessStartPhase1(v17, v33, v15);
LABEL_97:
          v22 = restarted;
          if ( restarted != 259 )
          {
LABEL_34:
            v18 = 0;
            goto LABEL_40;
          }
          goto LABEL_98;
        }
LABEL_45:
        if ( v7 )
          goto LABEL_47;
        v24 = *(_DWORD *)(v17 + 704);
        if ( (v24 & 1) == 0 )
          goto LABEL_47;
        v29 = *(_DWORD *)(v17 + 300);
        if ( v29 < 771 )
          goto LABEL_112;
        if ( v29 <= 777 )
        {
          v30 = (*(_DWORD *)(v17 + 396) & 0x6000) == 0;
          goto LABEL_82;
        }
        if ( v29 != 778 )
        {
LABEL_112:
          if ( (*(_DWORD *)(v17 + 396) & 0x2000) != 0 )
          {
            v30 = *(_DWORD *)(v17 + 404) == 56;
LABEL_82:
            if ( v30 )
              goto LABEL_47;
          }
        }
        *(_DWORD *)(v17 + 704) = v24 & 0xFFFFFFFE;
        PiDevCfgLogDeviceStarted(v17);
        goto LABEL_47;
      }
LABEL_109:
      LOBYTE(v42) = 0;
      PnpDeviceCompletionProcessCompletedRequests(1LL, 1LL, &v46, 1LL);
      v15 = 0;
      PipProcessDevNodeTree((_DWORD)IopRootDeviceNode, v10, v47, v48, a5, a6, 1);
      UnicodeString = IopAllocateUnicodeString((__int64)&DestinationString, *((_WORD *)v11 + 20));
      if ( UnicodeString < 0 )
      {
        ObfDereferenceObject(v12[4]);
        return (unsigned int)UnicodeString;
      }
      RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(v11 + 40));
      ObfDereferenceObject(v12[4]);
      PpDevNodeUnlockTree(1);
      PnpSynchronizeDeviceEventQueue();
      PpDevNodeLockTree(1);
      v37 = PnpDeviceObjectFromDeviceInstanceWithTag(&DestinationString, 1953261124LL);
      RtlFreeUnicodeString(&DestinationString);
      if ( !v37 )
        return 3221225473LL;
      v11 = *(char **)(*(_QWORD *)(v37 + 312) + 40LL);
      v17 = (ULONG_PTR)v11;
      v12 = (PVOID *)v11;
LABEL_52:
      v27 = v45;
      v14 = a7;
LABEL_53:
      a1 = v42;
      v13 = 1LL;
    }
    while ( v27 );
    v8 = v48;
    v9 = v47;
    if ( v41 )
      continue;
    break;
  }
  if ( !v7 )
    ObfDereferenceObject(v12[4]);
  return v43;
}
