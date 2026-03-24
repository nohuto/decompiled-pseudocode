/*
 * XREFs of MmStoreAllocateVirtualMemory @ 0x1406B61EC
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x1402E0400 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14021AF80 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedSecureVad @ 0x14025B6F0 (MiObtainReferencedSecureVad.c)
 *     MiLockPageTableRange @ 0x1402C8C5C (MiLockPageTableRange.c)
 *     MiMakeSecureExclusive @ 0x1402C8E50 (MiMakeSecureExclusive.c)
 *     MiGetPteAddress @ 0x140318100 (MiGetPteAddress.c)
 *     MiFreeVadRange @ 0x1403185C4 (MiFreeVadRange.c)
 *     MiDecommitPages @ 0x140334820 (MiDecommitPages.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiAllocateVirtualMemory @ 0x1405F8650 (MiAllocateVirtualMemory.c)
 *     MmUnsecureVirtualMemory @ 0x14061F760 (MmUnsecureVirtualMemory.c)
 */

unsigned __int64 __fastcall MmStoreAllocateVirtualMemory(__int64 a1)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  ULONG_PTR v4; // rdi
  unsigned __int64 v5; // rbx
  ULONG_PTR PteAddress; // rax
  __int64 v7; // r8
  _DWORD *v8; // r9
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  _QWORD v12[16]; // [rsp+40h] [rbp-79h] BYREF
  int v13[4]; // [rsp+C0h] [rbp+7h] BYREF
  __int128 v14; // [rsp+D0h] [rbp+17h]
  __int128 v15; // [rsp+E0h] [rbp+27h]
  char v16; // [rsp+120h] [rbp+67h] BYREF
  int v17; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned __int64 v18; // [rsp+130h] [rbp+77h] BYREF
  HANDLE SecureHandle; // [rsp+138h] [rbp+7Fh] BYREF

  v18 = 0LL;
  SecureHandle = 0LL;
  *(_OWORD *)v13 = 0LL;
  v14 = 0LL;
  v2 = 0LL;
  v15 = 0LL;
  memset(v12, 0, sizeof(v12));
  v12[12] = KeGetCurrentThread()->ApcState.Process;
  v12[11] = v12[12];
  v12[2] = 0x10000LL;
  v12[1] = 0x7FFFFFFEFFFFLL;
  v12[10] = &SecureHandle;
  v12[3] = a1;
  v12[5] = 0x200003000LL;
  HIDWORD(v12[7]) = 1;
  HIDWORD(v12[9]) = -2147483647;
  LOBYTE(v12[13]) = 0;
  if ( (int)MiAllocateVirtualMemory((__int64)v12, 0LL, &v18) < 0 )
    return v2;
  v3 = MiObtainReferencedSecureVad((unsigned __int64)SecureHandle ^ v12[12] ^ qword_140C4DE50, &v17);
  v4 = v3;
  if ( !v3 )
    return v2;
  if ( (unsigned int)MiMakeSecureExclusive(v3) )
  {
    v5 = ((*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32)) << 12) | 0xFFF;
    PteAddress = MiGetPteAddress(v5);
    MiDecommitPages(v18, PteAddress, v12[12], v4, 1, v13);
    if ( (int)MiLockPageTableRange(v18, v5, v7, v8) >= 0 )
    {
      MiUnlockAndDereferenceVad((char *)v4);
      v2 = v18;
      v4 = 0LL;
    }
    if ( v4 )
    {
      v10 = *(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32);
      v11 = *(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32);
      v16 = 0;
      MiFreeVadRange(v4, (int)&v16, v10, v11, v12[12], 0);
    }
    return v2;
  }
  MiUnlockAndDereferenceVad((char *)v4);
  MmUnsecureVirtualMemory(SecureHandle);
  return 0LL;
}
