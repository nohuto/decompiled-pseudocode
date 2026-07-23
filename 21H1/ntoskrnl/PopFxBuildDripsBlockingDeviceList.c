/*
 * XREFs of PopFxBuildDripsBlockingDeviceList @ 0x140563B84
 * Callers:
 *     PopDripsWatchdogCallbackHandler @ 0x1408EA748 (PopDripsWatchdogCallbackHandler.c)
 *     PopDripsWatchdogTakeAction @ 0x1408F5FF0 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     PopFxAddRefDevice @ 0x140237700 (PopFxAddRefDevice.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PopFxIsDripsBlockingDevice @ 0x1405656E0 (PopFxIsDripsBlockingDevice.c)
 *     RtlPrefixUnicodeString @ 0x14061B6D0 (RtlPrefixUnicodeString.c)
 *     IoGetDevicePropertyData @ 0x1406EDEC0 (IoGetDevicePropertyData.c)
 *     IoLockUnlockPnpDeviceTree @ 0x140899FFC (IoLockUnlockPnpDeviceTree.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408DFDC4 (PopFxDestroyDripsBlockingDeviceList.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopFxBuildDripsBlockingDeviceList(__int64 a1, _QWORD *a2)
{
  NTSTATUS DevicePropertyData; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR *i; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  struct _KTHREAD *v9; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v11; // r14
  unsigned int v12; // edx
  __int64 v13; // rdi
  bool v14; // zf
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  _DWORD *v21; // r9
  _QWORD *v22; // r15
  __int64 *v23; // rdi
  __int64 v24; // rax
  __int64 *v25; // rax
  unsigned int v26; // r14d
  __int64 *v27; // rbx
  __int64 *v28; // rax
  __int64 *v29; // rax
  unsigned __int64 v30; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v32; // r12
  volatile signed __int32 *v33; // rcx
  unsigned int v34; // ebx
  volatile signed __int32 *v35; // rdx
  __int64 v36; // rax
  volatile signed __int32 *v37; // rax
  const GUID *v38; // r9
  int v40; // [rsp+44h] [rbp-BCh] BYREF
  int Data; // [rsp+48h] [rbp-B8h] BYREF
  ULONG v42; // [rsp+4Ch] [rbp-B4h] BYREF
  ULONG v43; // [rsp+50h] [rbp-B0h] BYREF
  ULONG Type; // [rsp+54h] [rbp-ACh] BYREF
  ULONG RequiredSize; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v46; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v47; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v48; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v49; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING String1; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v51; // [rsp+80h] [rbp-80h] BYREF
  __int64 v52; // [rsp+90h] [rbp-70h] BYREF
  __int64 v53; // [rsp+98h] [rbp-68h] BYREF
  __int128 v54; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *v56; // [rsp+D0h] [rbp-30h]
  __int64 v57; // [rsp+D8h] [rbp-28h]
  unsigned int *v58; // [rsp+E0h] [rbp-20h]
  __int64 v59; // [rsp+E8h] [rbp-18h]
  __int64 *v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+100h] [rbp+0h] BYREF
  unsigned int *v63; // [rsp+120h] [rbp+20h]
  __int64 v64; // [rsp+128h] [rbp+28h]
  unsigned int *v65; // [rsp+130h] [rbp+30h]
  __int64 v66; // [rsp+138h] [rbp+38h]
  __int64 *v67; // [rsp+140h] [rbp+40h]
  __int64 v68; // [rsp+148h] [rbp+48h]
  __int64 v69; // [rsp+150h] [rbp+50h] BYREF
  wchar_t v70; // [rsp+158h] [rbp+58h]
  __int64 v71; // [rsp+160h] [rbp+60h] BYREF
  wchar_t v72; // [rsp+168h] [rbp+68h]

  v70 = aPci[4];
  v43 = 0;
  v51.Buffer = (wchar_t *)&v69;
  v54 = 0LL;
  v72 = aUsb_0[4];
  v69 = *(_QWORD *)L"PCI\\";
  DevicePropertyData = 0;
  String1.Buffer = (wchar_t *)&v71;
  v42 = 0;
  Type = 0;
  *(_QWORD *)&v51.Length = 655368LL;
  v71 = *(_QWORD *)L"USB\\";
  *(_QWORD *)&String1.Length = 655368LL;
  IoLockUnlockPnpDeviceTree(1LL);
  RequiredSize = 0;
  Data = -1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxBlockingDeviceListLock, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  a2[1] = a2;
  *a2 = a2;
  for ( i = (ULONG_PTR *)PopFxDeviceList; i != &PopFxDeviceList; i = (ULONG_PTR *)*i )
  {
    v7 = i + 109;
    if ( i[6] && (unsigned __int8)PopFxIsDripsBlockingDevice(i, a1, i + 111) )
    {
      PopFxAddRefDevice((ULONG_PTR)i);
      v8 = (_QWORD *)a2[1];
      if ( (_QWORD *)*v8 != a2 )
        __fastfail(3u);
      *v7 = a2;
      i[110] = (ULONG_PTR)v8;
      *v8 = v7;
      a2[1] = v7;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopFxDeviceListLock);
  v9 = KeGetCurrentThread();
  v40 = 0;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopFxDeviceListLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v9->ApcState.Process);
  else
    SessionId = -1;
  --v9->SpecialApcDisable;
  v11 = ++v9->AbAllocationRegionCount;
  v12 = ((char)v9->AbEntrySummary | (char)v9->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v15, v12);
    if ( v14 )
      goto LABEL_20;
    v13 = (__int64)&v9->LockEntries[v15];
    v12 &= ~(1 << v15);
    if ( (*(_BYTE *)(v13 + 26) & 1) != 0
      && (*(_DWORD *)(v13 + 32) & 1) == 0
      && (*(_QWORD *)(v13 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopFxDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v13 + 40) == SessionId )
    {
      *(_BYTE *)(v13 + 26) &= ~1u;
      if ( *(_QWORD *)(v13 + 32) )
        break;
    }
  }
  if ( !v13 )
  {
LABEL_20:
    if ( (*((_DWORD *)&v9->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v9, (ULONG_PTR)&PopFxDeviceListLock, SessionId, 0LL);
    goto LABEL_27;
  }
  *(_BYTE *)(v13 + 32) |= 2u;
  if ( *(__int64 *)(v13 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v13);
  v16 = *(_DWORD *)(v13 + 88) & 0x1FFFF;
  v17 = *(_DWORD *)(v13 + 88) & 0xFFFE0000;
  *(_BYTE *)(v13 + 25) &= ~1u;
  v40 = v16;
  *(_DWORD *)(v13 + 88) = v17;
  *(_QWORD *)(v13 + 32) = 0LL;
  v18 = (signed __int64)(v13 - (unsigned __int64)v9->LockEntries) / 96;
  if ( v11 == 1 )
    v9->AbEntrySummary |= 1 << v18;
  else
    _InterlockedOr8((volatile signed __int8 *)&v9->AbOrphanedEntrySummary, 1 << v18);
LABEL_27:
  --v9->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v9, (__int64)&PopFxDeviceListLock, &v40);
  v14 = v9->SpecialApcDisable++ == -1;
  if ( v14 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
    KiCheckForKernelApcDelivery(v20, v19, 1LL, v21);
  v22 = (_QWORD *)*a2;
  if ( (_QWORD *)*a2 != a2 )
  {
    while ( 1 )
    {
      v23 = (__int64 *)*(v22 - 103);
      DevicePropertyData = IoGetDevicePropertyData(
                             (PDEVICE_OBJECT)v23[4],
                             &DEVPKEY_PciDevice_DeviceType,
                             0,
                             0,
                             4u,
                             &Data,
                             &RequiredSize,
                             &Type);
      if ( DevicePropertyData < 0 || Data != 8 )
      {
        DevicePropertyData = IoGetDevicePropertyData(
                               (PDEVICE_OBJECT)v23[4],
                               &DEVPKEY_Device_ClassGuid,
                               0,
                               0,
                               0x10u,
                               &v54,
                               &v43,
                               &v42);
        if ( DevicePropertyData < 0 || v42 != 13 || v43 != 16 )
          goto LABEL_81;
        v24 = *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 - v54;
        if ( *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 == (_QWORD)v54 )
          v24 = *(_QWORD *)GUID_DEVICE_CLASS_USB_CONTROLLER.Data4 - *((_QWORD *)&v54 + 1);
        if ( v24 )
        {
LABEL_81:
          DevicePropertyData = 0;
          goto LABEL_82;
        }
      }
      v25 = (__int64 *)v23[1];
      v26 = 0;
      v27 = v23;
      while ( v25 )
      {
        v27 = v25;
        v25 = (__int64 *)v25[1];
      }
      if ( v27 != v23 )
        break;
LABEL_82:
      v22 = (_QWORD *)*v22;
      if ( v22 == a2 )
        goto LABEL_83;
    }
    do
    {
      if ( *((_DWORD *)v27 + 39) == 1 )
      {
        _InterlockedAnd((volatile signed __int32 *)v27 + 74, 0xFFFFFFDF);
        if ( RtlPrefixUnicodeString(&String1, (PCUNICODE_STRING)(v27 + 5), 0)
          || RtlPrefixUnicodeString(&v51, (PCUNICODE_STRING)(v27 + 5), 0) )
        {
          v29 = v27;
          if ( v27 == v23 )
          {
LABEL_53:
            _InterlockedOr((volatile signed __int32 *)v27 + 74, 0x20u);
            if ( v26 + 1 < v26 )
              goto LABEL_87;
            ++v26;
            DevicePropertyData = 0;
          }
          else
          {
            while ( *((_DWORD *)v29 + 39) == 1 )
            {
              v29 = (__int64 *)v29[2];
              if ( v29 == v23 )
                goto LABEL_53;
            }
          }
        }
      }
      v28 = (__int64 *)*v27;
      if ( *v27 )
      {
        do
        {
          v27 = v28;
          v28 = (__int64 *)v28[1];
        }
        while ( v28 );
      }
      else
      {
        v27 = (__int64 *)v27[2];
      }
    }
    while ( v27 != v23 );
    if ( !v26 )
      goto LABEL_82;
    v30 = 8LL * v26;
    if ( v30 > 0xFFFFFFFF )
    {
LABEL_87:
      DevicePropertyData = -1073741675;
      goto LABEL_84;
    }
    DevicePropertyData = 0;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v30, 0x4D584650u);
    v32 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8 * v26);
      v33 = (volatile signed __int32 *)v23[1];
      v34 = 0;
      v35 = (volatile signed __int32 *)v23;
      while ( v33 )
      {
        v35 = v33;
        v33 = (volatile signed __int32 *)*((_QWORD *)v33 + 1);
      }
      if ( v35 == (volatile signed __int32 *)v23 )
        goto LABEL_76;
      while ( 1 )
      {
        _m_prefetchw((const void *)(v35 + 74));
        if ( (_InterlockedOr(v35 + 74, 0) & 0x20) != 0 )
        {
          if ( v34 >= v26 )
          {
            if ( (unsigned int)dword_140C021E8 > 5 && tlgKeywordOn((__int64)&dword_140C021E8, 0x400000000000LL) )
            {
              v57 = 4LL;
              v46 = v34 + 1;
              v47 = v26;
              v56 = &v46;
              v59 = 4LL;
              v58 = &v47;
              v52 = 0x1000000LL;
              v60 = &v52;
              v61 = 8LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140C021E8,
                (unsigned __int8 *)&byte_140025DE7,
                0LL,
                v38,
                5u,
                &v55);
            }
LABEL_76:
            if ( v34 != v26
              && (unsigned int)dword_140C021E8 > 5
              && tlgKeywordOn((__int64)&dword_140C021E8, 0x400000000000LL) )
            {
              v48 = v34;
              v63 = &v48;
              v64 = 4LL;
              v65 = &v49;
              v49 = v26;
              v67 = &v53;
              v66 = 4LL;
              v53 = 0x1000000LL;
              v68 = 8LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140C021E8,
                (unsigned __int8 *)byte_140025D88,
                0LL,
                0LL,
                5u,
                &v62);
            }
            v22[3] = v32;
            *((_DWORD *)v22 + 8) = v34;
            goto LABEL_82;
          }
          _InterlockedAnd(v35 + 74, 0xFFFFFFDF);
          v36 = v34++;
          v32[v36] = v35;
        }
        v37 = *(volatile signed __int32 **)v35;
        if ( *(_QWORD *)v35 )
        {
          do
          {
            v35 = v37;
            v37 = (volatile signed __int32 *)*((_QWORD *)v37 + 1);
          }
          while ( v37 );
        }
        else
        {
          v35 = (volatile signed __int32 *)*((_QWORD *)v35 + 2);
        }
        if ( v35 == (volatile signed __int32 *)v23 )
          goto LABEL_76;
      }
    }
    DevicePropertyData = -1073741670;
LABEL_83:
    if ( DevicePropertyData < 0 )
LABEL_84:
      PopFxDestroyDripsBlockingDeviceList(a2);
  }
  return (unsigned int)DevicePropertyData;
}
