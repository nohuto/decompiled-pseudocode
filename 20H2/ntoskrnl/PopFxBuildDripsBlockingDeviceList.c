/*
 * XREFs of PopFxBuildDripsBlockingDeviceList @ 0x140567BB4
 * Callers:
 *     PopDripsWatchdogCallbackHandler @ 0x1408F15D8 (PopDripsWatchdogCallbackHandler.c)
 *     PopDripsWatchdogTakeAction @ 0x1408FCEF0 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     PopFxAddRefDevice @ 0x1402461CC (PopFxAddRefDevice.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 *     PopFxIsDripsBlockingDevice @ 0x140569764 (PopFxIsDripsBlockingDevice.c)
 *     RtlPrefixUnicodeString @ 0x140671570 (RtlPrefixUnicodeString.c)
 *     IoGetDevicePropertyData @ 0x14070F920 (IoGetDevicePropertyData.c)
 *     IoLockUnlockPnpDeviceTree @ 0x1408A0E4C (IoLockUnlockPnpDeviceTree.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408E6E84 (PopFxDestroyDripsBlockingDeviceList.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
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
  __int64 v19; // rcx
  _QWORD *v20; // r15
  __int64 *v21; // rdi
  __int64 v22; // rax
  __int64 *v23; // rax
  unsigned int v24; // r14d
  __int64 *v25; // rbx
  __int64 *v26; // rax
  __int64 *v27; // rax
  unsigned __int64 v28; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v30; // r12
  volatile signed __int32 *v31; // rcx
  unsigned int v32; // ebx
  volatile signed __int32 *v33; // rdx
  __int64 v34; // rax
  volatile signed __int32 *v35; // rax
  const GUID *v36; // r9
  int v38; // [rsp+44h] [rbp-BCh] BYREF
  int Data; // [rsp+48h] [rbp-B8h] BYREF
  ULONG v40; // [rsp+4Ch] [rbp-B4h] BYREF
  ULONG v41; // [rsp+50h] [rbp-B0h] BYREF
  ULONG Type; // [rsp+54h] [rbp-ACh] BYREF
  ULONG RequiredSize; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v44; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v45; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v46; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v47; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING String1; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v49; // [rsp+80h] [rbp-80h] BYREF
  __int64 v50; // [rsp+90h] [rbp-70h] BYREF
  __int64 v51; // [rsp+98h] [rbp-68h] BYREF
  __int128 v52; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+D8h] [rbp-28h]
  unsigned int *v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  __int64 *v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+100h] [rbp+0h] BYREF
  unsigned int *v61; // [rsp+120h] [rbp+20h]
  __int64 v62; // [rsp+128h] [rbp+28h]
  unsigned int *v63; // [rsp+130h] [rbp+30h]
  __int64 v64; // [rsp+138h] [rbp+38h]
  __int64 *v65; // [rsp+140h] [rbp+40h]
  __int64 v66; // [rsp+148h] [rbp+48h]
  __int64 v67; // [rsp+150h] [rbp+50h] BYREF
  wchar_t v68; // [rsp+158h] [rbp+58h]
  __int64 v69; // [rsp+160h] [rbp+60h] BYREF
  wchar_t v70; // [rsp+168h] [rbp+68h]

  v68 = aPci[4];
  v41 = 0;
  v49.Buffer = (wchar_t *)&v67;
  v52 = 0LL;
  v70 = aUsb_0[4];
  v67 = *(_QWORD *)L"PCI\\";
  DevicePropertyData = 0;
  String1.Buffer = (wchar_t *)&v69;
  v40 = 0;
  Type = 0;
  *(_QWORD *)&v49.Length = 655368LL;
  v69 = *(_QWORD *)L"USB\\";
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
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  v9 = KeGetCurrentThread();
  v38 = 0;
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
  v38 = v16;
  *(_DWORD *)(v13 + 88) = v17;
  *(_QWORD *)(v13 + 32) = 0LL;
  v18 = (signed __int64)(v13 - (unsigned __int64)v9->LockEntries) / 96;
  if ( v11 == 1 )
    v9->AbEntrySummary |= 1 << v18;
  else
    _InterlockedOr8((volatile signed __int8 *)&v9->AbOrphanedEntrySummary, 1 << v18);
LABEL_27:
  --v9->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v9, (__int64)&PopFxDeviceListLock, &v38);
  v14 = v9->SpecialApcDisable++ == -1;
  if ( v14 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
    KiCheckForKernelApcDelivery(v19);
  v20 = (_QWORD *)*a2;
  if ( (_QWORD *)*a2 != a2 )
  {
    while ( 1 )
    {
      v21 = (__int64 *)*(v20 - 103);
      DevicePropertyData = IoGetDevicePropertyData(
                             (PDEVICE_OBJECT)v21[4],
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
                               (PDEVICE_OBJECT)v21[4],
                               &DEVPKEY_Device_ClassGuid,
                               0,
                               0,
                               0x10u,
                               &v52,
                               &v41,
                               &v40);
        if ( DevicePropertyData < 0 || v40 != 13 || v41 != 16 )
          goto LABEL_81;
        v22 = *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 - v52;
        if ( *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 == (_QWORD)v52 )
          v22 = *(_QWORD *)GUID_DEVICE_CLASS_USB_CONTROLLER.Data4 - *((_QWORD *)&v52 + 1);
        if ( v22 )
        {
LABEL_81:
          DevicePropertyData = 0;
          goto LABEL_82;
        }
      }
      v23 = (__int64 *)v21[1];
      v24 = 0;
      v25 = v21;
      while ( v23 )
      {
        v25 = v23;
        v23 = (__int64 *)v23[1];
      }
      if ( v25 != v21 )
        break;
LABEL_82:
      v20 = (_QWORD *)*v20;
      if ( v20 == a2 )
        goto LABEL_83;
    }
    do
    {
      if ( *((_DWORD *)v25 + 39) == 1 )
      {
        _InterlockedAnd((volatile signed __int32 *)v25 + 74, 0xFFFFFFDF);
        if ( RtlPrefixUnicodeString(&String1, (PCUNICODE_STRING)(v25 + 5), 0)
          || RtlPrefixUnicodeString(&v49, (PCUNICODE_STRING)(v25 + 5), 0) )
        {
          v27 = v25;
          if ( v25 == v21 )
          {
LABEL_53:
            _InterlockedOr((volatile signed __int32 *)v25 + 74, 0x20u);
            if ( v24 + 1 < v24 )
              goto LABEL_87;
            ++v24;
            DevicePropertyData = 0;
          }
          else
          {
            while ( *((_DWORD *)v27 + 39) == 1 )
            {
              v27 = (__int64 *)v27[2];
              if ( v27 == v21 )
                goto LABEL_53;
            }
          }
        }
      }
      v26 = (__int64 *)*v25;
      if ( *v25 )
      {
        do
        {
          v25 = v26;
          v26 = (__int64 *)v26[1];
        }
        while ( v26 );
      }
      else
      {
        v25 = (__int64 *)v25[2];
      }
    }
    while ( v25 != v21 );
    if ( !v24 )
      goto LABEL_82;
    v28 = 8LL * v24;
    if ( v28 > 0xFFFFFFFF )
    {
LABEL_87:
      DevicePropertyData = -1073741675;
      goto LABEL_84;
    }
    DevicePropertyData = 0;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v28, 0x4D584650u);
    v30 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8 * v24);
      v31 = (volatile signed __int32 *)v21[1];
      v32 = 0;
      v33 = (volatile signed __int32 *)v21;
      while ( v31 )
      {
        v33 = v31;
        v31 = (volatile signed __int32 *)*((_QWORD *)v31 + 1);
      }
      if ( v33 == (volatile signed __int32 *)v21 )
        goto LABEL_76;
      while ( 1 )
      {
        _m_prefetchw((const void *)(v33 + 74));
        if ( (_InterlockedOr(v33 + 74, 0) & 0x20) != 0 )
        {
          if ( v32 >= v24 )
          {
            if ( (unsigned int)dword_140C021E8 > 5 && tlgKeywordOn((__int64)&dword_140C021E8, 0x400000000000LL) )
            {
              v55 = 4LL;
              v44 = v32 + 1;
              v45 = v24;
              v54 = &v44;
              v57 = 4LL;
              v56 = &v45;
              v50 = 0x1000000LL;
              v58 = &v50;
              v59 = 8LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140C021E8,
                (unsigned __int8 *)byte_140025FE8,
                0LL,
                v36,
                5u,
                &v53);
            }
LABEL_76:
            if ( v32 != v24
              && (unsigned int)dword_140C021E8 > 5
              && tlgKeywordOn((__int64)&dword_140C021E8, 0x400000000000LL) )
            {
              v46 = v32;
              v61 = &v46;
              v62 = 4LL;
              v63 = &v47;
              v47 = v24;
              v65 = &v51;
              v64 = 4LL;
              v51 = 0x1000000LL;
              v66 = 8LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140C021E8,
                (unsigned __int8 *)&byte_140026047,
                0LL,
                0LL,
                5u,
                &v60);
            }
            v20[3] = v30;
            *((_DWORD *)v20 + 8) = v32;
            goto LABEL_82;
          }
          _InterlockedAnd(v33 + 74, 0xFFFFFFDF);
          v34 = v32++;
          v30[v34] = v33;
        }
        v35 = *(volatile signed __int32 **)v33;
        if ( *(_QWORD *)v33 )
        {
          do
          {
            v33 = v35;
            v35 = (volatile signed __int32 *)*((_QWORD *)v35 + 1);
          }
          while ( v35 );
        }
        else
        {
          v33 = (volatile signed __int32 *)*((_QWORD *)v33 + 2);
        }
        if ( v33 == (volatile signed __int32 *)v21 )
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
