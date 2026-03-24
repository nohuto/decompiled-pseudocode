/*
 * XREFs of MiCloneDiscardVadCommit @ 0x1408D0DE4
 * Callers:
 *     MiCloneCaptureVadCommit @ 0x14054504C (MiCloneCaptureVadCommit.c)
 *     MiAllocateChildVads @ 0x1408D8A90 (MiAllocateChildVads.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall MiCloneDiscardVadCommit(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      ExFreePoolWithTag(v2, 0);
      v2 = v3;
    }
    while ( v3 );
  }
  *(_QWORD *)(a1 + 8) = 0LL;
}
