/*
 * XREFs of StorExtAllocatePool @ 0x1C00387A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall StorExtAllocatePool(ULONG Length, ULONG Tag, __int64 a3, struct _MDL **a4)
{
  PVOID result; // rax
  PVOID v7; // rbx
  struct _MDL *Mdl; // rax

  result = ExAllocatePoolWithTag(NonPagedPoolNx, Length, Tag);
  v7 = result;
  if ( result )
  {
    if ( a4 )
    {
      Mdl = IoAllocateMdl(result, Length, 0, 0, 0LL);
      *a4 = Mdl;
      if ( Mdl )
      {
        MmBuildMdlForNonPagedPool(Mdl);
      }
      else
      {
        ExFreePoolWithTag(v7, 0);
        return 0LL;
      }
    }
    return v7;
  }
  return result;
}
