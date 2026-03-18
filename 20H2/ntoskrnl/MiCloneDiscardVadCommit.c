/*
 * XREFs of MiCloneDiscardVadCommit @ 0x1408D3624
 * Callers:
 *     MiCloneCaptureVadCommit @ 0x140543548 (MiCloneCaptureVadCommit.c)
 *     MiAllocateChildVads @ 0x1408DB2D0 (MiAllocateChildVads.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
