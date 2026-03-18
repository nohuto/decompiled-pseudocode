/*
 * XREFs of PspLockRootJobExclusive @ 0x1406ED14C
 * Callers:
 *     PspJobDelete @ 0x14027ABB0 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x1405CEB38 (PspSetJobIoRateControl.c)
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ECDEC (PspAllocateAndQueryNotificationChannel.c)
 *     PspSetNetRateControl @ 0x1409064F4 (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 */

__int64 __fastcall PspLockRootJobExclusive(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h]

  if ( a2 )
    --*(_WORD *)(a2 + 486);
  for ( i = *(_QWORD *)(a1 + 1080); ; i = *(_QWORD *)(a1 + 1080) )
  {
    v7 = i;
    ExAcquireResourceExclusiveLite((PERESOURCE)(i + 56), 1u);
    if ( v7 == *(_QWORD *)(a1 + 1080) )
      break;
    ExReleaseResourceLite((PERESOURCE)(v7 + 56));
  }
  result = v7;
  *a3 = v7;
  return result;
}
