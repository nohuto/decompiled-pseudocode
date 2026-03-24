/*
 * XREFs of CmpSignalDeferredPosts @ 0x140667890
 * Callers:
 *     CmpPostNotify @ 0x1405ED0C0 (CmpPostNotify.c)
 *     CmSetValueKey @ 0x1406646C0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x140666544 (CmDeleteValueKey.c)
 *     CmpDeleteKeyObject @ 0x1406675C0 (CmpDeleteKeyObject.c)
 *     CmpCloseKeyObject @ 0x14066AF80 (CmpCloseKeyObject.c)
 *     CmDeleteKey @ 0x14066B9F4 (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x14066DF0C (CmpSetKeySecurity.c)
 *     CmpProcessLightWeightUOW @ 0x1406A3E64 (CmpProcessLightWeightUOW.c)
 *     CmpPerformUnloadKey @ 0x14071A1B8 (CmpPerformUnloadKey.c)
 *     CmRestoreKey @ 0x14087BF30 (CmRestoreKey.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     CmpFreePostBlock @ 0x140667A60 (CmpFreePostBlock.c)
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
