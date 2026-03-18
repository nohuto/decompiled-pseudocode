/*
 * XREFs of IopInitializeBuiltinDriver @ 0x140B11EBC
 * Callers:
 *     PnpInitializeBootStartDriver @ 0x140B11D58 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     RtlEqualString @ 0x140238C70 (RtlEqualString.c)
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     VfDifCaptureDriverEntry @ 0x1402D8724 (VfDifCaptureDriverEntry.c)
 *     VfDifCaptureIoCallbacks @ 0x1402D8A7C (VfDifCaptureIoCallbacks.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObCreateObject @ 0x14066BA00 (ObCreateObject.c)
 *     ObInsertObject @ 0x14066BA50 (ObInsertObject.c)
 *     PnpPrepareDriverLoading @ 0x1406797C8 (PnpPrepareDriverLoading.c)
 *     ObMakeTemporaryObject @ 0x1406E1700 (ObMakeTemporaryObject.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     IopReadyDeviceObjects @ 0x140747D40 (IopReadyDeviceObjects.c)
 *     KseDriverLoadImage @ 0x14075CCC8 (KseDriverLoadImage.c)
 *     KseShimDriverIoCallbacks @ 0x14075ECF4 (KseShimDriverIoCallbacks.c)
 *     IopOpenRegistryKeyEx @ 0x14082EF44 (IopOpenRegistryKeyEx.c)
 *     PnpDriverLoadingFailed @ 0x140862BA0 (PnpDriverLoadingFailed.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     HdlspKernelAddLogEntry @ 0x140AA9A28 (HdlspKernelAddLogEntry.c)
 *     InbvIndicateProgress @ 0x140B12340 (InbvIndicateProgress.c)
 */

