/*
 * XREFs of IopInitializeTriageDumpData @ 0x1408555E0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024AE50 (KeRegisterBugCheckReasonCallback.c)
 *     KeAddTriageDumpDataBlock @ 0x1403D7DF0 (KeAddTriageDumpDataBlock.c)
 *     KeInitializeTriageDumpDataArray @ 0x1403D8040 (KeInitializeTriageDumpDataArray.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void IopInitializeTriageDumpData()
{
  struct _KTRIAGE_DUMP_DATA_ARRAY *Pool2; // rax
  SIZE_T v1; // r9
  unsigned int v2; // ebx

  if ( !IopTriageDumpDataArray )
  {
    Pool2 = (struct _KTRIAGE_DUMP_DATA_ARRAY *)ExAllocatePool2(64LL, 16432LL, 1918136137LL);
    IopTriageDumpDataArray = Pool2;
    if ( Pool2 )
    {
      if ( KeInitializeTriageDumpDataArray(Pool2, 0x4030u) < 0 )
        goto LABEL_9;
      if ( IopNumTriageDumpDataBlocks )
      {
        v2 = 0;
        do
        {
          KeAddTriageDumpDataBlock(
            IopTriageDumpDataArray,
            IopTriageDumpDataBlocks[2 * v2],
            (PVOID)(_mm_srli_si128(*(__m128i *)&IopTriageDumpDataBlocks[2 * v2], 8).m128i_u64[0]
                  - IopTriageDumpDataBlocks[2 * v2]),
            v1);
          ++v2;
        }
        while ( v2 < IopNumTriageDumpDataBlocks );
      }
      IopBugCheckTriageDumpDataCallbackRecord.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &IopBugCheckTriageDumpDataCallbackRecord,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)IoBugCheckTriageDumpDataCallback,
              KbCallbackTriageDumpData,
              (PUCHAR)"IoTriageDumpData") )
      {
LABEL_9:
        if ( IopTriageDumpDataArray )
        {
          ExFreePoolWithTag(IopTriageDumpDataArray, 0x72546F49u);
          IopTriageDumpDataArray = 0LL;
        }
      }
    }
  }
}
