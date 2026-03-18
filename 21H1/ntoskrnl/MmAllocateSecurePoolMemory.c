/*
 * XREFs of MmAllocateSecurePoolMemory @ 0x14053F29C
 * Callers:
 *     PspIumAllocateSecurePool @ 0x14057DEFC (PspIumAllocateSecurePool.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     MiCommitPoolMemory @ 0x1402B16DC (MiCommitPoolMemory.c)
 *     MiInitializePoolCommitPacket @ 0x1402B1BF8 (MiInitializePoolCommitPacket.c)
 *     MiReservePoolMemory @ 0x1403008E0 (MiReservePoolMemory.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiIsSystemVaAllocated @ 0x140537DF4 (MiIsSystemVaAllocated.c)
 *     MmFreeSecurePoolMemory @ 0x14053F3E4 (MmFreeSecurePoolMemory.c)
 */

__int64 __fastcall MmAllocateSecurePoolMemory(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        __int64 a4)
{
  ULONG_PTR v8; // rdi
  int v9; // ebx
  int SystemRegionType; // eax
  _BYTE v12[80]; // [rsp+40h] [rbp-68h] BYREF
  ULONG_PTR v13; // [rsp+B0h] [rbp+8h] BYREF
  ULONG_PTR v14; // [rsp+B8h] [rbp+10h] BYREF

  v14 = BugCheckParameter3;
  v13 = BugCheckParameter2;
  memset(v12, 0, sizeof(v12));
  v8 = 0LL;
  if ( (a3 & 0x2000) == 0 || (v8 = MiReservePoolMemory(BugCheckParameter2, 15, BugCheckParameter3, 0)) != 0 )
  {
    if ( (a3 & 0x1000) == 0 )
      goto LABEL_10;
    SystemRegionType = MiGetSystemRegionType(BugCheckParameter2);
    if ( SystemRegionType != 15 )
      KeBugCheckEx(0x1Au, 0x5400uLL, BugCheckParameter2, BugCheckParameter3, SystemRegionType);
    if ( !(unsigned int)MiIsSystemVaAllocated() )
      KeBugCheckEx(0x1Au, 0x5401uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
    MiInitializePoolCommitPacket((__int64 *)&v13, &v14, a3, 2u, 0, 0, a4, (__int64)v12);
    v9 = MiCommitPoolMemory((__int64)v12);
    if ( v9 >= 0 )
    {
LABEL_10:
      v8 = 0LL;
      v9 = 0;
    }
    if ( v8 )
      MmFreeSecurePoolMemory(v8, BugCheckParameter3);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v9;
}
