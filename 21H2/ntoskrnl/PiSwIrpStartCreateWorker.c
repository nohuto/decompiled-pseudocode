/*
 * XREFs of PiSwIrpStartCreateWorker @ 0x14074DD78
 * Callers:
 *     PiSwIrpStartCreate @ 0x14074DC78 (PiSwIrpStartCreate.c)
 *     PiSwStartCreate @ 0x1408AEE1C (PiSwStartCreate.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlStringCbLengthW @ 0x14024789C (RtlStringCbLengthW.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140252950 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x140252BB0 (RtlInsertElementGenericTableAvl.c)
 *     RtlStringCbCopyW @ 0x140252F68 (RtlStringCbCopyW.c)
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     IoInvalidateDeviceRelations @ 0x1403702F0 (IoInvalidateDeviceRelations.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     PnpFreeDevPropertyArray @ 0x140628848 (PnpFreeDevPropertyArray.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14062D4E0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwBusRelationRemove @ 0x140732E54 (PiSwBusRelationRemove.c)
 *     PiSwPnPInfoFree @ 0x140734210 (PiSwPnPInfoFree.c)
 *     PiSwUnlock @ 0x1407471F0 (PiSwUnlock.c)
 *     PiSwLock @ 0x140747284 (PiSwLock.c)
 *     PiSwPropertySet @ 0x140748518 (PiSwPropertySet.c)
 *     PiSwIrpCleanup @ 0x14074D048 (PiSwIrpCleanup.c)
 *     PiSwDeviceDereference @ 0x14074D154 (PiSwDeviceDereference.c)
 *     PiSwFreeInterfaceList @ 0x14074DB04 (PiSwFreeInterfaceList.c)
 *     PiSwBusRelationAdd @ 0x14074E00C (PiSwBusRelationAdd.c)
 *     PnpCopyDevPropertyArray @ 0x14074E15C (PnpCopyDevPropertyArray.c)
 *     PiSwPnPInfoInit @ 0x14074E2CC (PiSwPnPInfoInit.c)
 *     PiSwInstanceInfoInit @ 0x14074E500 (PiSwInstanceInfoInit.c)
 *     PiSwDeviceCreate @ 0x14074E588 (PiSwDeviceCreate.c)
 *     PiSwValidateCreateData @ 0x14074E604 (PiSwValidateCreateData.c)
 *     PiSwFindPdoAssociation @ 0x140770D08 (PiSwFindPdoAssociation.c)
 *     PiSwAllocMem @ 0x1408AEA48 (PiSwAllocMem.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1408AEA6C (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiSwFreeMem @ 0x1408AEBB4 (PiSwFreeMem.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1408AEC94 (PiSwQueuedCreateInfoCreate.c)
 *     PiSwQueuedCreateInfoFree @ 0x1408AEDA8 (PiSwQueuedCreateInfoFree.c)
 */

