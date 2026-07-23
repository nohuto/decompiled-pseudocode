/*
 * XREFs of KiTpWriteUmMemory @ 0x14051D864
 * Callers:
 *     KiTpWriteMemory @ 0x14051D73C (KiTpWriteMemory.c)
 * Callees:
 *     MmCopyVirtualMemory @ 0x1406E6510 (MmCopyVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1406E97C0 (MmProtectVirtualMemory.c)
 */

__int64 __fastcall KiTpWriteUmMemory(int a1, __int64 a2, int a3, size_t Size)
{
  int v4; // esi
  int v5; // r14d
  size_t v7; // r15
  int v9; // ebx
  __int64 v11; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+90h] [rbp+40h] BYREF
  __int64 v13; // [rsp+98h] [rbp+48h] BYREF
  int v14; // [rsp+A8h] [rbp+58h] BYREF

  v4 = (int)PsInitialSystemProcess;
  v11 = 0LL;
  v5 = a2;
  v14 = 0;
  v7 = (unsigned int)Size;
  v13 = a2;
  v12 = (unsigned int)Size;
  v9 = MmProtectVirtualMemory(
         (_DWORD)PsInitialSystemProcess,
         a1,
         (unsigned int)&v13,
         (unsigned int)&v12,
         128,
         (__int64)&v14);
  if ( v9 >= 0 )
  {
    v9 = MmCopyVirtualMemory(v4, a3, a1, v5, v7, 0, (__int64)&v11);
    MmProtectVirtualMemory(v4, a1, (unsigned int)&v13, (unsigned int)&v12, v14, (__int64)&v14);
  }
  return (unsigned int)v9;
}
