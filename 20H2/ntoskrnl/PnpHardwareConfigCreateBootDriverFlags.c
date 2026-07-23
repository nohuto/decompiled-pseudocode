/*
 * XREFs of PnpHardwareConfigCreateBootDriverFlags @ 0x1407A2124
 * Callers:
 *     IopMarkBootPartition @ 0x140A5A330 (IopMarkBootPartition.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x1403F81F0 (ZwWaitForSingleObject.c)
 *     ZwDeviceIoControlFile @ 0x1403F8250 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwCreateEvent @ 0x1403F8A70 (ZwCreateEvent.c)
 *     ZwResetEvent @ 0x1403FB090 (ZwResetEvent.c)
 *     _RegRtlQueryValue @ 0x14066D6DC (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x14066DA70 (_SysCtxRegOpenKey.c)
 *     _RegRtlSetValue @ 0x140765854 (_RegRtlSetValue.c)
 *     PipHardwareConfigOpenKey @ 0x1407A2250 (PipHardwareConfigOpenKey.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpHardwareConfigCreateBootDriverFlags(__int64 a1, void *a2)
{
  _DWORD *OutputBuffer; // rdi
  int Status; // ebx
  __int64 v6; // rcx
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // [rsp+50h] [rbp-49h] BYREF
  unsigned int v11[3]; // [rsp+54h] [rbp-45h] BYREF
  int v12; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v13; // [rsp+64h] [rbp-35h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-31h] BYREF
  int v15; // [rsp+70h] [rbp-29h] BYREF
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp-21h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-1h] BYREF
  __int64 InputBuffer; // [rsp+C8h] [rbp+2Fh] BYREF
  int v21; // [rsp+D0h] [rbp+37h]

  NumberOfBytes = 0LL;
  v10 = 0;
  InputBuffer = 0LL;
  v21 = 0;
  OutputBuffer = 0LL;
  v12 = 0;
  v15 = 0;
  *(_QWORD *)&v11[1] = 0LL;
  v13 = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( !a2 )
    return (unsigned int)-1073741811;
  Status = PipHardwareConfigOpenKey(a1, 131097LL, &Handle);
  if ( Status >= 0 )
  {
    v11[0] = 4;
    Status = RegRtlQueryValue(Handle, L"BootDriverFlags", &v12, &v15, v11);
    if ( Status == -1073741772 )
    {
      v21 = 0;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      Status = ZwCreateEvent((PHANDLE)&v11[1], 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
      if ( Status >= 0 )
      {
        Status = ZwDeviceIoControlFile(
                   a2,
                   *(HANDLE *)&v11[1],
                   0LL,
                   0LL,
                   &IoStatusBlock,
                   0x2D1400u,
                   &InputBuffer,
                   0xCu,
                   &NumberOfBytes,
                   8u);
        if ( Status == 259 )
        {
          Status = ZwWaitForSingleObject(*(HANDLE *)&v11[1], 0, 0LL);
          if ( Status < 0 )
            goto LABEL_4;
          Status = IoStatusBlock.Status;
        }
        if ( Status >= 0 )
        {
          OutputBuffer = ExAllocatePoolWithTag(PagedPool, HIDWORD(NumberOfBytes), 0x6E697050u);
          if ( !OutputBuffer )
          {
            Status = -1073741670;
            goto LABEL_4;
          }
          ZwResetEvent(*(HANDLE *)&v11[1], 0LL);
          Status = ZwDeviceIoControlFile(
                     a2,
                     *(HANDLE *)&v11[1],
                     0LL,
                     0LL,
                     &IoStatusBlock,
                     0x2D1400u,
                     &InputBuffer,
                     0xCu,
                     OutputBuffer,
                     HIDWORD(NumberOfBytes));
          if ( Status == 259 )
          {
            Status = ZwWaitForSingleObject(*(HANDLE *)&v11[1], 0, 0LL);
            if ( Status < 0 )
              goto LABEL_4;
            Status = IoStatusBlock.Status;
          }
          if ( Status < 0 )
            goto LABEL_4;
          v6 = 0LL;
          if ( *(_QWORD *)&PiPnpRtlCtx )
            v6 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
          Status = SysCtxRegOpenKey(
                     v6,
                     2147483650LL,
                     (__int64)L"System\\CurrentControlSet\\Control",
                     0,
                     1u,
                     (__int64)&KeyHandle);
          if ( Status < 0 )
            goto LABEL_4;
          v11[0] = 4;
          Status = RegRtlQueryValue(KeyHandle, L"BootDriverFlags", &v12, &v13, v11);
          if ( Status < 0 )
            goto LABEL_4;
          v7 = v13 & 0xFFFFFFE3;
          v10 = v13 & 0xFFFFFFE3;
          v8 = OutputBuffer[7];
          if ( v8 > 0 )
          {
            if ( v8 <= 3 )
              goto LABEL_39;
            switch ( v8 )
            {
              case 7:
                v9 = v7 | 0x14;
                goto LABEL_43;
              case 11:
LABEL_39:
                Status = RegRtlSetValue(Handle, L"BootDriverFlags", 4u, &v10, 4u);
                goto LABEL_4;
              case 12:
                v9 = v7 | 8;
                goto LABEL_43;
            }
            if ( v8 > 14 )
            {
              if ( v8 > 16 )
              {
                if ( v8 == 17 || v8 == 19 )
                  goto LABEL_39;
                goto LABEL_38;
              }
              v9 = v13;
LABEL_43:
              v10 = v9;
              goto LABEL_39;
            }
          }
LABEL_38:
          v10 = v13;
          goto LABEL_39;
        }
      }
    }
  }
LABEL_4:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( OutputBuffer )
    ExFreePoolWithTag(OutputBuffer, 0);
  if ( *(_QWORD *)&v11[1] )
    ZwClose(*(HANDLE *)&v11[1]);
  return (unsigned int)Status;
}
