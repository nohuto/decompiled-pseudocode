/*
 * XREFs of CmpSignalDeferredPosts @ 0x140622DA0
 * Callers:
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     CmpPostNotify @ 0x14061A9A8 (CmpPostNotify.c)
 *     CmpDeleteKeyObject @ 0x140622AD0 (CmpDeleteKeyObject.c)
 *     CmpProcessLightWeightUOW @ 0x140658270 (CmpProcessLightWeightUOW.c)
 *     CmpPerformUnloadKey @ 0x14065A0C0 (CmpPerformUnloadKey.c)
 *     CmpSetKeySecurity @ 0x14068AE1C (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x140692448 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1406941D8 (CmDeleteValueKey.c)
 *     CmpCloseKeyObject @ 0x1406B8480 (CmpCloseKeyObject.c)
 *     CmpTransMgrCommitUoW @ 0x14074D43C (CmpTransMgrCommitUoW.c)
 *     CmRestoreKey @ 0x140877748 (CmRestoreKey.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     CmpFreePostBlock @ 0x1406CC480 (CmpFreePostBlock.c)
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
