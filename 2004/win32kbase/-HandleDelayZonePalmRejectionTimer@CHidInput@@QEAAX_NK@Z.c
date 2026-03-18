/*
 * XREFs of ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x1C01A65D0
 * Callers:
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C01A9F74 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01AA14C (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C000632C (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 */

void __fastcall CHidInput::HandleDelayZonePalmRejectionTimer(CHidInput *this, char a2, int a3, __int64 a4)
{
  __int64 v5; // rdi
  void *DispatcherHandleByName; // rax
  union _LARGE_INTEGER DueTime; // [rsp+50h] [rbp+8h] BYREF

  DueTime.QuadPart = (LONGLONG)this;
  v5 = a3;
  DispatcherHandleByName = (void *)CRIMBase::GetDispatcherHandleByName((__int64)gpHidInput, 6LL, 1LL, a4);
  if ( a2 )
  {
    ZwCancelTimer(DispatcherHandleByName, 0LL);
  }
  else
  {
    DueTime.QuadPart = -10000 * v5;
    ZwSetTimer(DispatcherHandleByName, &DueTime, 0LL, 0LL, 0, 0, 0LL);
  }
}
