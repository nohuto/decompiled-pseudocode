/*
 * XREFs of ?SignalFenceWorkItemRoutine@DXGPROTECTEDSESSION@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02840C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C0283C30 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C028402C (-SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 */

void __fastcall DXGPROTECTEDSESSION::SignalFenceWorkItemRoutine(
        PVOID IoObject,
        struct _EX_RUNDOWN_REF *Context,
        PIO_WORKITEM IoWorkItem)
{
  __int64 v5; // rax
  ULONG_PTR Count; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  char v11; // [rsp+30h] [rbp-18h]

  v5 = WdLogNewEntry5_WdEvent(IoObject, Context);
  *(_QWORD *)(v5 + 24) = 1233LL;
  WdLogEvent5_WdEvent(v5);
  Count = Context[2].Count;
  v11 = 0;
  v10 = *(_QWORD *)(Count + 16);
  v7 = v10;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
  if ( *(_DWORD *)(v7 + 200) == 1 )
    DXGPROTECTEDSESSION::SignalFence((DXGPROTECTEDSESSION *)Context, v8);
  ExReleaseRundownProtection(Context + 16);
  DXGPROTECTEDSESSION::DestroyProtectedSession((struct DXGPROTECTEDSESSION *)Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
  if ( v11 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
}
