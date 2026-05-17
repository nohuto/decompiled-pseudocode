/*
 * XREFs of LdrLockLoaderLock @ 0x18007D040
 * Callers:
 *     TppWorkCallbackPrologRelease @ 0x18001FEF8 (TppWorkCallbackPrologRelease.c)
 *     TppIopExecuteCallback @ 0x180020FD0 (TppIopExecuteCallback.c)
 * Callees:
 *     LdrpAcquireLoaderLock @ 0x18003E6B4 (LdrpAcquireLoaderLock.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800CDBE0 (LdrpTryAcquireLoaderLock.c)
 *     LdrpGenericExceptionFilter @ 0x1800D543C (LdrpGenericExceptionFilter.c)
 *     RtlRaiseStatus @ 0x180102310 (RtlRaiseStatus.c)
 */

__int64 __fastcall LdrLockLoaderLock(int a1, int *a2, unsigned __int64 *a3)
{
  unsigned int v5; // ebx
  int v7; // edi
  int v8; // eax
  __int16 v9; // cx
  __int16 v10; // ax
  int UniqueThread; // eax
  int v12; // [rsp+50h] [rbp+8h]
  int v13; // [rsp+58h] [rbp+10h]

  v5 = 0;
  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 )
  {
    if ( (a1 & 1) != 0 )
      RtlRaiseStatus(3221225711LL);
    return (unsigned int)-1073741585;
  }
  else if ( a3 )
  {
    if ( (a1 & 2) == 0 || a2 )
    {
      if ( LdrInitState == 3 )
      {
        v7 = 1;
        if ( (a1 & 1) != 0 )
        {
          if ( (a1 & 2) != 0 )
          {
            if ( (unsigned __int8)LdrpTryAcquireLoaderLock() )
            {
              UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
              *a3 = ((unsigned __int64)(UniqueThread & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                                            &LdrpLoaderLockAcquisitionCount,
                                                                                            1u)
                                                                                        + 1) & 0xFFFE | 1LL;
            }
            else
            {
              v7 = 2;
            }
            *a2 = v7;
          }
          else
          {
            LdrpAcquireLoaderLock();
            if ( a2 )
              *a2 = 1;
            v8 = (int)NtCurrentTeb()->ClientId.UniqueThread;
            *a3 = ((unsigned __int64)(v8 & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                                &LdrpLoaderLockAcquisitionCount,
                                                                                1u)
                                                                            + 1) & 0xFFFE | 1LL;
          }
        }
        else
        {
          if ( (a1 & 2) != 0 )
          {
            if ( !(unsigned __int8)LdrpTryAcquireLoaderLock() )
            {
              *a2 = 2;
              return v5;
            }
            *a2 = 1;
            v12 = (int)NtCurrentTeb()->ClientId.UniqueThread;
            v9 = _InterlockedExchangeAdd(&LdrpLoaderLockAcquisitionCount, 1u);
            v10 = v12;
          }
          else
          {
            LdrpAcquireLoaderLock();
            if ( a2 )
              *a2 = 1;
            v13 = (int)NtCurrentTeb()->ClientId.UniqueThread;
            v9 = _InterlockedExchangeAdd(&LdrpLoaderLockAcquisitionCount, 1u);
            v10 = v13;
          }
          *a3 = ((unsigned __int64)(v10 & 0xFFF) << 48) | (unsigned __int16)(v9 + 1) & 0xFFFE | 1LL;
        }
      }
    }
    else
    {
      if ( (a1 & 1) != 0 )
        RtlRaiseStatus(3221225712LL);
      return (unsigned int)-1073741584;
    }
  }
  else
  {
    if ( (a1 & 1) != 0 )
      RtlRaiseStatus(3221225713LL);
    return (unsigned int)-1073741583;
  }
  return v5;
}
