/*
 * XREFs of KeUnInitializeUmsThread @ 0x1408BFF28
 * Callers:
 *     PspDetachThreadFromUmsCompletionList @ 0x14057FE3C (PspDetachThreadFromUmsCompletionList.c)
 *     PspInsertThread @ 0x1406867E0 (PspInsertThread.c)
 *     PspUmsUnInitThread @ 0x14090D0EC (PspUmsUnInitThread.c)
 * Callees:
 *     KeRundownQueueEx @ 0x14030B098 (KeRundownQueueEx.c)
 *     KeSetCurrentUmsTeb @ 0x1405251F4 (KeSetCurrentUmsTeb.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
