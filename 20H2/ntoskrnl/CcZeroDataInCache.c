/*
 * XREFs of CcZeroDataInCache @ 0x140240E98
 * Callers:
 *     CcZeroData @ 0x140240A60 (CcZeroData.c)
 * Callees:
 *     IoFreeMdl @ 0x14020A410 (IoFreeMdl.c)
 *     CcSetDirtyPinnedData @ 0x140241270 (CcSetDirtyPinnedData.c)
 *     IoAllocateMdl @ 0x140248500 (IoAllocateMdl.c)
 *     MiProbeAndLockPages @ 0x14026BB80 (MiProbeAndLockPages.c)
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     CcUnpinFileDataEx @ 0x14029D060 (CcUnpinFileDataEx.c)
 *     MmSetAddressRangeModifiedEx @ 0x14029ECE0 (MmSetAddressRangeModifiedEx.c)
 *     CcPinFileData @ 0x1402A2D80 (CcPinFileData.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 */

char __fastcall CcZeroDataInCache(int a1, __int64 *a2, unsigned int a3, unsigned __int8 a4)
{
  int v4; // r14d
  unsigned int v7; // edi
  char v8; // bl
  unsigned int v10; // [rsp+54h] [rbp-54h]
  unsigned int v11; // [rsp+58h] [rbp-50h]
  struct _MDL *MemoryDescriptorList; // [rsp+60h] [rbp-48h]
  PVOID BcbVoid; // [rsp+68h] [rbp-40h] BYREF
  __int64 v14; // [rsp+70h] [rbp-38h] BYREF
  __int64 v15; // [rsp+78h] [rbp-30h] BYREF
  PVOID VirtualAddress[2]; // [rsp+80h] [rbp-28h] BYREF
  char v17; // [rsp+B8h] [rbp+10h]

  v4 = a4;
  v7 = 0;
  v14 = 0LL;
  v15 = *a2;
  BcbVoid = 0LL;
  VirtualAddress[0] = 0LL;
  v17 = 1;
  while ( (unsigned __int8)CcPinFileData(
                             a1,
                             (unsigned int)&v15,
                             a3 - v7,
                             0,
                             1,
                             v4,
                             (__int64)&BcbVoid,
                             (__int64)VirtualAddress,
                             (__int64)&v14) )
  {
    v10 = v14 - v15;
    v11 = v14 - v15 + v7;
    MemoryDescriptorList = IoAllocateMdl(VirtualAddress[0], (int)v14 - (int)v15, 0, 0, 0LL);
    if ( !MemoryDescriptorList )
      RtlRaiseStatus(-1073741670);
    v8 = BYTE5(KeGetCurrentThread()[1].Queue) + 2;
    BYTE5(KeGetCurrentThread()[1].Queue) = 1;
    MiProbeAndLockPages(MemoryDescriptorList, 0LL, 0LL);
    BYTE5(KeGetCurrentThread()[1].Queue) = v8 - 2;
    v15 = v14;
    MmSetAddressRangeModifiedEx(VirtualAddress[0], v10);
    CcSetDirtyPinnedData(BcbVoid, 0LL);
    CcUnpinFileDataEx(BcbVoid);
    BcbVoid = 0LL;
    MmUnlockPages(MemoryDescriptorList);
    IoFreeMdl(MemoryDescriptorList);
    v7 = v11;
    if ( a3 <= v11 )
      goto LABEL_8;
  }
  v17 = 0;
LABEL_8:
  if ( BcbVoid )
    CcUnpinFileDataEx(BcbVoid);
  return v17;
}
