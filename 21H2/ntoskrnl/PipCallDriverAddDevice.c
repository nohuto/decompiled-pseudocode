/*
 * XREFs of PipCallDriverAddDevice @ 0x1407743C8
 * Callers:
 *     PipProcessDevNodeTree @ 0x140777578 (PipProcessDevNodeTree.c)
 *     PiProcessAddBootDevices @ 0x140859618 (PiProcessAddBootDevices.c)
 * Callees:
 *     IovUtilMarkStack @ 0x140259BE4 (IovUtilMarkStack.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402D30A0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     PipSetDevNodeState @ 0x1402DE844 (PipSetDevNodeState.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1406BCE90 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     IopQueryLegacyBusInformation @ 0x1406E636C (IopQueryLegacyBusInformation.c)
 *     PiDmaGuardProcessPreAddDevice @ 0x1406E7CD4 (PiDmaGuardProcessPreAddDevice.c)
 *     IopBootLog @ 0x140748300 (IopBootLog.c)
 *     PnpCallAddDevice @ 0x140749DA0 (PnpCallAddDevice.c)
 *     PipClearDevNodeProblem @ 0x140764FE4 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x140765114 (PipSetDevNodeProblem.c)
 *     PnpRequestDeviceRemoval @ 0x140765430 (PnpRequestDeviceRemoval.c)
 *     PnpUnloadAttachedDriver @ 0x140766914 (PnpUnloadAttachedDriver.c)
 *     PipSetDevNodeFlags @ 0x14076FB70 (PipSetDevNodeFlags.c)
 *     _CmSetDeviceRegProp @ 0x14076FE20 (_CmSetDeviceRegProp.c)
 *     _PnpSetObjectProperty @ 0x14077198C (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140772044 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpCallDriverQueryServiceHelper @ 0x14077386C (PnpCallDriverQueryServiceHelper.c)
 *     _CmGetDeviceRegProp @ 0x14077CD90 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x14077DA5C (_PnpGetObjectProperty.c)
 *     _CmOpenDeviceRegKey @ 0x14077F2EC (_CmOpenDeviceRegKey.c)
 *     _CmOpenInstallerClassRegKey @ 0x140789460 (_CmOpenInstallerClassRegKey.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1408605C8 (IopInsertLegacyBusDeviceNode.c)
 *     IopSafebootDriverLoad @ 0x140934EA4 (IopSafebootDriverLoad.c)
 *     PnpGetStableSystemBootTime @ 0x140946FEC (PnpGetStableSystemBootTime.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x1409569F4 (PipDmgEnforceEnumerationPolicy.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x14095B48C (PiProcessDriversLoadedOnSecureDevice.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PipCallDriverAddDevice(__int64 BugCheckParameter2, __int64 a2)
{
  char v4; // r12
  char v5; // r13
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rdx
  int ObjectProperty; // ebx
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdx
  int v14; // eax
  int v15; // ecx
  __int64 *v16; // rsi
  __int64 v17; // rdi
  PVOID v18; // r15
  int v20; // eax
  PVOID *v21; // r14
  unsigned int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // r14
  unsigned __int8 i; // bl
  __int64 v29; // r15
  __int64 *v30; // rsi
  BOOL v31; // r9d
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  int v36; // eax
  PVOID v37; // rsi
  int v38; // eax
  char *v39; // rbx
  ULONG v40; // esi
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // rdx
  void *Pool2; // rbx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rdx
  int v48; // r11d
  __int64 v49; // rdx
  int DeviceRegProp; // eax
  __int64 v51; // rdx
  ULONG v52; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v53; // [rsp+64h] [rbp-9Ch] BYREF
  char v54; // [rsp+68h] [rbp-98h]
  int v55; // [rsp+6Ch] [rbp-94h] BYREF
  int v56; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v58; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v59; // [rsp+84h] [rbp-7Ch] BYREF
  int v60; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v62; // [rsp+98h] [rbp-68h] BYREF
  int v63; // [rsp+A0h] [rbp-60h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-58h]
  PVOID AttachedDeviceReferenceWithTag; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v67; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v68; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v69; // [rsp+D8h] [rbp-28h]
  __int64 v70[8]; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[40]; // [rsp+120h] [rbp+20h] BYREF

  v54 = 0;
  v62 = 0LL;
  v55 = 0;
  v58 = 0;
  v4 = 0;
  Handle = 0LL;
  v5 = 0;
  v59 = 0;
  v67 = 0LL;
  v52 = 0;
  v56 = 0;
  v63 = 0;
  memset(v70, 0, sizeof(v70));
  v6 = 6LL;
  DestinationString = 0LL;
  v69 = 6LL;
  v53 = 0;
  v68 = 0LL;
  v60 = 0;
  SourceString[0] = 0;
  P = 0LL;
  Object = 0LL;
  AttachedDeviceReferenceWithTag = 0LL;
  if ( !*(_BYTE *)(BugCheckParameter2 + 688) || *(_BYTE *)(a2 + 4) )
  {
    v8 = *(_QWORD *)(BugCheckParameter2 + 48);
    *(_BYTE *)(BugCheckParameter2 + 688) = 0;
    v7 = CmOpenDeviceRegKey(PiPnpRtlCtx, v8, 16, 0, 131097, 0, (__int64)&Handle, 0LL);
    if ( v7 < 0 )
      goto LABEL_34;
    if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 32) + 48LL) & 0x2000000) != 0
      && ((int)PnpGetObjectProperty(
                 PiPnpRtlCtx,
                 *(_QWORD *)(BugCheckParameter2 + 48),
                 1,
                 (_DWORD)Handle,
                 0LL,
                 (__int64)&DEVPKEY_Device_DebuggerSafe,
                 (__int64)&v60,
                 (__int64)&v58,
                 4,
                 (__int64)&v53,
                 0) < 0
       || v60 != 7
       || v53 != 4
       || !v58) )
    {
      v41 = 53;
LABEL_116:
      v42 = 0;
      goto LABEL_117;
    }
    if ( *(_DWORD *)(BugCheckParameter2 + 660) == -1 )
    {
      if ( PnpQueryProximityNode
        && (int)PnpGetObjectProperty(
                  PiPnpRtlCtx,
                  *(_QWORD *)(BugCheckParameter2 + 48),
                  1,
                  (_DWORD)Handle,
                  0LL,
                  (__int64)&DEVPKEY_Device_Numa_Proximity_Domain,
                  (__int64)&v60,
                  (__int64)&v58,
                  4,
                  (__int64)&v53,
                  0) >= 0
        && v58 <= 0xFF
        && (int)((__int64 (__fastcall *)(_QWORD, unsigned __int16 *))PnpQueryProximityNode)(v58, &v59) >= 0 )
      {
        *(_DWORD *)(BugCheckParameter2 + 660) = v59;
      }
      v22 = *(_DWORD *)(BugCheckParameter2 + 660);
      if ( v22 == -1 )
      {
        v23 = *(_QWORD *)(BugCheckParameter2 + 16);
        if ( !v23 )
        {
          *(_DWORD *)(BugCheckParameter2 + 660) = -2;
          goto LABEL_7;
        }
        v22 = *(_DWORD *)(v23 + 660);
        *(_DWORD *)(BugCheckParameter2 + 660) = v22;
      }
      if ( v22 != -2 )
      {
        v43 = *(_QWORD *)(BugCheckParameter2 + 48);
        v58 = v22;
        PnpSetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          v43,
          1u,
          (__int64)Handle,
          0LL,
          (__int64)&DEVPKEY_Device_Numa_Node,
          7,
          (__int64)&v58,
          4u,
          0);
      }
    }
LABEL_7:
    ObjectProperty = PnpGetObjectProperty(
                       PiPnpRtlCtx,
                       *(_QWORD *)(BugCheckParameter2 + 48),
                       1,
                       (_DWORD)Handle,
                       0LL,
                       (__int64)DEVPKEY_Device_PreventDriverLoad,
                       (__int64)&v60,
                       (__int64)&v67,
                       8,
                       (__int64)&v53,
                       0);
    if ( ((int)(ObjectProperty + 0x80000000) < 0 || ObjectProperty == -1073741789)
      && (int)PnpGetStableSystemBootTime(&v68) >= 0 )
    {
      if ( ObjectProperty != -1073741789 && v60 == 16 && v53 == 8 && !PnpBootMode && v68 == v67 )
        goto LABEL_33;
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
    v10 = *(_QWORD *)(BugCheckParameter2 + 48);
    v52 = 78;
    if ( (int)CmGetDeviceRegProp(
                PiPnpRtlCtx,
                v10,
                (_DWORD)Handle,
                9,
                (__int64)&v56,
                (__int64)SourceString,
                (__int64)&v52,
                0) < 0
      || v56 != 1
      || !v52 )
    {
LABEL_14:
      v13 = *(_QWORD *)(BugCheckParameter2 + 48);
      v52 = 4;
      if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v13, (_DWORD)Handle, 11, (__int64)&v56, (__int64)&v55, (__int64)&v52, 0) < 0
        || v56 != 4
        || v52 != 4 )
      {
        v55 = 0;
      }
      v70[0] = BugCheckParameter2;
      v7 = 0;
      v70[1] = a2;
      v52 = 512;
      P = (PVOID)ExAllocatePool2(256LL, 512LL, 1852141648LL);
      if ( !P )
      {
        v7 = -1073741670;
        goto LABEL_29;
      }
      if ( (v55 & 0x80000) == 0 )
        goto LABEL_19;
      if ( v62 )
      {
        v36 = PnpCallDriverQueryServiceHelper(
                &P,
                &v52,
                0,
                (__int64)DEVPKEY_DeviceClass_ConfigFilters,
                (__int64)SourceString,
                (__int64)v62,
                1,
                0,
                v4,
                v70);
        v7 = v36;
        if ( v36 != -1073741275 && v36 != -1073741772 && v36 < 0 )
        {
LABEL_29:
          v15 = *(_DWORD *)(BugCheckParameter2 + 396);
          if ( (v15 & 0x1000) != 0 )
          {
LABEL_89:
            v7 = 0;
            goto LABEL_34;
          }
          if ( v7 >= 0 )
          {
            if ( *(_QWORD *)(v70[5] + 8) )
            {
              PipSetDevNodeProblem(BugCheckParameter2, 19, -1073741438);
              goto LABEL_33;
            }
          }
          else
          {
            if ( v7 != -1073741772 )
              goto LABEL_34;
            if ( (*(_DWORD *)(BugCheckParameter2 + 560) & 0x100) == 0 )
            {
LABEL_33:
              v7 = -1073741823;
              goto LABEL_34;
            }
            PipClearDevNodeProblem(BugCheckParameter2);
            v15 = *(_DWORD *)(BugCheckParameter2 + 396);
            v5 = 1;
          }
          if ( (v15 & 0x20000000) == 0 )
          {
            v25 = PnpCallDriverQueryServiceHelper(
                    &P,
                    &v52,
                    18,
                    (__int64)&DEVPKEY_Device_CompoundUpperFilters,
                    *(_QWORD *)(BugCheckParameter2 + 48),
                    (__int64)Handle,
                    0,
                    4,
                    v4,
                    v70);
            v7 = v25;
            if ( v25 == -1073741275 || v25 == -1073741772 )
            {
              PipSetDevNodeFlags(BugCheckParameter2, 0x20000000);
            }
            else if ( v25 < 0 )
            {
              goto LABEL_34;
            }
          }
          if ( v62 && (*(_DWORD *)(BugCheckParameter2 + 396) & 0x40000000) == 0 )
          {
            v26 = PnpCallDriverQueryServiceHelper(
                    &P,
                    &v52,
                    18,
                    (__int64)&DEVPKEY_DeviceClass_CompoundUpperFilters,
                    (__int64)SourceString,
                    (__int64)v62,
                    1,
                    5,
                    v4,
                    v70);
            v7 = v26;
            if ( v26 == -1073741275 || v26 == -1073741772 )
            {
              PipSetDevNodeFlags(BugCheckParameter2, 0x40000000);
            }
            else if ( v26 < 0 )
            {
              goto LABEL_34;
            }
          }
          v7 = PiDmaGuardProcessPreAddDevice(v70, (__int64)Handle);
          if ( v7 >= 0 )
          {
            v27 = 0LL;
            Object = IoGetAttachedDeviceReferenceWithTag(*(PDEVICE_OBJECT *)(BugCheckParameter2 + 32), 0x65706E50u);
            for ( i = 0; i < 6u; ++i )
            {
              if ( i == 3 )
              {
                AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(
                                                   *(PDEVICE_OBJECT *)(BugCheckParameter2 + 32),
                                                   0x65706E50u);
                if ( v5 )
                {
                  if ( !v70[5] )
                    PipSetDevNodeState(BugCheckParameter2, 773);
                }
              }
              v29 = v70[i + 2];
              v30 = (__int64 *)v29;
              if ( v29 )
              {
                do
                {
                  v35 = PnpCallAddDevice(
                          BugCheckParameter2,
                          *v30,
                          *(__int64 (__fastcall **)(struct _DRIVER_OBJECT *, struct _DEVICE_OBJECT *))(*(_QWORD *)(*v30 + 48) + 8LL),
                          i);
                  *(_DWORD *)(*v30 + 16) |= 0x400u;
                  if ( v35 < 0 )
                  {
                    if ( i == 3 )
                    {
                      IovUtilMarkStack(*(_QWORD *)(BugCheckParameter2 + 32), *((_QWORD *)Object + 3), v27, 0);
                      v42 = v48;
                      *(_DWORD *)(BugCheckParameter2 + 392) = v48;
                      v41 = 31;
                      goto LABEL_117;
                    }
                  }
                  else
                  {
                    if ( i == 3 )
                      v27 = *((_QWORD *)AttachedDeviceReferenceWithTag + 3);
                    PipSetDevNodeState(BugCheckParameter2, 773);
                  }
                  v30 = (__int64 *)v30[1];
                }
                while ( v30 );
              }
              if ( !i )
              {
                if ( v29 )
                {
                  v49 = *(_QWORD *)(BugCheckParameter2 + 48);
                  v53 = 4;
                  DeviceRegProp = CmGetDeviceRegProp(
                                    PiPnpRtlCtx,
                                    v49,
                                    (_DWORD)Handle,
                                    11,
                                    (__int64)&v56,
                                    (__int64)&v55,
                                    (__int64)&v53,
                                    0);
                  if ( DeviceRegProp >= 0 && v56 == 4 && v53 == 4 && (v55 & 0x80000) != 0 )
                  {
                    v51 = *(_QWORD *)(BugCheckParameter2 + 48);
                    v55 &= ~0x80000u;
                    CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v51, (__int64)Handle, 0xBu, 4u, (__int64)&v55, 4u, 0);
                  }
                }
              }
            }
            v31 = !v27 || v5;
            IovUtilMarkStack(*(_QWORD *)(BugCheckParameter2 + 32), *((_QWORD *)Object + 3), v27, v31);
            v32 = PipChangeDeviceObjectFromRegistryProperties(
                    *(_QWORD *)(BugCheckParameter2 + 32),
                    (ACL *)Handle,
                    (__int64)SourceString,
                    (__int64)v62,
                    v5);
            if ( v32 < 0 )
            {
              v42 = v32;
              v41 = 50;
LABEL_117:
              PnpRequestDeviceRemoval(BugCheckParameter2, 0, v41, v42);
              v7 = -1073741106;
              goto LABEL_34;
            }
            if ( (int)IopQueryLegacyBusInformation(
                        *(_QWORD *)(BugCheckParameter2 + 32),
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
            PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v34, *(_QWORD *)(BugCheckParameter2 + 48), 23);
            if ( (*(_DWORD *)(BugCheckParameter2 + 560) & 0x100000) == 0
              || (v7 = PiProcessDriversLoadedOnSecureDevice(BugCheckParameter2), v7 >= 0) )
            {
              if ( PipDmaGuardPolicy && *(_QWORD *)(BugCheckParameter2 + 720) )
              {
                v7 = PipDmgEnforceEnumerationPolicy(BugCheckParameter2);
                goto LABEL_34;
              }
              goto LABEL_89;
            }
          }
LABEL_34:
          v6 = 6LL;
          goto LABEL_35;
        }
        while ( 1 )
        {
          v37 = P;
          v38 = PnpGetObjectProperty(
                  PiPnpRtlCtx,
                  (unsigned int)SourceString,
                  2,
                  (_DWORD)v62,
                  0LL,
                  (__int64)DEVPKEY_DeviceClass_ConfigNotifyWnfTriggers,
                  (__int64)&v63,
                  (__int64)P,
                  v52,
                  (__int64)&v53,
                  0);
          if ( v38 != -1073741789 )
            break;
          if ( v53 <= v52 )
          {
            v7 = -1073741823;
            goto LABEL_29;
          }
          ExFreePoolWithTag(v37, 0);
          v52 = v53;
          P = (PVOID)ExAllocatePool2(256LL, v53, 1852141648LL);
          if ( !P )
          {
            v7 = -1073741670;
            goto LABEL_160;
          }
        }
        v7 = v38;
        if ( v38 < 0 )
        {
          if ( v38 == -1073741772 || v38 == -1073741275 )
            v7 = 0;
LABEL_160:
          if ( v7 < 0 )
            goto LABEL_29;
        }
        else if ( v63 == 4099 && (v53 & 7) == 0 && v53 )
        {
          v39 = (char *)P;
          v40 = v53 >> 3;
          do
          {
            ZwUpdateWnfStateData((__int64)v39, 0LL);
            v39 += 8;
            --v40;
          }
          while ( v40 );
          v41 = 56;
          goto LABEL_116;
        }
      }
      if ( !v70[2] )
      {
        v46 = *(_QWORD *)(BugCheckParameter2 + 48);
        v53 = 4;
        if ( (int)CmGetDeviceRegProp(
                    PiPnpRtlCtx,
                    v46,
                    (_DWORD)Handle,
                    11,
                    (__int64)&v56,
                    (__int64)&v55,
                    (__int64)&v53,
                    0) >= 0
          && v56 == 4
          && v53 == 4
          && (v55 & 0x80000) != 0 )
        {
          v47 = *(_QWORD *)(BugCheckParameter2 + 48);
          v55 &= ~0x80000u;
          CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v47, (__int64)Handle, 0xBu, 4u, (__int64)&v55, 4u, 0);
        }
      }
LABEL_19:
      if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x4000000) == 0
        && ((v24 = PnpCallDriverQueryServiceHelper(
                     &P,
                     &v52,
                     19,
                     (__int64)&DEVPKEY_Device_CompoundLowerFilters,
                     *(_QWORD *)(BugCheckParameter2 + 48),
                     (__int64)Handle,
                     0,
                     1,
                     v4,
                     v70),
             v7 = v24,
             v24 == -1073741275)
         || v24 == -1073741772) )
      {
        PipSetDevNodeFlags(BugCheckParameter2, 0x4000000);
      }
      else if ( v7 < 0 )
      {
        goto LABEL_29;
      }
      if ( v62 && (*(_DWORD *)(BugCheckParameter2 + 396) & 0x8000000) == 0 )
      {
        v14 = PnpCallDriverQueryServiceHelper(
                &P,
                &v52,
                19,
                (__int64)&DEVPKEY_DeviceClass_CompoundLowerFilters,
                (__int64)SourceString,
                (__int64)v62,
                1,
                2,
                v4,
                v70);
        v7 = v14;
        if ( v14 == -1073741275 || v14 == -1073741772 )
        {
          PipSetDevNodeFlags(BugCheckParameter2, 0x8000000);
        }
        else if ( v14 < 0 )
        {
          goto LABEL_29;
        }
      }
      if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x10000000) != 0 )
      {
        v7 = -1073741772;
      }
      else
      {
        v20 = PnpCallDriverQueryServiceHelper(
                &P,
                &v52,
                5,
                0LL,
                *(_QWORD *)(BugCheckParameter2 + 48),
                (__int64)Handle,
                0,
                3,
                v4,
                v70);
        v7 = v20;
        if ( v20 == -1073741275 || v20 == -1073741772 )
        {
          v7 = -1073741772;
          PipSetDevNodeFlags(BugCheckParameter2, 0x10000000);
        }
      }
      goto LABEL_29;
    }
    RtlInitUnicodeStringEx(&DestinationString, SourceString);
    if ( !(_DWORD)InitSafeBootMode )
    {
LABEL_13:
      CmOpenInstallerClassRegKey(PiPnpRtlCtx, (unsigned int)SourceString, v11, v12, 131097, 0, (__int64)&v62, 0LL);
      goto LABEL_14;
    }
    if ( (unsigned __int8)IopSafebootDriverLoad(&DestinationString) )
    {
      v4 = v54;
      goto LABEL_13;
    }
    v52 = 256;
    Pool2 = (void *)ExAllocatePool2(256LL, 256LL, 1852141648LL);
    if ( Pool2 )
    {
      v45 = CmGetDeviceRegProp(
              PiPnpRtlCtx,
              *(_QWORD *)(BugCheckParameter2 + 48),
              (_DWORD)Handle,
              1,
              (__int64)&v56,
              (__int64)Pool2,
              (__int64)&v52,
              0);
      if ( v45 == -1073741789 )
      {
        ExFreePoolWithTag(Pool2, 0);
        Pool2 = (void *)ExAllocatePool2(256LL, v52, 1852141648LL);
      }
      else if ( v45 >= 0 )
      {
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, (PCWSTR)Pool2);
        IopBootLog(&DestinationString, 0);
        goto LABEL_145;
      }
    }
    IopBootLog(&DestinationString, 0);
    if ( !Pool2 )
      goto LABEL_33;
LABEL_145:
    ExFreePoolWithTag(Pool2, 0);
    goto LABEL_33;
  }
  v7 = -1073741823;
LABEL_35:
  v16 = &v70[2];
  do
  {
    v17 = *v16;
    if ( *v16 )
    {
      do
      {
        v21 = (PVOID *)v17;
        v17 = *(_QWORD *)(v17 + 8);
        if ( PnPBootDriversInitialized )
          PnpUnloadAttachedDriver(*v21);
        ObfDereferenceObject(*v21);
        ExFreePoolWithTag(v21, 0);
      }
      while ( v17 );
      v6 = v69;
    }
    ++v16;
    v69 = --v6;
  }
  while ( v6 );
  v18 = Object;
  if ( Handle )
    ZwClose(Handle);
  if ( v62 )
    ZwClose(v62);
  if ( v18 )
    ObfDereferenceObjectWithTag(v18, 0x65706E50u);
  if ( AttachedDeviceReferenceWithTag )
    ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x65706E50u);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v7;
}
