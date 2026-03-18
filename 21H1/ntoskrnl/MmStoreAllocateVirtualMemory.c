/*
 * XREFs of MmStoreAllocateVirtualMemory @ 0x1406E17BC
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x1403092F0 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14021A7A0 (MiUnlockAndDereferenceVad.c)
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 *     MiObtainReferencedSecureVad @ 0x1402A4A40 (MiObtainReferencedSecureVad.c)
 *     MiFreeVadRange @ 0x1402AB094 (MiFreeVadRange.c)
 *     MiLockPageTableRange @ 0x14031949C (MiLockPageTableRange.c)
 *     MiMakeSecureExclusive @ 0x140319690 (MiMakeSecureExclusive.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiAllocateVirtualMemory @ 0x1405ED060 (MiAllocateVirtualMemory.c)
 *     MmUnsecureVirtualMemory @ 0x140635790 (MmUnsecureVirtualMemory.c)
 */

unsigned __int64 __fastcall MmStoreAllocateVirtualMemory(__int64 a1)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  ULONG_PTR PteAddress; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  _QWORD v10[16]; // [rsp+40h] [rbp-79h] BYREF
  int v11[4]; // [rsp+C0h] [rbp+7h] BYREF
  __int128 v12; // [rsp+D0h] [rbp+17h]
  __int128 v13; // [rsp+E0h] [rbp+27h]
  char v14; // [rsp+120h] [rbp+67h] BYREF
  int v15; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned __int64 v16; // [rsp+130h] [rbp+77h] BYREF
  HANDLE SecureHandle; // [rsp+138h] [rbp+7Fh] BYREF

  v16 = 0LL;
  SecureHandle = 0LL;
  *(_OWORD *)v11 = 0LL;
  v12 = 0LL;
  v2 = 0LL;
  v13 = 0LL;
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
  if ( (int)MiAllocateVirtualMemory((__int64)v10, 0LL, &v16) < 0 )
    return v2;
  v3 = MiObtainReferencedSecureVad((unsigned __int64)SecureHandle ^ v10[12] ^ qword_140C4DD90, &v15);
  v4 = v3;
  if ( !v3 )
    return v2;
  if ( (unsigned int)MiMakeSecureExclusive(v3) )
  {
    v5 = ((*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32)) << 12) | 0xFFF;
    PteAddress = MiGetPteAddress(v5);
    MiDecommitPages(v16, PteAddress, v10[12], v4, 1, v11);
    if ( (int)MiLockPageTableRange(v16, v5) >= 0 )
    {
      MiUnlockAndDereferenceVad((char *)v4);
      v2 = v16;
      v4 = 0LL;
    }
    if ( v4 )
    {
      v8 = *(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32);
      v9 = *(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32);
      v14 = 0;
      MiFreeVadRange((_DWORD *)v4, (int)&v14, v8, v9, v10[12], 0);
    }
    return v2;
  }
  MiUnlockAndDereferenceVad((char *)v4);
  MmUnsecureVirtualMemory(SecureHandle);
  return 0LL;
}
