/*
 * XREFs of IopInitializeBuiltinDriver @ 0x140A576AC
 * Callers:
 *     PnpInitializeBootStartDriver @ 0x140A57548 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x1402033E4 (IopVerifierExAllocatePool.c)
 *     RtlEqualString @ 0x14025BBE0 (RtlEqualString.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     RtlImageNtHeader @ 0x14027DAE0 (RtlImageNtHeader.c)
 *     VfDifCaptureIoCallbacks @ 0x14037B100 (VfDifCaptureIoCallbacks.c)
 *     VfDifCaptureDriverEntry @ 0x14037B124 (VfDifCaptureDriverEntry.c)
 *     DbgPrintEx @ 0x14037C640 (DbgPrintEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x14062C900 (NtClose.c)
 *     ObInsertObject @ 0x140642820 (ObInsertObject.c)
 *     ObCreateObject @ 0x140643F10 (ObCreateObject.c)
 *     ObMakeTemporaryObject @ 0x140704430 (ObMakeTemporaryObject.c)
 *     PnpPrepareDriverLoading @ 0x14072311C (PnpPrepareDriverLoading.c)
 *     KseShimDriverIoCallbacks @ 0x140740FF4 (KseShimDriverIoCallbacks.c)
 *     KseDriverLoadImage @ 0x140743F4C (KseDriverLoadImage.c)
 *     IopReadyDeviceObjects @ 0x14075C77C (IopReadyDeviceObjects.c)
 *     IopOpenRegistryKeyEx @ 0x1407934A0 (IopOpenRegistryKeyEx.c)
 *     PnpDriverLoadingFailed @ 0x1407BCE60 (PnpDriverLoadingFailed.c)
 *     HdlspKernelAddLogEntry @ 0x1409EC9AC (HdlspKernelAddLogEntry.c)
 *     InbvIndicateProgress @ 0x140A57B88 (InbvIndicateProgress.c)
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
  char PreviousMode; // cl
  int inserted; // edi
  char *v13; // rbx
  PVOID *i; // rdi
  PIMAGE_NT_HEADERS v15; // rax
  _WORD *Pool; // rax
  _WORD *v17; // rdi
  __int64 v18; // r15
  unsigned __int64 v19; // rax
  _WORD *v20; // rdx
  __int64 v21; // rdi
  _WORD *v22; // rcx
  _WORD *v23; // rdi
  unsigned __int16 v24; // cx
  unsigned __int16 v25; // ax
  PVOID v26; // r9
  _WORD *v27; // r13
  PVOID v28; // rax
  __int16 v29; // cx
  UNICODE_STRING *v30; // r8
  int Image; // eax
  int v32; // eax
  __int64 v33; // rdx
  PVOID *NewObject; // [rsp+20h] [rbp-69h]
  HANDLE v36; // [rsp+50h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-31h] BYREF
  PVOID Object; // [rsp+60h] [rbp-29h] BYREF
  PVOID v39; // [rsp+68h] [rbp-21h] BYREF
  _DWORD v40[2]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v41; // [rsp+78h] [rbp-11h]
  unsigned __int16 *v42; // [rsp+80h] [rbp-9h]
  int v43; // [rsp+88h] [rbp-1h]
  int v44; // [rsp+8Ch] [rbp+3h]
  __int128 v45; // [rsp+90h] [rbp+7h]
  int v46; // [rsp+E0h] [rbp+57h] BYREF
  UNICODE_STRING *v47; // [rsp+E8h] [rbp+5Fh]

  v47 = a2;
  v6 = 0LL;
  Handle = 0LL;
  Object = 0LL;
  p_Length = &a2->Length;
  v40[1] = 0;
  *a6 = 0LL;
  v44 = 0;
  v36 = 0LL;
  v46 = 0;
  if ( HeadlessGlobals && HeadlessGlobals[1] )
    HdlspKernelAddLogEntry(1u, a1);
  v40[0] = 48;
  v41 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v43 = 80;
  v42 = a1;
  v45 = 0LL;
  inserted = ObCreateObject(PreviousMode, IoDriverObjectType, (__int64)v40, 0, 0, 416, 0, 0, &Object);
  if ( inserted >= 0 )
  {
    v13 = (char *)Object;
    memset(Object, 0, 0x1A0uLL);
    *((_QWORD *)v13 + 6) = v13 + 336;
    *((_QWORD *)v13 + 42) = v13;
    memset64(v13 + 112, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
    *(_DWORD *)v13 = 22020100;
    *((_QWORD *)v13 + 11) = a3;
    inserted = ObInsertObject(v13, 0LL, 1u, 0, 0LL, &Handle);
    if ( inserted >= 0 )
    {
      ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v39, 0LL);
      for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList && a4; i = (PVOID *)*i )
      {
        if ( RtlEqualString((const STRING *)(a4 + 88), (const STRING *)(i + 11), 1u) )
        {
          *((_QWORD *)v13 + 5) = i;
          break;
        }
      }
      InbvIndicateProgress();
      if ( !a4
        || (v6 = *(void **)(a4 + 48),
            v15 = RtlImageNtHeader(v6),
            *((_QWORD *)v13 + 3) = v6,
            *((_DWORD *)v13 + 8) = v15->OptionalHeader.SizeOfImage,
            (v15->OptionalHeader.DllCharacteristics & 0x2000) == 0) )
      {
        *((_DWORD *)v13 + 4) |= 2u;
      }
      Pool = IopVerifierExAllocatePool(NonPagedPoolNx, a1[1] + 2LL);
      v17 = Pool;
      if ( Pool )
      {
        *((_QWORD *)v13 + 8) = Pool;
        *((_WORD *)v13 + 29) = a1[1];
        *((_WORD *)v13 + 28) = *a1;
        memmove(*((void **)v13 + 8), *((const void **)a1 + 1), a1[1]);
        v17[(unsigned __int64)*a1 >> 1] = 0;
      }
      v18 = *((_QWORD *)v13 + 6);
      if ( p_Length )
      {
        v19 = *p_Length;
        if ( (_WORD)v19 )
        {
          v20 = (_WORD *)*((_QWORD *)p_Length + 1);
          v21 = 0x7FFFFFFFFFFFFFFELL;
          v22 = &v20[v19 >> 1];
          if ( *(v22 - 1) != 92 )
            v21 = 0x7FFFFFFFFFFFFFFFLL;
          v23 = &v22[v21];
          v24 = 0;
          if ( v23 != v20 )
          {
            while ( *v23 != 92 )
            {
              v24 += 2;
              if ( --v23 == v20 )
                goto LABEL_30;
            }
            ++v23;
          }
LABEL_30:
          v25 = v24 + 2;
          if ( v23 != v20 )
            v25 = v24;
          Object = (PVOID)v25;
          v26 = IopVerifierExAllocatePool(NonPagedPoolNx, v25 + 2LL);
          v39 = v26;
          v27 = (_WORD *)(v18 + 24);
          if ( v26 )
          {
            v28 = Object;
            v29 = (_WORD)Object + 2;
            *(_QWORD *)(v18 + 32) = v26;
            *(_WORD *)(v18 + 26) = v29;
            *v27 = (_WORD)v28;
            memmove(v26, v23, (size_t)v28);
            v30 = v47;
            *((_WORD *)v39 + ((unsigned __int64)(unsigned __int16)*v27 >> 1)) = 0;
            inserted = IopOpenRegistryKeyEx(&v36, 0LL, v30, 0xF003Fu);
            if ( inserted >= 0 )
            {
              inserted = PnpPrepareDriverLoading((int)v27, v36, v6, a5, &v46);
              NtClose(v36);
              if ( inserted >= 0 )
              {
                p_Length = &v47->Length;
LABEL_38:
                if ( (v46 & 1) != 0 )
                  *((_DWORD *)v13 + 4) |= 0x100u;
                *((_QWORD *)v13 + 9) = &CmRegistryMachineHardwareDescriptionSystemName;
                VfDifCaptureDriverEntry((__int64)v13);
                Image = KseDriverLoadImage(a4);
                inserted = Image;
                if ( Image >= 0 )
                {
                  v32 = (*((__int64 (__fastcall **)(char *, unsigned __int16 *))v13 + 11))(v13, p_Length);
                  inserted = v32;
                  if ( v32 < 0 )
                  {
                    if ( v32 == -1073741218 )
                    {
                      LODWORD(NewObject) = -1073741218;
                      DbgPrintEx(
                        0x65u,
                        3u,
                        "IOINIT: Built-in driver %wZ failed to initialize with status - 0x%lX\n",
                        a1,
                        NewObject);
                    }
                    else
                    {
                      LODWORD(NewObject) = v32;
                      DbgPrintEx(
                        0x65u,
                        0,
                        "IOINIT: Built-in driver %wZ failed to initialize with status - 0x%lX\n",
                        a1,
                        NewObject);
                    }
                  }
                  else
                  {
                    VfDifCaptureIoCallbacks((__int64)v13);
                    KseShimDriverIoCallbacks(v13, v33, (a4 + 72) & -(__int64)(a4 != 0));
                  }
                }
                else
                {
                  LODWORD(NewObject) = Image;
                  DbgPrintEx(0x65u, 3u, "IOINIT: Built-in driver %wZ blocked with status - 0x%lX\n", a1, NewObject);
                }
              }
            }
          }
          else
          {
            *(_QWORD *)(v18 + 32) = 0LL;
            inserted = -1073741670;
            *v27 = 0;
          }
          NtClose(Handle);
          if ( inserted < 0 )
          {
            if ( inserted != -1073741218 )
              PnpDriverLoadingFailed(0LL, (UNICODE_STRING *)(*((_QWORD *)v13 + 6) + 24LL));
            if ( HeadlessGlobals && HeadlessGlobals[1] )
              HdlspKernelAddLogEntry(3u, 0LL);
            ObMakeTemporaryObject(v13);
            ObfDereferenceObjectWithTag(v13, 0x746C6644u);
          }
          else
          {
            IopReadyDeviceObjects((__int64)v13);
            if ( HeadlessGlobals && HeadlessGlobals[1] )
              HdlspKernelAddLogEntry(2u, 0LL);
            *a6 = v13;
          }
          return (unsigned int)inserted;
        }
      }
      *(_DWORD *)(v18 + 24) = 0;
      *(_QWORD *)(v18 + 32) = 0LL;
      goto LABEL_38;
    }
  }
  if ( HeadlessGlobals && HeadlessGlobals[1] )
    HdlspKernelAddLogEntry(3u, 0LL);
  return (unsigned int)inserted;
}
