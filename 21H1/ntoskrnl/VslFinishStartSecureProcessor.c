/*
 * XREFs of VslFinishStartSecureProcessor @ 0x1404F68F4
 * Callers:
 *     KeWriteProtectProcessorState @ 0x14099AC10 (KeWriteProtectProcessorState.c)
 * Callees:
 *     KeGetPrcb @ 0x140276C20 (KeGetPrcb.c)
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     MmGetPhysicalAddress @ 0x14033BB60 (MmGetPhysicalAddress.c)
 *     VslpUnlockPagesForTransfer @ 0x140390BD4 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x140390C28 (VslpLockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VslFinishStartSecureProcessor(unsigned int a1)
{
  PHYSICAL_ADDRESS *PoolWithTag; // rbx
  __int64 Prcb; // rax
  int v5; // edi
  __int64 *v6[10]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v7[14]; // [rsp+80h] [rbp-88h] BYREF

  memset(v7, 0, 0x68uLL);
  memset(v6, 0, 0x48uLL);
  PoolWithTag = (PHYSICAL_ADDRESS *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x54736D56u);
  if ( !PoolWithTag )
    return 3221225626LL;
  Prcb = KeGetPrcb(a1);
  PoolWithTag->LowPart = a1;
  PoolWithTag[1] = MmGetPhysicalAddress(*(PVOID *)(Prcb - 328));
  v5 = VslpLockPagesForTransfer((__int64)v6, (struct _MDL *)PoolWithTag, 0x10u, 0, 0);
  if ( v5 >= 0 )
  {
    v7[1] = v6[0];
    v7[2] = v6[7];
    v5 = VslpEnterIumSecureMode(2u, 3, 0, (__int64)v7);
    VslpUnlockPagesForTransfer(v6);
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v5;
}
