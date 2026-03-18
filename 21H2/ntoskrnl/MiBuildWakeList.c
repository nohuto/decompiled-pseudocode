/*
 * XREFs of MiBuildWakeList @ 0x140287B04
 * Callers:
 *     MiUnlockControlAreaSectionExtend @ 0x14022C984 (MiUnlockControlAreaSectionExtend.c)
 *     MiPreventControlAreaDeletion @ 0x14023F8E8 (MiPreventControlAreaDeletion.c)
 *     MiReferencePfBackedSection @ 0x14023FA50 (MiReferencePfBackedSection.c)
 *     MiPrepareSegmentForDeletion @ 0x140270274 (MiPrepareSegmentForDeletion.c)
 *     MiComputeDataFlushRange @ 0x140286AB0 (MiComputeDataFlushRange.c)
 *     MiCheckControlArea @ 0x140287660 (MiCheckControlArea.c)
 *     MiDecrementModifiedWriteCount @ 0x140287A8C (MiDecrementModifiedWriteCount.c)
 *     MiReferenceActiveControlArea @ 0x140287F58 (MiReferenceActiveControlArea.c)
 *     MiDecrementLargeSubsections @ 0x14059DF58 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x14059F23C (MiIncrementLargeSubsections.c)
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
