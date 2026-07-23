/*
 * XREFs of IopInitializeBootDrivers @ 0x140A5EB88
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 * Callees:
 *     PnpUnlockDeviceActionQueue @ 0x14024568C (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140245730 (PnpLockDeviceActionQueue.c)
 *     RtlStringCchPrintfExW @ 0x140253AD4 (RtlStringCchPrintfExW.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PnpRequestDeviceAction @ 0x1403703A4 (PnpRequestDeviceAction.c)
 *     PnpDiagnosticTrace @ 0x14037BF28 (PnpDiagnosticTrace.c)
 *     PnpBootDeviceWait @ 0x1403B8524 (PnpBootDeviceWait.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _memicmp @ 0x1403EFE6C (_memicmp.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     McTemplateK0dzd_EtwWriteTransfer @ 0x14050C414 (McTemplateK0dzd_EtwWriteTransfer.c)
 *     PnpUnicodeStringToWstrFree @ 0x14062A5A4 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14062C36C (PnpUnicodeStringToWstr.c)
 *     _PnpCtxRegCreateKey @ 0x140630370 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegCloseKey @ 0x1406306B4 (_PnpCtxRegCloseKey.c)
 *     RtlCompareUnicodeString @ 0x1406DDA80 (RtlCompareUnicodeString.c)
 *     IopGetDriverNameFromKeyNode @ 0x140742AC0 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     PipHardwareConfigGetIndex @ 0x1407AC364 (PipHardwareConfigGetIndex.c)
 *     IopOpenRegistryKeyEx @ 0x1407AC850 (IopOpenRegistryKeyEx.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x1407AC898 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1407AC8C4 (PnpWaitForEmptyDeviceActionQueue.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407C1450 (PipApplyFunctionToServiceInstances.c)
 *     PiCreateDriverRedirectedStateKey @ 0x1407C4FA4 (PiCreateDriverRedirectedStateKey.c)
 *     _PnpCtxRegSetValue @ 0x140974B24 (_PnpCtxRegSetValue.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     HdlspKernelAddLogEntry @ 0x1409F09AC (HdlspKernelAddLogEntry.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140A5C484 (PipInitializeEarlyLaunchDrivers.c)
 *     PipInitComputerIds @ 0x140A5C730 (PipInitComputerIds.c)
 *     PnpWaitForDevicesToStart @ 0x140A5E40C (PnpWaitForDevicesToStart.c)
 *     PipInitializeCoreDriversByGroup @ 0x140A5E42C (PipInitializeCoreDriversByGroup.c)
 *     PipInitializeDriverDependentDLLs @ 0x140A5E5DC (PipInitializeDriverDependentDLLs.c)
 *     PipGetDriverTagPriority @ 0x140A5E9BC (PipGetDriverTagPriority.c)
 *     PnpInitializeBootStartDriver @ 0x140A5F4B4 (PnpInitializeBootStartDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x140A5FC00 (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x140A5FD14 (PipCheckDependencies.c)
 *     PipLookupGroupName @ 0x140A5FD70 (PipLookupGroupName.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x140A5FEE0 (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     PsNotifyCoreDriversInitialized @ 0x140A5FF60 (PsNotifyCoreDriversInitialized.c)
 *     IopCreateArcNames @ 0x140A62BAC (IopCreateArcNames.c)
 *     IopAllocateLegacyBootResources @ 0x140A684D8 (IopAllocateLegacyBootResources.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140A6EEEC (PiCreateDriverDataDirectoryRoot.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x140A6FEAC (IopCallBootDriverReinitializationRoutines.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140A738A8 (PipUnloadEarlyLaunchDrivers.c)
 *     VhdInitialize @ 0x140A74778 (VhdInitialize.c)
 *     RamdiskStart @ 0x140A96268 (RamdiskStart.c)
 *     SbpAddTransportToInstance @ 0x140A965E8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A967E8 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x140A96BC4 (SbpWaitForVmbus.c)
 */

