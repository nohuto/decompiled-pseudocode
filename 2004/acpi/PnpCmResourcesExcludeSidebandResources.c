/*
 * XREFs of PnpCmResourcesExcludeSidebandResources @ 0x1C00B43A0
 * Callers:
 *     ACPIFilterIrpStartDeviceWorker @ 0x1C00A0CB0 (ACPIFilterIrpStartDeviceWorker.c)
 * Callees:
 *     PnpiCmResourceRemoveSidebandResources @ 0x1C00B44F0 (PnpiCmResourceRemoveSidebandResources.c)
 */

__int64 __fastcall PnpCmResourcesExcludeSidebandResources(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  PVOID PoolWithTag; // rsi
  void *v6; // rdi
  int v8; // ebp
  int v9; // r14d
  int v10; // r15d
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // ebx
  PVOID v14; // rax
  _QWORD *v15; // rax
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp+8h] BYREF

  LODWORD(NumberOfBytes) = 0;
  PoolWithTag = 0LL;
  v6 = 0LL;
  v8 = a3;
  v9 = a2;
  v10 = a1;
  if ( !a1 )
    return (unsigned int)-1073741772;
  if ( !a2 || !a3 )
  {
    v11 = -1073741772;
LABEL_14:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    return v11;
  }
  v12 = PnpiCmResourceRemoveSidebandResources(a1, a2, a3, 0, 0LL, (__int64)&NumberOfBytes);
  v11 = v12;
  if ( v12 == -1073741789 )
  {
    v13 = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x52706341u);
    v14 = ExAllocatePoolWithTag(PagedPool, v13, 0x52706341u);
    v6 = v14;
    if ( PoolWithTag && v14 )
    {
      v11 = PnpiCmResourceRemoveSidebandResources(
              v10,
              v9,
              v8,
              (_DWORD)PoolWithTag,
              (__int64)v14,
              (__int64)&NumberOfBytes);
      if ( (v11 & 0x80000000) == 0 )
      {
        v15 = a5;
        *a4 = PoolWithTag;
        *v15 = v6;
        return v11;
      }
    }
    else
    {
      v11 = -1073741670;
    }
    goto LABEL_14;
  }
  if ( v12 >= 0 )
    return (unsigned int)-1073741823;
  return v11;
}
