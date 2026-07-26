/*
 * XREFs of ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C012BDB8
 * Callers:
 *     ndisDispatchRequest @ 0x1C001D380 (ndisDispatchRequest.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ndisHandleUModePnPOp @ 0x1C001D644 (ndisHandleUModePnPOp.c)
 *     ?ndisHandleLegacyTransport@@YAJPEBU_UNICODE_STRING@@@Z @ 0x1C001D708 (-ndisHandleLegacyTransport@@YAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z @ 0x1C0020758 (-ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z.c)
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C0020F04 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 *     NdisGetVersion @ 0x1C0032370 (NdisGetVersion.c)
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003CB3C (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ?ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z @ 0x1C0059E70 (-ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C005B5B4 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C005B8FC (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0062438 (-ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@.c)
 *     ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x1C0062588 (-ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAU_NDIS_QUERY_DEVICE_RESET@@.c)
 *     ?NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z @ 0x1C008B984 (-NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z.c)
 *     ?ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z @ 0x1C00B31A4 (-ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z.c)
 *     ndisValidateNdisVarDataDescInputString @ 0x1C00FE5FC (ndisValidateNdisVarDataDescInputString.c)
 *     ndisValidateEmbeddedBufferBounds @ 0x1C00FE6E0 (ndisValidateEmbeddedBufferBounds.c)
 *     ndisMoveUnicodeStringToNdisVarDataDesc @ 0x1C0117BF8 (ndisMoveUnicodeStringToNdisVarDataDesc.c)
 *     ndisPnpRefresh @ 0x1C0117C54 (ndisPnpRefresh.c)
 *     ndisValidateNdisOffsetAndLengthInputBufferBounds @ 0x1C0117CB0 (ndisValidateNdisOffsetAndLengthInputBufferBounds.c)
 *     ndisValidateNdisOffsetAndLengthInputString @ 0x1C0117D14 (ndisValidateNdisOffsetAndLengthInputString.c)
 *     ndisValidateNdisVarDataDesc32InputString @ 0x1C0117D60 (ndisValidateNdisVarDataDesc32InputString.c)
 *     ?ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z @ 0x1C011E940 (-ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z.c)
 *     NdisIfAllocateNetLuidIndex @ 0x1C0126640 (NdisIfAllocateNetLuidIndex.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C0126690 (NdisIfFreeNetLuidIndex.c)
 *     ?ndisIfEnumerateNsiObjects@@YAJPEAU_NDIS_ENUM_NSI_OBJECTS@@IPEAI@Z @ 0x1C01272DC (-ndisIfEnumerateNsiObjects@@YAJPEAU_NDIS_ENUM_NSI_OBJECTS@@IPEAI@Z.c)
 *     ndisEnumerateInterfaces @ 0x1C0131080 (ndisEnumerateInterfaces.c)
 *     ndisEnumerateInterfaces32 @ 0x1C0139240 (ndisEnumerateInterfaces32.c)
 */

