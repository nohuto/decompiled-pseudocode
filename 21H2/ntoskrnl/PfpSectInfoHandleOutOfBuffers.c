/*
 * XREFs of PfpSectInfoHandleOutOfBuffers @ 0x1407F8C50
 * Callers:
 *     <none>
 * Callees:
 *     PfFbBufferListAllocateTemporary @ 0x14024B844 (PfFbBufferListAllocateTemporary.c)
 */

__int64 __fastcall PfpSectInfoHandleOutOfBuffers(struct _EX_RUNDOWN_REF *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return PfFbBufferListAllocateTemporary(a1, 0x4000, a3, a4);
}
