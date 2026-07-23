/*
 * XREFs of AlpcpCreateConnectionPort @ 0x140608E98
 * Callers:
 *     NtAlpcCreatePort @ 0x140608E50 (NtAlpcCreatePort.c)
 *     NtCreatePort @ 0x1407731E0 (NtCreatePort.c)
 *     NtCreateWaitablePort @ 0x14078E6D0 (NtCreateWaitablePort.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     AlpcpAllocateBlob @ 0x1406558AC (AlpcpAllocateBlob.c)
 *     AlpcpSetOwnerProcessPort @ 0x1406D00EC (AlpcpSetOwnerProcessPort.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x1406D0264 (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcInitializeHandleTable @ 0x1406D04A4 (AlpcInitializeHandleTable.c)
 *     AlpcpInitializePort @ 0x1406D04F8 (AlpcpInitializePort.c)
 *     AlpcpCreatePort @ 0x1406D0684 (AlpcpCreatePort.c)
 *     NtClose @ 0x140707D60 (NtClose.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 */

__int64 __fastcall AlpcpCreateConnectionPort(HANDLE *a1, __int64 a2, unsigned __int64 a3, int a4, char a5, char a6)
{
  __int64 v10; // rcx
  char PreviousMode; // r9
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // r8
  char v15; // al
  PADAPTER_OBJECT v16; // rbx
  int v17; // r14d
  unsigned __int64 v18; // r14
  int v19; // edi
  __int64 Blob; // rax
  _QWORD *v21; // rax
  int v22; // eax
  int inserted; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-A8h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-A0h] BYREF
  _OWORD v26[5]; // [rsp+50h] [rbp-98h] BYREF

  memset(v26, 0, 0x48uLL);
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
      v26[0] = *(_OWORD *)v12;
      v26[1] = *(_OWORD *)(v12 + 16);
      v26[2] = *(_OWORD *)(v12 + 32);
      v26[3] = *(_OWORD *)(v12 + 48);
      *(_QWORD *)&v26[4] = *(_QWORD *)(v12 + 64);
    }
  }
  else if ( a3 )
  {
    v26[0] = *(_OWORD *)a3;
    v26[1] = *(_OWORD *)(a3 + 16);
    v26[2] = *(_OWORD *)(a3 + 32);
    v26[3] = *(_OWORD *)(a3 + 48);
    *(_QWORD *)&v26[4] = *(_QWORD *)(a3 + 64);
  }
  LOBYTE(v10) = PreviousMode;
  result = AlpcpCreatePort(v10, a2, &DmaAdapter);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      v15 = a5;
      if ( (v26[0] & 0x40000) != 0 )
        v15 = 1;
      a5 = v15;
    }
    LOBYTE(v14) = a5;
    v16 = DmaAdapter;
    v17 = AlpcpInitializePort(DmaAdapter, 1LL, v14);
    if ( v17 < 0 )
    {
      HalPutDmaAdapter(v16);
      return (unsigned int)v17;
    }
    v18 = (unsigned __int64)v26 & -(__int64)(a3 != 0);
    v19 = AlpcpValidateAndSetPortAttributes((_DWORD)v16, v18, (_DWORD)v16, 0, a4, a5, a6);
    if ( v19 >= 0 )
    {
      if ( a6 )
        *(_DWORD *)&v16[26].Version |= 0x3000u;
      AlpcpSetOwnerProcessPort(v16, v18);
      Blob = AlpcpAllocateBlob(AlpcConnectionType, 80LL, 1LL);
      *(_QWORD *)&v16[1].Version = Blob;
      if ( Blob )
      {
        *(_QWORD *)(Blob + 16) = 0LL;
        **(_QWORD **)&v16[1].Version = v16;
        *(_QWORD *)(*(_QWORD *)&v16[1].Version + 8LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)&v16[1].Version + 72LL) = 0LL;
        v21 = (_QWORD *)(*(_QWORD *)&v16[1].Version + 24LL);
        v21[1] = v21;
        *v21 = v21;
        v22 = AlpcInitializeHandleTable(*(_QWORD *)&v16[1].Version + 40LL);
        if ( v22 >= 0 )
        {
          inserted = ObInsertObjectEx(v16, 0LL, 0, 0LL, (__int64)&Handle);
          if ( inserted >= 0 )
            *a1 = Handle;
          return (unsigned int)inserted;
        }
        v19 = v22;
      }
      else
      {
        v19 = -1073741801;
      }
    }
    HalPutDmaAdapter(v16);
    return (unsigned int)v19;
  }
  return result;
}
