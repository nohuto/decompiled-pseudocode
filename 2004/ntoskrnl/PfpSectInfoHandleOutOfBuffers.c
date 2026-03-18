/*
 * XREFs of PfpSectInfoHandleOutOfBuffers @ 0x14077C830
 * Callers:
 *     <none>
 * Callees:
 *     PfFbBufferListAllocateTemporary @ 0x1403035D4 (PfFbBufferListAllocateTemporary.c)
 */

__int64 __fastcall PfpSectInfoHandleOutOfBuffers(struct _EX_RUNDOWN_REF *a1)
{
  return PfFbBufferListAllocateTemporary(a1, 0x4000);
}
