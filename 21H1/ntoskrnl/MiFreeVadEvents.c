/*
 * XREFs of MiFreeVadEvents @ 0x140534C44
 * Callers:
 *     MiAllocateChildVads @ 0x1408D4140 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x1408D4BD8 (MiDeletePartialCloneVads.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeVadEvents(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // rbx

  v1 = *(_QWORD **)(a1 + 56);
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      ExFreePoolWithTag(v1, 0);
      v1 = v2;
    }
    while ( v2 );
  }
}
