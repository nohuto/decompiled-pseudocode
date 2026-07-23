/*
 * XREFs of IopGetBootDiskInformation @ 0x140A8D88C
 * Callers:
 *     IoGetBootDiskInformation @ 0x14088F7E0 (IoGetBootDiskInformation.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140203280 (RtlInitAnsiString.c)
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 *     RtlEqualString @ 0x14025BBE0 (RtlEqualString.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     IopBuildDeviceIoControlRequest @ 0x140279670 (IopBuildDeviceIoControlRequest.c)
 *     RtlStringCchPrintfA @ 0x1403B33E4 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     IoGetDeviceObjectPointer @ 0x1405DB6A0 (IoGetDeviceObjectPointer.c)
 *     RtlAnsiStringToUnicodeString @ 0x14068A690 (RtlAnsiStringToUnicodeString.c)
 *     IoGetConfigurationInformation @ 0x14076CF90 (IoGetConfigurationInformation.c)
 *     IopVerifyDiskSignature @ 0x1407BE818 (IopVerifyDiskSignature.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopGetBootDiskInformation(__int64 a1, unsigned int a2)
{
  int v4; // r12d
  bool v6; // cf
  __int64 v7; // rbx
  __int64 v8; // rsi
  _QWORD **v9; // r13
  const CHAR *v10; // rdx
  ULONG v11; // eax
  NTSTATUS DeviceObjectPointer; // ebx
  struct _DEVICE_OBJECT *v13; // r15
  IRP *v14; // rax
  NTSTATUS Status; // eax
  unsigned int v16; // r14d
  SIZE_T i; // rdx
  IRP *v18; // rdi
  NTSTATUS v19; // edi
  _DWORD *PoolWithTag; // rbx
  int v21; // eax
  _QWORD *j; // r14
  char v23; // al
  __int64 v24; // r15
  __int64 v25; // r13
  int v26; // [rsp+58h] [rbp-B0h] BYREF
  ULONG DiskCount; // [rsp+5Ch] [rbp-ACh]
  __int64 v28; // [rsp+60h] [rbp-A8h]
  PFILE_OBJECT FileObject; // [rsp+68h] [rbp-A0h] BYREF
  struct _KEVENT FileObject_8; // [rsp+70h] [rbp-98h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK v32; // [rsp+90h] [rbp-78h] BYREF
  _QWORD **v33; // [rsp+A0h] [rbp-68h]
  __int64 v34; // [rsp+A8h] [rbp-60h]
  _QWORD **v35; // [rsp+B0h] [rbp-58h]
  UNICODE_STRING ObjectName; // [rsp+B8h] [rbp-50h] BYREF
  STRING String1; // [rsp+C8h] [rbp-40h] BYREF
  STRING SourceString; // [rsp+D8h] [rbp-30h] BYREF
  STRING DestinationString; // [rsp+E8h] [rbp-20h] BYREF
  STRING String2; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v41; // [rsp+108h] [rbp+0h] BYREF
  __int64 v42; // [rsp+118h] [rbp+10h]
  char pszDest[128]; // [rsp+128h] [rbp+20h] BYREF
  CHAR v44[128]; // [rsp+1A8h] [rbp+A0h] BYREF

  v34 = a1;
  v42 = 0LL;
  DestinationString = 0LL;
  DeviceObject = 0LL;
  SourceString = 0LL;
  FileObject = 0LL;
  ObjectName = 0LL;
  String1 = 0LL;
  v32 = 0LL;
  v41 = 0LL;
  memset(&FileObject_8, 0, sizeof(FileObject_8));
  String2 = 0LL;
  v4 = 0;
  v26 = 0;
  DiskCount = IoGetConfigurationInformation()->DiskCount;
  if ( (unsigned int)InitializationPhase >= 2 )
    return 3221225865LL;
  if ( a2 < 0x18 )
    return 3221225485LL;
  v6 = a2 < 0x40;
  v7 = KeLoaderBlock_0;
  v8 = 0LL;
  if ( !v6 )
    v8 = a1;
  v9 = *(_QWORD ***)(KeLoaderBlock_0 + 232);
  v10 = *(const CHAR **)(KeLoaderBlock_0 + 184);
  v35 = v9;
  v33 = (_QWORD **)**v9;
  RtlInitAnsiString(&DestinationString, v10);
  RtlInitAnsiString(&String2, *(PCSZ *)(v7 + 192));
  v11 = 0;
  for ( LODWORD(v28) = 0; v11 < DiskCount; LODWORD(v28) = v11 )
  {
    RtlStringCchPrintfA(pszDest, 0x80uLL, "\\Device\\Harddisk%d\\Partition0", v11);
    RtlInitAnsiString(&SourceString, pszDest);
    if ( RtlAnsiStringToUnicodeString(&ObjectName, &SourceString, 1u) < 0 )
      goto LABEL_26;
    DeviceObjectPointer = IoGetDeviceObjectPointer(&ObjectName, 0x80u, &FileObject, &DeviceObject);
    RtlFreeAnsiString(&ObjectName);
    if ( DeviceObjectPointer < 0 )
      goto LABEL_26;
    v13 = DeviceObject;
    v14 = IopBuildDeviceIoControlRequest(458752, (int)DeviceObject, 0LL, 0, &v41, 0x18u, 0, &FileObject_8, &v32);
    if ( !v14 )
      goto LABEL_11;
    LOWORD(FileObject_8.Header.Lock) = 0;
    FileObject_8.Header.WaitListHead.Blink = &FileObject_8.Header.WaitListHead;
    FileObject_8.Header.Size = 6;
    FileObject_8.Header.WaitListHead.Flink = &FileObject_8.Header.WaitListHead;
    FileObject_8.Header.SignalState = 0;
    Status = IofCallDriver(v13, v14);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&FileObject_8, Suspended, 0, 0, 0LL);
      Status = v32.Status;
    }
    if ( Status >= 0 )
    {
      v16 = 4096;
      for ( i = 4096LL; ; i = v16 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, i, 0x6F426F49u);
        if ( !PoolWithTag )
          break;
        v18 = IopBuildDeviceIoControlRequest(458832, (int)v13, 0LL, 0, PoolWithTag, v16, 0, &FileObject_8, &v32);
        if ( !v18 )
          break;
        KeResetEvent(&FileObject_8);
        v19 = IofCallDriver(v13, v18);
        if ( v19 == 259 )
        {
          KeWaitForSingleObject(&FileObject_8, Suspended, 0, 0, 0LL);
          v19 = v32.Status;
        }
        if ( v19 != -1073741789 )
          goto LABEL_23;
        ExFreePoolWithTag(PoolWithTag, 0);
        v16 *= 2;
      }
      v19 = -1073741670;
LABEL_23:
      ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
      if ( v19 >= 0 )
      {
        v21 = HIDWORD(v42);
        if ( HIDWORD(v42) < 0x200 )
          v21 = 512;
        HIDWORD(v42) = v21;
        for ( j = *v9; j != v9; j = (_QWORD *)*j )
        {
          if ( v33 != v9 || DiskCount != 1 || *PoolWithTag )
          {
            v23 = IopVerifyDiskSignature((__int64)PoolWithTag, (__int64)j, &v26);
            v4 = v26;
            if ( !v23 )
              continue;
          }
          v24 = 0LL;
          if ( PoolWithTag[1] )
          {
            v25 = v34;
            do
            {
              if ( !v4 && !*PoolWithTag )
                v4 = PoolWithTag[2];
              if ( PoolWithTag[36 * v24 + 18] )
              {
                RtlStringCchPrintfA(v44, 0x80uLL, "%spartition(%d)", (const char *)j[3], PoolWithTag[36 * v24 + 18]);
                RtlInitAnsiString(&String1, v44);
                if ( RtlEqualString(&String1, &DestinationString, 1u) )
                {
                  *(_DWORD *)(v25 + 16) = v4;
                  *(_QWORD *)v25 = *(_QWORD *)&PoolWithTag[36 * v24 + 14];
                  if ( v8 )
                  {
                    if ( *PoolWithTag == 1 )
                    {
                      *(_BYTE *)(v8 + 56) = 1;
                      *(_OWORD *)(v8 + 24) = *(_OWORD *)(PoolWithTag + 2);
                    }
                    else
                    {
                      *(_BYTE *)(v8 + 56) = 0;
                    }
                  }
                }
                if ( RtlEqualString(&String1, &String2, 1u) )
                {
                  *(_DWORD *)(v25 + 20) = v4;
                  *(_QWORD *)(v25 + 8) = *(_QWORD *)&PoolWithTag[36 * v24 + 14];
                  if ( *PoolWithTag == 1 )
                  {
                    if ( v8 )
                    {
                      *(_BYTE *)(v8 + 57) = 1;
                      *(_OWORD *)(v8 + 40) = *(_OWORD *)(PoolWithTag + 2);
                    }
                  }
                  else if ( v8 )
                  {
                    *(_BYTE *)(v8 + 57) = 0;
                  }
                }
              }
              v24 = (unsigned int)(v24 + 1);
            }
            while ( (unsigned int)v24 < PoolWithTag[1] );
            v9 = v35;
            v26 = v4;
          }
        }
LABEL_25:
        ExFreePoolWithTag(PoolWithTag, 0);
        goto LABEL_26;
      }
      if ( PoolWithTag )
        goto LABEL_25;
    }
    else
    {
LABEL_11:
      ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
    }
LABEL_26:
    v11 = v28 + 1;
  }
  return 0LL;
}