__int64 __fastcall IopInitializeBootDrivers(__int64 a1)
{
  __int64 v1; // rsi
  NTSTATUS RegistryValue; // ebx
  __int64 v3; // rdx
  _QWORD *v4; // r15
  int GroupOrderIndex; // eax
  char *v6; // rdx
  unsigned int v7; // r8d
  unsigned __int16 i; // cx
  __int64 v9; // rax
  char *v10; // rax
  unsigned __int16 v11; // r12
  unsigned __int16 v12; // bx
  unsigned __int16 v13; // di
  const UNICODE_STRING *v14; // r14
  UNICODE_STRING *v15; // r14
  __int64 *v16; // rax
  __int64 v17; // rcx
  UNICODE_STRING *v18; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v20; // rdi
  unsigned int v21; // ebx
  unsigned __int16 DriverTagPriority; // ax
  __int64 **v23; // rdx
  __int64 *j; // rcx
  __int64 v25; // r14
  unsigned __int16 v26; // r12
  __int64 v27; // r13
  char *v28; // rax
  char *v29; // rbx
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // r9
  _QWORD *v33; // rcx
  _QWORD *v34; // rbx
  __int64 v35; // rcx
  int Index; // r13d
  unsigned __int16 v37; // r15
  void **v38; // rdx
  void *v39; // rbx
  _QWORD *v41; // rdi
  int started; // eax
  __int64 v43; // rcx
  __int64 v44; // r8
  char v45; // r9
  void **v46; // rax
  __int64 v47; // rdi
  int v48; // eax
  __int64 v49; // rdx
  PVOID v50; // r14
  unsigned int v51; // ecx
  void *v52; // rsi
  __int64 v53; // rcx
  unsigned __int16 *v54; // r8
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  PVOID v58; // r12
  void *dwFlags; // [rsp+20h] [rbp-E0h]
  HANDLE v60; // [rsp+30h] [rbp-D0h]
  HANDLE v61; // [rsp+30h] [rbp-D0h]
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  int v64; // [rsp+60h] [rbp-A0h] BYREF
  int v65; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  int v67; // [rsp+70h] [rbp-90h]
  void *v68; // [rsp+78h] [rbp-88h] BYREF
  void *v69; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v70; // [rsp+88h] [rbp-78h] BYREF
  _QWORD *v71; // [rsp+98h] [rbp-68h]
  UNICODE_STRING Destination; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v74[2]; // [rsp+C0h] [rbp-40h] BYREF
  const wchar_t *v75; // [rsp+C8h] [rbp-38h]
  UNICODE_STRING String1; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING String2; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t pszDest[64]; // [rsp+F0h] [rbp-10h] BYREF

  v71 = (_QWORD *)a1;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v1 = a1;
  v65 = 0;
  Handle = 0LL;
  P = 0LL;
  *(_DWORD *)(&v70.MaximumLength + 1) = 0;
  String2 = 0LL;
  v74[1] = 0;
  String1 = 0LL;
  v69 = 0LL;
  v68 = 0LL;
  v64 = 0;
  DestinationString = 0LL;
  Object = 0LL;
  PnpDiagnosticTrace(&KMPnPEvt_BootStart_Start, 0, 0LL);
  PnpDriverImageLoadPolicy = 3;
  v70.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Policies\\EarlyLaunch";
  *(_DWORD *)&v70.Length = 8388734;
  if ( IopOpenRegistryKeyEx(&Handle, 0LL, &v70, 0x20019u) >= 0
    || (*(_DWORD *)&v70.Length = 8257660,
        v70.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\EarlyLaunch",
        IopOpenRegistryKeyEx(&Handle, 0LL, &v70, 0x20019u) >= 0) )
  {
    RegistryValue = IopGetRegistryValue(Handle, L"DriverLoadPolicy", 0, &P);
    ZwClose(Handle);
    if ( RegistryValue >= 0 )
    {
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
        PnpDriverImageLoadPolicy = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      ExFreePoolWithTag(P, 0);
    }
  }
  if ( PnpDriverImageLoadPolicy == 8 )
  {
    PnpDriverImageLoadPolicy = 0;
  }
  else if ( (PnpDriverImageLoadPolicy & 0xFFFFFFF8) != 0 )
  {
    PnpDriverImageLoadPolicy = 3;
  }
  PipInitializeDriverDependentDLLs(0, v1);
  PipInitializeCoreDriversByGroup(0, v1);
  PsNotifyCoreDriversInitialized();
  PipInitializeEarlyLaunchDrivers((UNICODE_STRING *)v1, v3);
  PnpBootDriverCallbackRegistrationClosed = 1;
  PnpNotifyEarlyLaunchStatusUpdate(0LL);
  PipInitializeDriverDependentDLLs(1, v1);
  PipInitializeCoreDriversByGroup(1, v1);
  PipInitializeCoreDriversByGroup(2, v1);
  PnpCoreDriverGroupLoadPhase = 3;
  PipInitComputerIds(v1);
  v74[0] = 2097182;
  v75 = L"\\FileSystem\\RAW";
  Destination.Buffer = (wchar_t *)&word_140A77190;
  *(_DWORD *)&Destination.Length = 0x20000;
  PnpInitializeBootStartDriver(
    (unsigned int)v74,
    (unsigned int)&Destination,
    (unsigned int)RawInitialize,
    0,
    v1 + 16,
    0,
    0);
  v4 = Object;
  if ( !Object )
    return 0LL;
  GroupOrderIndex = (unsigned __int16)PpInitGetGroupOrderIndex(0LL);
  IopGroupIndex = GroupOrderIndex;
  v67 = 0xFFFF;
  if ( (unsigned __int16)GroupOrderIndex == 0xFFFF )
  {
    if ( HeadlessGlobals && HeadlessGlobals[1] )
    {
      v51 = 16;
      goto LABEL_122;
    }
    return 0LL;
  }
  IopGroupTable = ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned __int16)GroupOrderIndex, 0x6E697050u);
  v6 = (char *)IopGroupTable;
  if ( !IopGroupTable )
  {
    if ( HeadlessGlobals && HeadlessGlobals[1] )
    {
      v51 = 17;
      goto LABEL_122;
    }
    return 0LL;
  }
  v7 = IopGroupIndex;
  for ( i = 0; i < v7; *(_QWORD *)v10 = v10 )
  {
    v9 = i++;
    v10 = &v6[16 * v9];
    *((_QWORD *)v10 + 1) = v10;
  }
  PipInitializeDriverDependentDLLs(2, v1);
  RtlInitUnicodeString(&DestinationString, L"System Reserved");
  RtlInitUnicodeString(&String2, L"Boot Bus Extender");
  v11 = PiInitGroupOrderTableCount;
  v12 = 0;
  v13 = 0;
  if ( !PiInitGroupOrderTableCount )
    goto LABEL_18;
  do
  {
    v14 = (const UNICODE_STRING *)((char *)PiInitGroupOrderTable + 16 * v13);
    if ( !RtlCompareUnicodeString(v14, &DestinationString, 1u) )
      goto LABEL_20;
    if ( !RtlCompareUnicodeString(v14, &String2, 1u) )
    {
      LOWORD(v67) = v13;
LABEL_20:
      ++v12;
    }
    if ( v12 >= 2u )
      break;
    ++v13;
  }
  while ( v13 < v11 );
  v1 = (__int64)v71;
  v4 = Object;
