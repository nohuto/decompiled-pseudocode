/*
 * XREFs of ?HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C01A66B4
 * Callers:
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1C01A26DC (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x1C01A2B7C (-EndInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01A33A0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C000632C (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 */

void __fastcall CHidInput::HandlePTPInertiaTimer(CHidInput *this, char a2, int a3, __int64 a4)
{
  CBaseInput *v4; // rdi
  __int64 v6; // rbp
  void *DispatcherHandleByName; // rax
  union _LARGE_INTEGER DueTime; // [rsp+50h] [rbp+8h] BYREF

  DueTime.QuadPart = (LONGLONG)this;
  v4 = gpHidInput;
  v6 = a3;
  DispatcherHandleByName = (void *)CRIMBase::GetDispatcherHandleByName((__int64)gpHidInput, 5LL, 1LL, a4);
  if ( a2 )
  {
    ZwCancelTimer(DispatcherHandleByName, 0LL);
  }
  else
  {
    DueTime.QuadPart = -10000 * v6;
    ZwSetTimer(DispatcherHandleByName, &DueTime, 0LL, 0LL, 0, 0, 0LL);
    *((_QWORD *)v4 + 161) = a4;
  }
}
