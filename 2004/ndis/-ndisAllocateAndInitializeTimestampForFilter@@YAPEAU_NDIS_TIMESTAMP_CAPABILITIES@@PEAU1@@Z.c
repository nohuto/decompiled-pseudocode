/*
 * XREFs of ?ndisAllocateAndInitializeTimestampForFilter@@YAPEAU_NDIS_TIMESTAMP_CAPABILITIES@@PEAU1@@Z @ 0x1C006765C
 * Callers:
 *     ?ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0025F6C (-ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_TIMESTAMP_CAPABILITIES *__fastcall ndisAllocateAndInitializeTimestampForFilter(
        struct _NDIS_TIMESTAMP_CAPABILITIES *a1)
{
  struct _NDIS_TIMESTAMP_CAPABILITIES *result; // rax

  result = (struct _NDIS_TIMESTAMP_CAPABILITIES *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7374444Eu);
  if ( result )
  {
    *(_OWORD *)&result->Header.Type = 0LL;
    *(_OWORD *)&result->CrossTimestamp = 0LL;
    *(_OWORD *)&result->Reserved2 = 0LL;
    *(_QWORD *)&result->TimestampFlags.AllReceiveHw = 0LL;
    if ( a1 )
    {
      *(_OWORD *)&result->Header.Type = *(_OWORD *)&a1->Header.Type;
      *(_OWORD *)&result->CrossTimestamp = *(_OWORD *)&a1->CrossTimestamp;
      *(_OWORD *)&result->Reserved2 = *(_OWORD *)&a1->Reserved2;
      *(_QWORD *)&result->TimestampFlags.AllReceiveHw = *(_QWORD *)&a1->TimestampFlags.AllReceiveHw;
    }
  }
  return result;
}