LABEL_18:
  v15 = *(UNICODE_STRING **)(v1 + 48);
  while ( v15 != (UNICODE_STRING *)(v1 + 48) )
  {
    v18 = v15;
    v15 = *(UNICODE_STRING **)&v15->Length;
    if ( SLODWORD(v18[3].Buffer) >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x6E697050u);
      v20 = PoolWithTag;
      if ( PoolWithTag )
      {
        PoolWithTag[2] = 0LL;
        PoolWithTag[4] = 0LL;
        PoolWithTag[5] = 0LL;
        PoolWithTag[1] = PoolWithTag;
        *PoolWithTag = PoolWithTag;
        PoolWithTag[3] = v18;
        if ( IopOpenRegistryKeyEx(&Handle, 0LL, v18 + 2, 0x20019u) < 0 )
        {
          ExFreePoolWithTag(v20, 0);
        }
        else
        {
          v20[4] = Handle;
          v21 = (unsigned __int16)PpInitGetGroupOrderIndex(Handle);
          DriverTagPriority = PipGetDriverTagPriority(Handle);
          *((_WORD *)v20 + 22) = DriverTagPriority;
          v23 = (__int64 **)((char *)IopGroupTable + 16 * v21);
          for ( j = *v23; j != (__int64 *)v23 && *((_WORD *)j + 22) <= DriverTagPriority; j = (__int64 *)*j )
            ;
          v16 = (__int64 *)j[1];
          v17 = *v16;
          if ( *(__int64 **)(*v16 + 8) != v16 )
            goto LABEL_143;
          *v20 = v17;
          v20[1] = v16;
          *(_QWORD *)(v17 + 8) = v20;
          *v16 = (__int64)v20;
        }
      }
    }
  }
  PnpNotifyEarlyLaunchStatusUpdate(1LL);
  v25 = 0LL;
  v26 = 0;
  if ( !IopGroupIndex )
  {
LABEL_37:
    PnpNotifyEarlyLaunchStatusUpdate(2LL);
    PipUnloadEarlyLaunchDrivers(v1);
    PnPBootDriversLoaded = 1;
    PnpRequestDeviceAction(0LL, 0, 0, 0LL, 0LL, 0LL, 0LL);
    if ( PnpWaitForDevicesToStart() )
    {
      if ( (unsigned __int8)IopCallBootDriverReinitializationRoutines() && !PnpWaitForDevicesToStart() )
      {
        if ( !HeadlessGlobals || !HeadlessGlobals[1] )
          return 0LL;
        v51 = 20;
LABEL_122:
        HdlspKernelAddLogEntry(v51, 0LL);
        return 0LL;
      }
      if ( memicmp(*(const void **)(v1 + 184), "ramdisk(", 8uLL) )
        v30 = -1073741275;
      else
        v30 = RamdiskStart(v1);
      if ( (v30 < 0 || PnpWaitForDevicesToStart()) && ((int)VhdInitialize(v1) < 0 || PnpWaitForDevicesToStart()) )
      {
        if ( (int)IopCreateArcNames(v1) < 0 )
          return 0LL;
        PnpBootDeviceWait(v1, 1, (__int64 (__fastcall *)(__int64, __int64, UNICODE_STRING *))&IopMarkBootPartition, 0LL);
        v31 = *(_QWORD *)(v1 + 240);
        PnPBootDriversInitialized = 1;
        if ( (*(_DWORD *)(v31 + 132) & 0x400) != 0
          && ((int)SbpStartLanman() < 0 || (int)SbpWaitForVmbus() < 0 || (int)SbpAddTransportToInstance() < 0) )
        {
          return 0LL;
        }
        v32 = *(_QWORD *)(v1 + 336);
        if ( v32 )
        {
          if ( (int)PnpBootDeviceWait(
                      v1,
                      3,
                      (__int64 (__fastcall *)(__int64, __int64, UNICODE_STRING *))&PipCriticalDeviceWaitCallback,
                      v32) < 0 )
            return 0LL;
        }
        v33 = (_QWORD *)(*(_QWORD *)(v1 + 240) + 312LL);
        v34 = (_QWORD *)*v33;
        if ( (_QWORD *)*v33 != v33 )
        {
          while ( (*((_DWORD *)v34 + 6) & 0x80u) == 0
               || (int)PnpBootDeviceWait(
                         v1,
                         4,
                         (__int64 (__fastcall *)(__int64, __int64, UNICODE_STRING *))&PipCriticalDeviceWaitCallback,
                         v34[11]) >= 0 )
          {
            v34 = (_QWORD *)*v34;
            if ( v34 == (_QWORD *)(*(_QWORD *)(v1 + 240) + 312LL) )
              goto LABEL_51;
          }
          return 0LL;
        }
LABEL_51:
        if ( (int)PiCreateDriverDataDirectoryRoot() < 0 )
          return 0LL;
        pszDest[0] = 0;
        Index = PipHardwareConfigGetIndex(v35, &v65);
        if ( Index >= 0 )
        {
          LODWORD(v61) = v65;
          Index = RtlStringCchPrintfExW(pszDest, 0x40uLL, 0LL, 0LL, 0x800u, L"%d", v61);
        }
        v37 = 0;
        if ( !IopGroupIndex )
        {
LABEL_57:
          ExFreePoolWithTag(IopGroupTable, 0);
          PnpDiagnosticTrace(&KMPnPEvt_BootStart_Stop, 0, 0LL);
          return 1LL;
        }
        while ( 1 )
        {
          while ( 1 )
          {
            v38 = (void **)((char *)IopGroupTable + 16 * v37);
            v39 = *v38;
            if ( *v38 != v38 )
              break;
            if ( ++v37 >= (unsigned int)IopGroupIndex )
              goto LABEL_57;
          }
          if ( *((void ***)v39 + 1) != v38 )
            break;
          v46 = *(void ***)v39;
          if ( *(void **)(*(_QWORD *)v39 + 8LL) != v39 )
            break;
          *v38 = v46;
          v46[1] = v38;
          v47 = *((_QWORD *)v39 + 2);
          if ( Index >= 0 && !*((_BYTE *)v39 + 46) && !*(_QWORD *)(v47 + 8) )
          {
            if ( *(_QWORD *)(*(_QWORD *)(v47 + 48) + 8LL) )
            {
              v48 = *(_DWORD *)(v47 + 16);
              if ( (v48 & 0x400) == 0
                && (v48 & 8) == 0
                && IopGetRegistryValue(*((HANDLE *)v39 + 4), L"Start", 0, &P) >= 0 )
              {
                v50 = P;
                if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
                {
                  v64 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
                  if ( !v64 )
                  {
                    v64 = 3;
                    if ( (int)PiCreateDriverRedirectedStateKey(
                                (UNICODE_STRING *)(*(_QWORD *)(v47 + 48) + 24LL),
                                v49,
                                &v69) >= 0 )
                    {
                      v52 = v69;
                    }
                    else
                    {
                      v52 = (void *)*((_QWORD *)v39 + 4);
                      v69 = v52;
                    }
                    if ( (int)PnpCtxRegCreateKey(
                                *(__int64 *)&PiPnpRtlCtx,
                                (__int64)v52,
                                (__int64)L"StartOverride",
                                0,
                                2u,
                                0LL,
                                (__int64)&v68,
                                0LL) >= 0 )
                    {
                      PnpCtxRegSetValue(4LL, v68, pszDest, 4u, &v64, 4u);
                      PnpCtxRegCloseKey(v53, v68);
                      v68 = 0LL;
                      if ( (byte_140C1327B & 1) != 0 )
                      {
                        v54 = (unsigned __int16 *)(*(_QWORD *)(v47 + 48) + 24LL);
                        Object = 0LL;
                        if ( (int)PnpUnicodeStringToWstr((__int16 **)&Object, 0LL, v54) >= 0 )
                        {
                          v58 = Object;
                          if ( (byte_140C1327B & 1) != 0 )
                            McTemplateK0dzd_EtwWriteTransfer(v56, v55, v57, v65, (const wchar_t *)Object, v64);
                          PnpUnicodeStringToWstrFree(v58, *(_QWORD *)(v47 + 48) + 24LL);
                        }
                      }
                    }
                    if ( v52 != *((void **)v39 + 4) )
                    {
                      ZwClose(v52);
                      v69 = 0LL;
                    }
                  }
                }
                ExFreePoolWithTag(v50, 0);
              }
            }
          }
          if ( v47 )
            ObfDereferenceObjectWithTag((PVOID)v47, 0x746C6644u);
          if ( *((_BYTE *)v39 + 46) )
            *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v39 + 3) + 48LL) + 104LL) |= 0x20000u;
          ZwClose(*((HANDLE *)v39 + 4));
          ExFreePoolWithTag(v39, 0);
        }
