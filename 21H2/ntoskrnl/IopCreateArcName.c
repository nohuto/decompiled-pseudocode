/*
 * XREFs of IopCreateArcName @ 0x1407804D8
 * Callers:
 *     IoCreateArcName @ 0x1407804C0 (IoCreateArcName.c)
 *     IopCreateArcNamesDisk @ 0x140A62CE8 (IopCreateArcNamesDisk.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x1402336E0 (IopVerifierExAllocatePool.c)
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x14026D570 (RtlStringCchPrintfW.c)
 *     IoBuildDeviceIoControlRequest @ 0x1402D09B0 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1403B86A4 (IopCreateUnicodeFromAnsiBuffer.c)
 *     RtlStringCchPrintfA @ 0x1403B86DC (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     IopBuildSynchronousFsdRequest @ 0x1406A8BE0 (IopBuildSynchronousFsdRequest.c)
 *     IoCreateSymbolicLink @ 0x14076DDE0 (IoCreateSymbolicLink.c)
 *     IopVerifyDiskSignature @ 0x1407D48A8 (IopVerifyDiskSignature.c)
 *     VhdiVerifyBootDisk @ 0x14098051C (VhdiVerifyBootDisk.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopCreateArcName(PDEVICE_OBJECT DeviceObject, int a2)
{
  _DWORD *v3; // r13
  int v4; // r15d
  _DWORD *PoolWithTag; // rsi
  PDEVICE_OBJECT v6; // rax
  SIZE_T OutputBufferLength; // rdi
  IRP *v8; // rbx
  NTSTATUS Status; // ebx
  IRP *v10; // rbx
  unsigned int v11; // eax
  SIZE_T i; // rdx
  IRP *v13; // rbx
  char v14; // bl
  PVOID *v15; // rdi
  PVOID *v16; // r11
  bool v18; // zf
  const wchar_t *v19; // r8
  const char *v20; // r12
  int v21; // edi
  _DWORD *Pool; // rax
  IRP *v23; // rax
  IRP *v24; // rbx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  char v27; // al
  unsigned __int8 *v28; // rcx
  __int64 v29; // r8
  int v30; // edx
  int v31; // eax
  PVOID OutputBuffer; // [rsp+20h] [rbp-E0h]
  struct _KEVENT Object; // [rsp+50h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+78h] [rbp-88h] BYREF
  LARGE_INTEGER v36; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  __int128 v38; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h] BYREF
  int v41; // [rsp+C0h] [rbp-40h]
  char v42[64]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t pszDest[64]; // [rsp+110h] [rbp+10h] BYREF
  __int64 retaddr; // [rsp+1D8h] [rbp+D8h]

  v40 = 0LL;
  v41 = 0;
  v3 = 0LL;
  v39 = 0LL;
  v4 = 0;
  PoolWithTag = 0LL;
  v6 = (PDEVICE_OBJECT)IoArcTableListHead;
  LODWORD(OutputBufferLength) = 4096;
  SymbolicLinkName = 0LL;
  DestinationString = 0LL;
  v38 = 0LL;
  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  while ( 1 )
  {
    if ( v6 == (PDEVICE_OBJECT)&IoArcTableListHead )
    {
      if ( a2 == -1 )
      {
        v8 = IoBuildDeviceIoControlRequest(0x2D1080u, DeviceObject, 0LL, 0, &v40, 0xCu, 0, &Object, &IoStatusBlock);
        if ( !v8 )
          return (unsigned int)-1073741670;
        KeInitializeEvent(&Object, NotificationEvent, 0);
        Status = IofCallDriver(DeviceObject, v8);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( Status < 0 )
          return (unsigned int)Status;
      }
      else
      {
        HIDWORD(v40) = a2;
      }
      v10 = IoBuildDeviceIoControlRequest(0x70000u, DeviceObject, 0LL, 0, &v38, 0x18u, 0, &Object, &IoStatusBlock);
      if ( v10 )
      {
        KeInitializeEvent(&Object, NotificationEvent, 0);
        Status = IofCallDriver(DeviceObject, v10);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( Status < 0 )
          return (unsigned int)Status;
        v11 = HIDWORD(v39);
        if ( HIDWORD(v39) < 0x200 )
          v11 = 512;
        v18 = DeviceObject->DeviceType == 2;
        HIDWORD(v39) = v11;
        if ( !v18 )
        {
          for ( i = 4096LL; ; i = OutputBufferLength )
          {
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, i, 0x6F426F49u);
            if ( !PoolWithTag )
            {
              Status = -1073741670;
              goto LABEL_36;
            }
            v13 = IoBuildDeviceIoControlRequest(
                    0x70050u,
                    DeviceObject,
                    0LL,
                    0,
                    PoolWithTag,
                    OutputBufferLength,
                    0,
                    &Object,
                    &IoStatusBlock);
            if ( !v13 )
              break;
            KeResetEvent(&Object);
            Status = IofCallDriver(DeviceObject, v13);
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Object, Suspended, 0, 0, 0LL);
              Status = IoStatusBlock.Status;
            }
            if ( Status != -1073741789 )
              goto LABEL_23;
            ExFreePoolWithTag(PoolWithTag, 0);
            OutputBufferLength = (unsigned int)(2 * OutputBufferLength);
          }
          Status = -1073741670;
LABEL_23:
          if ( Status < 0 )
            goto LABEL_36;
          if ( *PoolWithTag != 2 && (*PoolWithTag || PoolWithTag[1] || PoolWithTag[2]) )
          {
            v14 = 0;
            goto LABEL_30;
          }
          v4 = PoolWithTag[3];
LABEL_29:
          v14 = 1;
LABEL_30:
          v15 = (PVOID *)IoArcTableListHead;
          v16 = &IoArcTableListHead;
          while ( 1 )
          {
            if ( v15 == v16 )
            {
              Status = -1073741637;
              goto LABEL_36;
            }
            if ( !*((_BYTE *)v15 + 72) && !v15[8] )
            {
              if ( v14 )
              {
                if ( *((_BYTE *)v15 + 36) )
                  goto LABEL_34;
                v18 = *((_DWORD *)v15 + 8) == v4;
              }
              else
              {
                if ( !(unsigned __int8)IopVerifyDiskSignature(PoolWithTag, v15, &v36) )
                  goto LABEL_34;
                if ( v15[7] )
                {
                  v27 = VhdiVerifyBootDisk(DeviceObject);
                  v16 = &IoArcTableListHead;
                  if ( !v27 )
                    goto LABEL_34;
                }
                if ( *PoolWithTag )
                  goto LABEL_47;
                v18 = *((_DWORD *)v15 + 8) == PoolWithTag[3];
              }
              if ( v18 )
              {
LABEL_47:
                v15[8] = DeviceObject;
                v19 = L"\\Device\\CdRom%d";
                if ( DeviceObject->DeviceType != 2 )
                  v19 = L"\\Device\\Harddisk%d\\Partition0";
                RtlStringCchPrintfW(pszDest, 0x40uLL, v19, HIDWORD(v40));
                RtlInitUnicodeString(&DestinationString, pszDest);
                v20 = (const char *)v15[3];
                RtlStringCchPrintfA(v42, 0x40uLL, "\\ArcName\\%s", v20);
                Status = IopCreateUnicodeFromAnsiBuffer(&SymbolicLinkName, v42);
                if ( Status >= 0 )
                {
                  IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
                  RtlFreeAnsiString(&SymbolicLinkName);
                  if ( DeviceObject->DeviceType == 2 )
                  {
                    if ( (unsigned int)InitializationPhase < 2 )
                    {
                      v28 = (unsigned __int8 *)v15[3];
                      v29 = *(_QWORD *)(KeLoaderBlock_0 + 184) - (_QWORD)v28;
                      do
                      {
                        v30 = v28[v29];
                        v31 = *v28 - v30;
                        if ( v31 )
                          break;
                        ++v28;
                      }
                      while ( v30 );
                      if ( !v31 )
                        DeviceObject->Flags |= 0x100u;
                    }
                  }
                  else if ( PoolWithTag[1] )
                  {
                    Status = 0;
                    v21 = 1;
                    do
                    {
                      LODWORD(OutputBuffer) = v21;
                      RtlStringCchPrintfW(
                        pszDest,
                        0x40uLL,
                        L"\\Device\\Harddisk%d\\Partition%d",
                        HIDWORD(v40),
                        OutputBuffer);
                      RtlInitUnicodeString(&DestinationString, pszDest);
                      RtlStringCchPrintfA(v42, 0x40uLL, "\\ArcName\\%spartition(%d)", v20, v21);
                      if ( IopCreateUnicodeFromAnsiBuffer(&SymbolicLinkName, v42) >= 0 )
                      {
                        IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
                        RtlFreeAnsiString(&SymbolicLinkName);
                      }
                      ++v21;
                    }
                    while ( (unsigned int)(v21 - 1) < PoolWithTag[1] );
                  }
                }
LABEL_36:
                if ( PoolWithTag )
                  ExFreePoolWithTag(PoolWithTag, 0);
                goto LABEL_38;
              }
            }
LABEL_34:
            v15 = (PVOID *)*v15;
          }
        }
        v36.QuadPart = 0x8000LL;
        Pool = IopVerifierExAllocatePool(NonPagedPoolNxCacheAligned, v11);
        v3 = Pool;
        if ( Pool )
        {
          v23 = IopBuildSynchronousFsdRequest(
                  3u,
                  (__int64)DeviceObject,
                  Pool,
                  HIDWORD(v39),
                  &v36,
                  &Object,
                  &IoStatusBlock,
                  retaddr);
          v24 = v23;
          if ( !v23 )
          {
            Status = -1073741670;
            goto LABEL_38;
          }
          v23->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
          KeInitializeEvent(&Object, NotificationEvent, 0);
          Status = IofCallDriver(DeviceObject, v24);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
            Status = IoStatusBlock.Status;
          }
          if ( Status >= 0 )
          {
            v25 = 0LL;
            v26 = (unsigned __int64)HIDWORD(v39) >> 2;
            if ( v26 )
            {
              do
                v4 += v3[v25++];
              while ( v25 < v26 );
            }
            v4 = -v4;
            goto LABEL_29;
          }
LABEL_38:
          if ( v3 )
            ExFreePoolWithTag(v3, 0);
          return (unsigned int)Status;
        }
      }
      return (unsigned int)-1073741670;
    }
    if ( v6->DeviceExtension == DeviceObject )
      return 0LL;
    v6 = *(PDEVICE_OBJECT *)&v6->Type;
  }
}
