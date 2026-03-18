/*
 * XREFs of MiReturnProcessVads @ 0x1408BFBB4
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14064EE7C (MmInitializeProcessAddressSpace.c)
 *     MiAllocateProcessVads @ 0x14064F788 (MiAllocateProcessVads.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiReturnProcessVads(_QWORD *P)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi
  void *v3; // rcx

  if ( P )
  {
    v1 = P;
    do
    {
      v2 = v1;
      v1 = (_QWORD *)*v1;
      v3 = (void *)v2[7];
      if ( v3 )
        ExFreePoolWithTag(v3, 0);
      ExFreePoolWithTag(v2, 0);
    }
    while ( v1 );
  }
}