__int64 __fastcall PiSwIrpStartCreateWorker(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  struct _DEVICE_OBJECT *v4; // r14
  char v5; // r15
  int Data; // ebx
  void **inserted; // rax
  void *v9; // rax
  void *v11; // rcx
  PVOID *v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  ULONGLONG v15; // rcx
  _DWORD *v16; // rcx
  char *v17; // rdx
  struct _DEVICE_OBJECT *v18; // rax
  __int64 v19; // r8
  _DWORD *v20; // rbx
  struct _DMA_ADAPTER *v21; // rdx
  PVOID v22; // rcx
  char *v23; // rdx
  void *v24; // rcx
  __int64 v25; // r8
  char *Buffer; // [rsp+30h] [rbp-20h] BYREF
  __int64 v27; // [rsp+38h] [rbp-18h] BYREF
  size_t pcbLength[2]; // [rsp+40h] [rbp-10h] BYREF
  BOOLEAN NewElement; // [rsp+98h] [rbp+48h] BYREF
  int v30; // [rsp+A0h] [rbp+50h]
  PVOID P; // [rsp+A8h] [rbp+58h] BYREF

  v3 = 0LL;
  Buffer = 0LL;
  P = 0LL;
  v4 = 0LL;
  NewElement = 0;
  v5 = 0;
  pcbLength[0] = 0LL;
  Data = PiSwValidateCreateData();
  if ( Data < 0 )
    goto LABEL_27;
  PiSwLock();
  if ( !a2 )
    goto LABEL_91;
  v3 = *(_QWORD *)(a2 + 184);
  if ( *(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL) )
    Data = -1073741637;
  if ( Data >= 0 )
  {
LABEL_91:
    Data = PiSwDeviceCreate(&Buffer);
    if ( Data >= 0 )
    {
      Data = PiSwInstanceInfoInit(Buffer + 8, a1);
      if ( Data >= 0 )
      {
        inserted = (void **)RtlInsertElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer, 8u, &NewElement);
        if ( !inserted )
        {
          Data = -1073741670;
LABEL_24:
          if ( Data >= 0 )
            goto LABEL_25;
          goto LABEL_41;
        }
        v9 = *inserted;
        P = v9;
        if ( NewElement )
        {
          Buffer = 0LL;
          _InterlockedIncrement((volatile signed __int32 *)v9);
          Data = PiSwPnPInfoInit((char *)P + 24, a1);
          if ( Data < 0 )
            goto LABEL_41;
          *((_DWORD *)P + 40) = *(_DWORD *)(a1 + 88);
          if ( *(_QWORD *)(a1 + 96) )
          {
            *((_QWORD *)P + 19) = PiSwAllocMem(*(unsigned int *)(a1 + 88));
            v11 = (void *)*((_QWORD *)P + 19);
            if ( !v11 )
            {
              Data = -1073741670;
              goto LABEL_41;
            }
            memmove(v11, *(const void **)(a1 + 96), *(unsigned int *)(a1 + 88));
          }
          Data = PnpCopyDevPropertyArray(*(unsigned int *)(a1 + 104), (__int64)P + 168);
          if ( Data < 0 || (Data = PiSwBusRelationAdd(*(_QWORD *)(a1 + 8)), Data < 0) )
          {
LABEL_41:
            if ( NewElement )
            {
              RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &P);
              PiSwDeviceDereference(P);
              if ( *((_QWORD *)P + 14) )
                PiSwBusRelationRemove((char *)P);
            }
            goto LABEL_25;
          }
LABEL_14:
          v4 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(*((_QWORD *)P + 14), 0x746C6644u);
LABEL_15:
          v5 = 1;
LABEL_16:
          if ( a2 )
          {
            if ( v5 )
            {
              _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)PiSwIrpCancelStartCreate);
              if ( *(_BYTE *)(a2 + 68) )
              {
                Data = -1073741536;
                goto LABEL_41;
              }
              *((_QWORD *)P + 18) = a2;
              *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
            }
            else
            {
              Data = RtlStringCbCopyW(
                       *(NTSTRSAFE_PWSTR *)(a2 + 24),
                       *(unsigned int *)(v3 + 8),
                       *((NTSTRSAFE_PCWSTR *)P + 10));
              if ( Data < 0 )
                goto LABEL_41;
              Data = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(a2 + 24), *(unsigned int *)(v3 + 8), pcbLength);
              if ( Data < 0 )
                goto LABEL_41;
            }
          }
          *((_DWORD *)P + 1) |= 1u;
          if ( a2 )
          {
            *(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL) = P;
            P = 0LL;
          }
          if ( v4 )
            IoInvalidateDeviceRelations(v4, SingleBusRelations);
          goto LABEL_24;
        }
        _InterlockedIncrement((volatile signed __int32 *)v9);
        v12 = (PVOID *)P;
        v13 = *((_DWORD *)P + 1);
        if ( (v13 & 1) != 0 )
        {
          Data = -1073741771;
          goto LABEL_25;
        }
        if ( (v13 & 2) == 0 )
        {
          v14 = *((_QWORD *)P + 15);
          if ( v14 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(v14 + 64) + 8LL) & 2) == 0 )
            {
              if ( !(unsigned __int8)PiSwDoesCreateChangesRequireReEnum(P, a1) )
              {
                v15 = *(unsigned int *)(a1 + 104);
                v30 = 0;
                v27 = 0LL;
                Data = PnpCopyDevPropertyArray(v15, (__int64)&v27);
                if ( Data < 0 )
                  goto LABEL_25;
                v16 = P;
                v17 = (char *)*((_QWORD *)P + 21);
                if ( v17 )
                {
                  PnpFreeDevPropertyArray(*((_DWORD *)P + 44), v17, 0x57706E50u);
                  v16 = P;
                }
                v16[44] = v30;
                *((_QWORD *)P + 21) = v27;
                goto LABEL_16;
              }
              v12 = (PVOID *)P;
            }
            if ( v12[11] )
            {
              PiSwQueuedCreateInfoFree(v12[11]);
              *((_QWORD *)P + 11) = 0LL;
              v12 = (PVOID *)P;
            }
            Data = PiSwQueuedCreateInfoCreate(v12 + 11, a1);
            if ( Data < 0 )
              goto LABEL_25;
            *((_DWORD *)P + 1) |= 2u;
            goto LABEL_14;
          }
        }
        v18 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(*((_QWORD *)P + 14), 0x746C6644u);
        v20 = P;
        v4 = v18;
        if ( v18 )
        {
          LOBYTE(v19) = 1;
          if ( PiSwFindPdoAssociation(P, v18, v19) )
          {
            HalPutDmaAdapter(v21);
            v4 = 0LL;
            Data = PiSwQueuedCreateInfoCreate((char *)P + 88, a1);
            if ( Data < 0 )
              goto LABEL_25;
            goto LABEL_15;
          }
        }
        v20[1] &= ~4u;
        PiSwBusRelationRemove((char *)P);
        PiSwPnPInfoFree((__int64)P + 24);
        v22 = P;
        if ( *((_QWORD *)P + 19) )
        {
          PiSwFreeMem(*((_QWORD *)P + 19));
          *((_QWORD *)P + 19) = 0LL;
          *((_DWORD *)P + 40) = 0;
          v22 = P;
        }
        v23 = (char *)*((_QWORD *)v22 + 21);
        if ( v23 )
        {
          PnpFreeDevPropertyArray(*((_DWORD *)v22 + 44), v23, 0x57706E50u);
          *((_DWORD *)P + 44) = 0;
          *((_QWORD *)P + 21) = 0LL;
          v22 = P;
        }
        PiSwFreeInterfaceList((_QWORD **)v22 + 23);
        Data = PiSwPnPInfoInit((char *)P + 24, a1);
        if ( Data < 0 )
          goto LABEL_25;
        *((_DWORD *)P + 40) = *(_DWORD *)(a1 + 88);
        if ( *(_QWORD *)(a1 + 96) )
        {
          *((_QWORD *)P + 19) = PiSwAllocMem(*(unsigned int *)(a1 + 88));
          v24 = (void *)*((_QWORD *)P + 19);
          if ( !v24 )
          {
            Data = -1073741670;
            goto LABEL_25;
          }
          memmove(v24, *(const void **)(a1 + 96), *(unsigned int *)(a1 + 88));
        }
        Data = PnpCopyDevPropertyArray(*(unsigned int *)(a1 + 104), (__int64)P + 168);
        if ( Data >= 0 )
        {
          Data = PiSwBusRelationAdd(*(_QWORD *)(a1 + 8));
          if ( Data >= 0 )
          {
            *((_DWORD *)P + 1) &= ~2u;
            goto LABEL_15;
          }
        }
      }
    }
  }
LABEL_25:
  PiSwUnlock();
  if ( Data >= 0 && !v5 )
  {
    v25 = *(_QWORD *)(a1 + 112);
    if ( v25 )
    {
      Data = PiSwPropertySet(*(const WCHAR **)(a2 + 24), 1u, v25, *(_DWORD *)(a1 + 104));
      if ( Data == -1073741772 )
        Data = 0;
    }
  }
LABEL_27:
  if ( a2 )
  {
    if ( Data < 0 )
    {
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    else
    {
      if ( v5 )
      {
        Data = 259;
        goto LABEL_31;
      }
      *(_QWORD *)(a2 + 56) = pcbLength[0] + 2;
    }
    *(_DWORD *)(a2 + 48) = Data;
    IofCompleteRequest((PIRP)a2, 0);
  }
  else if ( Data >= 0 )
  {
    *((_DWORD *)P + 45) = 1;
    PiSwIrpCleanup((__int64)P);
  }
LABEL_31:
  if ( P )
    PiSwDeviceDereference(P);
  if ( Buffer )
    PiSwDeviceDereference(Buffer);
  if ( v4 )
    HalPutDmaAdapter((PADAPTER_OBJECT)v4);
  return (unsigned int)Data;
}
