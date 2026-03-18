/*
 * XREFs of CmpFreePostBlock @ 0x1406CC480
 * Callers:
 *     CmpNotifyChangeKey @ 0x1405F3D20 (CmpNotifyChangeKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1405F4060 (NtNotifyChangeMultipleKeys.c)
 *     CmpFreeSubordinatePost @ 0x1406181A8 (CmpFreeSubordinatePost.c)
 *     CmpPostNotify @ 0x14061A9A8 (CmpPostNotify.c)
 *     CmpSignalDeferredPosts @ 0x140622DA0 (CmpSignalDeferredPosts.c)
 *     CmpPostApc @ 0x1406CC2F0 (CmpPostApc.c)
 *     CmNotifyRunDown @ 0x140706CB0 (CmNotifyRunDown.c)
 *     CmpPostApcRunDown @ 0x140865820 (CmpPostApcRunDown.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14024A1D0 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
