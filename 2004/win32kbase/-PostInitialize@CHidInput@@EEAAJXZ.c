/*
 * XREFs of ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C005F240
 * Callers:
 *     <none>
 * Callees:
 *     isChildPartition @ 0x1C0070954 (isChildPartition.c)
 *     isInputVirtualizationEnabled @ 0x1C007125C (isInputVirtualizationEnabled.c)
 *     ?ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z @ 0x1C01B6B48 (-ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C01B9D58 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 */

__int64 __fastcall CHidInput::PostInitialize(struct RawInputManagerObject **this)
{
  unsigned int v2; // ebp
  CInputThread *v4; // rsi
  unsigned int CurrentThreadId; // eax
  int v6; // ebx
  unsigned int v7; // edi
  __int64 v8; // rcx

  v2 = 0;
  if ( (unsigned __int8)isInputVirtualizationEnabled() )
  {
    v4 = gpInputThread;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v4, 0LL);
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    v6 = *((_DWORD *)v4 + 10);
    v7 = CurrentThreadId;
    ExReleasePushLockSharedEx(v4, 0LL);
    KeLeaveCriticalRegion();
    if ( v7 == v6 )
    {
      v2 = CBaseInput::ivRegisterChildLifetimeNotifications((CBaseInput *)this, 2u);
      if ( (unsigned __int8)isChildPartition(v8) )
        return (unsigned int)CBaseInput::ivChildLoop((CBaseInput *)this, 2u, this[2]);
    }
  }
  return v2;
}
