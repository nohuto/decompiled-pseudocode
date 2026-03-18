/*
 * XREFs of MmStoreAllocateVirtualMemory @ 0x1407FABA0
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x14037DAEC (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MiObtainReferencedSecureVad @ 0x140281620 (MiObtainReferencedSecureVad.c)
 *     MiDecommitPages @ 0x1402CE240 (MiDecommitPages.c)
 *     MiFreeVadRange @ 0x1402ECEB0 (MiFreeVadRange.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     MiUnlockAndDereferenceVad @ 0x14032E700 (MiUnlockAndDereferenceVad.c)
 *     MiLockPageTableRange @ 0x140386DC4 (MiLockPageTableRange.c)
 *     MiMakeSecureExclusive @ 0x140386F14 (MiMakeSecureExclusive.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MmUnsecureVirtualMemory @ 0x1406F8010 (MmUnsecureVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1407BE3C0 (MiAllocateVirtualMemory.c)
 */

unsigned __int64 __fastcall MmStoreAllocateVirtualMemory(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  ULONG_PTR v4; // rdi
  unsigned __int64 v5; // rbx
  ULONG_PTR PteAddress; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  _QWORD v10[16]; // [rsp+40h] [rbp-79h] BYREF
  _OWORD v11[3]; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v12; // [rsp+F0h] [rbp+37h]
  int VirtualMemory; // [rsp+120h] [rbp+67h] BYREF
  unsigned __int64 v14; // [rsp+128h] [rbp+6Fh] BYREF
  HANDLE SecureHandle; // [rsp+130h] [rbp+77h] BYREF

  v1 = 0LL;
  v14 = 0LL;
  v12 = 0LL;
  memset(v11, 0, sizeof(v11));
  SecureHandle = 0LL;
  memset(v10, 0, sizeof(v10));
  v10[12] = KeGetCurrentThread()->ApcState.Process;
  v10[11] = v10[12];
  v10[2] = 0x10000LL;
  v10[1] = 0x7FFFFFFEFFFFLL;
  v10[9] = &SecureHandle;
  v10[3] = a1;
  v10[5] = 0x200003000LL;
  v10[8] = 0x8000000100000001uLL;
  BYTE1(v10[7]) = 0;
  VirtualMemory = MiAllocateVirtualMemory((__int64)v10, 0LL, (__int64 *)&v14);
  if ( VirtualMemory < 0 )
    return v1;
  v3 = MiObtainReferencedSecureVad((unsigned __int64)SecureHandle ^ v10[12] ^ qword_140C50680, &VirtualMemory);
  v4 = v3;
  if ( !v3 )
    return v1;
  if ( (unsigned int)MiMakeSecureExclusive(v3) )
  {
    v5 = ((*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32)) << 12) | 0xFFF;
    PteAddress = MiGetPteAddress(v5);
    MiDecommitPages(v14, PteAddress, v10[12], v4, 1, v11);
    if ( (int)MiLockPageTableRange(v14, v5) < 0 )
    {
      v8 = *(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32);
      v9 = *(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32);
      LOBYTE(VirtualMemory) = 0;
      MiFreeVadRange(v4, (int)&VirtualMemory, v8, v9, v10[12], 0);
    }
    else
    {
      MiUnlockAndDereferenceVad((char *)v4);
      return v14;
    }
    return v1;
  }
  MiUnlockAndDereferenceVad((char *)v4);
  MmUnsecureVirtualMemory(SecureHandle);
  return 0LL;
}
