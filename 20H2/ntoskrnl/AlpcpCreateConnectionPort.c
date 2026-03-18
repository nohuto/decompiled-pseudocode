/*
 * XREFs of AlpcpCreateConnectionPort @ 0x1406CD198
 * Callers:
 *     NtAlpcCreatePort @ 0x1406CD150 (NtAlpcCreatePort.c)
 *     NtCreatePort @ 0x14076EF00 (NtCreatePort.c)
 *     NtCreateWaitablePort @ 0x14078A740 (NtCreateWaitablePort.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     AlpcpSetOwnerProcessPort @ 0x1405E795C (AlpcpSetOwnerProcessPort.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x1405E7AD4 (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcInitializeHandleTable @ 0x1405E82E4 (AlpcInitializeHandleTable.c)
 *     AlpcpInitializePort @ 0x1405E8338 (AlpcpInitializePort.c)
 *     AlpcpCreatePort @ 0x1405E84C4 (AlpcpCreatePort.c)
 *     AlpcpAllocateBlob @ 0x1405F307C (AlpcpAllocateBlob.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 *     NtClose @ 0x140611680 (NtClose.c)
 */

__int64 __fastcall AlpcpCreateConnectionPort(
        HANDLE *a1,
        int a2,
        unsigned __int64 a3,
        unsigned int a4,
        char a5,
        char a6)
{
  __int64 v10; // rcx
  char PreviousMode; // r9
  __int64 v12; // rax
  __int64 result; // rax
  char v14; // al
  PADAPTER_OBJECT v15; // rbx
  int v16; // r14d
  _QWORD *v17; // r14
  int v18; // edi
  _OWORD *Blob; // rax
  _QWORD *v20; // rax
  int v21; // eax
  int inserted; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-A8h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-A0h] BYREF
  _OWORD v25[5]; // [rsp+50h] [rbp-98h] BYREF

  memset(v25, 0, 0x48uLL);
  DmaAdapter = 0LL;
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v10 = (__int64)a1;
    if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    if ( a3 )
    {
      v12 = a3;
      if ( a3 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      v25[0] = *(_OWORD *)v12;
      v25[1] = *(_OWORD *)(v12 + 16);
      v25[2] = *(_OWORD *)(v12 + 32);
      v25[3] = *(_OWORD *)(v12 + 48);
      *(_QWORD *)&v25[4] = *(_QWORD *)(v12 + 64);
    }
  }
  else if ( a3 )
  {
    v25[0] = *(_OWORD *)a3;
    v25[1] = *(_OWORD *)(a3 + 16);
    v25[2] = *(_OWORD *)(a3 + 32);
    v25[3] = *(_OWORD *)(a3 + 48);
    *(_QWORD *)&v25[4] = *(_QWORD *)(a3 + 64);
  }
  LOBYTE(v10) = PreviousMode;
  result = AlpcpCreatePort(v10, a2, (void **)&DmaAdapter);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      v14 = a5;
      if ( (v25[0] & 0x40000) != 0 )
        v14 = 1;
      a5 = v14;
    }
    v15 = DmaAdapter;
    v16 = AlpcpInitializePort((__int64)DmaAdapter, 1, a5);
    if ( v16 < 0 )
    {
      HalPutDmaAdapter(v15);
      return (unsigned int)v16;
    }
    v17 = (_QWORD *)((unsigned __int64)v25 & -(__int64)(a3 != 0));
    v18 = AlpcpValidateAndSetPortAttributes((__int64)v15, v17, (__int64)v15, 0LL, a4, a5, a6);
    if ( v18 >= 0 )
    {
      if ( a6 )
        *(_DWORD *)&v15[26].Version |= 0x3000u;
      AlpcpSetOwnerProcessPort((__int64)v15, v17);
      Blob = AlpcpAllocateBlob((__int64)AlpcConnectionType, 80LL, 1);
      *(_QWORD *)&v15[1].Version = Blob;
      if ( Blob )
      {
        *((_QWORD *)Blob + 2) = 0LL;
        **(_QWORD **)&v15[1].Version = v15;
        *(_QWORD *)(*(_QWORD *)&v15[1].Version + 8LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)&v15[1].Version + 72LL) = 0LL;
        v20 = (_QWORD *)(*(_QWORD *)&v15[1].Version + 24LL);
        v20[1] = v20;
        *v20 = v20;
        v21 = AlpcInitializeHandleTable(*(_QWORD *)&v15[1].Version + 40LL);
        if ( v21 >= 0 )
        {
          inserted = ObInsertObjectEx(v15, 0LL, 0x1F0001u, 0, 0, 0LL, &Handle);
          if ( inserted >= 0 )
            *a1 = Handle;
          return (unsigned int)inserted;
        }
        v18 = v21;
      }
      else
      {
        v18 = -1073741801;
      }
    }
    HalPutDmaAdapter(v15);
    return (unsigned int)v18;
  }
  return result;
}
