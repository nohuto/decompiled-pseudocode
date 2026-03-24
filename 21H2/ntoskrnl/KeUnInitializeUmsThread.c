/*
 * XREFs of KeUnInitializeUmsThread @ 0x1408BD6E8
 * Callers:
 *     PspDetachThreadFromUmsCompletionList @ 0x14058184C (PspDetachThreadFromUmsCompletionList.c)
 *     PspInsertThread @ 0x140649028 (PspInsertThread.c)
 *     PspUmsUnInitThread @ 0x14090A89C (PspUmsUnInitThread.c)
 * Callees:
 *     KeRundownQueueEx @ 0x1402A9CF8 (KeRundownQueueEx.c)
 *     KeSetCurrentUmsTeb @ 0x140526CD4 (KeSetCurrentUmsTeb.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeUnInitializeUmsThread(__int64 a1)
{
  char v1; // al
  void *v3; // rdi
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD *v7; // r9

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
    LOBYTE(v5) = 1;
    KeRundownQueueEx((__int64)v3 + 32, v5, v6, v7);
    v4 = 31;
    goto LABEL_5;
  }
  return 3221227292LL;
}
