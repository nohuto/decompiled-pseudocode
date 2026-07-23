/*
 * XREFs of CcZeroDataInCache @ 0x1402C0B3C
 * Callers:
 *     CcZeroData @ 0x1402C0D40 (CcZeroData.c)
 * Callees:
 *     CcSetDirtyPinnedData @ 0x14022FAB0 (CcSetDirtyPinnedData.c)
 *     CcUnpinFileDataEx @ 0x1402305D0 (CcUnpinFileDataEx.c)
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     CcPinFileData @ 0x140286B20 (CcPinFileData.c)
 *     MiProbeAndLockPages @ 0x1402A6910 (MiProbeAndLockPages.c)
 *     MmSetAddressRangeModifiedEx @ 0x1402BBFB0 (MmSetAddressRangeModifiedEx.c)
 *     IoAllocateMdl @ 0x1402BE6D0 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1402C0A80 (IoFreeMdl.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 */

char __fastcall CcZeroDataInCache(__int64 a1, __int64 *a2, unsigned int a3, char a4)
{
  unsigned int v7; // edi
  _DWORD *v8; // r9
  char v9; // bl
  _DWORD *v10; // r9
  unsigned int v12; // [rsp+54h] [rbp-54h]
  unsigned int v13; // [rsp+58h] [rbp-50h]
  PMDL MemoryDescriptorList; // [rsp+60h] [rbp-48h]
  PVOID BcbVoid; // [rsp+68h] [rbp-40h] BYREF
  __int64 v16; // [rsp+70h] [rbp-38h] BYREF
  __int64 v17; // [rsp+78h] [rbp-30h] BYREF
  PVOID VirtualAddress[2]; // [rsp+80h] [rbp-28h] BYREF
  char v19; // [rsp+B8h] [rbp+10h]

  v7 = 0;
  v16 = 0LL;
  v17 = *a2;
  BcbVoid = 0LL;
  VirtualAddress[0] = 0LL;
  v19 = 1;
  while ( (unsigned __int8)CcPinFileData(a1, &v17, a3 - v7, 0, 1, a4, (__int64 *)&BcbVoid, VirtualAddress, &v16) )
  {
    v12 = v16 - v17;
    v13 = v16 - v17 + v7;
    MemoryDescriptorList = IoAllocateMdl(VirtualAddress[0], (int)v16 - (int)v17, 0, 0, 0LL);
    if ( !MemoryDescriptorList )
      RtlRaiseStatus(-1073741670);
    v9 = BYTE5(KeGetCurrentThread()[1].Queue) + 2;
    BYTE5(KeGetCurrentThread()[1].Queue) = 1;
    MiProbeAndLockPages(MemoryDescriptorList, 0, 0);
    BYTE5(KeGetCurrentThread()[1].Queue) = v9 - 2;
    v17 = v16;
    MmSetAddressRangeModifiedEx((unsigned __int64)VirtualAddress[0], v12);
    CcSetDirtyPinnedData(BcbVoid, 0LL);
    CcUnpinFileDataEx((char *)BcbVoid, 0, 0, v10);
    BcbVoid = 0LL;
    MmUnlockPages(MemoryDescriptorList);
    IoFreeMdl(MemoryDescriptorList);
    v7 = v13;
    if ( a3 <= v13 )
      goto LABEL_8;
  }
  v19 = 0;
LABEL_8:
  if ( BcbVoid )
    CcUnpinFileDataEx((char *)BcbVoid, 0, 0, v8);
  return v19;
}
