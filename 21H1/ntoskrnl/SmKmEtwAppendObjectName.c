/*
 * XREFs of SmKmEtwAppendObjectName @ 0x140598088
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x140598620 (SmKmStoreTerminateWorker.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140203230 (IoSetThreadHardErrorMode.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14033DE1C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ObQueryNameString @ 0x1405D9580 (ObQueryNameString.c)
 */

__int64 __fastcall SmKmEtwAppendObjectName(__int64 a1, unsigned __int64 DeviceAttachmentBaseRefWithTag)
{
  unsigned int v2; // eax
  unsigned int v4; // r14d
  __int64 v6; // rdx
  void *v7; // r13
  _OBJECT_NAME_INFORMATION *v8; // rdi
  ULONG v9; // r14d
  void *v10; // rbp
  BOOLEAN v11; // r15
  NTSTATUS v12; // ebx
  wchar_t *Buffer; // rdx
  unsigned __int16 v14; // bx
  unsigned __int16 *v15; // rdx
  unsigned int v16; // ecx
  unsigned __int16 **v17; // rax
  __int64 v18; // rdx
  __int64 result; // rax
  _QWORD *v20; // rdx
  ULONG ReturnLength; // [rsp+20h] [rbp-68h] BYREF
  _OWORD Src[2]; // [rsp+28h] [rbp-60h] BYREF

  v2 = *(_DWORD *)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 28) - v2;
  ReturnLength = 0;
  v6 = *(_QWORD *)(a1 + 8) + v2;
  Src[0] = *(_OWORD *)L"\\Device\\Unknown";
  Src[1] = *(_OWORD *)L"Unknown";
  v7 = (void *)(v6 + 2);
  v8 = (_OBJECT_NAME_INFORMATION *)((v6 + 9) & 0xFFFFFFFFFFFFFFF8uLL);
  v9 = v6 + v4 - (_DWORD)v8;
  *(_QWORD *)&v8->Name.Length = 0LL;
  v8->Name.Buffer = 0LL;
  if ( (DeviceAttachmentBaseRefWithTag & 1) != 0 )
  {
    DeviceAttachmentBaseRefWithTag = (unsigned __int64)IoGetDeviceAttachmentBaseRefWithTag(
                                                         DeviceAttachmentBaseRefWithTag & 0xFFFFFFFFFFFFFFFEuLL,
                                                         0x746C6644u);
    v10 = (void *)DeviceAttachmentBaseRefWithTag;
  }
  else
  {
    v10 = 0LL;
  }
  if ( DeviceAttachmentBaseRefWithTag )
  {
    v11 = IoSetThreadHardErrorMode(0);
    v12 = ObQueryNameString((PVOID)DeviceAttachmentBaseRefWithTag, v8, v9, &ReturnLength);
    if ( v10 )
      ObfDereferenceObjectWithTag(v10, 0x746C6644u);
    IoSetThreadHardErrorMode(v11);
  }
  else
  {
    v12 = -1073741809;
  }
  if ( v12 >= 0 && v8->Name.Length )
  {
    Buffer = v8->Name.Buffer;
    v14 = v8->Name.Length >> 1;
  }
  else
  {
    Buffer = (wchar_t *)Src;
    v14 = 15;
  }
  memmove(v7, Buffer, 2LL * v14);
  v15 = (unsigned __int16 *)(*(_QWORD *)(a1 + 8) + *(unsigned int *)(a1 + 24));
  v16 = 2 * v14;
  *v15 = v14;
  v17 = (unsigned __int16 **)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 16));
  *v17 = v15;
  v17[1] = (unsigned __int16 *)2;
  v18 = (unsigned int)++*(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 24) += 2;
  result = *(_QWORD *)(a1 + 8) + *(unsigned int *)(a1 + 24);
  v20 = (_QWORD *)(*(_QWORD *)a1 + 16 * v18);
  *v20 = result;
  v20[1] = v16;
  ++*(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 24) += v16;
  return result;
}
