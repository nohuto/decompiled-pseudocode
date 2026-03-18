/*
 * XREFs of ?HandleFlushDelayZonePalmRejectInputTimer@CHidInput@@QEAAX_NK@Z @ 0x1C01A6658
 * Callers:
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C01A9F74 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 * Callees:
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C000632C (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 */

void __fastcall CHidInput::HandleFlushDelayZonePalmRejectInputTimer(
        CHidInput *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *DispatcherHandleByName; // rax
  union _LARGE_INTEGER DueTime; // [rsp+50h] [rbp+8h] BYREF

  DueTime.QuadPart = (LONGLONG)this;
  DispatcherHandleByName = (void *)CRIMBase::GetDispatcherHandleByName((__int64)gpHidInput, 7LL, 1LL, a4);
  DueTime.QuadPart = -160000LL;
  ZwSetTimer(DispatcherHandleByName, &DueTime, 0LL, 0LL, 0, 0, 0LL);
}
