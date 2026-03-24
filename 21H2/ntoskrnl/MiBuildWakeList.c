/*
 * XREFs of MiBuildWakeList @ 0x140357480
 * Callers:
 *     MiUnlockControlAreaSectionExtend @ 0x1402A1234 (MiUnlockControlAreaSectionExtend.c)
 *     MiReferencePfBackedSection @ 0x1402C5218 (MiReferencePfBackedSection.c)
 *     MiPreventControlAreaDeletion @ 0x1402EE728 (MiPreventControlAreaDeletion.c)
 *     MiPrepareSegmentForDeletion @ 0x1402F7D04 (MiPrepareSegmentForDeletion.c)
 *     MiCheckControlArea @ 0x140314AB0 (MiCheckControlArea.c)
 *     MiComputeDataFlushRange @ 0x1403152C0 (MiComputeDataFlushRange.c)
 *     MiReferenceActiveControlArea @ 0x140357348 (MiReferenceActiveControlArea.c)
 *     MiDecrementModifiedWriteCount @ 0x140357408 (MiDecrementModifiedWriteCount.c)
 *     MiDecrementLargeSubsections @ 0x140540410 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x140541480 (MiIncrementLargeSubsections.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiBuildWakeList(__int64 a1, int a2)
{
  _QWORD *v2; // r10
  __int64 *v3; // r9
  __int64 *v4; // rcx
  __int64 *v6; // r8

  v2 = (_QWORD *)(a1 + 80);
  v3 = 0LL;
  v4 = *(__int64 **)(a1 + 80);
  if ( v4 )
  {
    do
    {
      v6 = (__int64 *)*v4;
      if ( (a2 & (_DWORD)v4[1]) != 0 )
      {
        if ( (a2 & 4) != 0 )
        {
          *((_DWORD *)v4 + 3) = 1;
        }
        else
        {
          *v4 = (__int64)v3;
          v3 = v4;
          *v2 = v6;
        }
      }
      else
      {
        v2 = v4;
      }
      v4 = v6;
    }
    while ( v6 );
  }
  return v3;
}
