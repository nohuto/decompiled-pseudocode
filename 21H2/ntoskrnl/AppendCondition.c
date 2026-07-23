/*
 * XREFs of AppendCondition @ 0x140926D94
 * Callers:
 *     LocalGetConditionForString @ 0x140928054 (LocalGetConditionForString.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     SddlpAlloc @ 0x140669778 (SddlpAlloc.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AppendCondition(
        const void **a1,
        unsigned int *a2,
        unsigned int *a3,
        const void *a4,
        unsigned int Size)
{
  unsigned int v5; // ebx
  const void *v6; // rax
  unsigned int v10; // edi
  unsigned int v11; // ebp
  PVOID v12; // rax
  PVOID v13; // rdi
  void *v14; // r13

  v5 = 0;
  v6 = a4;
  if ( a1 && a2 && a3 )
  {
    v10 = *a3;
    v11 = *a3 + Size;
    if ( v11 < *a3 )
      return 534;
    if ( v11 > *a2 )
    {
      v12 = SddlpAlloc(v11);
      v13 = v12;
      if ( !v12 )
        return 8;
      v14 = (void *)*a1;
      memmove(v12, *a1, *a2);
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
      v6 = a4;
      *a1 = v13;
      v10 = *a3;
      *a2 = v11;
    }
    memmove((char *)*a1 + v10, v6, Size);
    *a3 = v10 + Size;
    return v5;
  }
  return 87LL;
}
