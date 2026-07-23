/*
 * XREFs of HalpDmaAllocateChildAdapterV2 @ 0x140764C4C
 * Callers:
 *     HalGetAdapterV2 @ 0x1407649D0 (HalGetAdapterV2.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByPointer @ 0x1402A5010 (ObReferenceObjectByPointer.c)
 *     KeInitializeDeviceQueue @ 0x140379490 (KeInitializeDeviceQueue.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140864EF0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1408651D8 (HalpDmaAllocateLocalScatterPool.c)
 */

_DWORD *__fastcall HalpDmaAllocateChildAdapterV2(
        unsigned int a1,
        char a2,
        char a3,
        char a4,
        char a5,
        char a6,
        char a7,
        _DWORD *a8)
{
  char v11; // si
  _DWORD *v12; // rbx
  __int64 v13; // rax
  _QWORD *v14; // rax
  _DWORD *result; // rax
  int LocalScatterPool; // eax
  int v17; // ecx
  char *v18; // [rsp+28h] [rbp-59h]
  PVOID Object; // [rsp+58h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v21[4]; // [rsp+68h] [rbp-19h] BYREF
  __int128 v22; // [rsp+88h] [rbp+7h]

  Object = 0LL;
  Handle = 0LL;
  v21[0] = 48LL;
  v21[3] = 528LL;
  v11 = 1;
  v21[1] = 0LL;
  if ( !a3 )
    v11 = a2;
  v21[2] = 0LL;
  v22 = 0LL;
  if ( (int)ObCreateObjectEx(0, HalpDmaAdapterObjectType, (__int64)v21, 0, v18, 640, 0, 0, &Object, 0LL) < 0 )
    return 0LL;
  v12 = Object;
  memset(Object, 0, 0x280uLL);
  if ( ObReferenceObjectByPointer(v12, 0x20000u, HalpDmaAdapterObjectType, 0) < 0
    || (int)ObInsertObjectEx((char *)v12, 0LL, 0x20000u, 0, 0, 0LL, (unsigned __int64 *)&Handle) < 0 )
  {
    return 0LL;
  }
  ZwClose(Handle);
  *v12 = 41943041;
  *((_QWORD *)v12 + 1) = &HalpDmaOperationsV2;
  *((_BYTE *)v12 + 145) = a6;
  *((_QWORD *)v12 + 15) = 0LL;
  *((_QWORD *)v12 + 16) = 0LL;
  *((_BYTE *)v12 + 144) = 0;
  *((_QWORD *)v12 + 39) = 0LL;
  *((_BYTE *)v12 + 338) = 0;
  KeInitializeDeviceQueue((PKDEVICE_QUEUE)(v12 + 44));
  v12[56] = a1;
  *((_BYTE *)v12 + 434) = a4;
  *((_BYTE *)v12 + 440) = v11;
  *((_BYTE *)v12 + 441) = a3;
  *((_BYTE *)v12 + 437) = a7;
  v12[93] = -1;
  v12[94] = -1;
  v12[37] = 2;
  *((_BYTE *)v12 + 433) = a5 != 0;
  if ( a1 )
    v13 = (1LL << (v11 != 0 ? 32 : 24)) - 1;
  else
    v13 = -1LL;
  *((_QWORD *)v12 + 17) = v13;
  v14 = &MasterAdapter24V2;
  if ( v11 )
    v14 = &MasterAdapterV2;
  *((_QWORD *)v12 + 19) = v14;
  if ( *((_QWORD *)v12 + 17) < v14[17] )
  {
LABEL_12:
    HalPutDmaAdapter((PADAPTER_OBJECT)v12);
    return 0LL;
  }
  if ( a1 )
  {
    if ( a4 )
      LocalScatterPool = HalpDmaAllocateLocalScatterPool(v12, a1);
    else
      LocalScatterPool = HalpDmaAllocateLocalContiguousPool(v12, a1);
    if ( LocalScatterPool < 0 )
      goto LABEL_12;
    v17 = v12[56];
    *((_BYTE *)v12 + 337) = 0;
  }
  else
  {
    v12[56] = 0;
    v17 = 0;
    *((_BYTE *)v12 + 337) = 1;
  }
  *a8 = v17;
  result = v12;
  *((_QWORD *)v12 + 63) = 0LL;
  return result;
}
