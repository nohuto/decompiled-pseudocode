/*
 * XREFs of ESM_RunStateMachine @ 0x1C0007FA0
 * Callers:
 *     ESM_AddEvent @ 0x1C0007E70 (ESM_AddEvent.c)
 *     ESM_SmWorker @ 0x1C004E8A0 (ESM_SmWorker.c)
 * Callees:
 *     ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C0008368 (ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     ESM_FindAndSetTargetState @ 0x1C0008760 (ESM_FindAndSetTargetState.c)
 *     ESM_ShouldQueueWorkItem @ 0x1C00190DC (ESM_ShouldQueueWorkItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

KIRQL __fastcall ESM_RunStateMachine(char *Context, int a2, KIRQL *a3)
{
  __int64 v3; // r15
  KSPIN_LOCK *v4; // rbp
  int v5; // r12d
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v11; // r9
  __int64 i; // rcx
  unsigned __int8 v13; // r9
  unsigned int j; // ebx
  char v15; // r10
  unsigned __int8 v16; // dl
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  KIRQL v20; // al
  unsigned __int8 v21; // dl
  KIRQL v22; // r9
  char v23; // r8
  KIRQL result; // al
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rax
  char v28; // [rsp+68h] [rbp+10h] BYREF

  v3 = *((_QWORD *)Context + 121);
  v4 = (KSPIN_LOCK *)(Context + 840);
  v5 = *((_DWORD *)Context + 244);
  v28 = 0;
  while ( 1 )
  {
    if ( a2 == 1000 )
    {
      v9 = *((unsigned int *)Context + 220);
      v10 = *((_DWORD *)Context + 244);
      v11 = *((_QWORD *)Context + 121);
      for ( i = *(_QWORD *)(v11 + 8LL * (unsigned int)(*(_DWORD *)&Context[4 * v9 + 852] - v10));
            (_DWORD)v9;
            i = *(_QWORD *)(v11 + 8LL * (unsigned int)(*(_DWORD *)&Context[4 * v9 + 852] - v10)) )
      {
        if ( (*(_DWORD *)(i + 16) & 4) == 0 )
          break;
        v9 = (unsigned int)(v9 - 1);
      }
      v13 = Context[948];
      j = 1000;
      v15 = Context[949];
      v16 = v13;
      v17 = *(unsigned int *)(i + 16);
      if ( v13 != v15 )
      {
        while ( 1 )
        {
          v18 = *(_DWORD *)&Context[4 * v16 + 884] & 3;
          if ( !v18 )
            break;
          if ( v18 == 2 )
          {
            if ( (v17 & 1) == 0 )
              break;
          }
          else if ( v18 == 3 && (v17 & 2) != 0 )
          {
            break;
          }
          v16 = (v16 + 1) & 0xF;
          if ( v16 == v15 )
            goto LABEL_14;
        }
        if ( v16 != v15 )
        {
          for ( j = *(_DWORD *)&Context[4 * v16 + 884]; v16 != v13; v13 = Context[948] )
          {
            v19 = v16;
            v16 = (v16 - 1) & 0xF;
            *(_DWORD *)&Context[4 * v19 + 884] = *(_DWORD *)&Context[4 * (((_BYTE)v19 - 1) & 0xF) + 884];
          }
          *(_DWORD *)&Context[4 * v13 + 884] = 1000;
          Context[948] = (Context[948] + 1) & 0xF;
        }
      }
LABEL_14:
      if ( j == 1000 )
      {
        v26 = *((_QWORD *)Context + 120);
        Context[848] = 0;
        v27 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 1632))(
                WdfDriverGlobals,
                v26,
                v17);
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01023 + 1648))(
                 WdfDriverGlobals,
                 v27,
                 "State Machine Tag",
                 1164LL,
                 "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\smengine.c");
      }
      KeReleaseSpinLock(v4, *a3);
      *a3 = KeAcquireSpinLockRaiseToDpc(v4);
    }
    else
    {
      j = a2;
      a2 = 1000;
    }
    KeReleaseSpinLock(v4, *a3);
    if ( !(unsigned __int8)ESM_FindAndSetTargetState(Context, j, &v28) )
      goto LABEL_36;
    if ( v28 )
    {
      v28 = 0;
      if ( j != 126
        && !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
              WdfDriverGlobals,
              *((_QWORD *)Context + 126),
              0LL) )
      {
        v20 = KeAcquireSpinLockRaiseToDpc(v4);
        v21 = Context[948];
        v22 = v20;
        v23 = Context[949];
        *a3 = v20;
        result = v21;
        if ( v21 == v23 )
        {
LABEL_28:
          Context[1016] = 1;
          return result;
        }
        while ( *(_DWORD *)&Context[4 * result + 884] != 126 )
        {
          result = (result + 1) & 0xF;
          if ( result == v23 )
            goto LABEL_28;
        }
        if ( result != v23 )
        {
          for ( ; result != v21; v21 = Context[948] )
          {
            v25 = result;
            result = (result - 1) & 0xF;
            *(_DWORD *)&Context[4 * v25 + 884] = *(_DWORD *)&Context[4 * (((_BYTE)v25 - 1) & 0xF) + 884];
          }
          *(_DWORD *)&Context[4 * v21 + 884] = 1000;
          Context[948] = (Context[948] + 1) & 0xF;
        }
        KeReleaseSpinLock(v4, v22);
      }
    }
    if ( (unsigned __int8)ESM_ShouldQueueWorkItem(
                            Context,
                            *(_BYTE *)(*(_QWORD *)(v3
                                                 + 8LL
                                                 * (unsigned int)(*(_DWORD *)&Context[4
                                                                                    * *((unsigned int *)Context + 220)
                                                                                    + 852]
                                                                - v5))
                                     + 16LL) & 0x10) )
      break;
    a2 = ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(Context);
    if ( a2 == 1003 )
      goto LABEL_39;
LABEL_36:
    *a3 = KeAcquireSpinLockRaiseToDpc(v4);
  }
  IoQueueWorkItem(*((PIO_WORKITEM *)Context + 123), ESM_SmWorker, DelayedWorkQueue, Context);
LABEL_39:
  result = KeAcquireSpinLockRaiseToDpc(v4);
  *a3 = result;
  return result;
}
