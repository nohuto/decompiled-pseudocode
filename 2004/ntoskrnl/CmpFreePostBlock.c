/*
 * XREFs of CmpFreePostBlock @ 0x1406ED780
 * Callers:
 *     CmpFreeSubordinatePost @ 0x1405E2068 (CmpFreeSubordinatePost.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405E2200 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x1405E2980 (CmpNotifyChangeKey.c)
 *     CmpPostNotify @ 0x1405E5388 (CmpPostNotify.c)
 *     CmpSignalDeferredPosts @ 0x1405ED780 (CmpSignalDeferredPosts.c)
 *     CmNotifyRunDown @ 0x1406B0DF0 (CmNotifyRunDown.c)
 *     CmpPostApc @ 0x1406ED5F0 (CmpPostApc.c)
 *     CmpPostApcRunDown @ 0x140866B40 (CmpPostApcRunDown.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140286A70 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