__int64 __fastcall IopInitializeBuiltinDriver(
        unsigned __int16 *a1,
        UNICODE_STRING *a2,
        DRIVER_INITIALIZE *a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _DRIVER_OBJECT **a6)
{
  __int64 v6; // r12
  unsigned __int16 *p_Length; // r13
  unsigned __int16 *v10; // rsi
  int inserted; // edi
  struct _DRIVER_OBJECT *v12; // rbx
  PVOID *v13; // rdi
  __int64 v14; // rax
  __int64 Pool2; // rax
  unsigned __int16 v16; // cx
  __int64 v17; // rdi
  PDRIVER_EXTENSION DriverExtension; // r15
  unsigned __int64 v19; // rax
  _WORD *v20; // rdx
  _WORD *v21; // rdi
  __int64 v22; // rax
  _WORD *i; // rdi
  unsigned __int16 v24; // ax
  void *v25; // r9
  UNICODE_STRING *p_ServiceKeyName; // r13
  PVOID v27; // rax
  unsigned __int16 v28; // cx
  UNICODE_STRING *v29; // r8
  int Image; // eax
  int v31; // eax
  __int64 v32; // rdx
  PVOID *NewObject; // [rsp+20h] [rbp-79h]
  int v35; // [rsp+50h] [rbp-49h] BYREF
  HANDLE v36; // [rsp+58h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-39h] BYREF
  PVOID Object; // [rsp+68h] [rbp-31h]
  PVOID v39; // [rsp+70h] [rbp-29h] BYREF
  _DWORD v40[2]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v41; // [rsp+80h] [rbp-19h]
  unsigned __int16 *v42; // [rsp+88h] [rbp-11h]
  int v43; // [rsp+90h] [rbp-9h]
  int v44; // [rsp+94h] [rbp-5h]
  __int128 v45; // [rsp+98h] [rbp-1h]
  bool v46; // [rsp+F0h] [rbp+57h] BYREF
  UNICODE_STRING *v47; // [rsp+F8h] [rbp+5Fh]

  v47 = a2;
  v6 = 0LL;
  Handle = 0LL;
  Object = 0LL;
  p_Length = &a2->Length;
  v40[1] = 0;
  *a6 = 0LL;
  v10 = a1;
  v44 = 0;
  v36 = 0LL;
  v35 = 0;
  v46 = 0;
  if ( HeadlessGlobals && HeadlessGlobals[1] )
    HdlspKernelAddLogEntry(1u, a1);
  v40[0] = 48;
  v41 = 0LL;
  LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
  v43 = 80;
  v42 = v10;
  v45 = 0LL;
  inserted = ObCreateObject((int)a1, (int)IoDriverObjectType, (int)v40, 0);
  if ( inserted >= 0 )
  {
    v12 = (struct _DRIVER_OBJECT *)Object;
    memset(Object, 0, 0x1A0uLL);
    v12->DriverExtension = (PDRIVER_EXTENSION)&v12[1];
    *(_QWORD *)&v12[1].Type = v12;
    memset64(v12->MajorFunction, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
    *(_DWORD *)&v12->Type = 22020100;
    v12->DriverInit = a3;
    inserted = ObInsertObject(v12, 0LL, 1u, 0, 0LL, &Handle);
    if ( inserted >= 0 )
    {
      ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v39, 0LL);
      v13 = (PVOID *)PsLoadedModuleList;
      if ( PsLoadedModuleList != &PsLoadedModuleList )
      {
        while ( a4 )
        {
          if ( RtlEqualString((const STRING *)(a4 + 88), (const STRING *)(v13 + 11), 1u) )
          {
            v12->DriverSection = v13;
LABEL_10:
            InbvIndicateProgress();
            goto LABEL_12;
          }
          v13 = (PVOID *)*v13;
          if ( v13 == &PsLoadedModuleList )
            goto LABEL_10;
        }
      }
      InbvIndicateProgress();
      if ( a4 )
      {
LABEL_12:
        v6 = *(_QWORD *)(a4 + 48);
        v14 = RtlImageNtHeader(v6);
        v12->DriverStart = (PVOID)v6;
        v12->DriverSize = *(_DWORD *)(v14 + 80);
        if ( (*(_WORD *)(v14 + 94) & 0x2000) != 0 )
          goto LABEL_14;
      }
      v12->Flags |= 2u;
LABEL_14:
      Pool2 = ExAllocatePool2(64LL, v10[1] + 2LL, 0x20206F49u);
      v16 = 0;
      v17 = Pool2;
      if ( Pool2 )
      {
        v12->DriverName.Buffer = (wchar_t *)Pool2;
        v12->DriverName.MaximumLength = v10[1];
        v12->DriverName.Length = *v10;
        memmove(v12->DriverName.Buffer, *((const void **)v10 + 1), v10[1]);
        *(_WORD *)(v17 + 2 * ((unsigned __int64)*v10 >> 1)) = 0;
        v16 = 0;
      }
      DriverExtension = v12->DriverExtension;
      if ( p_Length )
      {
        v19 = *p_Length;
        if ( (_WORD)v19 )
        {
          v20 = (_WORD *)*((_QWORD *)p_Length + 1);
          v21 = &v20[v19 >> 1];
          v22 = 4LL;
          if ( *(v21 - 1) != 92 )
            v22 = 2LL;
          for ( i = &v21[v22 / 0xFFFFFFFFFFFFFFFEuLL]; i != v20; --i )
          {
            if ( *i == 92 )
            {
              ++i;
              break;
            }
            v16 += 2;
          }
          v24 = v16 + 2;
          if ( i != v20 )
            v24 = v16;
          Object = (PVOID)v24;
          v25 = (void *)ExAllocatePool2(64LL, v24 + 2LL, 0x20206F49u);
          v39 = v25;
          p_ServiceKeyName = &DriverExtension->ServiceKeyName;
          if ( v25 )
          {
            v27 = Object;
            v28 = (_WORD)Object + 2;
            DriverExtension->ServiceKeyName.Buffer = (wchar_t *)v25;
            DriverExtension->ServiceKeyName.MaximumLength = v28;
            p_ServiceKeyName->Length = (unsigned __int16)v27;
            memmove(v25, i, (size_t)v27);
            v29 = v47;
            *((_WORD *)v39 + ((unsigned __int64)p_ServiceKeyName->Length >> 1)) = 0;
            inserted = IopOpenRegistryKeyEx(&v36, 0LL, v29, 0xF003Fu);
            if ( inserted >= 0 )
            {
              inserted = PnpPrepareDriverLoading((int)p_ServiceKeyName, v36, v6, a5, &v35, &v46);
              NtClose(v36);
              if ( inserted >= 0 )
              {
                p_Length = &v47->Length;
LABEL_32:
                if ( (v35 & 1) != 0 )
                  v12->Flags |= 0x100u;
                if ( v46 )
                  v12->Flags |= 0x1000u;
                v12->HardwareDatabase = &CmRegistryMachineHardwareDescriptionSystemName;
                VfDifCaptureDriverEntry((__int64)v12);
                Image = KseDriverLoadImage(a4);
                inserted = Image;
                if ( Image < 0 )
                {
                  LODWORD(NewObject) = Image;
                  DbgPrintEx(0x65u, 3u, "IOINIT: Built-in driver %wZ blocked with status - 0x%lX\n", v10, NewObject);
                }
                else
                {
                  v31 = ((__int64 (__fastcall *)(struct _DRIVER_OBJECT *, unsigned __int16 *))v12->DriverInit)(
                          v12,
                          p_Length);
                  inserted = v31;
                  if ( v31 < 0 )
                  {
                    if ( v31 == -1073741218 )
                    {
                      LODWORD(NewObject) = -1073741218;
                      DbgPrintEx(
                        0x65u,
                        3u,
                        "IOINIT: Built-in driver %wZ failed to initialize with status - 0x%lX\n",
                        v10,
                        NewObject);
                    }
                    else
                    {
                      LODWORD(NewObject) = v31;
                      DbgPrintEx(
                        0x65u,
                        0,
                        "IOINIT: Built-in driver %wZ failed to initialize with status - 0x%lX\n",
                        v10,
                        NewObject);
                    }
                  }
                  else
                  {
                    VfDifCaptureIoCallbacks(v12);
                    KseShimDriverIoCallbacks(
                      (__int64 *)&v12->Type,
                      v32,
                      (const void **)((a4 + 72) & -(__int64)(a4 != 0)));
                  }
                }
              }
            }
          }
          else
          {
            DriverExtension->ServiceKeyName.Buffer = 0LL;
            inserted = -1073741670;
            p_ServiceKeyName->Length = 0;
          }
          NtClose(Handle);
          if ( inserted < 0 )
          {
            if ( inserted != -1073741218 )
              PnpDriverLoadingFailed(0LL, &v12->DriverExtension->ServiceKeyName);
            if ( HeadlessGlobals && HeadlessGlobals[1] )
              HdlspKernelAddLogEntry(3u, 0LL);
            ObMakeTemporaryObject(v12);
            ObfDereferenceObject(v12);
          }
          else
          {
            IopReadyDeviceObjects((__int64)v12);
            if ( HeadlessGlobals && HeadlessGlobals[1] )
              HdlspKernelAddLogEntry(2u, 0LL);
            *a6 = v12;
          }
          return (unsigned int)inserted;
        }
      }
      *(_DWORD *)&DriverExtension->ServiceKeyName.Length = 0;
      DriverExtension->ServiceKeyName.Buffer = 0LL;
      goto LABEL_32;
    }
  }
  if ( HeadlessGlobals && HeadlessGlobals[1] )
    HdlspKernelAddLogEntry(3u, 0LL);
  return (unsigned int)inserted;
}
