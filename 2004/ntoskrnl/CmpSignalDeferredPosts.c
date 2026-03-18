/*
 * XREFs of CmpSignalDeferredPosts @ 0x1405ED780
 * Callers:
 *     CmDeleteValueKey @ 0x1405DDB38 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1405E3F50 (CmSetValueKey.c)
 *     CmpPostNotify @ 0x1405E5388 (CmpPostNotify.c)
 *     CmpDeleteKeyObject @ 0x1405ED4B0 (CmpDeleteKeyObject.c)
 *     CmpSetKeySecurity @ 0x14063D900 (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x140643F58 (CmDeleteKey.c)
 *     CmpPerformUnloadKey @ 0x1406503FC (CmpPerformUnloadKey.c)
 *     CmpProcessLightWeightUOW @ 0x140654690 (CmpProcessLightWeightUOW.c)
 *     CmpCloseKeyObject @ 0x1406D7580 (CmpCloseKeyObject.c)
 *     CmpTransMgrCommitUoW @ 0x140751ACC (CmpTransMgrCommitUoW.c)
 *     CmRestoreKey @ 0x140878A38 (CmRestoreKey.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     CmpFreePostBlock @ 0x1406ED780 (CmpFreePostBlock.c)
 */

_QWORD *__fastcall CmpSignalDeferredPosts(_QWORD **a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx
  PADAPTER_OBJECT **v4; // rdi
  PADAPTER_OBJECT *v5; // r9
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
    v4 = (PADAPTER_OBJECT **)(result - 2);
    v3[1] = a1;
    v5 = (PADAPTER_OBJECT *)result[6];
    if ( (unsigned __int16)*((_DWORD *)result + 10) != 3 )
    {
      v6 = (struct _KEVENT *)*v5;
LABEL_6:
      KeSetEvent(v6, 0, 0);
      HalPutDmaAdapter(*v4[8]);
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
