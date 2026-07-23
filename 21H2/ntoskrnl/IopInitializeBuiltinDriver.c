/*
 * XREFs of IopInitializeBuiltinDriver @ 0x140A5F618
 * Callers:
 *     PnpInitializeBootStartDriver @ 0x140A5F4B4 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     RtlEqualString @ 0x14022D5E0 (RtlEqualString.c)
 *     IopVerifierExAllocatePool @ 0x1402336E0 (IopVerifierExAllocatePool.c)
 *     RtlImageNtHeader @ 0x1403276A0 (RtlImageNtHeader.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     VfDifCaptureIoCallbacks @ 0x14037DA90 (VfDifCaptureIoCallbacks.c)
 *     VfDifCaptureDriverEntry @ 0x14037DAB4 (VfDifCaptureDriverEntry.c)
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObMakeTemporaryObject @ 0x14061C330 (ObMakeTemporaryObject.c)
 *     ObInsertObject @ 0x1406AB4A0 (ObInsertObject.c)
 *     ObCreateObject @ 0x1406ABDC0 (ObCreateObject.c)
 *     NtClose @ 0x140707D60 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     PnpPrepareDriverLoading @ 0x14073DBBC (PnpPrepareDriverLoading.c)
 *     KseShimDriverIoCallbacks @ 0x1407586E4 (KseShimDriverIoCallbacks.c)
 *     KseDriverLoadImage @ 0x14075B720 (KseDriverLoadImage.c)
 *     IopReadyDeviceObjects @ 0x14077171C (IopReadyDeviceObjects.c)
 *     IopOpenRegistryKeyEx @ 0x1407AC850 (IopOpenRegistryKeyEx.c)
 *     PnpDriverLoadingFailed @ 0x1407D2DC0 (PnpDriverLoadingFailed.c)
 *     HdlspKernelAddLogEntry @ 0x1409F09AC (HdlspKernelAddLogEntry.c)
 *     InbvIndicateProgress @ 0x140A5FAF4 (InbvIndicateProgress.c)
 */

