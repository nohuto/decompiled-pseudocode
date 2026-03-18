/*
 * XREFs of MmSecureVirtualMemoryEx @ 0x1406A2440
 * Callers:
 *     MmSecureVirtualMemory @ 0x1406A2410 (MmSecureVirtualMemory.c)
 *     PspAllocateThread @ 0x1407A34A0 (PspAllocateThread.c)
 *     VmSecureBackingMemory @ 0x1409D98E0 (VmSecureBackingMemory.c)
 *     VmpLockMemoryForPin @ 0x1409DA070 (VmpLockMemoryForPin.c)
 *     AslpFileLargeMapCreate @ 0x140A1A2F8 (AslpFileLargeMapCreate.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x14030E7C0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x14032E700 (MiUnlockAndDereferenceVad.c)
 *     MiSecureVad @ 0x1406A2588 (MiSecureVad.c)
 */

__int64 __fastcall MmSecureVirtualMemoryEx(unsigned __int64 a1, __int64 a2, int a3, int a4)
{
  int v5; // ebp
  int v6; // r15d
  int v7; // edi
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  char *v10; // rbx
  int v11; // edi
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+78h] [rbp+20h] BYREF

  v13[0] = 0LL;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  if ( (a4 & 0xFFFFFFF0) == 0 )
  {
    v8 = a1 + a2;
    if ( a1 + a2 > a1 && v8 <= 0x7FFFFFFF0000LL && ((a3 - 1) & 0xFFFFFFFC) == 0 && a3 != 3 )
    {
      v9 = MiObtainReferencedVadEx(a1 & 0xFFFFFFFFFFFFF000uLL, 0, &v14);
      v10 = (char *)v9;
      if ( v9 )
      {
        if ( ((v8 - 1) | 0xFFF) > (((*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) << 12) | 0xFFF)
          || (*(_BYTE *)(v9 + 48) & 0x70) == 0x30 )
        {
          MiUnlockAndDereferenceVad((char *)v9);
        }
        else
        {
          if ( (a4 & 2) != 0 )
            v5 |= 0x80000000;
          v11 = MiSecureVad(v9, v7, v6, v5, a4, (__int64)v13);
          MiUnlockAndDereferenceVad(v10);
          if ( v11 >= 0 )
            return v13[0] ^ qword_140C50680 ^ (__int64)KeGetCurrentThread()->ApcState.Process;
        }
      }
    }
  }
  return 0LL;
}
