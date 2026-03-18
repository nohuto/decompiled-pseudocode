/*
 * XREFs of IopPnPDispatch @ 0x140763C50
 * Callers:
 *     <none>
 * Callees:
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     IopPnPCompleteRequest @ 0x1402DCDD8 (IopPnPCompleteRequest.c)
 *     IoInvalidateDeviceRelations @ 0x1402DCE90 (IoInvalidateDeviceRelations.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     IopGetRootDevices @ 0x1406CF708 (IopGetRootDevices.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x140748B18 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiGetDeviceRegProperty @ 0x1407741A4 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegProp @ 0x14077CD90 (_CmGetDeviceRegProp.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopPnPDispatch(PDEVICE_OBJECT DeviceObject, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  _QWORD *v3; // r12
  void *Information; // rsi
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
  int v23; // edx
  char *Src; // rdi
  char *v25; // rcx
  int v26; // r9d
  char *v27; // r8
  __int16 v28; // dx
  __int64 Pool2; // rax
  void *v30; // rbx
  LARGE_INTEGER v31; // rdx
  void *v32; // rax
  _DWORD *DeviceNode; // rcx
  wchar_t *v34; // rax
  _WORD *v35; // rax
  int v36; // r8d
  _WORD *v37; // rdx
  __int16 v38; // cx
  char *v39; // rdx
  __int16 v40; // cx
  signed __int64 v41; // rdx
  _QWORD *v42; // rbx
  int v43; // edx
  int v44; // edx
  char v45; // r8
  void *v46[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v47; // [rsp+98h] [rbp+48h] BYREF
  int v48; // [rsp+A0h] [rbp+50h] BYREF
  int v49; // [rsp+A8h] [rbp+58h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  LODWORD(v47) = 0;
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
        if ( !DeviceObject
          || (DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode) == 0LL
          || (DeviceNode[99] & 0x10000) != 0 )
        {
          IoDeleteDevice(DeviceObject);
        }
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
      Pool2 = ExAllocatePool2(256LL, 16LL, 1684303952LL);
      v30 = (void *)Pool2;
      if ( !Pool2 )
        goto LABEL_76;
      *(_DWORD *)Pool2 = 1;
      *(_QWORD *)(Pool2 + 8) = DeviceObject;
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
      LODWORD(v47) = 4;
      if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v9[6], 0, 17, (__int64)&v48, (__int64)&v49, (__int64)&v47, 0) >= 0
        && v48 == 4
        && (_DWORD)v47 == 4 )
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
LABEL_122:
    RootDevices = PnpGetDeviceResourcesFromRegistry((__int64)DeviceObject, v44, v45, v46, &v47);
    if ( RootDevices == -1073741772 )
      goto LABEL_9;
LABEL_62:
    Information = v46[0];
    goto LABEL_19;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v44 = 1;
    v45 = 2;
    goto LABEL_122;
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
    PiGetDeviceRegProperty(v42[6], (int)a2, 1, 14, 0LL, (__int64)&v47);
    if ( (_DWORD)v47 )
    {
      Information = (void *)ExAllocatePool2(256LL, (unsigned int)v47, 1684303952LL);
      if ( !Information )
        goto LABEL_76;
      RootDevices = PiGetDeviceRegProperty(v42[6], v43, 1, 14, Information, (__int64)&v47);
      if ( RootDevices < 0 )
      {
        if ( RootDevices == -1073741275 )
          RootDevices = -1073741772;
        ExFreePoolWithTag(Information, 0);
        Information = 0LL;
      }
      goto LABEL_19;
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
    Information = (void *)a2->IoStatus.Information;
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
  if ( Length )
  {
    if ( Length <= 0 )
      goto LABEL_92;
    if ( Length <= 2 )
    {
      if ( RootDevices != -1073741637 )
        goto LABEL_19;
      RootDevices = PiGetDeviceRegProperty(v3[6], (int)a2, 7, (unsigned int)(Length != 1) + 2, 0LL, (__int64)&v47);
      if ( RootDevices != -1073741789 )
        goto LABEL_54;
      Src = (char *)ExAllocatePool2(256LL, (unsigned int)v47, 1684303952LL);
      if ( Src )
      {
        RootDevices = PiGetDeviceRegProperty(
                        v3[6],
                        v23,
                        7,
                        (unsigned int)(CurrentStackLocation->Parameters.Read.Length != 1) + 2,
                        Src,
                        (__int64)&v47);
        v25 = Src;
        if ( RootDevices < 0 )
        {
          ExFreePoolWithTag(Src, 0);
        }
        else
        {
          v26 = v47;
          v27 = 0LL;
          if ( Src < &Src[v47 & 0xFFFFFFFE] )
          {
            do
            {
              v28 = *(_WORD *)v25;
              if ( *(_WORD *)v25 )
              {
                if ( (unsigned __int16)(v28 - 32) > 0x5Fu || v28 == 44 )
                {
                  *(_WORD *)v25 = 63;
                  v26 = v47;
                }
              }
              else
              {
                if ( v27 && v25 == v27 + 2 )
                  break;
                v27 = v25;
              }
              v25 += 2;
            }
            while ( v25 < &Src[v26 & 0xFFFFFFFE] );
          }
          Information = Src;
        }
LABEL_54:
        if ( RootDevices == -1073741275 )
        {
          Information = (void *)a2->IoStatus.Information;
          RootDevices = a2->IoStatus.Status;
        }
        goto LABEL_19;
      }
LABEL_76:
      RootDevices = -1073741670;
      goto LABEL_19;
    }
    if ( Length != 3 )
    {
      if ( Length == 5 )
      {
        v34 = (wchar_t *)ExAllocatePool2(256LL, 78LL, 1684303952LL);
        if ( v34 )
        {
          Information = v34;
          wcscpy(v34, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
          RootDevices = 0;
          goto LABEL_19;
        }
        goto LABEL_76;
      }
LABEL_92:
      Information = (void *)a2->IoStatus.Information;
      goto LABEL_19;
    }
  }
  v35 = (_WORD *)ExAllocatePool2(256LL, *((unsigned __int16 *)v3 + 20), 1684303952LL);
  if ( !v35 )
    goto LABEL_76;
  v36 = 0;
  v37 = (_WORD *)v3[6];
  Information = v35;
  RootDevices = 0;
  v38 = *v37;
  if ( CurrentStackLocation->Parameters.Read.Length )
  {
    if ( v38 )
    {
      while ( v38 != 92 || ++v36 != 2 )
      {
        v38 = *++v37;
        if ( !*v37 )
          goto LABEL_19;
      }
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
    }
  }
  else if ( v38 )
  {
    do
    {
      if ( v38 == 92 && ++v36 == 2 )
        break;
      ++v37;
      *v35++ = v38;
      v38 = *v37;
    }
    while ( *v37 );
  }
LABEL_19:
  IopPnPCompleteRequest(a2, RootDevices, (ULONG_PTR)Information);
  return (unsigned int)RootDevices;
}