__int64 __fastcall ndisHandlePnPRequest(struct _IRP *a1, __int64 a2, unsigned int a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int DeviceReset; // ebx
  _FILE_OBJECT *FileObject; // rax
  unsigned int v7; // r15d
  char *FsContext; // r12
  char v9; // cl
  unsigned int LowPart; // eax
  unsigned __int64 Options; // r14
  unsigned __int64 Length; // r13
  _IRP::<unnamed_type_AssociatedIrp> v13; // rdi
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  const WCHAR *p_Type; // rdx
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // rax
  unsigned __int64 MasterIrp; // rsi
  unsigned int v31; // r15d
  unsigned int v32; // ecx
  unsigned int v33; // edx
  PVOID PoolWithTag; // rax
  __int64 v35; // rbx
  unsigned int v36; // r12d
  void *v37; // rdx
  char *v38; // rcx
  unsigned int v39; // eax
  int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int active; // eax
  unsigned __int8 v45; // dl
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  struct _NDIS_MINIPORT_BLOCK *v49; // [rsp+40h] [rbp-29h] BYREF
  PVOID P[2]; // [rsp+48h] [rbp-21h] BYREF
  __int128 v51; // [rsp+58h] [rbp-11h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-1h] BYREF
  void *v53; // [rsp+D0h] [rbp+67h] BYREF
  void *Src; // [rsp+D8h] [rbp+6Fh] BYREF
  int v55; // [rsp+E0h] [rbp+77h] BYREF
  unsigned int pNetLuidIndex; // [rsp+E8h] [rbp+7Fh] BYREF

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  LODWORD(Src) = 0;
  DestinationString = 0LL;
  DeviceReset = 0;
  P[0] = 0LL;
  FileObject = CurrentStackLocation->FileObject;
  v55 = 0;
  v7 = 0;
  pNetLuidIndex = 0;
  v49 = 0LL;
  FsContext = (char *)FileObject->FsContext;
  *(_QWORD *)&v51 = CurrentStackLocation;
  if ( !FsContext )
    return 3221225487LL;
  v9 = *FsContext;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  LOBYTE(v53) = *FsContext;
  if ( (LowPart & 3) == 0 )
  {
    Options = CurrentStackLocation->Parameters.Create.Options;
    Length = CurrentStackLocation->Parameters.Read.Length;
    v13.MasterIrp = (_IRP *)a1->AssociatedIrp;
    if ( LowPart <= 0x17005C )
    {
      if ( LowPart == 1507420 )
        return (unsigned int)-1073741637;
      if ( LowPart <= 0x170040 )
      {
        if ( LowPart != 1507392 )
        {
          v14 = LowPart - 1507336;
          if ( !v14 )
          {
            if ( v9 )
            {
              if ( !IoIs32bitProcess(a1) )
                goto LABEL_10;
              v29 = v51;
              MasterIrp = (unsigned __int64)a1->AssociatedIrp.MasterIrp;
              Src = 0LL;
              v51 = 0LL;
              v31 = *(_DWORD *)(v29 + 16);
              if ( (unsigned int)Options >= 0x28 )
              {
                v32 = *(unsigned __int16 *)(MasterIrp + 18)
                    + *(unsigned __int16 *)(MasterIrp + 26)
                    + *(unsigned __int16 *)(MasterIrp + 34);
                v33 = v32 + *(_DWORD *)(MasterIrp + 12);
                if ( v33 < v32 || v33 >= 0xFFFFFFD8 )
                  return (unsigned int)-1073741811;
                if ( (unsigned int)Options >= v33 + 40 )
                {
                  if ( v33 < 0xFFFFFFB8 )
                  {
                    LODWORD(Options) = v33 + 80;
                    if ( v33 + 80 >= 8 )
                    {
                      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)Options, 0x2020444Eu);
                      P[0] = PoolWithTag;
                      v35 = (__int64)PoolWithTag;
                      if ( PoolWithTag )
                      {
                        memset(PoolWithTag, 0, (unsigned int)Options);
                        *(_DWORD *)v35 = *(_DWORD *)MasterIrp;
                        *(_DWORD *)(v35 + 4) = *(_DWORD *)(MasterIrp + 4);
                        v13.MasterIrp = (_IRP *)v35;
                        v53 = (void *)(v35 + 72);
                        if ( !ndisValidateNdisVarDataDesc32InputString(
                                MasterIrp,
                                v31,
                                (unsigned __int16 *)(MasterIrp + 16),
                                (__int64)&v51) )
                          goto LABEL_73;
                        ndisMoveUnicodeStringToNdisVarDataDesc((__int64)&v51, v35, &v53, v35 + 24);
                        if ( !ndisValidateNdisVarDataDesc32InputString(
                                MasterIrp,
                                v31,
                                (unsigned __int16 *)(MasterIrp + 24),
                                (__int64)&v51) )
                          goto LABEL_73;
                        ndisMoveUnicodeStringToNdisVarDataDesc((__int64)&v51, v35, &v53, v35 + 40);
                        if ( !ndisValidateNdisVarDataDesc32InputString(
                                MasterIrp,
                                v31,
                                (unsigned __int16 *)(MasterIrp + 32),
                                (__int64)&v51) )
                          goto LABEL_73;
                        ndisMoveUnicodeStringToNdisVarDataDesc((__int64)&v51, v35, &v53, v35 + 56);
                        v36 = *(_DWORD *)(MasterIrp + 12);
                        if ( !ndisValidateEmbeddedBufferBounds(
                                MasterIrp,
                                v31,
                                MasterIrp + 8,
                                8u,
                                *(_DWORD *)(MasterIrp + 8),
                                v36,
                                4,
                                (unsigned __int64 *)&Src) )
                          goto LABEL_73;
                        v37 = Src;
                        v38 = (char *)(((unsigned __int64)v53 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                        *(_DWORD *)(v35 + 16) = v36;
                        *(_QWORD *)(v35 + 8) = &v38[-v35];
                        memmove(v38, v37, v36);
LABEL_10:
                        if ( (unsigned int)Options < 0x48 )
                        {
LABEL_74:
                          DeviceReset = -1073741789;
                          goto LABEL_19;
                        }
                        v15 = HIWORD(v13.MasterIrp->AssociatedIrp.IrpCount)
                            + WORD1(v13.MasterIrp->ThreadListEntry.Blink)
                            + WORD1(v13.MasterIrp->IoStatus.Information);
                        v16 = v15 + v13.MasterIrp->Flags;
                        if ( v16 >= v15 )
                        {
                          v17 = v16 + 72;
                          if ( v17 >= 0x48 )
                          {
                            if ( (unsigned int)Options >= v17 )
                            {
                              if ( ndisValidateNdisVarDataDescInputString(
                                     (unsigned __int64)v13.MasterIrp,
                                     Options,
                                     (unsigned __int16 *)&v13.MasterIrp->AssociatedIrp,
                                     (__int64)&v13.MasterIrp->AssociatedIrp)
                                && ndisValidateNdisVarDataDescInputString(
                                     (unsigned __int64)v13.MasterIrp,
                                     Options,
                                     (unsigned __int16 *)&v13.MasterIrp->ThreadListEntry.Blink,
                                     (__int64)&v13.MasterIrp->ThreadListEntry.Blink)
                                && ndisValidateNdisVarDataDescInputString(
                                     (unsigned __int64)v13.MasterIrp,
                                     Options,
                                     (unsigned __int16 *)&v13.MasterIrp->IoStatus.Information,
                                     (__int64)&v13.MasterIrp->IoStatus.Information)
                                && ndisValidateEmbeddedBufferBounds(
                                     (unsigned __int64)v13.MasterIrp,
                                     Options,
                                     (unsigned __int64)&v13.MasterIrp->MdlAddress,
                                     0xCu,
                                     (unsigned int)v13.MasterIrp->MdlAddress,
                                     v13.MasterIrp->Flags,
                                     8,
                                     (unsigned __int64 *)&v13.MasterIrp->MdlAddress) )
                              {
                                DeviceReset = ndisHandleUModePnPOp((__int64)v13.MasterIrp);
                                goto LABEL_19;
                              }
                              goto LABEL_73;
                            }
                            goto LABEL_74;
                          }
                        }
LABEL_73:
                        DeviceReset = -1073741811;
                        goto LABEL_19;
                      }
                      return (unsigned int)-1073741670;
                    }
                  }
                  return (unsigned int)-1073741811;
                }
              }
              return (unsigned int)-1073741789;
            }
            return 3221225506LL;
          }
          v19 = v14 - 8;
          if ( v19 )
          {
            v20 = v19 - 4;
            if ( !v20 )
            {
              if ( v9 )
              {
                DeviceReset = -1073741811;
                if ( !(_DWORD)Options || (Options & 1) != 0 )
                  return DeviceReset;
                p_Type = &a1->AssociatedIrp.MasterIrp->Type;
                *((_WORD *)v13.MasterIrp + (Options >> 1) - 1) = 0;
                RtlInitUnicodeString(&DestinationString, p_Type);
                return (unsigned int)ndisHandleLegacyTransport(&DestinationString);
              }
              return 3221225506LL;
            }
            v28 = v20 - 12;
            if ( v28 )
            {
              if ( v28 != 20 )
                return DeviceReset;
              NdisTraceLoggingRareFeaturePath();
              if ( !(_BYTE)v53 )
                return 3221225506LL;
              if ( (unsigned int)Options >= 0x30 && (unsigned int)Length >= 0x30 )
              {
                v26 = ndisIfEnumerateNsiObjects(
                        (struct _NDIS_ENUM_NSI_OBJECTS *)v13.MasterIrp,
                        Length,
                        (unsigned int *)&Src);
                goto LABEL_39;
              }
            }
            else if ( (unsigned int)Length >= 4 )
            {
              *(_DWORD *)&v13.MasterIrp->Type = NdisGetVersion();
              v7 = 4;
              if ( (unsigned int)Length >= 8 )
              {
                v7 = 8;
                *(_DWORD *)&v13.MasterIrp->AllocationProcessorNumber = ndisChecked;
              }
              goto LABEL_40;
            }
          }
          else if ( IoIs32bitProcess(a1) )
          {
            if ( (unsigned int)Length >= 0x20 )
            {
              v26 = ndisEnumerateInterfaces32(v13.SystemBuffer, (unsigned int)Length);
              goto LABEL_39;
            }
          }
          else if ( (unsigned int)Length >= 0x30 )
          {
            v26 = ndisEnumerateInterfaces(v13.SystemBuffer, (unsigned int)Length);
LABEL_39:
            v7 = (unsigned int)Src;
            DeviceReset = v26;
LABEL_40:
            a1->IoStatus.Information = v7;
            return DeviceReset;
          }
LABEL_53:
          DeviceReset = -1073741789;
          goto LABEL_40;
        }
        if ( !v9 )
          return 3221225506LL;
        if ( !IoIs32bitProcess(a1) )
        {
          if ( (unsigned int)Options >= 0x10 )
          {
            if ( ndisPeriodicReceives )
            {
              if ( v13.MasterIrp->Type == 1 && v13.MasterIrp->Size == 16 )
              {
                v40 = *(_DWORD *)&v13.MasterIrp->AllocationProcessorNumber;
                if ( v40 && (v40 == -1 || v13.MasterIrp->MdlAddress) )
                  ndisConfigurePeriodicReceives((struct _NDIS_SET_RECEIVE_RATE *)v13.MasterIrp);
                else
                  DeviceReset = -1073741811;
              }
              else
              {
                DeviceReset = -1073741735;
              }
            }
            else
            {
              DeviceReset = -1073741823;
            }
            goto LABEL_82;
          }
          goto LABEL_80;
        }
        return (unsigned int)-1073741637;
      }
      v41 = LowPart - 1507396;
      if ( !v41 )
      {
        if ( !v9 )
          return 3221225506LL;
        if ( !IoIs32bitProcess(a1) )
        {
          if ( (unsigned int)Options >= 2 && (unsigned int)Length >= 4 )
          {
            DeviceReset = NdisIfAllocateNetLuidIndex(v13.MasterIrp->Type, &pNetLuidIndex);
            if ( !DeviceReset )
            {
              v7 = 4;
              *(_DWORD *)&v13.MasterIrp->Type = pNetLuidIndex;
            }
            goto LABEL_40;
          }
          goto LABEL_53;
        }
        return (unsigned int)-1073741637;
      }
      v42 = v41 - 4;
      if ( v42 )
      {
        v43 = v42 - 12;
        if ( v43 )
        {
          if ( v43 != 4 )
            return DeviceReset;
          return (unsigned int)-1073741637;
        }
        if ( !v9 )
          return 3221225506LL;
        if ( IoIs32bitProcess(a1) )
          return (unsigned int)-1073741637;
        if ( (unsigned int)Options >= 0x20C )
        {
          v39 = ndisIfSetIfDescr(&v13.MasterIrp->Type);
LABEL_81:
          DeviceReset = v39;
          goto LABEL_82;
        }
      }
      else
      {
        if ( !v9 )
          return 3221225506LL;
        if ( IoIs32bitProcess(a1) )
          return (unsigned int)-1073741637;
        if ( (unsigned int)Options >= 8 )
        {
          v39 = NdisIfFreeNetLuidIndex(v13.MasterIrp->AllocationProcessorNumber, *(_DWORD *)v13.MasterIrp);
          goto LABEL_81;
        }
      }
LABEL_80:
      DeviceReset = -1073741789;
LABEL_82:
      a1->IoStatus.Information = 0LL;
      return DeviceReset;
    }
    if ( LowPart > 0x1700AC )
    {
      v46 = LowPart - 1509380;
      if ( v46 )
      {
        v47 = v46 - 4;
        if ( v47 )
        {
          v48 = v47 - 4;
          if ( !v48 )
          {
            DeviceReset = ndisQueryDeviceReset(
                            (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                            Options,
                            Length,
                            (union _NET_LUID_LH *)a1->AssociatedIrp.MasterIrp);
            if ( !DeviceReset )
              a1->IoStatus.Information = Length;
            return DeviceReset;
          }
          if ( v48 != 4 )
            return DeviceReset;
          return (unsigned int)ndisInvokeDeviceReset(
                                 (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                                 Options,
                                 (union _NET_LUID_LH *)a1->AssociatedIrp.MasterIrp,
                                 MPREF_AOAC_NA_ACQUIRE);
        }
        if ( FsContext[1] )
        {
          if ( (unsigned int)Options < 0x1C )
            return (unsigned int)-1073741789;
          v53 = 0LL;
          v51 = 0LL;
          *(_OWORD *)P = 0LL;
          if ( !ndisValidateNdisOffsetAndLengthInputString(
                  (__int64)a1,
                  (unsigned int *)&v13.MasterIrp->AllocationProcessorNumber,
                  (__int64)P)
            || !ndisValidateNdisOffsetAndLengthInputString(
                  (__int64)a1,
                  (unsigned int *)&v13.MasterIrp->MdlAddress + 1,
                  (__int64)&v51)
            || !ndisValidateNdisOffsetAndLengthInputBufferBounds(
                  (__int64)a1,
                  &v13.MasterIrp->Flags + 1,
                  (unsigned __int64 *)&v53) )
          {
            return (unsigned int)-1073741811;
          }
          return (unsigned int)ndisPnpInvokeTdi(*(_DWORD *)v13.MasterIrp, (__int64)P, (__int64)&v51);
        }
      }
      else if ( FsContext[1] )
      {
        if ( (unsigned int)Options >= 0x10 )
        {
          ndisPnpRefresh((struct _GUID *)a1->AssociatedIrp.MasterIrp, 1507500LL, a3);
LABEL_19:
          if ( P[0] )
            ExFreePoolWithTag(P[0], 0);
          return DeviceReset;
        }
        return (unsigned int)-1073741789;
      }
    }
    else
    {
      if ( LowPart != 1507500 )
      {
        v23 = LowPart - 1507424;
        if ( !v23 )
          return (unsigned int)-1073741637;
        v24 = v23 - 40;
        if ( v24 )
        {
          v25 = v24 - 4;
          if ( v25 )
          {
            v27 = v25 - 20;
            if ( v27 )
            {
              if ( v27 != 4 )
                return DeviceReset;
              if ( ndisAoAcRefMiniportForIoctl(
                     (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                     Options,
                     (struct _NDIS_PM_NIC_ACTIVE *)v13.MasterIrp,
                     1,
                     MPREF_AOAC_WAKE_DISABLE,
                     &v55,
                     &v49) )
              {
                active = ndisAoAcEnableRemoteWake(v49, (struct _NDIS_PM_NIC_ACTIVE *)v13.MasterIrp, 0);
                v45 = 6;
                goto LABEL_114;
              }
            }
            else if ( ndisAoAcRefMiniportForIoctl(
                        (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                        Options,
                        (struct _NDIS_PM_NIC_ACTIVE *)v13.MasterIrp,
                        1,
                        MPREF_AOAC_WAKE_ENABLE,
                        &v55,
                        &v49) )
            {
              active = ndisAoAcEnableRemoteWake(v49, (struct _NDIS_PM_NIC_ACTIVE *)v13.MasterIrp, 1);
              v45 = 5;
              goto LABEL_114;
            }
          }
          else if ( ndisAoAcRefMiniportForIoctl(
                      (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                      Options,
                      (struct _NDIS_PM_NIC_ACTIVE *)a1->AssociatedIrp.MasterIrp,
                      0,
                      MPREF_AOAC_NA_RELEASE,
                      &v55,
                      &v49) )
          {
            active = ndisNicActiveRelease(
                       v49,
                       (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                       (struct _NDIS_PM_NIC_ACTIVE *)v13.MasterIrp);
            v45 = 1;
LABEL_114:
            DeviceReset = active;
            ndisDereferenceMiniport(v49, v45);
            return DeviceReset;
          }
        }
        else if ( ndisAoAcRefMiniportForIoctl(
                    (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                    Options,
                    (struct _NDIS_PM_NIC_ACTIVE *)a1->AssociatedIrp.MasterIrp,
                    1,
                    MPREF_AOAC_NA_ACQUIRE,
                    &v55,
                    &v49) )
        {
          active = ndisNicActiveAcquire(
                     v49,
                     (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                     (struct _NDIS_PM_NIC_ACTIVE *)v13.MasterIrp,
                     a1);
          v45 = 0;
          goto LABEL_114;
        }
        return (unsigned int)v55;
      }
      if ( v9 )
      {
        if ( (unsigned int)Options < 0x18 )
          return (unsigned int)-1073741789;
        if ( *((_QWORD *)FsContext + 6) )
          return (unsigned int)-1073740024;
        return (unsigned int)ndisIfReferenceCompartmentForUser(
                               (struct _GUID *)&v13.MasterIrp->AllocationProcessorNumber,
                               *(&v13.MasterIrp->Flags + 1),
                               (struct _NDIS_IF_COMPARTMENT_BLOCK **)FsContext + 6);
      }
    }
    return (unsigned int)-1073741790;
  }
  return 3221225485LL;
}
