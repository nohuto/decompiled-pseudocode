/*
 * XREFs of ESM_RunStateMachine @ 0x1C000529C
 * Callers:
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 *     ESM_SmWorker @ 0x1C004F1F0 (ESM_SmWorker.c)
 * Callees:
 *     ESM_GetNextEvent @ 0x1C000546C (ESM_GetNextEvent.c)
 *     ESM_FindAndSetTargetState @ 0x1C000553C (ESM_FindAndSetTargetState.c)
 *     ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C00057C8 (ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     ESM_ShouldQueueWorkItem @ 0x1C0005910 (ESM_ShouldQueueWorkItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

KIRQL __fastcall ESM_RunStateMachine(char *Context, int a2, KIRQL *a3)
{
  __int64 v3; // r15
  KSPIN_LOCK *v4; // rbp
  int v5; // r12d
  unsigned int NextEvent; // edi
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  KIRQL result; // al
  unsigned __int8 v14; // r8
  char v15; // r9
  unsigned __int8 v16; // dl
  __int64 v17; // rcx
  char v18; // [rsp+68h] [rbp+10h] BYREF

  v3 = *((_QWORD *)Context + 121);
  v4 = (KSPIN_LOCK *)(Context + 840);
  v5 = *((_DWORD *)Context + 244);
  v18 = 0;
  while ( 1 )
  {
    if ( a2 == 1000 )
    {
      NextEvent = ESM_GetNextEvent(Context);
      if ( NextEvent == 1000 )
      {
        v11 = *((_QWORD *)Context + 120);
        Context[848] = 0;
        v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 1632))(
                WdfDriverGlobals,
                v11);
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01023 + 1648))(
                 WdfDriverGlobals,
                 v12,
                 "State Machine Tag",
                 1164LL,
                 "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\smengine.c");
      }
      KeReleaseSpinLock(v4, *a3);
      *a3 = KeAcquireSpinLockRaiseToDpc(v4);
    }
    else
    {
      NextEvent = a2;
      a2 = 1000;
    }
    KeReleaseSpinLock(v4, *a3);
    if ( !(unsigned __int8)ESM_FindAndSetTargetState(Context, NextEvent, &v18) )
      goto LABEL_9;
    if ( v18 )
    {
      v18 = 0;
      if ( NextEvent != 126
        && !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
              WdfDriverGlobals,
              *((_QWORD *)Context + 126),
              0LL) )
      {
        result = KeAcquireSpinLockRaiseToDpc(v4);
        v14 = Context[948];
        v15 = Context[949];
        v16 = v14;
        *a3 = result;
        if ( v14 == v15 )
        {
LABEL_17:
          Context[1016] = 1;
          return result;
        }
        while ( *(_DWORD *)&Context[4 * v16 + 884] != 126 )
        {
          v16 = (v16 + 1) & 0xF;
          if ( v16 == v15 )
            goto LABEL_17;
        }
        if ( v16 != v15 )
        {
          while ( v16 != v14 )
          {
            v17 = v16;
            v16 = (v16 - 1) & 0xF;
            *(_DWORD *)&Context[4 * v17 + 884] = *(_DWORD *)&Context[4 * (((_BYTE)v17 - 1) & 0xF) + 884];
            v14 = Context[948];
          }
          *(_DWORD *)&Context[4 * v14 + 884] = 1000;
          Context[948] = (Context[948] + 1) & 0xF;
        }
        KeReleaseSpinLock(v4, result);
      }
    }
    LOBYTE(v10) = *(_BYTE *)(*(_QWORD *)(v3
                                       + 8LL
                                       * (unsigned int)(*(_DWORD *)&Context[4 * *((unsigned int *)Context + 220) + 852]
                                                      - v5))
                           + 16LL) & 0x10;
    if ( (unsigned __int8)ESM_ShouldQueueWorkItem(Context, v10) )
      break;
    a2 = ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(Context);
    if ( a2 == 1003 )
      goto LABEL_25;
LABEL_9:
    *a3 = KeAcquireSpinLockRaiseToDpc(v4);
  }
  IoQueueWorkItem(*((PIO_WORKITEM *)Context + 123), ESM_SmWorker, DelayedWorkQueue, Context);
LABEL_25:
  result = KeAcquireSpinLockRaiseToDpc(v4);
  *a3 = result;
  return result;
}
