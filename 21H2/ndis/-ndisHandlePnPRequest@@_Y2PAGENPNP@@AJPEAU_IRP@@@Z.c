/*
 * XREFs of ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C012BDB8
 * Callers:
 *     ndisDispatchRequest @ 0x1C001D550 (ndisDispatchRequest.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ndisHandleUModePnPOp @ 0x1C001D96C (ndisHandleUModePnPOp.c)
 *     ?ndisHandleLegacyTransport@@YAJPEBU_UNICODE_STRING@@@Z @ 0x1C001DA30 (-ndisHandleLegacyTransport@@YAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z @ 0x1C0020A78 (-ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z.c)
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C0021224 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 *     NdisGetVersion @ 0x1C0032910 (NdisGetVersion.c)
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003D0DC (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     ?ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z @ 0x1C005A78C (-ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C005BEC4 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C005C20C (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0062D88 (-ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@.c)
 *     ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x1C0062ED8 (-ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAU_NDIS_QUERY_DEVICE_RESET@@.c)
 *     ?NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z @ 0x1C008C1E4 (-NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z.c)
 *     ?ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z @ 0x1C00B37D4 (-ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z.c)
 *     ndisValidateEmbeddedBufferBounds @ 0x1C00F8640 (ndisValidateEmbeddedBufferBounds.c)
 *     ndisValidateNdisVarDataDesc32InputString @ 0x1C00F86CC (ndisValidateNdisVarDataDesc32InputString.c)
 *     ndisValidateNdisVarDataDescInputString @ 0x1C00F8754 (ndisValidateNdisVarDataDescInputString.c)
 *     ndisMoveUnicodeStringToNdisVarDataDesc @ 0x1C0117C48 (ndisMoveUnicodeStringToNdisVarDataDesc.c)
 *     ndisPnpRefresh @ 0x1C0117CA4 (ndisPnpRefresh.c)
 *     ndisValidateNdisOffsetAndLengthInputBufferBounds @ 0x1C0117D00 (ndisValidateNdisOffsetAndLengthInputBufferBounds.c)
 *     ndisValidateNdisOffsetAndLengthInputString @ 0x1C0117D68 (ndisValidateNdisOffsetAndLengthInputString.c)
 *     ?ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z @ 0x1C011E910 (-ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z.c)
 *     NdisIfAllocateNetLuidIndex @ 0x1C0126610 (NdisIfAllocateNetLuidIndex.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C0126660 (NdisIfFreeNetLuidIndex.c)
 *     ?ndisIfEnumerateNsiObjects@@YAJPEAU_NDIS_ENUM_NSI_OBJECTS@@IPEAI@Z @ 0x1C01272AC (-ndisIfEnumerateNsiObjects@@YAJPEAU_NDIS_ENUM_NSI_OBJECTS@@IPEAI@Z.c)
 *     ndisEnumerateInterfaces @ 0x1C0131760 (ndisEnumerateInterfaces.c)
 *     ndisEnumerateInterfaces32 @ 0x1C01390B0 (ndisEnumerateInterfaces32.c)
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
  __int64 v15; // r9
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // r9
  __int64 v20; // r9
  unsigned int v22; // eax
  unsigned int v23; // eax
  const WCHAR *p_Type; // rdx
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // rax
  unsigned __int64 MasterIrp; // rsi
  unsigned int v34; // r15d
  unsigned int v35; // ecx
  unsigned int v36; // edx
  PVOID PoolWithTag; // rax
  __int64 v38; // rbx
  __int64 v39; // r9
  __int64 v40; // r9
  __int64 v41; // r9
  unsigned int v42; // r12d
  void *v43; // rdx
  char *v44; // rcx
  unsigned int v45; // eax
  int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int active; // eax
  unsigned __int8 v51; // dl
  unsigned int v52; // eax
  unsigned int v53; // eax
  unsigned int v54; // eax
  struct _NDIS_MINIPORT_BLOCK *v55; // [rsp+50h] [rbp-29h] BYREF
  PVOID P[2]; // [rsp+58h] [rbp-21h] BYREF
  __int128 v57; // [rsp+68h] [rbp-11h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-1h] BYREF
  void *v59; // [rsp+E0h] [rbp+67h] BYREF
  void *Src; // [rsp+E8h] [rbp+6Fh] BYREF
  int v61; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int pNetLuidIndex; // [rsp+F8h] [rbp+7Fh] BYREF

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  LODWORD(Src) = 0;
  DestinationString = 0LL;
  DeviceReset = 0;
  P[0] = 0LL;
  FileObject = CurrentStackLocation->FileObject;
  v61 = 0;
  v7 = 0;
  pNetLuidIndex = 0;
  v55 = 0LL;
  FsContext = (char *)FileObject->FsContext;
  *(_QWORD *)&v57 = CurrentStackLocation;
  if ( !FsContext )
    return 3221225487LL;
  v9 = *FsContext;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  LOBYTE(v59) = *FsContext;
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
              v32 = v57;
              MasterIrp = (unsigned __int64)a1->AssociatedIrp.MasterIrp;
              Src = 0LL;
              v57 = 0LL;
              v34 = *(_DWORD *)(v32 + 16);
              if ( (unsigned int)Options >= 0x28 )
              {
                v35 = *(unsigned __int16 *)(MasterIrp + 18)
                    + *(unsigned __int16 *)(MasterIrp + 26)
                    + *(unsigned __int16 *)(MasterIrp + 34);
                v36 = v35 + *(_DWORD *)(MasterIrp + 12);
                if ( v36 < v35 || v36 >= 0xFFFFFFD8 )
                  return (unsigned int)-1073741811;
                if ( (unsigned int)Options >= v36 + 40 )
                {
                  if ( v36 < 0xFFFFFFB8 )
                  {
                    LODWORD(Options) = v36 + 80;
                    if ( v36 + 80 >= 8 )
                    {
                      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)Options, 0x2020444Eu);
                      P[0] = PoolWithTag;
                      v38 = (__int64)PoolWithTag;
                      if ( PoolWithTag )
                      {
                        memset(PoolWithTag, 0, (unsigned int)Options);
                        *(_DWORD *)v38 = *(_DWORD *)MasterIrp;
                        *(_DWORD *)(v38 + 4) = *(_DWORD *)(MasterIrp + 4);
                        v13.MasterIrp = (_IRP *)v38;
                        v59 = (void *)(v38 + 72);
                        if ( !ndisValidateNdisVarDataDesc32InputString(
                                MasterIrp,
                                v34,
                                (unsigned __int16 *)(MasterIrp + 16),
                                v39,
                                (__int64)&v57) )
                          goto LABEL_73;
                        ndisMoveUnicodeStringToNdisVarDataDesc((__int64)&v57, v38, &v59, v38 + 24);
                        if ( !ndisValidateNdisVarDataDesc32InputString(
                                MasterIrp,
                                v34,
                                (unsigned __int16 *)(MasterIrp + 24),
                                v40,
                                (__int64)&v57) )
                          goto LABEL_73;
                        ndisMoveUnicodeStringToNdisVarDataDesc((__int64)&v57, v38, &v59, v38 + 40);
                        if ( !ndisValidateNdisVarDataDesc32InputString(
                                MasterIrp,
                                v34,
                                (unsigned __int16 *)(MasterIrp + 32),
                                v41,
                                (__int64)&v57) )
                          goto LABEL_73;
                        ndisMoveUnicodeStringToNdisVarDataDesc((__int64)&v57, v38, &v59, v38 + 56);
                        v42 = *(_DWORD *)(MasterIrp + 12);
                        if ( !ndisValidateEmbeddedBufferBounds(
                                MasterIrp,
                                v34,
                                MasterIrp + 8,
                                8u,
                                0,
                                *(_DWORD *)(MasterIrp + 8),
                                v42,
                                4,
                                (unsigned __int64 *)&Src) )
                          goto LABEL_73;
                        v43 = Src;
                        v44 = (char *)(((unsigned __int64)v59 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                        *(_DWORD *)(v38 + 16) = v42;
                        *(_QWORD *)(v38 + 8) = &v44[-v38];
                        memmove(v44, v43, v42);
LABEL_10:
                        if ( (unsigned int)Options < 0x48 )
                        {
LABEL_74:
                          DeviceReset = -1073741789;
                          goto LABEL_19;
                        }
                        v16 = HIWORD(v13.MasterIrp->AssociatedIrp.IrpCount)
                            + WORD1(v13.MasterIrp->ThreadListEntry.Blink)
                            + WORD1(v13.MasterIrp->IoStatus.Information);
                        v17 = v16 + v13.MasterIrp->Flags;
                        if ( v17 >= v16 )
                        {
                          v18 = v17 + 72;
                          if ( v18 >= 0x48 )
                          {
                            if ( (unsigned int)Options >= v18 )
                            {
                              if ( ndisValidateNdisVarDataDescInputString(
                                     (unsigned __int64)v13.MasterIrp,
                                     Options,
                                     (unsigned __int16 *)&v13.MasterIrp->AssociatedIrp,
                                     v15,
                                     (__int64)&v13.MasterIrp->AssociatedIrp)
                                && ndisValidateNdisVarDataDescInputString(
                                     (unsigned __int64)v13.MasterIrp,
                                     Options,
                                     (unsigned __int16 *)&v13.MasterIrp->ThreadListEntry.Blink,
                                     v19,
                                     (__int64)&v13.MasterIrp->ThreadListEntry.Blink)
                                && ndisValidateNdisVarDataDescInputString(
                                     (unsigned __int64)v13.MasterIrp,
                                     Options,
                                     (unsigned __int16 *)&v13.MasterIrp->IoStatus.Information,
                                     v20,
                                     (__int64)&v13.MasterIrp->IoStatus.Information)
                                && ndisValidateEmbeddedBufferBounds(
                                     (unsigned __int64)v13.MasterIrp,
                                     Options,
                                     (unsigned __int64)&v13.MasterIrp->MdlAddress,
                                     0xCu,
                                     0,
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
          v22 = v14 - 8;
          if ( v22 )
          {
            v23 = v22 - 4;
            if ( !v23 )
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
            v31 = v23 - 12;
            if ( v31 )
            {
              if ( v31 != 20 )
                return DeviceReset;
              NdisTraceLoggingRareFeaturePath();
              if ( !(_BYTE)v59 )
                return 3221225506LL;
              if ( (unsigned int)Options >= 0x30 && (unsigned int)Length >= 0x30 )
              {
                v29 = ndisIfEnumerateNsiObjects(
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
              v29 = ndisEnumerateInterfaces32(v13.SystemBuffer, (unsigned int)Length);
              goto LABEL_39;
            }
          }
          else if ( (unsigned int)Length >= 0x30 )
          {
            v29 = ndisEnumerateInterfaces(v13.SystemBuffer, (unsigned int)Length);
LABEL_39:
            v7 = (unsigned int)Src;
            DeviceReset = v29;
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
                v46 = *(_DWORD *)&v13.MasterIrp->AllocationProcessorNumber;
                if ( v46 && (v46 == -1 || v13.MasterIrp->MdlAddress) )
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
      v47 = LowPart - 1507396;
      if ( !v47 )
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
      v48 = v47 - 4;
      if ( v48 )
      {
        v49 = v48 - 12;
        if ( v49 )
        {
          if ( v49 != 4 )
            return DeviceReset;
          return (unsigned int)-1073741637;
        }
        if ( !v9 )
          return 3221225506LL;
        if ( IoIs32bitProcess(a1) )
          return (unsigned int)-1073741637;
        if ( (unsigned int)Options >= 0x20C )
        {
          v45 = ndisIfSetIfDescr(&v13.MasterIrp->Type);
LABEL_81:
          DeviceReset = v45;
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
          v45 = NdisIfFreeNetLuidIndex(v13.MasterIrp->AllocationProcessorNumber, *(_DWORD *)v13.MasterIrp);
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
      v52 = LowPart - 1509380;
      if ( v52 )
      {
        v53 = v52 - 4;
        if ( v53 )
        {
          v54 = v53 - 4;
          if ( !v54 )
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
          if ( v54 != 4 )
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
          v59 = 0LL;
          v57 = 0LL;
          *(_OWORD *)P = 0LL;
          if ( !ndisValidateNdisOffsetAndLengthInputString(
                  (__int64)a1,
                  (unsigned int *)&v13.MasterIrp->AllocationProcessorNumber,
                  (__int64)P)
            || !ndisValidateNdisOffsetAndLengthInputString(
                  (__int64)a1,
                  (unsigned int *)&v13.MasterIrp->MdlAddress + 1,
                  (__int64)&v57)
            || !ndisValidateNdisOffsetAndLengthInputBufferBounds(
                  (__int64)a1,
                  &v13.MasterIrp->Flags + 1,
                  (unsigned __int64 *)&v59) )
          {
            return (unsigned int)-1073741811;
          }
          return (unsigned int)ndisPnpInvokeTdi(*(_DWORD *)v13.MasterIrp, (__int64)P, (__int64)&v57);
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
        v26 = LowPart - 1507424;
        if ( !v26 )
          return (unsigned int)-1073741637;
        v27 = v26 - 40;
        if ( v27 )
        {
          v28 = v27 - 4;
          if ( v28 )
          {
            v30 = v28 - 20;
            if ( v30 )
            {
              if ( v30 != 4 )
                return DeviceReset;
              if ( ndisAoAcRefMiniportForIoctl(
                     (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                     Options,
                     (struct _NDIS_PM_NIC_ACTIVE *)v13.MasterIrp,
                     1,
                     MPREF_AOAC_WAKE_DISABLE,
                     &v61,
                     &v55) )
              {
                active = ndisAoAcEnableRemoteWake(v55, (struct _NDIS_PM_NIC_ACTIVE *)v13.MasterIrp, 0);
                v51 = 6;
                goto LABEL_114;
              }
            }
            else if ( ndisAoAcRefMiniportForIoctl(
                        (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                        Options,
                        (struct _NDIS_PM_NIC_ACTIVE *)v13.MasterIrp,
                        1,
                        MPREF_AOAC_WAKE_ENABLE,
                        &v61,
                        &v55) )
            {
              active = ndisAoAcEnableRemoteWake(v55, (struct _NDIS_PM_NIC_ACTIVE *)v13.MasterIrp, 1);
              v51 = 5;
              goto LABEL_114;
            }
          }
          else if ( ndisAoAcRefMiniportForIoctl(
                      (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                      Options,
                      (struct _NDIS_PM_NIC_ACTIVE *)a1->AssociatedIrp.MasterIrp,
                      0,
                      MPREF_AOAC_NA_RELEASE,
                      &v61,
                      &v55) )
          {
            active = ndisNicActiveRelease(
                       v55,
                       (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                       (struct _NDIS_PM_NIC_ACTIVE *)v13.MasterIrp);
            v51 = 1;
LABEL_114:
            DeviceReset = active;
            ndisDereferenceMiniport(v55, v51);
            return DeviceReset;
          }
        }
        else if ( ndisAoAcRefMiniportForIoctl(
                    (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                    Options,
                    (struct _NDIS_PM_NIC_ACTIVE *)a1->AssociatedIrp.MasterIrp,
                    1,
                    MPREF_AOAC_NA_ACQUIRE,
                    &v61,
                    &v55) )
        {
          active = ndisNicActiveAcquire(
                     v55,
                     (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                     (struct _NDIS_PM_NIC_ACTIVE *)v13.MasterIrp,
                     a1);
          v51 = 0;
          goto LABEL_114;
        }
        return (unsigned int)v61;
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
