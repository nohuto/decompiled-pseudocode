/*
 * XREFs of CmpFreePostBlock @ 0x14065C880
 * Callers:
 *     CmpPostApc @ 0x1405FBC50 (CmpPostApc.c)
 *     CmpFreeSubordinatePost @ 0x1405FBDE0 (CmpFreeSubordinatePost.c)
 *     CmNotifyRunDown @ 0x140641570 (CmNotifyRunDown.c)
 *     NtNotifyChangeMultipleKeys @ 0x140658050 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x1406588C0 (CmpNotifyChangeKey.c)
 *     CmpSignalDeferredPosts @ 0x14065C6B0 (CmpSignalDeferredPosts.c)
 *     CmpPostNotify @ 0x1406DC820 (CmpPostNotify.c)
 *     CmpPostApcRunDown @ 0x14086A2F0 (CmpPostApcRunDown.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14034E290 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
