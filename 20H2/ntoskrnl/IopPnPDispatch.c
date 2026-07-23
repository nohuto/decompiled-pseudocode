/*
 * XREFs of IopPnPDispatch @ 0x140748B90
 * Callers:
 *     <none>
 * Callees:
 *     IoDeleteDevice @ 0x140203350 (IoDeleteDevice.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IoInvalidateDeviceRelations @ 0x14036E6C0 (IoInvalidateDeviceRelations.c)
 *     IopPnPCompleteRequest @ 0x14037052C (IopPnPCompleteRequest.c)
 *     RtlCompareMemory @ 0x140405B40 (RtlCompareMemory.c)
 *     memset @ 0x140411300 (memset.c)
 *     PiGetDeviceRegProperty @ 0x140668D88 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegProp @ 0x14066B77C (_CmGetDeviceRegProp.c)
 *     IopGetRootDevices @ 0x140747F2C (IopGetRootDevices.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x140749C64 (PnpGetDeviceResourcesFromRegistry.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopPnPDispatch(PDEVICE_OBJECT DeviceObject, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  _QWORD *v3; // r12
  WCHAR *Information; // r14
  unsigned int MinorFunction; // r8d
  unsigned int v8; // r8d
  _QWORD *v9; // rdx
  PIO_SECURITY_CONTEXT v10; // rbx
  __m128i si128; // xmm0
  NTSTATUS RootDevices; // ebx
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  unsigned int v17; // r8d
  PVOID v18; // rcx
  GUID *SecurityContext; // rcx
  GUID *v20; // rcx
  LARGE_INTEGER ByteOffset; // rax
  int Length; // eax
  __int64 v23; // rdx
  WCHAR *Src; // rdi
  WCHAR *v25; // rcx
  int v26; // r9d
  WCHAR *v27; // r8
  WCHAR v28; // dx
  WCHAR *PoolWithTag; // rax
  WCHAR *v30; // rbx
  LARGE_INTEGER v31; // rdx
  void *v32; // rax
  _DWORD *DeviceNode; // rcx
  wchar_t *v34; // rax
  _WORD *v35; // rdi
  int v36; // r12d
  _WORD *v37; // rdx
  __int16 v38; // cx
  char *v39; // rdx
  __int16 v40; // cx
  signed __int64 v41; // rdx
  _QWORD *v42; // rbx
  __int64 v43; // rdx
  int v44; // edx
  int v45; // r8d
  _QWORD v46[2]; // [rsp+40h] [rbp-10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+98h] [rbp+48h] BYREF
  int v48; // [rsp+A0h] [rbp+50h] BYREF
  int v49; // [rsp+A8h] [rbp+58h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v48 = 0;
  v49 = 0;
  Information = 0LL;
  MinorFunction = CurrentStackLocation->MinorFunction;
  v46[0] = 0LL;
  if ( MinorFunction <= 8 )
  {
    if ( MinorFunction != 8 )
    {
      if ( MinorFunction < 2 )
        goto LABEL_9;
      if ( MinorFunction == 2 )
      {
        if ( DeviceObject )
          DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
        else
          DeviceNode = 0LL;
        if ( !DeviceNode || (DeviceNode[99] & 0x10000) != 0 )
          IoDeleteDevice(DeviceObject);
        IoInvalidateDeviceRelations(*((PDEVICE_OBJECT *)IopRootDeviceNode + 4), SingleBusRelations);
        goto LABEL_9;
      }
      if ( MinorFunction == 3 )
        goto LABEL_9;
      if ( MinorFunction <= 5 )
        goto LABEL_77;
      if ( MinorFunction == 6 )
      {
LABEL_9:
        RootDevices = 0;
        goto LABEL_19;
      }
      if ( DeviceObject == *((PDEVICE_OBJECT *)IopRootDeviceNode + 4) && !CurrentStackLocation->Parameters.Read.Length )
      {
        RootDevices = IopGetRootDevices(v46);
        goto LABEL_62;
      }
      if ( CurrentStackLocation->Parameters.Read.Length != 4 )
        goto LABEL_18;
      PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x64647050u);
      v30 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_76;
      *(_DWORD *)PoolWithTag = 1;
      *((_QWORD *)PoolWithTag + 1) = DeviceObject;
      ObfReferenceObject(DeviceObject);
      Information = v30;
LABEL_59:
      RootDevices = 0;
      goto LABEL_19;
    }
    RootDevices = a2->IoStatus.Status;
    if ( DeviceObject )
      v18 = DeviceObject->DeviceObjectExtension->DeviceNode;
    else
      v18 = 0LL;
    if ( v18 != IopRootDeviceNode )
      goto LABEL_19;
    SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
    if ( SecurityContext != &GUID_ARBITER_INTERFACE_STANDARD
      && RtlCompareMemory(SecurityContext, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) != 16 )
    {
      v20 = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
      if ( v20 != &GUID_TRANSLATOR_INTERFACE_STANDARD
        && RtlCompareMemory(v20, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) != 16 )
      {
        goto LABEL_19;
      }
      ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
      *(_QWORD *)(ByteOffset.QuadPart + 32) = IopTranslatorHandlerCm;
      *(_QWORD *)(ByteOffset.QuadPart + 40) = IopTranslatorHandlerIo;
      goto LABEL_59;
    }
    v31 = CurrentStackLocation->Parameters.Read.ByteOffset;
    RootDevices = 0;
    *(_QWORD *)(v31.QuadPart + 32) = ArbArbiterHandler;
    if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 1 )
    {
      v32 = &IopRootPortArbiter;
      goto LABEL_68;
    }
    if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 2 )
    {
      v32 = &IopRootIrqArbiter;
      goto LABEL_68;
    }
    if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists != 3 )
    {
      if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 4 )
      {
        v32 = &IopRootDmaArbiter;
LABEL_68:
        *(_QWORD *)(v31.QuadPart + 8) = v32;
        goto LABEL_19;
      }
      if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 6 )
      {
        v32 = &IopRootBusNumberArbiter;
        goto LABEL_68;
      }
      if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists != 7 )
      {
        RootDevices = -1073741811;
        goto LABEL_19;
      }
    }
    v32 = &IopRootMemArbiter;
    goto LABEL_68;
  }
  v8 = MinorFunction - 9;
  if ( !v8 )
  {
    if ( DeviceObject )
      v9 = DeviceObject->DeviceObjectExtension->DeviceNode;
    else
      v9 = 0LL;
    v10 = CurrentStackLocation->Parameters.Create.SecurityContext;
    LODWORD(v10->SecurityQos) = 65600;
    if ( DeviceObject == *((PDEVICE_OBJECT *)IopRootDeviceNode + 4) )
    {
      HIDWORD(v10->SecurityQos) |= 0x1C0u;
      HIDWORD(v10->AccessState) = 0;
    }
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v10->DesiredAccess = 0;
    v10->FullCreateOptions = 1;
    *(__m128i *)&v10[1].SecurityQos = si128;
    v10[1].DesiredAccess = _mm_cvtsi128_si32(si128);
    if ( HIDWORD(v10->AccessState) == -1 )
    {
      LODWORD(NumberOfBytes) = 4;
      if ( (int)CmGetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  v9[6],
                  0LL,
                  17,
                  (__int64)&v48,
                  (__int64)&v49,
                  (__int64)&NumberOfBytes,
                  0) >= 0
        && v48 == 4
        && (_DWORD)NumberOfBytes == 4 )
      {
        HIDWORD(v10->AccessState) = v49;
      }
    }
    goto LABEL_9;
  }
  v14 = v8 - 1;
  if ( !v14 )
  {
    v44 = 0;
    v45 = 4;
LABEL_126:
    RootDevices = PnpGetDeviceResourcesFromRegistry(
                    (_DWORD)DeviceObject,
                    v44,
                    v45,
                    (unsigned int)v46,
                    (__int64)&NumberOfBytes);
    if ( RootDevices == -1073741772 )
      goto LABEL_9;
LABEL_62:
    Information = (WCHAR *)v46[0];
    goto LABEL_19;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v44 = 1;
    v45 = 2;
    goto LABEL_126;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( CurrentStackLocation->Parameters.Read.Length != 1 || a2->IoStatus.Information )
      goto LABEL_18;
    if ( DeviceObject )
      v42 = DeviceObject->DeviceObjectExtension->DeviceNode;
    else
      v42 = 0LL;
    PiGetDeviceRegProperty(v42[6], (__int64)a2, 1, 0xEu, 0LL, (PULONG)&NumberOfBytes);
    if ( (_DWORD)NumberOfBytes )
    {
      Information = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64647050u);
      if ( Information )
      {
        RootDevices = PiGetDeviceRegProperty(v42[6], v43, 1, 0xEu, Information, (PULONG)&NumberOfBytes);
        if ( RootDevices < 0 )
        {
          if ( RootDevices == -1073741275 )
            RootDevices = -1073741772;
          ExFreePoolWithTag(Information, 0);
          Information = 0LL;
        }
        goto LABEL_19;
      }
      goto LABEL_76;
    }
LABEL_77:
    RootDevices = -1073741823;
    goto LABEL_19;
  }
  v17 = v16 - 7;
  if ( v17 )
  {
    if ( v17 == 3 )
      goto LABEL_9;
LABEL_18:
    Information = (WCHAR *)a2->IoStatus.Information;
    RootDevices = a2->IoStatus.Status;
    goto LABEL_19;
  }
  if ( DeviceObject == *((PDEVICE_OBJECT *)IopRootDeviceNode + 4) )
    goto LABEL_18;
  RootDevices = a2->IoStatus.Status;
  if ( RootDevices >= 0 )
  {
    if ( a2->IoStatus.Information )
      goto LABEL_18;
  }
  if ( DeviceObject )
    v3 = DeviceObject->DeviceObjectExtension->DeviceNode;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v46[0] = v3;
  if ( Length )
  {
    if ( Length <= 0 )
      goto LABEL_95;
    if ( Length <= 2 )
    {
      if ( RootDevices == -1073741637 )
      {
        RootDevices = PiGetDeviceRegProperty(
                        v3[6],
                        (__int64)a2,
                        7,
                        (unsigned int)(Length != 1) + 2,
                        0LL,
                        (PULONG)&NumberOfBytes);
        if ( RootDevices == -1073741789 )
        {
          Src = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64647050u);
          if ( Src )
          {
            RootDevices = PiGetDeviceRegProperty(
                            v3[6],
                            v23,
                            7,
                            (unsigned int)(CurrentStackLocation->Parameters.Read.Length != 1) + 2,
                            Src,
                            (PULONG)&NumberOfBytes);
            v25 = Src;
            if ( RootDevices < 0 )
            {
              ExFreePoolWithTag(Src, 0);
            }
            else
            {
              v26 = NumberOfBytes;
              v27 = 0LL;
              if ( Src < (WCHAR *)((char *)Src + ((unsigned int)NumberOfBytes & 0xFFFFFFFE)) )
              {
                do
                {
                  v28 = *v25;
                  if ( *v25 )
                  {
                    if ( (unsigned __int16)(v28 - 32) > 0x5Fu || v28 == 44 )
                    {
                      *v25 = 63;
                      v26 = NumberOfBytes;
                    }
                  }
                  else
                  {
                    if ( v27 && v25 == v27 + 1 )
                      break;
                    v27 = v25;
                  }
                  ++v25;
                }
                while ( v25 < (WCHAR *)((char *)Src + (v26 & 0xFFFFFFFE)) );
              }
              Information = Src;
            }
          }
          else
          {
            RootDevices = -1073741670;
          }
        }
        if ( RootDevices == -1073741275 )
        {
          Information = (WCHAR *)a2->IoStatus.Information;
          RootDevices = a2->IoStatus.Status;
        }
      }
      goto LABEL_19;
    }
    if ( Length != 3 )
    {
      if ( Length == 5 )
      {
        v34 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x64647050u);
        if ( v34 )
        {
          Information = v34;
          wcscpy(v34, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
          RootDevices = 0;
          goto LABEL_19;
        }
        goto LABEL_76;
      }
LABEL_95:
      Information = (WCHAR *)a2->IoStatus.Information;
      goto LABEL_19;
    }
  }
  v35 = ExAllocatePoolWithTag(PagedPool, *((unsigned __int16 *)v3 + 20), 0x64647050u);
  if ( !v35 )
  {
LABEL_76:
    RootDevices = -1073741670;
    goto LABEL_19;
  }
  v36 = 0;
  memset(v35, 0, *(unsigned __int16 *)(v46[0] + 40LL));
  Information = v35;
  RootDevices = 0;
  v37 = *(_WORD **)(v46[0] + 48LL);
  v38 = *v37;
  if ( CurrentStackLocation->Parameters.Read.Length )
  {
    while ( v38 )
    {
      if ( v38 == 92 && ++v36 == 2 )
      {
        v39 = (char *)(v37 + 1);
        v40 = *(_WORD *)v39;
        if ( *(_WORD *)v39 )
        {
          v41 = v39 - (char *)v35;
          do
          {
            *v35++ = v40;
            v40 = *(_WORD *)((char *)v35 + v41);
          }
          while ( v40 );
        }
        break;
      }
      v38 = *++v37;
    }
  }
  else
  {
    while ( v38 )
    {
      if ( v38 == 92 && ++v36 == 2 )
        break;
      *v35++ = v38;
      v38 = *++v37;
    }
  }
LABEL_19:
  IopPnPCompleteRequest(a2, RootDevices, (ULONG_PTR)Information);
  return (unsigned int)RootDevices;
}
