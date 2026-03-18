/*
 * XREFs of PfpSectInfoHandleOutOfBuffers @ 0x14078AE30
 * Callers:
 *     <none>
 * Callees:
 *     PfFbBufferListAllocateTemporary @ 0x1403287B4 (PfFbBufferListAllocateTemporary.c)
 */

__int64 __fastcall PfpSectInfoHandleOutOfBuffers(_SLIST_ENTRY *a1)
{
  return PfFbBufferListAllocateTemporary(a1, 0x4000);
}
