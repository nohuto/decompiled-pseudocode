/*
 * XREFs of PiSwIrpStartCreateWorker @ 0x140765DC0
 * Callers:
 *     PiSwIrpStartCreate @ 0x140764EC8 (PiSwIrpStartCreate.c)
 *     PiSwStartCreate @ 0x140953B9C (PiSwStartCreate.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x1402A7BC0 (PsGetCurrentThreadProcessId.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     RtlStringCbLengthW @ 0x1402DCD64 (RtlStringCbLengthW.c)
 *     IoInvalidateDeviceRelations @ 0x1402DCE90 (IoInvalidateDeviceRelations.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x1402DEF50 (RtlInsertElementGenericTableAvl.c)
 *     RtlStringCbCopyW @ 0x1402E0978 (RtlStringCbCopyW.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x14056370C (McTemplateK0zz_EtwWriteTransfer.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x1405637DC (McTemplateK0zzd_EtwWriteTransfer.c)
 *     McTemplateK0zzqq_EtwWriteTransfer @ 0x1405639AC (McTemplateK0zzqq_EtwWriteTransfer.c)
 *     McTemplateK0zztt_EtwWriteTransfer @ 0x140563A9C (McTemplateK0zztt_EtwWriteTransfer.c)
 *     McTemplateK0zzzdzzq_EtwWriteTransfer @ 0x140563DCC (McTemplateK0zzzdzzq_EtwWriteTransfer.c)
 *     PiSwDeviceDereference @ 0x140661C18 (PiSwDeviceDereference.c)
 *     PiSwPnPInfoFree @ 0x140661CD8 (PiSwPnPInfoFree.c)
 *     PiSwFindPdoAssociation @ 0x1406E34FC (PiSwFindPdoAssociation.c)
 *     PiSwFreeInterfaceList @ 0x1407645E0 (PiSwFreeInterfaceList.c)
 *     PnpCopyDevPropertyArray @ 0x140764604 (PnpCopyDevPropertyArray.c)
 *     PiSwPnPInfoInit @ 0x140764758 (PiSwPnPInfoInit.c)
 *     PiSwBusRelationAdd @ 0x140764970 (PiSwBusRelationAdd.c)
 *     PiSwInstanceInfoInit @ 0x1407661D0 (PiSwInstanceInfoInit.c)
 *     PiSwDeviceCreate @ 0x140767784 (PiSwDeviceCreate.c)
 *     PiSwLock @ 0x1407677F0 (PiSwLock.c)
 *     PiSwValidateCreateData @ 0x140767820 (PiSwValidateCreateData.c)
 *     PiSwPropertySet @ 0x14076E714 (PiSwPropertySet.c)
 *     PnpFreeDevPropertyArray @ 0x140779620 (PnpFreeDevPropertyArray.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140779C10 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwAllocMem @ 0x140953348 (PiSwAllocMem.c)
 *     PiSwBusRelationRemove @ 0x14095336C (PiSwBusRelationRemove.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x14095353C (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiSwIrpCleanup @ 0x140953700 (PiSwIrpCleanup.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1409539A8 (PiSwQueuedCreateInfoCreate.c)
 *     PiSwQueuedCreateInfoFree @ 0x140953AB8 (PiSwQueuedCreateInfoFree.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpStartCreateWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  struct _DEVICE_OBJECT *v3; // r14
  struct _DEVICE_OBJECT *v4; // r13
  char v5; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  int Data; // ebx
  __int64 v11; // r8
  PVOID *inserted; // rax
  _QWORD *v13; // rcx
  __int64 v14; // r8
  void *v15; // r11
  const wchar_t **v16; // rcx
  BOOLEAN v17; // bl
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v22; // rax
  char *v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  _DWORD *v28; // rcx
  __int64 v29; // rdx
  void *v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rbx
  void *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // eax
  _QWORD *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r8
  void *v40; // rcx
  __int64 v41; // r8
  int CurrentThreadProcessId; // eax
  char *Buffer; // [rsp+50h] [rbp-30h] BYREF
  __int64 v44; // [rsp+58h] [rbp-28h] BYREF
  size_t pcbLength; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  BOOLEAN NewElement; // [rsp+C8h] [rbp+48h] BYREF
  int v48; // [rsp+D0h] [rbp+50h] BYREF
  PVOID P; // [rsp+D8h] [rbp+58h] BYREF

  v2 = 0LL;
  Buffer = 0LL;
  P = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  NewElement = 0;
  v5 = 0;
  pcbLength = 0LL;
  DestinationString = 0LL;
  Data = PiSwValidateCreateData();
  if ( Data < 0 )
    goto LABEL_33;
  if ( (byte_140C0DD4C & 2) != 0 )
    McTemplateK0zzzdzzq_EtwWriteTransfer(
      v9,
      v8,
      v11,
      *(const wchar_t **)a1,
      *(const wchar_t **)(a1 + 16),
      *(const wchar_t **)(a1 + 8),
      *(_DWORD *)(a1 + 64),
      *(const wchar_t **)(a1 + 72),
      *(const wchar_t **)(a1 + 80),
      *(_DWORD *)(a1 + 104));
  PiSwLock();
  if ( a2 && (v2 = *(_QWORD *)(a2 + 184), *(_QWORD *)(*(_QWORD *)(v2 + 48) + 32LL)) )
  {
    Data = -1073741637;
  }
  else
  {
    Data = PiSwDeviceCreate(&Buffer);
    if ( Data >= 0 )
    {
      Data = PiSwInstanceInfoInit(Buffer + 8, a1);
      if ( Data >= 0 )
      {
        inserted = (PVOID *)RtlInsertElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer, 8u, &NewElement);
        LOBYTE(v15) = 0;
        if ( !inserted )
          goto LABEL_96;
        v16 = (const wchar_t **)*inserted;
        v17 = NewElement;
        P = *inserted;
        if ( (byte_140C0DD4C & 2) != 0 )
        {
          McTemplateK0zzd_EtwWriteTransfer(
            (__int64)v16,
            (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_InstanceTable_Add,
            v14,
            v16[1],
            v16[2],
            NewElement == 0);
          v16 = (const wchar_t **)P;
        }
        if ( v17 )
        {
          Buffer = 0LL;
          _InterlockedIncrement((volatile signed __int32 *)v16);
          v18 = PiSwPnPInfoInit((__int64)P + 24, a1);
          LOBYTE(v15) = 0;
          Data = v18;
          if ( v18 < 0 )
            goto LABEL_97;
          *((_DWORD *)P + 40) = *(_DWORD *)(a1 + 88);
          if ( !*(_QWORD *)(a1 + 96) )
            goto LABEL_14;
          v22 = PiSwAllocMem(*(unsigned int *)(a1 + 88));
          LOBYTE(v15) = 0;
          *((_QWORD *)P + 19) = v22;
          v13 = (_QWORD *)*((_QWORD *)P + 19);
          if ( v13 )
          {
            memmove(v13, *(const void **)(a1 + 96), *(unsigned int *)(a1 + 88));
LABEL_14:
            v19 = PnpCopyDevPropertyArray(
                    *(_DWORD *)(a1 + 104),
                    *(_QWORD *)(a1 + 112),
                    v14,
                    (_DWORD *)P + 44,
                    (__int64 *)P + 21);
            LOBYTE(v15) = 0;
            Data = v19;
            if ( v19 < 0 )
              goto LABEL_97;
            v20 = PiSwBusRelationAdd(*(NTSTRSAFE_PCWSTR *)(a1 + 8), (__int64)P, v14);
            LOBYTE(v15) = 0;
            Data = v20;
            if ( v20 < 0 )
              goto LABEL_97;
            *((_DWORD *)P + 41) = PsGetCurrentThreadProcessId();
LABEL_17:
            v3 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(*((_QWORD *)P + 14), 1953261124LL);
LABEL_18:
            v15 = 0LL;
LABEL_19:
            v5 = 1;
            goto LABEL_20;
          }
LABEL_96:
          Data = -1073741670;
          goto LABEL_97;
        }
        _InterlockedIncrement((volatile signed __int32 *)v16);
        v23 = (char *)P;
        if ( (*((_DWORD *)P + 1) & 1) != 0 )
        {
          Data = -1073741771;
        }
        else
        {
          if ( (byte_140C0DD4C & 2) != 0 )
          {
            McTemplateK0zztt_EtwWriteTransfer(
              (*((_DWORD *)P + 1) >> 1) & 1,
              (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_EnumerationStatus,
              (__int64)P,
              *((const wchar_t **)P + 1),
              *((const wchar_t **)P + 2),
              (*((_DWORD *)P + 1) & 2) != 0,
              *((_QWORD *)P + 15) != 0LL);
            v23 = (char *)P;
          }
          if ( (*((_DWORD *)v23 + 1) & 2) == 0 )
          {
            v24 = *((_QWORD *)v23 + 15);
            if ( v24 )
            {
              v25 = *(unsigned int *)(*(_QWORD *)(v24 + 64) + 8LL);
              if ( (v25 & 2) == 0 )
              {
                if ( !(unsigned __int8)PiSwDoesCreateChangesRequireReEnum(v23, a1) )
                {
                  v48 = 0;
                  v44 = 0LL;
                  if ( (byte_140C0DD4C & 2) != 0 )
                    McTemplateK0zz_EtwWriteTransfer(
                      v25,
                      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_PropertyUpdate,
                      v26,
                      *((const wchar_t **)P + 1),
                      *((const wchar_t **)P + 2));
                  v27 = PnpCopyDevPropertyArray(*(_DWORD *)(a1 + 104), *(_QWORD *)(a1 + 112), v26, &v48, &v44);
                  v15 = 0LL;
                  Data = v27;
                  if ( v27 < 0 )
                    goto LABEL_31;
                  v28 = P;
                  v29 = *((_QWORD *)P + 21);
                  if ( v29 )
                  {
                    PnpFreeDevPropertyArray(*((unsigned int *)P + 44), v29, 1466986064LL);
                    v28 = P;
                    v15 = 0LL;
                  }
                  v28[44] = v48;
                  v13 = P;
                  *((_QWORD *)P + 21) = v44;
LABEL_20:
                  if ( !a2 )
                    goto LABEL_24;
                  if ( v5 )
                  {
                    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)PiSwIrpCancelStartCreate);
                    if ( !*(_BYTE *)(a2 + 68) )
                    {
                      *((_QWORD *)P + 18) = a2;
                      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
                      goto LABEL_24;
                    }
                    Data = -1073741536;
                  }
                  else
                  {
                    Data = RtlStringCbCopyW(
                             *(NTSTRSAFE_PWSTR *)(a2 + 24),
                             *(unsigned int *)(v2 + 8),
                             *((NTSTRSAFE_PCWSTR *)P + 10));
                    if ( Data >= 0 )
                    {
                      Data = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(a2 + 24), *(unsigned int *)(v2 + 8), &pcbLength);
                      if ( Data >= 0 )
                      {
LABEL_24:
                        *((_DWORD *)P + 1) |= 1u;
                        if ( a2 )
                        {
                          v13 = *(_QWORD **)(v2 + 48);
                          v13[4] = P;
                          P = v15;
                        }
                        if ( v3 )
                        {
                          IoInvalidateDeviceRelations(v3, SingleBusRelations);
                          LOBYTE(v15) = 0;
                        }
                        if ( v4 )
                        {
                          IoInvalidateDeviceRelations(v4, SingleBusRelations);
                          LOBYTE(v15) = 0;
                        }
                        if ( Data >= 0 )
                          goto LABEL_31;
                      }
                    }
                  }
LABEL_97:
                  if ( NewElement != (_BYTE)v15 )
                  {
                    if ( (byte_140C0DD4C & 2) != 0 )
                      McTemplateK0zz_EtwWriteTransfer(
                        (__int64)v13,
                        (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_InstanceTable_Remove,
                        v14,
                        *((const wchar_t **)P + 1),
                        *((const wchar_t **)P + 2));
                    RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &P);
                    PiSwDeviceDereference(P);
                    if ( *((_QWORD *)P + 14) )
                      PiSwBusRelationRemove(P);
                  }
                  goto LABEL_31;
                }
                v23 = (char *)P;
              }
              if ( (byte_140C0DD4C & 2) != 0 )
              {
                McTemplateK0zz_EtwWriteTransfer(
                  v25,
                  (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_QueueCreate,
                  (__int64)v23,
                  *((const wchar_t **)v23 + 1),
                  *((const wchar_t **)v23 + 2));
                v23 = (char *)P;
              }
              v30 = (void *)*((_QWORD *)v23 + 11);
              if ( v30 )
              {
                PiSwQueuedCreateInfoFree(v30);
                *((_QWORD *)P + 11) = 0LL;
                v23 = (char *)P;
              }
              Data = PiSwQueuedCreateInfoCreate(v23 + 88, a1);
              if ( Data < 0 )
                goto LABEL_31;
              *((_DWORD *)P + 1) |= 2u;
              goto LABEL_17;
            }
          }
          v31 = PnpDeviceObjectFromDeviceInstanceWithTag(*((_QWORD *)v23 + 14), 1953261124LL);
          v32 = P;
          v3 = (struct _DEVICE_OBJECT *)v31;
          if ( v31 && PiSwFindPdoAssociation((__int64)P, v31, 1) )
          {
            ObfDereferenceObject(v33);
            v3 = 0LL;
            if ( (byte_140C0DD4C & 2) != 0 )
              McTemplateK0zz_EtwWriteTransfer(
                v34,
                (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_QueueCreate,
                v35,
                *((const wchar_t **)P + 1),
                *((const wchar_t **)P + 2));
            v36 = PiSwQueuedCreateInfoCreate((char *)P + 88, a1);
            v15 = 0LL;
            Data = v36;
            if ( v36 < 0 )
              goto LABEL_31;
            goto LABEL_19;
          }
          if ( wcsicmp(*(const wchar_t **)(v32[14] + 8LL), *(const wchar_t **)(a1 + 8)) )
          {
            RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 8));
            v4 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(&DestinationString, 1953261124LL);
          }
          *((_DWORD *)P + 1) &= ~4u;
          PiSwBusRelationRemove(P);
          PiSwPnPInfoFree((__int64)P + 24);
          v37 = P;
          if ( *((_QWORD *)P + 19) )
          {
            ExFreePoolWithTag(*((PVOID *)P + 19), 0x57706E50u);
            *((_QWORD *)P + 19) = 0LL;
            *((_DWORD *)P + 40) = 0;
            v37 = P;
          }
          v38 = v37[21];
          if ( v38 )
          {
            PnpFreeDevPropertyArray(*((unsigned int *)v37 + 44), v38, 1466986064LL);
            *((_DWORD *)P + 44) = 0;
            *((_QWORD *)P + 21) = 0LL;
            v37 = P;
          }
          PiSwFreeInterfaceList((_QWORD **)v37 + 23);
          Data = PiSwPnPInfoInit((__int64)P + 24, a1);
          if ( Data < 0 )
            goto LABEL_31;
          *((_DWORD *)P + 40) = *(_DWORD *)(a1 + 88);
          if ( *(_QWORD *)(a1 + 96) )
          {
            *((_QWORD *)P + 19) = PiSwAllocMem(*(unsigned int *)(a1 + 88));
            v40 = (void *)*((_QWORD *)P + 19);
            if ( !v40 )
            {
              Data = -1073741670;
              goto LABEL_31;
            }
            memmove(v40, *(const void **)(a1 + 96), *(unsigned int *)(a1 + 88));
          }
          Data = PnpCopyDevPropertyArray(
                   *(_DWORD *)(a1 + 104),
                   *(_QWORD *)(a1 + 112),
                   v39,
                   (_DWORD *)P + 44,
                   (__int64 *)P + 21);
          if ( Data >= 0 )
          {
            Data = PiSwBusRelationAdd(*(NTSTRSAFE_PCWSTR *)(a1 + 8), (__int64)P, v41);
            if ( Data >= 0 )
            {
              CurrentThreadProcessId = PsGetCurrentThreadProcessId();
              v13 = P;
              *((_DWORD *)P + 41) = CurrentThreadProcessId;
              *((_DWORD *)P + 1) &= ~2u;
              goto LABEL_18;
            }
          }
        }
      }
    }
  }
LABEL_31:
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  if ( Data >= 0 && !v5 )
  {
    v11 = *(_QWORD *)(a1 + 112);
    if ( v11 )
    {
      Data = PiSwPropertySet(*(_QWORD *)(a2 + 24), 1LL, v11, *(unsigned int *)(a1 + 104));
      if ( Data == -1073741772 )
        Data = 0;
    }
  }
LABEL_33:
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
        goto LABEL_37;
      }
      *(_QWORD *)(a2 + 56) = pcbLength + 2;
    }
    *(_DWORD *)(a2 + 48) = Data;
    IofCompleteRequest((PIRP)a2, 0);
  }
  else if ( Data >= 0 )
  {
    if ( (byte_140C0DD4C & 2) != 0 )
      McTemplateK0zzqq_EtwWriteTransfer(
        v9,
        v8,
        v11,
        *((const wchar_t **)P + 1),
        *((const wchar_t **)P + 2),
        *((_DWORD *)P + 45),
        1);
    *((_DWORD *)P + 45) = 1;
    PiSwIrpCleanup(P);
  }
LABEL_37:
  if ( P )
    PiSwDeviceDereference(P);
  if ( Buffer )
    PiSwDeviceDereference(Buffer);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( v4 )
    ObfDereferenceObject(v4);
  return (unsigned int)Data;
}
