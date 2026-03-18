/*
 * XREFs of CmpSignalDeferredPosts @ 0x140719010
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14065D5C8 (CmpProcessLightWeightUOW.c)
 *     CmpSetKeySecurity @ 0x140677810 (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x14067E1BC (CmDeleteKey.c)
 *     CmpPerformUnloadKey @ 0x14069E98C (CmpPerformUnloadKey.c)
 *     CmDeleteValueKey @ 0x140714E58 (CmDeleteValueKey.c)
 *     CmpCloseKeyObject @ 0x140718E30 (CmpCloseKeyObject.c)
 *     CmpPostNotify @ 0x14071C288 (CmpPostNotify.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     CmRestoreKey @ 0x14090C34C (CmRestoreKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     CmpFreePostBlock @ 0x1407190AC (CmpFreePostBlock.c)
 */

_QWORD *__fastcall CmpSignalDeferredPosts(_QWORD **a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx
  PVOID **v4; // rdi
  PVOID *v5; // r9
  struct _KEVENT *v6; // rcx
  struct _WORK_QUEUE_ITEM *v7; // rcx

  while ( 1 )
  {
    result = *a1;
    if ( *a1 == a1 )
      return result;
    if ( (_QWORD **)result[1] != a1 || (v3 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *a1 = v3;
    v4 = (PVOID **)(result - 2);
    v3[1] = a1;
    v5 = (PVOID *)result[6];
    if ( (unsigned __int16)*((_DWORD *)result + 10) != 3 )
    {
      v6 = (struct _KEVENT *)*v5;
LABEL_6:
      KeSetEvent(v6, 0, 0);
      ObfDereferenceObject(*v4[8]);
      goto LABEL_7;
    }
    v7 = (struct _WORK_QUEUE_ITEM *)v5[1];
    if ( v7 )
    {
      ExQueueWorkItem(v7, *((WORK_QUEUE_TYPE *)v5 + 4));
      v5 = v4[8];
    }
    v6 = (struct _KEVENT *)*v5;
    if ( *v5 )
      goto LABEL_6;
LABEL_7:
    CmpFreePostBlock(v4);
  }
}