__int64 __fastcall IopInitializeBuiltinDriver(
        unsigned __int16 *a1,
        UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        char **a6)
{
  void *v6; // r12
  unsigned __int16 *p_Length; // r13
  unsigned __int16 *v10; // rsi
  int inserted; // edi
  char *v12; // rbx
  PVOID *i; // rdi
  PIMAGE_NT_HEADERS v14; // rax
  _WORD *Pool; // rax
  _WORD *v16; // rdi
  __int64 v17; // r15
  unsigned __int64 v18; // rax
  _WORD *v19; // rdx
  __int64 v20; // rdi
  _WORD *v21; // rcx
  _WORD *v22; // rdi
  unsigned __int16 v23; // cx
  unsigned __int16 v24; // ax
  PVOID v25; // r9
  _WORD *v26; // r13
  PVOID v27; // rax
  __int16 v28; // cx
  UNICODE_STRING *v29; // r8
  int Image; // eax
  int v31; // eax
  __int64 v32; // rdx
  PVOID *NewObject; // [rsp+20h] [rbp-69h]
  HANDLE v35; // [rsp+50h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-31h] BYREF
  PVOID Object; // [rsp+60h] [rbp-29h]
  PVOID v38; // [rsp+68h] [rbp-21h] BYREF
  _DWORD v39[2]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v40; // [rsp+78h] [rbp-11h]
  unsigned __int16 *v41; // [rsp+80h] [rbp-9h]
  int v42; // [rsp+88h] [rbp-1h]
  int v43; // [rsp+8Ch] [rbp+3h]
  __int128 v44; // [rsp+90h] [rbp+7h]
  int v45; // [rsp+E0h] [rbp+57h] BYREF
  UNICODE_STRING *v46; // [rsp+E8h] [rbp+5Fh]

  v46 = a2;
  v6 = 0LL;
  Handle = 0LL;
  Object = 0LL;
  p_Length = &a2->Length;
  v39[1] = 0;
  *a6 = 0LL;
  v10 = a1;
  v43 = 0;
  v35 = 0LL;
  v45 = 0;
  if ( HeadlessGlobals && HeadlessGlobals[1] )
    HdlspKernelAddLogEntry(1u, a1);
  v39[0] = 48;
  v40 = 0LL;
  LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
  v42 = 80;
  v41 = v10;
  v44 = 0LL;
  inserted = ObCreateObject((int)a1, (int)IoDriverObjectType, (int)v39, 0);
  if ( inserted >= 0 )
  {
    v12 = (char *)Object;
    memset(Object, 0, 0x1A0uLL);
    *((_QWORD *)v12 + 6) = v12 + 336;
    *((_QWORD *)v12 + 42) = v12;
    memset64(v12 + 112, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
    *(_DWORD *)v12 = 22020100;
    *((_QWORD *)v12 + 11) = a3;
    inserted = ObInsertObject(v12, 0LL, 1u, 0, 0LL, &Handle);
    if ( inserted >= 0 )
    {
      ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v38, 0LL);
      for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList && a4; i = (PVOID *)*i )
      {
        if ( RtlEqualString((const STRING *)(a4 + 88), (const STRING *)(i + 11), 1u) )
        {
          *((_QWORD *)v12 + 5) = i;
          break;
        }
      }
      InbvIndicateProgress();
      if ( !a4
        || (v6 = *(void **)(a4 + 48),
            v14 = RtlImageNtHeader(v6),
            *((_QWORD *)v12 + 3) = v6,
            *((_DWORD *)v12 + 8) = v14->OptionalHeader.SizeOfImage,
            (v14->OptionalHeader.DllCharacteristics & 0x2000) == 0) )
      {
        *((_DWORD *)v12 + 4) |= 2u;
      }
      Pool = IopVerifierExAllocatePool(NonPagedPoolNx, v10[1] + 2LL);
      v16 = Pool;
      if ( Pool )
      {
        *((_QWORD *)v12 + 8) = Pool;
        *((_WORD *)v12 + 29) = v10[1];
        *((_WORD *)v12 + 28) = *v10;
        memmove(*((void **)v12 + 8), *((const void **)v10 + 1), v10[1]);
        v16[(unsigned __int64)*v10 >> 1] = 0;
      }
      v17 = *((_QWORD *)v12 + 6);
      if ( p_Length )
      {
        v18 = *p_Length;
        if ( (_WORD)v18 )
        {
          v19 = (_WORD *)*((_QWORD *)p_Length + 1);
          v20 = 0x7FFFFFFFFFFFFFFELL;
          v21 = &v19[v18 >> 1];
          if ( *(v21 - 1) != 92 )
            v20 = 0x7FFFFFFFFFFFFFFFLL;
          v22 = &v21[v20];
          v23 = 0;
          if ( v22 != v19 )
          {
            while ( *v22 != 92 )
            {
              v23 += 2;
              if ( --v22 == v19 )
                goto LABEL_30;
            }
            ++v22;
          }
LABEL_30:
          v24 = v23 + 2;
          if ( v22 != v19 )
            v24 = v23;
          Object = (PVOID)v24;
          v25 = IopVerifierExAllocatePool(NonPagedPoolNx, v24 + 2LL);
          v38 = v25;
          v26 = (_WORD *)(v17 + 24);
          if ( v25 )
          {
            v27 = Object;
            v28 = (_WORD)Object + 2;
            *(_QWORD *)(v17 + 32) = v25;
            *(_WORD *)(v17 + 26) = v28;
            *v26 = (_WORD)v27;
            memmove(v25, v22, (size_t)v27);
            v29 = v46;
            *((_WORD *)v38 + ((unsigned __int64)(unsigned __int16)*v26 >> 1)) = 0;
            inserted = IopOpenRegistryKeyEx(&v35, 0LL, v29, 0xF003Fu);
            if ( inserted >= 0 )
            {
              inserted = PnpPrepareDriverLoading((int)v26, v35, v6, a5, &v45);
              NtClose(v35);
              if ( inserted >= 0 )
              {
                p_Length = &v46->Length;
LABEL_38:
                if ( (v45 & 1) != 0 )
                  *((_DWORD *)v12 + 4) |= 0x100u;
                *((_QWORD *)v12 + 9) = &CmRegistryMachineHardwareDescriptionSystemName;
                VfDifCaptureDriverEntry((__int64)v12);
                Image = KseDriverLoadImage(a4);
                inserted = Image;
                if ( Image >= 0 )
                {
                  v31 = (*((__int64 (__fastcall **)(char *, unsigned __int16 *))v12 + 11))(v12, p_Length);
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
                    VfDifCaptureIoCallbacks((__int64)v12);
                    KseShimDriverIoCallbacks(v12, v32, (a4 + 72) & -(__int64)(a4 != 0));
                  }
                }
                else
                {
                  LODWORD(NewObject) = Image;
                  DbgPrintEx(0x65u, 3u, "IOINIT: Built-in driver %wZ blocked with status - 0x%lX\n", v10, NewObject);
                }
              }
            }
          }
          else
          {
            *(_QWORD *)(v17 + 32) = 0LL;
            inserted = -1073741670;
            *v26 = 0;
          }
          NtClose(Handle);
          if ( inserted < 0 )
          {
            if ( inserted != -1073741218 )
              PnpDriverLoadingFailed(0LL, (UNICODE_STRING *)(*((_QWORD *)v12 + 6) + 24LL));
            if ( HeadlessGlobals && HeadlessGlobals[1] )
              HdlspKernelAddLogEntry(3u, 0LL);
            ObMakeTemporaryObject(v12);
            ObfDereferenceObjectWithTag(v12, 0x746C6644u);
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
      *(_DWORD *)(v17 + 24) = 0;
      *(_QWORD *)(v17 + 32) = 0LL;
      goto LABEL_38;
    }
  }
  if ( HeadlessGlobals && HeadlessGlobals[1] )
    HdlspKernelAddLogEntry(3u, 0LL);
  return (unsigned int)inserted;
}
