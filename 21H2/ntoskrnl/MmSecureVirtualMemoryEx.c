/*
 * XREFs of MmSecureVirtualMemoryEx @ 0x140689890
 * Callers:
 *     PspAllocateThread @ 0x14063FE68 (PspAllocateThread.c)
 *     MmSecureVirtualMemory @ 0x140689A00 (MmSecureVirtualMemory.c)
 *     VmSecureBackingMemory @ 0x14092F2F0 (VmSecureBackingMemory.c)
 *     AslpFileLargeMapCreate @ 0x14096C5E4 (AslpFileLargeMapCreate.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402BFBA0 (MiObtainReferencedVadEx.c)
 *     MiSecureVad @ 0x140689320 (MiSecureVad.c)
 */

__int64 __fastcall MmSecureVirtualMemoryEx(unsigned __int64 a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  char *v10; // rdi
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // r9d
  int v14; // ebx
  __int64 v16[5]; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+78h] [rbp+20h] BYREF

  v16[0] = 0LL;
  if ( (a4 & 0xFFFFFFF0) == 0 )
  {
    v8 = a1 + a2;
    if ( a1 + a2 > a1
      && v8 <= 0x7FFFFFFF0000LL
      && ((unsigned int)(a3 - 1) <= 1 || a3 == 4 || a3 == -2147483647)
      && a3 >= 0 )
    {
      v9 = MiObtainReferencedVadEx(a1 & 0xFFFFFFFFFFFFF000uLL, 0, &v17);
      v10 = (char *)v9;
      if ( v9 )
      {
        if ( (v8 - 1) >> 12 > (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32))
          || (v11 = *(_DWORD *)(v9 + 48), (*(_BYTE *)(v9 + 48) & 0x70) == 0x30)
          || (v11 & 0x100000) != 0 && ((v12 = (v11 >> 18) & 3, (v11 & 0x400000) != 0) || v12 >= 2) && v12 >= 2 )
        {
          MiUnlockAndDereferenceVad(v10);
        }
        else
        {
          v13 = a3 | 0x80000000;
          if ( (a4 & 2) == 0 )
            v13 = a3;
          v14 = MiSecureVad((__int64)v10, a1, a2, v13, a4, v16);
          MiUnlockAndDereferenceVad(v10);
          if ( v14 >= 0 )
            return qword_140C4DE90 ^ (__int64)KeGetCurrentThread()->ApcState.Process ^ v16[0];
        }
      }
    }
  }
  return 0LL;
}
