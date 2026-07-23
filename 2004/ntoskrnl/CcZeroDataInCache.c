/*
 * XREFs of CcZeroDataInCache @ 0x140267B0C
 * Callers:
 *     CcZeroData @ 0x140267D10 (CcZeroData.c)
 * Callees:
 *     CcPinFileData @ 0x14022DAD0 (CcPinFileData.c)
 *     MiProbeAndLockPages @ 0x14024D8E0 (MiProbeAndLockPages.c)
 *     MmSetAddressRangeModifiedEx @ 0x140262F80 (MmSetAddressRangeModifiedEx.c)
 *     IoAllocateMdl @ 0x1402656A0 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x140267A50 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     CcSetDirtyPinnedData @ 0x1402C28E0 (CcSetDirtyPinnedData.c)
 *     CcUnpinFileDataEx @ 0x1402C3400 (CcUnpinFileDataEx.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 */

char __fastcall CcZeroDataInCache(__int64 a1, __int64 *a2, unsigned int a3, char a4)
{
  unsigned int v7; // edi
  char v8; // bl
  unsigned int v10; // [rsp+54h] [rbp-54h]
  unsigned int v11; // [rsp+58h] [rbp-50h]
  PMDL MemoryDescriptorList; // [rsp+60h] [rbp-48h]
  PVOID BcbVoid; // [rsp+68h] [rbp-40h] BYREF
  __int64 v14; // [rsp+70h] [rbp-38h] BYREF
  __int64 v15; // [rsp+78h] [rbp-30h] BYREF
  PVOID VirtualAddress[2]; // [rsp+80h] [rbp-28h] BYREF
  char v17; // [rsp+B8h] [rbp+10h]

  v7 = 0;
  v14 = 0LL;
  v15 = *a2;
  BcbVoid = 0LL;
  VirtualAddress[0] = 0LL;
  v17 = 1;
  while ( (unsigned __int8)CcPinFileData(a1, &v15, a3 - v7, 0, 1, a4, &BcbVoid, VirtualAddress, &v14) )
  {
    v10 = v14 - v15;
    v11 = v14 - v15 + v7;
    MemoryDescriptorList = IoAllocateMdl(VirtualAddress[0], (int)v14 - (int)v15, 0, 0, 0LL);
    if ( !MemoryDescriptorList )
      RtlRaiseStatus(-1073741670);
    v8 = BYTE5(KeGetCurrentThread()[1].Queue) + 2;
    BYTE5(KeGetCurrentThread()[1].Queue) = 1;
    MiProbeAndLockPages(MemoryDescriptorList, 0, 0);
    BYTE5(KeGetCurrentThread()[1].Queue) = v8 - 2;
    v15 = v14;
    MmSetAddressRangeModifiedEx((unsigned __int64)VirtualAddress[0], v10);
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
