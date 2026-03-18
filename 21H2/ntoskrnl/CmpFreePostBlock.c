/*
 * XREFs of CmpFreePostBlock @ 0x1407190AC
 * Callers:
 *     CmpPostApc @ 0x1406CEBA0 (CmpPostApc.c)
 *     CmpSignalDeferredPosts @ 0x140719010 (CmpSignalDeferredPosts.c)
 *     CmpFreeSubordinatePost @ 0x14071A400 (CmpFreeSubordinatePost.c)
 *     CmpPostNotify @ 0x14071C288 (CmpPostNotify.c)
 *     CmNotifyRunDown @ 0x14079FD44 (CmNotifyRunDown.c)
 *     CmpDeleteKeyObject @ 0x1407C2680 (CmpDeleteKeyObject.c)
 *     NtNotifyChangeMultipleKeys @ 0x1407E5600 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x1407E5F70 (CmpNotifyChangeKey.c)
 *     CmpPostApcRunDown @ 0x140910210 (CmpPostApcRunDown.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
