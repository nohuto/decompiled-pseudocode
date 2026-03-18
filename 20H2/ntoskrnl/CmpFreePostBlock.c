/*
 * XREFs of CmpFreePostBlock @ 0x1406BDB90
 * Callers:
 *     CmpPostNotify @ 0x1405F3C84 (CmpPostNotify.c)
 *     CmpNotifyChangeKey @ 0x1405F78B0 (CmpNotifyChangeKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405F7BF0 (NtNotifyChangeMultipleKeys.c)
 *     CmpSignalDeferredPosts @ 0x14061C8F0 (CmpSignalDeferredPosts.c)
 *     CmNotifyRunDown @ 0x1406836AC (CmNotifyRunDown.c)
 *     CmpPostApc @ 0x1406BDA00 (CmpPostApc.c)
 *     CmpFreeSubordinatePost @ 0x1406BDBE4 (CmpFreeSubordinatePost.c)
 *     CmpPostApcRunDown @ 0x14086C560 (CmpPostApcRunDown.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140219220 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreePostBlock(PVOID P)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)P + 6);
  if ( v2 )
  {
    ObDereferenceObjectDeferDelete(*(PVOID *)(v2 + 16));
    ExFreePoolWithTag(*((PVOID *)P + 6), 0);
  }
  if ( (*((_DWORD *)P + 14) & 0x10000) != 0 )
    ExFreePoolWithTag(*((PVOID *)P + 8), 0);
  ExFreePoolWithTag(P, 0);
}
