/*
 * XREFs of MiReleasePrefetchGapPages @ 0x140386FBC
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1402715A0 (MiPfPutPagesInTransition.c)
 *     MiFinishHardFault @ 0x140334C40 (MiFinishHardFault.c)
 * Callees:
 *     MiReturnPfnReferenceCount @ 0x14029BA28 (MiReturnPfnReferenceCount.c)
 */

__int64 __fastcall MiReleasePrefetchGapPages(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      result = MiReturnPfnReferenceCount((__int64)a1);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}
