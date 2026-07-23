/*
 * XREFs of PipCallDriverAddDevice @ 0x140727744
 * Callers:
 *     PipProcessDevNodeTree @ 0x140726FC0 (PipProcessDevNodeTree.c)
 *     PiProcessAddBootDevices @ 0x1407B40B8 (PiProcessAddBootDevices.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140202C20 (RtlInitUnicodeStringEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140271850 (IoGetAttachedDeviceReferenceWithTag.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     PipSetDevNodeState @ 0x14036B438 (PipSetDevNodeState.c)
 *     IovUtilMarkStack @ 0x14037C8F4 (IovUtilMarkStack.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     _PnpGetObjectProperty @ 0x1405DB4CC (_PnpGetObjectProperty.c)
 *     _CmOpenInstallerClassRegKey @ 0x1405DBB2C (_CmOpenInstallerClassRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1405E046C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1405E180C (_CmOpenDeviceRegKey.c)
 *     _CmSetDeviceRegProp @ 0x1407244E0 (_CmSetDeviceRegProp.c)
 *     PipSetDevNodeFlags @ 0x140725AEC (PipSetDevNodeFlags.c)
 *     _PnpSetObjectProperty @ 0x1407260F4 (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140726510 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1407280C8 (PnpCallDriverQueryServiceHelper.c)
 *     PnpCallAddDevice @ 0x14072AA5C (PnpCallAddDevice.c)
 *     PnpUnloadAttachedDriver @ 0x14072AB3C (PnpUnloadAttachedDriver.c)
 *     PipClearDevNodeProblem @ 0x14073015C (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x140733048 (PipSetDevNodeProblem.c)
 *     PnpRequestDeviceRemoval @ 0x140733408 (PnpRequestDeviceRemoval.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14074B424 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     PiDmaGuardProcessPreAddDevice @ 0x14075A39C (PiDmaGuardProcessPreAddDevice.c)
 *     IopQueryLegacyBusInformation @ 0x14075D1CC (IopQueryLegacyBusInformation.c)
 *     IopBootLog @ 0x14075F0F4 (IopBootLog.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1407B3FD4 (IopInsertLegacyBusDeviceNode.c)
 *     IopSafebootDriverLoad @ 0x14088EEA4 (IopSafebootDriverLoad.c)
 *     PnpGetStableSystemBootTime @ 0x14089ED80 (PnpGetStableSystemBootTime.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x1408AE2E4 (PipDmgEnforceEnumerationPolicy.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x1408B2324 (PiProcessDriversLoadedOnSecureDevice.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PipCallDriverAddDevice(ULONG_PTR BugCheckParameter2, __int64 a2)
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
  _QWORD *v29; // r15
  _QWORD *j; // rsi
  BOOL v31; // r9d
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  int v35; // r11d
  __int64 v36; // r8
  __int64 v37; // r8
  PVOID PoolWithTag; // rbx
  int DeviceRegProp; // eax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rdx
  const WNF_STATE_NAME *v43; // rbx
  int v44; // esi
  __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // rdx
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp-A0h] BYREF
  char v49; // [rsp+68h] [rbp-98h]
  int v50; // [rsp+6Ch] [rbp-94h] BYREF
  int v51; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v53; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  _WORD v55[2]; // [rsp+90h] [rbp-70h] BYREF
  int v56; // [rsp+94h] [rbp-6Ch] BYREF
  HANDLE v57; // [rsp+98h] [rbp-68h] BYREF
  int v58; // [rsp+A0h] [rbp-60h] BYREF
  PDEVICE_OBJECT v59; // [rsp+A8h] [rbp-58h]
  PDEVICE_OBJECT AttachedDeviceReferenceWithTag; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  struct _DEVICE_OBJECT *v62; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v63; // [rsp+D0h] [rbp-30h]
  _QWORD v64[8]; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[40]; // [rsp+120h] [rbp+20h] BYREF

  v49 = 0;
  v57 = 0LL;
  v50 = 0;
  v53 = 0;
  v4 = 0;
  Handle = 0LL;
  v5 = 0;
  v55[0] = 0;
  v62 = 0LL;
  NumberOfBytes = 0LL;
  v51 = 0;
  v58 = 0;
  memset(v64, 0, sizeof(v64));
  v6 = 0LL;
  v7 = 0LL;
  AttachedDeviceReferenceWithTag = 0LL;
  v56 = 0;
  v8 = 6LL;
  SourceString[0] = 0;
  v63 = 6LL;
  DestinationString = 0LL;
  P = 0LL;
  v59 = 0LL;
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
               (__int64)&v56,
               (__int64)&v53,
               4,
               (__int64)&NumberOfBytes + 4,
               0) < 0
     || v56 != 7
     || HIDWORD(NumberOfBytes) != 4
     || !v53) )
  {
    v37 = 53LL;
LABEL_120:
    PnpRequestDeviceRemoval(BugCheckParameter2, 0LL, v37);
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
                (__int64)&v56,
                (__int64)&v53,
                4,
                (__int64)&NumberOfBytes + 4,
                0) >= 0
      && v53 <= 0xFF
      && (int)((__int64 (__fastcall *)(_QWORD, _WORD *))PnpQueryProximityNode)(v53, v55) >= 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 660) = v55[0];
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
      v53 = v22;
      PnpSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        1u,
        (__int64)Handle,
        0LL,
        (__int64)&DEVPKEY_Device_Numa_Node,
        7,
        (__int64)&v53,
        4u,
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
                     (__int64)&v56,
                     (__int64)&v62,
                     8,
                     (__int64)&NumberOfBytes + 4,
                     0);
  if ( ((int)(ObjectProperty + 0x80000000) < 0 || ObjectProperty == -1073741789)
    && (int)PnpGetStableSystemBootTime(&AttachedDeviceReferenceWithTag) >= 0 )
  {
    if ( ObjectProperty != -1073741789
      && v56 == 16
      && HIDWORD(NumberOfBytes) == 8
      && !PnpBootMode
      && AttachedDeviceReferenceWithTag == v62 )
    {
      goto LABEL_28;
    }
    PnpSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1u,
      (__int64)Handle,
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
              (__int64)&v51,
              (__int64)SourceString,
              (__int64)&NumberOfBytes,
              0) >= 0
    && v51 == 1
    && (_DWORD)NumberOfBytes )
  {
    RtlInitUnicodeStringEx(&DestinationString, SourceString);
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
                            (__int64)&v51,
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
      v4 = v49;
    }
    CmOpenInstallerClassRegKey(PiPnpRtlCtx, (int)SourceString, v12, v13, 131097, 0, (__int64)&v57, 0LL);
  }
  v14 = *(_QWORD *)(BugCheckParameter2 + 48);
  LODWORD(NumberOfBytes) = 4;
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              v14,
              (__int64)Handle,
              11,
              (__int64)&v51,
              (__int64)&v50,
              (__int64)&NumberOfBytes,
              0) < 0
    || v51 != 4
    || (_DWORD)NumberOfBytes != 4 )
  {
    v50 = 0;
  }
  v64[1] = a2;
  v64[0] = BugCheckParameter2;
  LODWORD(NumberOfBytes) = 512;
  P = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x6E657050u);
  if ( P )
  {
    if ( (v50 & 0x80000) != 0 )
    {
      if ( v57 )
      {
        v40 = PnpCallDriverQueryServiceHelper(
                (unsigned int)&P,
                (unsigned int)&NumberOfBytes,
                0,
                (unsigned int)DEVPKEY_DeviceClass_ConfigFilters,
                (__int64)SourceString,
                (__int64)v57,
                1,
                0,
                v4,
                (__int64)v64);
        v9 = v40;
        if ( v40 == -1073741772 || v40 == -1073741275 )
          v9 = 0;
        if ( v9 < 0 )
          goto LABEL_24;
        while ( 1 )
        {
          v9 = PnpGetObjectProperty(
                 *(__int64 *)&PiPnpRtlCtx,
                 (__int64)SourceString,
                 2LL,
                 (__int64)v57,
                 0LL,
                 (__int64)DEVPKEY_DeviceClass_ConfigNotifyWnfTriggers,
                 (__int64)&v58,
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
          if ( v58 == 4099 && (NumberOfBytes & 0x700000000LL) == 0 && HIDWORD(NumberOfBytes) )
          {
            v43 = (const WNF_STATE_NAME *)P;
            v44 = HIDWORD(NumberOfBytes) >> 3;
            do
            {
              ZwUpdateWnfStateData(v43++, 0LL, 0, 0LL, 0LL, 0, 0);
              --v44;
            }
            while ( v44 );
            v37 = 56LL;
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
      if ( !v64[2] )
      {
        v41 = *(_QWORD *)(BugCheckParameter2 + 48);
        HIDWORD(NumberOfBytes) = 4;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    v41,
                    (__int64)Handle,
                    11,
                    (__int64)&v51,
                    (__int64)&v50,
                    (__int64)&NumberOfBytes + 4,
                    0) >= 0
          && v51 == 4
          && HIDWORD(NumberOfBytes) == 4
          && (v50 & 0x80000) != 0 )
        {
          v42 = *(_QWORD *)(BugCheckParameter2 + 48);
          v50 &= ~0x80000u;
          CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v42, (__int64)Handle, 0xBu, 4u, (__int64)&v50, 4u, 0);
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
              (__int64)v64);
      v9 = v24;
      if ( v24 == -1073741275 || v24 == -1073741772 )
      {
        PipSetDevNodeFlags(BugCheckParameter2, 0x4000000);
        v9 = 0;
      }
    }
    if ( v9 >= 0 )
    {
      if ( v57 )
      {
        if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x8000000) == 0 )
        {
          v21 = PnpCallDriverQueryServiceHelper(
                  (unsigned int)&P,
                  (unsigned int)&NumberOfBytes,
                  19,
                  (unsigned int)&DEVPKEY_DeviceClass_CompoundLowerFilters,
                  (__int64)SourceString,
                  (__int64)v57,
                  1,
                  2,
                  v4,
                  (__int64)v64);
          v9 = v21;
          if ( v21 == -1073741275 || v21 == -1073741772 )
          {
            PipSetDevNodeFlags(BugCheckParameter2, 0x8000000);
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
                  (__int64)v64);
          v9 = v19;
          if ( v19 == -1073741275 || v19 == -1073741772 )
          {
            v9 = -1073741772;
            PipSetDevNodeFlags(BugCheckParameter2, 0x10000000);
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
    if ( *(_QWORD *)(v64[5] + 8LL) )
    {
      PipSetDevNodeProblem(BugCheckParameter2, 19LL, 3221225858LL);
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
              (__int64)v64);
      v9 = v25;
      if ( v25 == -1073741275 || v25 == -1073741772 )
      {
        PipSetDevNodeFlags(BugCheckParameter2, 0x20000000);
        v9 = 0;
      }
    }
    if ( v9 < 0 )
      goto LABEL_29;
    if ( v57 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x40000000) == 0 )
      {
        v26 = PnpCallDriverQueryServiceHelper(
                (unsigned int)&P,
                (unsigned int)&NumberOfBytes,
                18,
                (unsigned int)&DEVPKEY_DeviceClass_CompoundUpperFilters,
                (__int64)SourceString,
                (__int64)v57,
                1,
                5,
                v4,
                (__int64)v64);
        v9 = v26;
        if ( v26 == -1073741275 || v26 == -1073741772 )
        {
          PipSetDevNodeFlags(BugCheckParameter2, 0x40000000);
          v9 = 0;
        }
      }
    }
    if ( v9 < 0 )
      goto LABEL_29;
    v9 = PiDmaGuardProcessPreAddDevice(v64, Handle);
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
        v59 = IoGetAttachedDeviceReferenceWithTag(*(PDEVICE_OBJECT *)(BugCheckParameter2 + 32), 0x65706E50u);
        if ( v5 )
        {
          if ( !v64[5] )
            PipSetDevNodeState(BugCheckParameter2, 771);
        }
      }
      v29 = (_QWORD *)v64[i + 2];
      for ( j = v29; j; j = (_QWORD *)j[1] )
      {
        v34 = PnpCallAddDevice(BugCheckParameter2, *j, *(_QWORD *)(*(_QWORD *)(*j + 48LL) + 8LL), i);
        *(_DWORD *)(*j + 16LL) |= 0x400u;
        if ( v34 < 0 )
        {
          if ( i == 3 )
          {
            v6 = AttachedDeviceReferenceWithTag;
            IovUtilMarkStack(
              *(_QWORD *)(BugCheckParameter2 + 32),
              (__int64)AttachedDeviceReferenceWithTag->AttachedDevice,
              AttachedDevice,
              0);
            *(_DWORD *)(BugCheckParameter2 + 392) = v35;
            v36 = 31LL;
            goto LABEL_111;
          }
        }
        else
        {
          if ( i == 3 )
            AttachedDevice = (__int64)v59->AttachedDevice;
          PipSetDevNodeState(BugCheckParameter2, 771);
        }
      }
      if ( !i )
      {
        if ( v29 )
        {
          v45 = *(_QWORD *)(BugCheckParameter2 + 48);
          HIDWORD(NumberOfBytes) = 4;
          v46 = CmGetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  v45,
                  (__int64)Handle,
                  11,
                  (__int64)&v51,
                  (__int64)&v50,
                  (__int64)&NumberOfBytes + 4,
                  0);
          if ( v46 >= 0 && v51 == 4 && HIDWORD(NumberOfBytes) == 4 && (v50 & 0x80000) != 0 )
          {
            v47 = *(_QWORD *)(BugCheckParameter2 + 48);
            v50 &= ~0x80000u;
            CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v47, (__int64)Handle, 0xBu, 4u, (__int64)&v50, 4u, 0);
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
    if ( (int)PipChangeDeviceObjectFromRegistryProperties(
                *(_QWORD *)(BugCheckParameter2 + 32),
                (_DWORD)Handle,
                (unsigned int)SourceString,
                (_DWORD)v57,
                v5) >= 0 )
    {
      if ( (int)IopQueryLegacyBusInformation(
                  *(_QWORD *)(BugCheckParameter2 + 32),
                  v32,
                  BugCheckParameter2 + 448,
                  BugCheckParameter2 + 452) >= 0 )
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
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v33, *(_QWORD *)(BugCheckParameter2 + 48), 23);
      if ( (*(_DWORD *)(BugCheckParameter2 + 560) & 0x100000) == 0
        || (v9 = PiProcessDriversLoadedOnSecureDevice(BugCheckParameter2), v9 >= 0) )
      {
        if ( PipDmaGuardPolicy && *(_QWORD *)(BugCheckParameter2 + 720) )
          v9 = PipDmgEnforceEnumerationPolicy(BugCheckParameter2);
        else
          v9 = 0;
      }
      v7 = v59;
      goto LABEL_29;
    }
    v36 = 50LL;
LABEL_111:
    PnpRequestDeviceRemoval(BugCheckParameter2, 0LL, v36);
    v7 = v59;
    goto LABEL_112;
  }
LABEL_29:
  v8 = 6LL;
LABEL_30:
  v16 = &v64[2];
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
      v8 = v63;
    }
    ++v16;
    v63 = --v8;
  }
  while ( v8 );
  if ( Handle )
    ZwClose(Handle);
  if ( v57 )
    ZwClose(v57);
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x65706E50u);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x65706E50u);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v9;
}
