/*
 * XREFs of KeUnInitializeUmsThread @ 0x1408BD848
 * Callers:
 *     PspDetachThreadFromUmsCompletionList @ 0x140581AFC (PspDetachThreadFromUmsCompletionList.c)
 *     PspInsertThread @ 0x14063DE48 (PspInsertThread.c)
 *     PspUmsUnInitThread @ 0x14090A9FC (PspUmsUnInitThread.c)
 * Callees:
 *     KeRundownQueueEx @ 0x140227E38 (KeRundownQueueEx.c)
 *     KeSetCurrentUmsTeb @ 0x140526F14 (KeSetCurrentUmsTeb.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeUnInitializeUmsThread(__int64 a1)
{
  char v1; // al
  void *v3; // rdi
  unsigned int v4; // eax

  v1 = *(_BYTE *)(a1 + 3);
  v3 = *(void **)(a1 + 496);
  if ( (v1 & 0x40) != 0 )
  {
    v4 = 30;
LABEL_5:
    _interlockedbittestandreset((volatile signed __int32 *)a1, v4);
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 496) = 0LL;
    return 0LL;
  }
  if ( v1 < 0 )
  {
    KeSetCurrentUmsTeb((struct _KTHREAD *)a1, *(_QWORD *)(a1 + 240));
    KeRundownQueueEx((__int64)v3 + 32, 1);
    v4 = 31;
    goto LABEL_5;
  }
  return 3221227292LL;
}
