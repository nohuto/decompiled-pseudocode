/*
 * XREFs of WbFreeMemoryBlock @ 0x14065BC4C
 * Callers:
 *     WbAllocateUserMemory @ 0x14065BCCC (WbAllocateUserMemory.c)
 *     WbFreeWarbirdProcess @ 0x1406E7B88 (WbFreeWarbirdProcess.c)
 *     WbAllocateMemoryBlock @ 0x1406EB6D4 (WbAllocateMemoryBlock.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1403F26F0 (ZwFreeVirtualMemory.c)
 *     MmUnsecureVirtualMemory @ 0x140635790 (MmUnsecureVirtualMemory.c)
 *     sub_1406ED14C @ 0x1406ED14C (sub_1406ED14C.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
      sub_1406ED14C(v3);
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
