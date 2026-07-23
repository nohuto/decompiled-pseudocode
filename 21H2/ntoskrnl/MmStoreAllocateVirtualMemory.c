/*
 * XREFs of MmStoreAllocateVirtualMemory @ 0x1406156AC
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x140291750 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MiLockPageTableRange @ 0x1402474BC (MiLockPageTableRange.c)
 *     MiMakeSecureExclusive @ 0x1402476B0 (MiMakeSecureExclusive.c)
 *     MiObtainReferencedSecureVad @ 0x14027CC60 (MiObtainReferencedSecureVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MiFreeVadRange @ 0x140323314 (MiFreeVadRange.c)
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 *     memset @ 0x140414300 (memset.c)
 *     MmUnsecureVirtualMemory @ 0x1406893D0 (MmUnsecureVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1406E7DB0 (MiAllocateVirtualMemory.c)
 */

unsigned __int64 __fastcall MmStoreAllocateVirtualMemory(__int64 a1)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rdx
  ULONG_PTR v5; // rdi
  unsigned __int64 v6; // rbx
  ULONG_PTR PteAddress; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  _QWORD v11[16]; // [rsp+40h] [rbp-79h] BYREF
  int v12[4]; // [rsp+C0h] [rbp+7h] BYREF
  __int128 v13; // [rsp+D0h] [rbp+17h]
  __int128 v14; // [rsp+E0h] [rbp+27h]
  char v15; // [rsp+120h] [rbp+67h] BYREF
  int v16; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned __int64 v17; // [rsp+130h] [rbp+77h] BYREF
  HANDLE SecureHandle; // [rsp+138h] [rbp+7Fh] BYREF

  v17 = 0LL;
  SecureHandle = 0LL;
  *(_OWORD *)v12 = 0LL;
  v13 = 0LL;
  v2 = 0LL;
  v14 = 0LL;
  memset(v11, 0, sizeof(v11));
  v11[12] = KeGetCurrentThread()->ApcState.Process;
  v11[11] = v11[12];
  v11[2] = 0x10000LL;
  v11[1] = 0x7FFFFFFEFFFFLL;
  v11[10] = &SecureHandle;
  v11[3] = a1;
  v11[5] = 0x200003000LL;
  HIDWORD(v11[7]) = 1;
  HIDWORD(v11[9]) = -2147483647;
  LOBYTE(v11[13]) = 0;
  if ( (int)MiAllocateVirtualMemory(v11, 0LL, &v17) < 0 )
    return v2;
  v3 = MiObtainReferencedSecureVad((unsigned __int64)SecureHandle ^ v11[12] ^ qword_140C4DE90, &v16);
  v5 = v3;
  if ( !v3 )
    return v2;
  if ( (unsigned int)MiMakeSecureExclusive(v3, v4) )
  {
    v6 = ((*(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32)) << 12) | 0xFFF;
    PteAddress = MiGetPteAddress(v6);
    MiDecommitPages(v17, PteAddress, v11[12], v5, 1, v12);
    if ( (int)MiLockPageTableRange(v17, v6) >= 0 )
    {
      MiUnlockAndDereferenceVad((char *)v5);
      v2 = v17;
      v5 = 0LL;
    }
    if ( v5 )
    {
      v9 = *(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32);
      v10 = *(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32);
      v15 = 0;
      MiFreeVadRange(v5, (int)&v15, v9, v10, v11[12], 0);
    }
    return v2;
  }
  MiUnlockAndDereferenceVad((char *)v5);
  MmUnsecureVirtualMemory(SecureHandle);
  return 0LL;
}
