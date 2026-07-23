/*
 * XREFs of PipCallDriverAddDevice @ 0x140741B48
 * Callers:
 *     PipProcessDevNodeTree @ 0x1407413C4 (PipProcessDevNodeTree.c)
 *     PiProcessAddBootDevices @ 0x1407C6ECC (PiProcessAddBootDevices.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402F76F0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     IovUtilMarkStack @ 0x14036F758 (IovUtilMarkStack.c)
 *     PipSetDevNodeState @ 0x14036FB98 (PipSetDevNodeState.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x1403FDF80 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     _CmGetDeviceRegProp @ 0x14063627C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x140636980 (_CmOpenDeviceRegKey.c)
 *     _CmOpenInstallerClassRegKey @ 0x14063A9DC (_CmOpenInstallerClassRegKey.c)
 *     PnpRequestDeviceRemoval @ 0x140736848 (PnpRequestDeviceRemoval.c)
 *     PipSetDevNodeProblem @ 0x1407396AC (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x140739914 (PipClearDevNodeProblem.c)
 *     IopQueryLegacyBusInformation @ 0x14073E6A8 (IopQueryLegacyBusInformation.c)
 *     PiDmaGuardProcessPreAddDevice @ 0x14073E760 (PiDmaGuardProcessPreAddDevice.c)
 *     PnpUnloadAttachedDriver @ 0x14073E7C8 (PnpUnloadAttachedDriver.c)
 *     PnpCallAddDevice @ 0x14073EAEC (PnpCallAddDevice.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14073EBCC (PipChangeDeviceObjectFromRegistryProperties.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1407424CC (PnpCallDriverQueryServiceHelper.c)
 *     _CmSetDeviceRegProp @ 0x1407441D0 (_CmSetDeviceRegProp.c)
 *     PipSetDevNodeFlags @ 0x1407457DC (PipSetDevNodeFlags.c)
 *     _PnpSetObjectProperty @ 0x140745DE4 (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140746200 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     IopBootLog @ 0x140771BE0 (IopBootLog.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1407C6DE8 (IopInsertLegacyBusDeviceNode.c)
 *     IopSafebootDriverLoad @ 0x140892084 (IopSafebootDriverLoad.c)
 *     PnpGetStableSystemBootTime @ 0x1408A1FE0 (PnpGetStableSystemBootTime.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x1408B1544 (PipDmgEnforceEnumerationPolicy.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x1408B5584 (PiProcessDriversLoadedOnSecureDevice.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PipCallDriverAddDevice(__int64 BugCheckParameter2, __int64 a2)
{
  char v4; // r14
  char v5; // r13
  PDEVICE_OBJECT v6; // r15
  PDEVICE_OBJECT v7; // r12
  __int64 v8; // rax
  int v9; // ebx
  int ObjectProperty; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // ecx
  __int64 *v16; // rsi
  __int64 v17; // rdi
  int v19; // eax
  PADAPTER_OBJECT *v20; // r14
  int v21; // eax
  int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 AttachedDevice; // r14
  unsigned __int8 i; // bl
  __int64 v29; // r15
  __int64 *v30; // rsi
  BOOL v31; // r9d
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  int v36; // r11d
  int v37; // r9d
  int v38; // r8d
  int v39; // r8d
  PVOID PoolWithTag; // rbx
  int DeviceRegProp; // eax
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rdx
  const WNF_STATE_NAME *v45; // rbx
  int v46; // esi
  __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rdx
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp-A0h] BYREF
  char v51; // [rsp+68h] [rbp-98h]
  int v52; // [rsp+6Ch] [rbp-94h] BYREF
  int v53; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v55; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  _WORD v57[2]; // [rsp+90h] [rbp-70h] BYREF
  int v58; // [rsp+94h] [rbp-6Ch] BYREF
  HANDLE v59; // [rsp+98h] [rbp-68h] BYREF
  int v60; // [rsp+A0h] [rbp-60h] BYREF
  PDEVICE_OBJECT v61; // [rsp+A8h] [rbp-58h]
  PDEVICE_OBJECT AttachedDeviceReferenceWithTag; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  struct _DEVICE_OBJECT *v64; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v65; // [rsp+D0h] [rbp-30h]
  __int64 v66[8]; // [rsp+E0h] [rbp-20h] BYREF
  ACL SourceString[10]; // [rsp+120h] [rbp+20h] BYREF

  v51 = 0;
  v59 = 0LL;
  v52 = 0;
  v55 = 0;
  v4 = 0;
  Handle = 0LL;
  v5 = 0;
  v57[0] = 0;
  v64 = 0LL;
  NumberOfBytes = 0LL;
  v53 = 0;
  v60 = 0;
  memset(v66, 0, sizeof(v66));
  v6 = 0LL;
  v7 = 0LL;
  AttachedDeviceReferenceWithTag = 0LL;
  v58 = 0;
  v8 = 6LL;
  *(_WORD *)&SourceString[0].AclRevision = 0;
  v65 = 6LL;
  DestinationString = 0LL;
  P = 0LL;
  v61 = 0LL;
  if ( *(_BYTE *)(BugCheckParameter2 + 688) && !*(_BYTE *)(a2 + 4) )
  {
    v9 = -1073741823;
    goto LABEL_30;
  }
  *(_BYTE *)(BugCheckParameter2 + 688) = 0;
  v9 = CmOpenDeviceRegKey(
         *(__int64 *)&PiPnpRtlCtx,
         *(_QWORD *)(BugCheckParameter2 + 48),
         16,
         0,
         131097,
         0,
         (__int64)&Handle,
         0LL);
  if ( v9 < 0 )
    goto LABEL_29;
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 32) + 48LL) & 0x2000000) != 0
    && ((int)PnpGetObjectProperty(
               *(__int64 *)&PiPnpRtlCtx,
               *(_QWORD *)(BugCheckParameter2 + 48),
               1LL,
               (__int64)Handle,
               0LL,
               (__int64)&DEVPKEY_Device_DebuggerSafe,
               (__int64)&v58,
               (__int64)&v55,
               4,
               (__int64)&NumberOfBytes + 4,
               0) < 0
     || v58 != 7
     || HIDWORD(NumberOfBytes) != 4
     || !v55) )
  {
    v39 = 53;
LABEL_120:
    PnpRequestDeviceRemoval(BugCheckParameter2, 0, v39, 0);
LABEL_112:
    v9 = -1073741106;
    goto LABEL_29;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 660) == -1 )
  {
    if ( PnpQueryProximityNode
      && (int)PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(BugCheckParameter2 + 48),
                1LL,
                (__int64)Handle,
                0LL,
                (__int64)&DEVPKEY_Device_Numa_Proximity_Domain,
                (__int64)&v58,
                (__int64)&v55,
                4,
                (__int64)&NumberOfBytes + 4,
                0) >= 0
      && v55 <= 0xFF
      && (int)((__int64 (__fastcall *)(_QWORD, _WORD *))PnpQueryProximityNode)(v55, v57) >= 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 660) = v57[0];
    }
    v22 = *(_DWORD *)(BugCheckParameter2 + 660);
    if ( v22 == -1 )
    {
      v23 = *(_QWORD *)(BugCheckParameter2 + 16);
      if ( v23 )
      {
        v22 = *(_DWORD *)(v23 + 660);
        *(_DWORD *)(BugCheckParameter2 + 660) = v22;
      }
      else
      {
        *(_DWORD *)(BugCheckParameter2 + 660) = -2;
        v22 = -2;
      }
    }
    if ( v22 != -2 )
    {
      v55 = v22;
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_Numa_Node,
        7,
        (__int64)&v55,
        4,
        0);
    }
  }
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     *(_QWORD *)(BugCheckParameter2 + 48),
                     1LL,
                     (__int64)Handle,
                     0LL,
                     (__int64)DEVPKEY_Device_PreventDriverLoad,
                     (__int64)&v58,
                     (__int64)&v64,
                     8,
                     (__int64)&NumberOfBytes + 4,
                     0);
  if ( ((int)(ObjectProperty + 0x80000000) < 0 || ObjectProperty == -1073741789)
    && (int)PnpGetStableSystemBootTime(&AttachedDeviceReferenceWithTag) >= 0 )
  {
    if ( ObjectProperty != -1073741789
      && v58 == 16
      && HIDWORD(NumberOfBytes) == 8
      && !PnpBootMode
      && AttachedDeviceReferenceWithTag == v64 )
    {
      goto LABEL_28;
    }
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      0LL,
      (__int64)DEVPKEY_Device_PreventDriverLoad,
      0,
      0LL,
      0,
      0);
  }
  v11 = *(_QWORD *)(BugCheckParameter2 + 48);
  LODWORD(NumberOfBytes) = 78;
  v9 = 0;
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              v11,
              (__int64)Handle,
              9,
              (__int64)&v53,
              (__int64)SourceString,
              (__int64)&NumberOfBytes,
              0) >= 0
    && v53 == 1
    && (_DWORD)NumberOfBytes )
  {
    RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)SourceString);
    if ( InitSafeBootMode )
    {
      if ( !(unsigned __int8)IopSafebootDriverLoad(&DestinationString) )
      {
        LODWORD(NumberOfBytes) = 256;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x6E657050u);
        if ( PoolWithTag )
        {
          DeviceRegProp = CmGetDeviceRegProp(
                            *(__int64 *)&PiPnpRtlCtx,
                            *(_QWORD *)(BugCheckParameter2 + 48),
                            (__int64)Handle,
                            1,
                            (__int64)&v53,
                            (__int64)PoolWithTag,
                            (__int64)&NumberOfBytes,
                            0);
          if ( DeviceRegProp == -1073741789 )
          {
            ExFreePoolWithTag(PoolWithTag, 0);
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6E657050u);
          }
          else if ( DeviceRegProp >= 0 )
          {
            DestinationString = 0LL;
            RtlInitUnicodeString(&DestinationString, (PCWSTR)PoolWithTag);
          }
        }
        IopBootLog(&DestinationString);
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        goto LABEL_28;
      }
      v4 = v51;
    }
    CmOpenInstallerClassRegKey(
      *(__int64 *)&PiPnpRtlCtx,
      (const WCHAR *)SourceString,
      v12,
      v13,
      131097,
      0,
      (__int64)&v59,
      0LL);
  }
  v14 = *(_QWORD *)(BugCheckParameter2 + 48);
  LODWORD(NumberOfBytes) = 4;
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              v14,
              (__int64)Handle,
              11,
              (__int64)&v53,
              (__int64)&v52,
              (__int64)&NumberOfBytes,
              0) < 0
    || v53 != 4
    || (_DWORD)NumberOfBytes != 4 )
  {
    v52 = 0;
  }
  v66[1] = a2;
  v66[0] = BugCheckParameter2;
  LODWORD(NumberOfBytes) = 512;
  P = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x6E657050u);
  if ( P )
  {
    if ( (v52 & 0x80000) != 0 )
    {
      if ( v59 )
      {
        v42 = PnpCallDriverQueryServiceHelper(
                (unsigned int)&P,
                (unsigned int)&NumberOfBytes,
                0,
                (unsigned int)DEVPKEY_DeviceClass_ConfigFilters,
                (__int64)SourceString,
                (__int64)v59,
                1,
                0,
                v4,
                (__int64)v66);
        v9 = v42;
        if ( v42 == -1073741772 || v42 == -1073741275 )
          v9 = 0;
        if ( v9 < 0 )
          goto LABEL_24;
        while ( 1 )
        {
          v9 = PnpGetObjectProperty(
                 *(__int64 *)&PiPnpRtlCtx,
                 (__int64)SourceString,
                 2LL,
                 (__int64)v59,
                 0LL,
                 (__int64)DEVPKEY_DeviceClass_ConfigNotifyWnfTriggers,
                 (__int64)&v60,
                 (__int64)P,
                 NumberOfBytes,
                 (__int64)&NumberOfBytes + 4,
                 0);
          if ( v9 != -1073741789 )
            break;
          if ( HIDWORD(NumberOfBytes) <= (unsigned int)NumberOfBytes )
          {
            v9 = -1073741823;
            goto LABEL_24;
          }
          ExFreePoolWithTag(P, 0);
          LODWORD(NumberOfBytes) = HIDWORD(NumberOfBytes);
          P = ExAllocatePoolWithTag(PagedPool, HIDWORD(NumberOfBytes), 0x6E657050u);
          if ( !P )
          {
            v9 = -1073741670;
            break;
          }
        }
        if ( v9 >= 0 )
        {
          if ( v60 == 4099 && (NumberOfBytes & 0x700000000LL) == 0 && HIDWORD(NumberOfBytes) )
          {
            v45 = (const WNF_STATE_NAME *)P;
            v46 = HIDWORD(NumberOfBytes) >> 3;
            do
            {
              ZwUpdateWnfStateData(v45++, 0LL, 0, 0LL, 0LL, 0, 0);
              --v46;
            }
            while ( v46 );
            v39 = 56;
            goto LABEL_120;
          }
        }
        else if ( v9 == -1073741772 || v9 == -1073741275 )
        {
          v9 = 0;
        }
        if ( v9 < 0 )
          goto LABEL_24;
      }
      if ( !v66[2] )
      {
        v43 = *(_QWORD *)(BugCheckParameter2 + 48);
        HIDWORD(NumberOfBytes) = 4;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    v43,
                    (__int64)Handle,
                    11,
                    (__int64)&v53,
                    (__int64)&v52,
                    (__int64)&NumberOfBytes + 4,
                    0) >= 0
          && v53 == 4
          && HIDWORD(NumberOfBytes) == 4
          && (v52 & 0x80000) != 0 )
        {
          v44 = *(_QWORD *)(BugCheckParameter2 + 48);
          v52 &= ~0x80000u;
          CmSetDeviceRegProp(PiPnpRtlCtx, v44, (_DWORD)Handle, 11, 4, (__int64)&v52, 4, 0);
        }
      }
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x4000000) == 0 )
    {
      v24 = PnpCallDriverQueryServiceHelper(
              (unsigned int)&P,
              (unsigned int)&NumberOfBytes,
              19,
              (unsigned int)&DEVPKEY_Device_CompoundLowerFilters,
              *(_QWORD *)(BugCheckParameter2 + 48),
              (__int64)Handle,
              0,
              1,
              v4,
              (__int64)v66);
      v9 = v24;
      if ( v24 == -1073741275 || v24 == -1073741772 )
      {
        PipSetDevNodeFlags(BugCheckParameter2, 0x4000000LL);
        v9 = 0;
      }
    }
    if ( v9 >= 0 )
    {
      if ( v59 )
      {
        if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x8000000) == 0 )
        {
          v21 = PnpCallDriverQueryServiceHelper(
                  (unsigned int)&P,
                  (unsigned int)&NumberOfBytes,
                  19,
                  (unsigned int)&DEVPKEY_DeviceClass_CompoundLowerFilters,
                  (__int64)SourceString,
                  (__int64)v59,
                  1,
                  2,
                  v4,
                  (__int64)v66);
          v9 = v21;
          if ( v21 == -1073741275 || v21 == -1073741772 )
          {
            PipSetDevNodeFlags(BugCheckParameter2, 0x8000000LL);
            v9 = 0;
          }
        }
      }
      if ( v9 >= 0 )
      {
        if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x10000000) != 0 )
        {
          v9 = -1073741772;
        }
        else
        {
          v19 = PnpCallDriverQueryServiceHelper(
                  (unsigned int)&P,
                  (unsigned int)&NumberOfBytes,
                  5,
                  0,
                  *(_QWORD *)(BugCheckParameter2 + 48),
                  (__int64)Handle,
                  0,
                  3,
                  v4,
                  (__int64)v66);
          v9 = v19;
          if ( v19 == -1073741275 || v19 == -1073741772 )
          {
            v9 = -1073741772;
            PipSetDevNodeFlags(BugCheckParameter2, 0x10000000LL);
          }
        }
      }
    }
  }
  else
  {
    v9 = -1073741670;
  }
LABEL_24:
  v15 = *(_DWORD *)(BugCheckParameter2 + 396);
  if ( (v15 & 0x1000) != 0 )
  {
    v9 = 0;
    goto LABEL_29;
  }
  if ( v9 >= 0 )
  {
    if ( *(_QWORD *)(v66[5] + 8) )
    {
      PipSetDevNodeProblem(BugCheckParameter2, 19, -1073741438);
      v9 = -1073741823;
      goto LABEL_29;
    }
    goto LABEL_65;
  }
  if ( v9 == -1073741772 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 560) & 0x100) == 0 )
    {
LABEL_28:
      v9 = -1073741823;
      goto LABEL_29;
    }
    PipClearDevNodeProblem(BugCheckParameter2);
    v15 = *(_DWORD *)(BugCheckParameter2 + 396);
    v9 = 0;
    v5 = 1;
LABEL_65:
    if ( (v15 & 0x20000000) == 0 )
    {
      v25 = PnpCallDriverQueryServiceHelper(
              (unsigned int)&P,
              (unsigned int)&NumberOfBytes,
              18,
              (unsigned int)&DEVPKEY_Device_CompoundUpperFilters,
              *(_QWORD *)(BugCheckParameter2 + 48),
              (__int64)Handle,
              0,
              4,
              v4,
              (__int64)v66);
      v9 = v25;
      if ( v25 == -1073741275 || v25 == -1073741772 )
      {
        PipSetDevNodeFlags(BugCheckParameter2, 0x20000000LL);
        v9 = 0;
      }
    }
    if ( v9 < 0 )
      goto LABEL_29;
    if ( v59 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x40000000) == 0 )
      {
        v26 = PnpCallDriverQueryServiceHelper(
                (unsigned int)&P,
                (unsigned int)&NumberOfBytes,
                18,
                (unsigned int)&DEVPKEY_DeviceClass_CompoundUpperFilters,
                (__int64)SourceString,
                (__int64)v59,
                1,
                5,
                v4,
                (__int64)v66);
        v9 = v26;
        if ( v26 == -1073741275 || v26 == -1073741772 )
        {
          PipSetDevNodeFlags(BugCheckParameter2, 0x40000000LL);
          v9 = 0;
        }
      }
    }
    if ( v9 < 0 )
      goto LABEL_29;
    v9 = PiDmaGuardProcessPreAddDevice(v66, (__int64)Handle);
    if ( v9 < 0 )
      goto LABEL_29;
    AttachedDevice = 0LL;
    AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(
                                       *(PDEVICE_OBJECT *)(BugCheckParameter2 + 32),
                                       0x65706E50u);
    for ( i = 0; i < 6u; ++i )
    {
      if ( i == 3 )
      {
        v61 = IoGetAttachedDeviceReferenceWithTag(*(PDEVICE_OBJECT *)(BugCheckParameter2 + 32), 0x65706E50u);
        if ( v5 )
        {
          if ( !v66[5] )
            PipSetDevNodeState(BugCheckParameter2, 771);
        }
      }
      v29 = v66[i + 2];
      v30 = (__int64 *)v29;
      if ( v29 )
      {
        do
        {
          v35 = PnpCallAddDevice(
                  BugCheckParameter2,
                  *v30,
                  *(__int64 (__fastcall **)(struct _DRIVER_OBJECT *, struct _DEVICE_OBJECT *))(*(_QWORD *)(*v30 + 48)
                                                                                             + 8LL),
                  i);
          *(_DWORD *)(*v30 + 16) |= 0x400u;
          if ( v35 < 0 )
          {
            if ( i == 3 )
            {
              v6 = AttachedDeviceReferenceWithTag;
              IovUtilMarkStack(
                *(_QWORD *)(BugCheckParameter2 + 32),
                (__int64)AttachedDeviceReferenceWithTag->AttachedDevice,
                AttachedDevice,
                0);
              v37 = v36;
              *(_DWORD *)(BugCheckParameter2 + 392) = v36;
              v38 = 31;
              goto LABEL_111;
            }
          }
          else
          {
            if ( i == 3 )
              AttachedDevice = (__int64)v61->AttachedDevice;
            PipSetDevNodeState(BugCheckParameter2, 771);
          }
          v30 = (__int64 *)v30[1];
        }
        while ( v30 );
      }
      if ( !i )
      {
        if ( v29 )
        {
          v47 = *(_QWORD *)(BugCheckParameter2 + 48);
          HIDWORD(NumberOfBytes) = 4;
          v48 = CmGetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  v47,
                  (__int64)Handle,
                  11,
                  (__int64)&v53,
                  (__int64)&v52,
                  (__int64)&NumberOfBytes + 4,
                  0);
          if ( v48 >= 0 && v53 == 4 && HIDWORD(NumberOfBytes) == 4 && (v52 & 0x80000) != 0 )
          {
            v49 = *(_QWORD *)(BugCheckParameter2 + 48);
            v52 &= ~0x80000u;
            CmSetDeviceRegProp(PiPnpRtlCtx, v49, (_DWORD)Handle, 11, 4, (__int64)&v52, 4, 0);
          }
        }
      }
    }
    v31 = !AttachedDevice || v5;
    v6 = AttachedDeviceReferenceWithTag;
    IovUtilMarkStack(
      *(_QWORD *)(BugCheckParameter2 + 32),
      (__int64)AttachedDeviceReferenceWithTag->AttachedDevice,
      AttachedDevice,
      v31);
    v32 = PipChangeDeviceObjectFromRegistryProperties(
            *(_QWORD *)(BugCheckParameter2 + 32),
            (__int64)Handle,
            SourceString,
            (__int64)v59,
            v5);
    if ( v32 >= 0 )
    {
      if ( (int)IopQueryLegacyBusInformation(
                  *(struct _DEVICE_OBJECT **)(BugCheckParameter2 + 32),
                  v33,
                  (_DWORD *)(BugCheckParameter2 + 448),
                  (_DWORD *)(BugCheckParameter2 + 452)) >= 0 )
      {
        IopInsertLegacyBusDeviceNode(
          BugCheckParameter2,
          *(unsigned int *)(BugCheckParameter2 + 448),
          *(unsigned int *)(BugCheckParameter2 + 452));
      }
      else
      {
        *(_DWORD *)(BugCheckParameter2 + 448) = -1;
        *(_DWORD *)(BugCheckParameter2 + 452) = -16;
      }
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v34, *(_QWORD *)(BugCheckParameter2 + 48), 23LL);
      if ( (*(_DWORD *)(BugCheckParameter2 + 560) & 0x100000) == 0
        || (v9 = PiProcessDriversLoadedOnSecureDevice(BugCheckParameter2), v9 >= 0) )
      {
        if ( PipDmaGuardPolicy && *(_QWORD *)(BugCheckParameter2 + 720) )
          v9 = PipDmgEnforceEnumerationPolicy(BugCheckParameter2);
        else
          v9 = 0;
      }
      v7 = v61;
      goto LABEL_29;
    }
    v37 = v32;
    v38 = 50;
LABEL_111:
    PnpRequestDeviceRemoval(BugCheckParameter2, 0, v38, v37);
    v7 = v61;
    goto LABEL_112;
  }
LABEL_29:
  v8 = 6LL;
LABEL_30:
  v16 = &v66[2];
  do
  {
    v17 = *v16;
    if ( *v16 )
    {
      do
      {
        v20 = (PADAPTER_OBJECT *)v17;
        v17 = *(_QWORD *)(v17 + 8);
        if ( PnPBootDriversInitialized )
          PnpUnloadAttachedDriver(*v20);
        HalPutDmaAdapter(*v20);
        ExFreePoolWithTag(v20, 0);
      }
      while ( v17 );
      v8 = v65;
    }
    ++v16;
    v65 = --v8;
  }
  while ( v8 );
  if ( Handle )
    ZwClose(Handle);
  if ( v59 )
    ZwClose(v59);
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x65706E50u);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x65706E50u);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v9;
}
