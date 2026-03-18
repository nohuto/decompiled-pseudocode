/*
 * XREFs of MmStoreAllocateVirtualMemory @ 0x1406D7768
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x140358420 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MiObtainReferencedSecureVad @ 0x14022EC10 (MiObtainReferencedSecureVad.c)
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     MiFreeVadRange @ 0x1402308B8 (MiFreeVadRange.c)
 *     MiUnlockAndDereferenceVad @ 0x14027C760 (MiUnlockAndDereferenceVad.c)
 *     MiDecommitPages @ 0x1402B7A70 (MiDecommitPages.c)
 *     MiLockPageTableRange @ 0x140327A8C (MiLockPageTableRange.c)
 *     MiMakeSecureExclusive @ 0x140327C80 (MiMakeSecureExclusive.c)
 *     memset @ 0x140411300 (memset.c)
 *     MmUnsecureVirtualMemory @ 0x1406245E0 (MmUnsecureVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x14067B2A0 (MiAllocateVirtualMemory.c)
 */

unsigned __int64 __fastcall MmStoreAllocateVirtualMemory(__int64 a1)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  ULONG_PTR v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int64 PteAddress; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  _QWORD v10[16]; // [rsp+40h] [rbp-79h] BYREF
  _OWORD v11[5]; // [rsp+C0h] [rbp+7h] BYREF
  char v12; // [rsp+120h] [rbp+67h] BYREF
  int v13; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned __int64 v14; // [rsp+130h] [rbp+77h] BYREF
  HANDLE SecureHandle; // [rsp+138h] [rbp+7Fh] BYREF

  v14 = 0LL;
  SecureHandle = 0LL;
  memset(v11, 0, 48);
  v2 = 0LL;
  memset(v10, 0, sizeof(v10));
  v10[12] = KeGetCurrentThread()->ApcState.Process;
  v10[11] = v10[12];
  v10[2] = 0x10000LL;
  v10[1] = 0x7FFFFFFEFFFFLL;
  v10[10] = &SecureHandle;
  v10[3] = a1;
  v10[5] = 0x200003000LL;
  HIDWORD(v10[7]) = 1;
  HIDWORD(v10[9]) = -2147483647;
  LOBYTE(v10[13]) = 0;
  if ( (int)MiAllocateVirtualMemory((__int64)v10, 0LL, &v14) < 0 )
    return v2;
  v3 = MiObtainReferencedSecureVad((unsigned __int64)SecureHandle ^ v10[12] ^ qword_140C4DCD0, &v13);
  v4 = v3;
  if ( !v3 )
    return v2;
  if ( (unsigned int)MiMakeSecureExclusive(v3) )
  {
    v5 = ((*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32)) << 12) | 0xFFF;
    PteAddress = MiGetPteAddress(v5);
    MiDecommitPages(v14, PteAddress, v10[12], v4, 1, v11);
    if ( (int)MiLockPageTableRange(v14, v5) >= 0 )
    {
      MiUnlockAndDereferenceVad((PVOID)v4);
      v2 = v14;
      v4 = 0LL;
    }
    if ( v4 )
    {
      v8 = *(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32);
      v9 = *(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32);
      v12 = 0;
      MiFreeVadRange(v4, (int)&v12, v8, v9, v10[12], 0);
    }
    return v2;
  }
  MiUnlockAndDereferenceVad((PVOID)v4);
  MmUnsecureVirtualMemory(SecureHandle);
  return 0LL;
}
