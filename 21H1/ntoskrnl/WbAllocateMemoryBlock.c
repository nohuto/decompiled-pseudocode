/*
 * XREFs of WbAllocateMemoryBlock @ 0x1406EB6D4
 * Callers:
 *     WbAllocateUserMemory @ 0x14065BCCC (WbAllocateUserMemory.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     MmAllocateVirtualMemory @ 0x14064DB20 (MmAllocateVirtualMemory.c)
 *     WbFreeMemoryBlock @ 0x14065BC4C (WbFreeMemoryBlock.c)
 *     WbAlloc @ 0x14065F1C8 (WbAlloc.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406EB818 (WbMakeUserExecutablePagesKernelWritable.c)
 */

__int64 __fastcall WbAllocateMemoryBlock(__int64 a1, __int64 **a2)
{
  int VirtualMemory; // edi
  PVOID *v4; // rax
  __int64 *v5; // r15
  PVOID *v6; // rbp
  PVOID *v7; // r12
  _QWORD *v8; // r14
  __int64 *v9; // rbx
  ULONGLONG v11; // [rsp+30h] [rbp-58h]
  PVOID *BaseAddress; // [rsp+90h] [rbp+8h] BYREF

  BaseAddress = 0LL;
  VirtualMemory = WbAlloc(0x440uLL, &BaseAddress);
  if ( VirtualMemory < 0 )
  {
    v9 = (__int64 *)BaseAddress;
  }
  else
  {
    v4 = BaseAddress;
    *BaseAddress = 0LL;
    v5 = (__int64 *)(v4 + 1);
    v4[1] = (PVOID)0x10000;
    v6 = v4 + 3;
    v4[3] = 0LL;
    v7 = v4 + 4;
    v4[4] = 0LL;
    v8 = v4 + 135;
    v4[135] = 0LL;
    v9 = (__int64 *)BaseAddress;
    BaseAddress[2] = KeGetCurrentThread()->ApcState.Process;
    v9[134] = 0LL;
    memset((char *)v9 + 44, 0, 0x400uLL);
    LODWORD(v11) = 0;
    VirtualMemory = MmAllocateVirtualMemory(-1, v9, v5, 4096, 32, 0LL, v11, 0, 0x20000000, 2, (__int64)v8);
    if ( VirtualMemory >= 0 )
    {
      if ( *v8 )
      {
        VirtualMemory = WbMakeUserExecutablePagesKernelWritable(*v9, *(unsigned int *)v5, v6, v7);
        if ( VirtualMemory >= 0 && a2 )
        {
          *a2 = v9;
          v9 = 0LL;
        }
      }
      else
      {
        VirtualMemory = -1073741595;
      }
    }
  }
  WbFreeMemoryBlock((PVOID *)v9);
  return (unsigned int)VirtualMemory;
}
