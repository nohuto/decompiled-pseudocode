/*
 * XREFs of RIMGetKbdExId @ 0x1C001A61C
 * Callers:
 *     RIMQueryDev @ 0x1C00179F8 (RIMQueryDev.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C001A858 (WPP_RECORDER_SF_S.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00A5C70 (Win32AllocPoolNonPaged.c)
 */

__int64 __fastcall RIMGetKbdExId(HANDLE FileHandle, _QWORD *a2)
{
  NTSTATUS v4; // edi
  int v5; // edx
  char *v6; // rax
  char *v7; // rbx
  struct _UNICODE_STRING InstanceName; // [rsp+30h] [rbp-10h] BYREF
  ULONG InOutBufferSize; // [rsp+70h] [rbp+30h] BYREF
  PVOID DataBlockObject; // [rsp+78h] [rbp+38h] BYREF

  InOutBufferSize = 0;
  DataBlockObject = 0LL;
  InstanceName = 0LL;
  v4 = IoWMIOpenBlock(&MSKeyboard_ExtendedID_GUID, 1u, &DataBlockObject);
  if ( v4 >= 0 )
  {
    v4 = IoWMIHandleToInstanceName(DataBlockObject, FileHandle, &InstanceName);
    if ( v4 >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_S(
          (_DWORD)gRimLog,
          v5,
          1,
          19,
          (__int64)&WPP_99eccd248eee36c6f62dce0f5a5ff16d_Traceguids,
          (__int64)InstanceName.Buffer);
      }
      IoWMIQuerySingleInstance(DataBlockObject, &InstanceName, &InOutBufferSize, 0LL);
      InOutBufferSize += 8;
      v6 = (char *)Win32AllocPoolNonPaged(InOutBufferSize, 1701540690LL);
      v7 = v6;
      if ( v6 )
      {
        v4 = IoWMIQuerySingleInstance(DataBlockObject, &InstanceName, &InOutBufferSize, v6);
        if ( v4 >= 0 )
          *a2 = *(_QWORD *)&v7[*((unsigned int *)v7 + 14)];
        Win32FreePool(v7);
      }
      RtlFreeUnicodeString(&InstanceName);
    }
    ObfDereferenceObject(DataBlockObject);
  }
  return (unsigned int)v4;
}
