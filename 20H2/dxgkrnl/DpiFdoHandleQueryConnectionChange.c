/*
 * XREFs of DpiFdoHandleQueryConnectionChange @ 0x1C0020948
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0020110 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1C0020A2C (ExFreeToNPagedLookasideList.c)
 */

__int64 __fastcall DpiFdoHandleQueryConnectionChange(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  _QWORD **v5; // rbx
  _QWORD *v6; // rax
  unsigned int v7; // ebx
  _QWORD *v9; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 3488), &LockHandle);
  v5 = (_QWORD **)(a1 + 3496);
  v6 = *v5;
  if ( *v5 == v5 )
  {
    v7 = 255;
  }
  else
  {
    v4 = *v5;
    if ( (_QWORD **)v6[1] != v5 || (v9 = (_QWORD *)*v6, (_QWORD *)v9[1] != v4) )
      __fastfail(3u);
    *v5 = v9;
    v9[1] = v5;
    v7 = 0;
    *(_OWORD *)a2 = *(_OWORD *)(v4 + 3);
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(v4 + 5);
    *(_OWORD *)(a2 + 32) = *(_OWORD *)(v4 + 7);
    *(_OWORD *)(a2 + 48) = *(_OWORD *)(v4 + 9);
    *(_OWORD *)(a2 + 64) = *(_OWORD *)(v4 + 11);
    *(_OWORD *)(a2 + 80) = *(_OWORD *)(v4 + 13);
    *(_QWORD *)(a2 + 96) = v4[15];
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 )
    ExFreeToNPagedLookasideList(&Lookaside, v4);
  return v7;
}
