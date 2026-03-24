/*
 * XREFs of FsRtlAllocatePoolWithQuota @ 0x1404F0150
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x14029AF80 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140353020 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall FsRtlAllocatePoolWithQuota(POOL_TYPE a1, unsigned int a2)
{
  PVOID result; // rax

  result = ExAllocatePoolWithQuotaTag(a1, a2, 0x74725346u);
  if ( !result )
    RtlRaiseStatus(0xC000009A);
  return result;
}
