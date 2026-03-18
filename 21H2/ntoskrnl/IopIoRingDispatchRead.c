/*
 * XREFs of IopIoRingDispatchRead @ 0x140938198
 * Callers:
 *     IopProcessIoRingEntry @ 0x140938A9C (IopProcessIoRingEntry.c)
 * Callees:
 *     IopCompleteIoRingEntry @ 0x140559E1C (IopCompleteIoRingEntry.c)
 *     IopReadFile @ 0x14073A450 (IopReadFile.c)
 *     IopIoRingGetBuffer @ 0x14093895C (IopIoRingGetBuffer.c)
 *     IopIoRingReferenceFileObject @ 0x140938A3C (IopIoRingReferenceFileObject.c)
 */

LONG_PTR __fastcall IopIoRingDispatchRead(PVOID a1, __int64 a2)
{
  char PreviousMode; // si
  LONG_PTR result; // rax
  __int64 v6; // r9
  SIZE_T Length; // [rsp+30h] [rbp-78h]
  PVOID Object; // [rsp+78h] [rbp-30h] BYREF
  __int64 v9[5]; // [rsp+80h] [rbp-28h] BYREF
  SIZE_T v10; // [rsp+C0h] [rbp+18h] BYREF
  volatile void *Address; // [rsp+C8h] [rbp+20h] BYREF

  Object = 0LL;
  Address = 0LL;
  LODWORD(v10) = 0;
  *(_OWORD *)v9 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = IopIoRingGetBuffer((_DWORD)a1, a2, PreviousMode, (unsigned int)&Address, (__int64)&v10);
  if ( (int)result >= 0 )
  {
    LOBYTE(v6) = PreviousMode;
    result = IopIoRingReferenceFileObject(a1, a2, 1LL, v6, &Object);
    if ( (int)result >= 0 )
    {
      LODWORD(Length) = v10;
      result = IopReadFile(
                 (struct _FILE_OBJECT *)Object,
                 0LL,
                 0LL,
                 0LL,
                 v9,
                 (struct _IRP *)Address,
                 Length,
                 a2 + 16,
                 (ULONG *)(a2 + 36),
                 a1,
                 *(struct _IO_STATUS_BLOCK **)(a2 + 48),
                 0x80000000,
                 0LL);
    }
  }
  if ( (int)result < 0 )
  {
    v9[1] = 0LL;
    LODWORD(v9[0]) = result;
    return IopCompleteIoRingEntry((__int64)a1, *(_QWORD *)(a2 + 48), v9, 0);
  }
  return result;
}