LABEL_143:
        __fastfail(3u);
      }
    }
    if ( !HeadlessGlobals || !HeadlessGlobals[1] )
      return 0LL;
    v51 = 19;
    goto LABEL_122;
  }
LABEL_32:
  v27 = 16LL * v26;
  v28 = (char *)IopGroupTable + v27;
  v29 = *(char **)((char *)IopGroupTable + v27);
  while ( 1 )
  {
    if ( v29 == v28 )
    {
      if ( v26 == (_WORD)v67 )
      {
        IopAllocateLegacyBootResources(0LL, 0LL);
        IopBootConfigsReserved = 1;
        IopAllocateBootResourcesRoutine = (__int64)IopAllocateBootResources;
      }
      if ( ++v26 >= (unsigned int)IopGroupIndex )
        goto LABEL_37;
      goto LABEL_32;
    }
    Handle = (HANDLE)*((_QWORD *)v29 + 4);
    v41 = (_QWORD *)*((_QWORD *)v29 + 3);
    v71 = v41;
    *(_QWORD *)&DestinationString.Length = v41[6];
    v29[47] = 1;
    if ( (int)IopGetDriverNameFromKeyNode(Handle, &Destination) >= 0 )
    {
      if ( IopGetRegistryValue(Handle, L"Group", 0, &P) >= 0 )
      {
        v41 = P;
        if ( *((_DWORD *)P + 3) )
        {
          String1.Length = *((_WORD *)P + 6);
          String1.MaximumLength = String1.Length;
          String1.Buffer = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
          v25 = PipLookupGroupName(&String1);
        }
        ExFreePoolWithTag(v41, 0);
        LODWORD(v41) = (_DWORD)v71;
      }
      v4 = 0LL;
      if ( !(unsigned int)PipCheckDependencies(Handle) )
        goto LABEL_96;
      v4 = (_QWORD *)*((_QWORD *)v29 + 2);
      Object = v4;
      if ( !v4 && !v29[46] )
      {
        started = PnpInitializeBootStartDriver(
                    (unsigned int)&Destination,
                    (int)v41 + 32,
                    *(_QWORD *)(*(_QWORD *)&DestinationString.Length + 56LL),
                    *(_DWORD *)&DestinationString.Length,
                    v1 + 16,
                    0,
                    1);
        v4 = Object;
        *((_DWORD *)v29 + 10) = started;
        if ( !v4 )
          goto LABEL_96;
        ObfReferenceObjectWithTag(v4, 0x746C6644u);
      }
      if ( v4 )
      {
        if ( v25 )
          ++*(_DWORD *)(v25 + 28);
        *((_QWORD *)v29 + 2) = v4;
        goto LABEL_72;
      }
LABEL_96:
      v29[46] = 1;
LABEL_72:
      ExFreePoolWithTag(Destination.Buffer, 0);
      v25 = 0LL;
      goto LABEL_73;
    }
    v29[46] = 1;
LABEL_73:
    if ( !v29[46] )
    {
      PnpLockDeviceActionQueue();
      PipApplyFunctionToServiceInstances(v43, (UNICODE_STRING *)(v4[6] + 24LL), v44, v45, dwFlags, (__int64)v4, v60);
      PnpUnlockDeviceActionQueue();
      PnpWaitForEmptyDeviceActionQueue();
      PnpRequestDeviceAction(0LL, 7, 0, 0LL, 0LL, 0LL, 0LL);
    }
    if ( PnpWaitForEmptyDeviceEventQueue() < 0 )
      break;
    v29 = *(char **)v29;
    v28 = (char *)IopGroupTable + v27;
  }
  if ( HeadlessGlobals && HeadlessGlobals[1] )
  {
    v51 = 18;
    goto LABEL_122;
  }
  return 0LL;
}
