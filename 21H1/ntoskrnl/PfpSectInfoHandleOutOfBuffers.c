/*
 * XREFs of PfpSectInfoHandleOutOfBuffers @ 0x14077A420
 * Callers:
 *     <none>
 * Callees:
 *     PfFbBufferListAllocateTemporary @ 0x14031A604 (PfFbBufferListAllocateTemporary.c)
 */

__int64 __fastcall PfpSectInfoHandleOutOfBuffers(_SLIST_ENTRY *a1)
{
  return PfFbBufferListAllocateTemporary(a1, 0x4000);
}
