/*
 * XREFs of CmpFreePostBlock @ 0x140667A60
 * Callers:
 *     CmpPostNotify @ 0x1405ED0C0 (CmpPostNotify.c)
 *     CmNotifyRunDown @ 0x14064C750 (CmNotifyRunDown.c)
 *     NtNotifyChangeMultipleKeys @ 0x140663230 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x140663AA0 (CmpNotifyChangeKey.c)
 *     CmpSignalDeferredPosts @ 0x140667890 (CmpSignalDeferredPosts.c)
 *     CmpPostApc @ 0x14069CB80 (CmpPostApc.c)
 *     CmpFreeSubordinatePost @ 0x14069CD10 (CmpFreeSubordinatePost.c)
 *     CmpPostApcRunDown @ 0x14086A190 (CmpPostApcRunDown.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140343540 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
