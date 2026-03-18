/*
 * XREFs of WbFreeMemoryBlock @ 0x14065D558
 * Callers:
 *     WbFreeWarbirdProcess @ 0x14065CF10 (WbFreeWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x14065D5D8 (WbAllocateUserMemory.c)
 *     WbAllocateMemoryBlock @ 0x1406E1924 (WbAllocateMemoryBlock.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1403F8530 (ZwFreeVirtualMemory.c)
 *     MmUnsecureVirtualMemory @ 0x1406245E0 (MmUnsecureVirtualMemory.c)
 *     sub_1406E3154 @ 0x1406E3154 (sub_1406E3154.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall WbFreeMemoryBlock(PVOID *BaseAddress)
{
  int v2; // edi
  struct _MDL *v3; // rcx
  PVOID v4; // rcx

  if ( BaseAddress )
  {
    if ( BaseAddress[2] == KeGetCurrentThread()->ApcState.Process )
    {
      v4 = BaseAddress[135];
      v2 = 1;
      if ( v4 )
        MmUnsecureVirtualMemory(v4);
    }
    else
    {
      v2 = 0;
    }
    v3 = (struct _MDL *)BaseAddress[3];
    if ( v3 )
    {
      sub_1406E3154(v3);
      BaseAddress[3] = 0LL;
    }
    BaseAddress[4] = 0LL;
    if ( *BaseAddress )
    {
      if ( v2 )
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, (PSIZE_T)BaseAddress + 1, 0x8000u);
      *BaseAddress = 0LL;
      BaseAddress[1] = 0LL;
    }
    ExFreePoolWithTag(BaseAddress, 0x42524157u);
  }
}
