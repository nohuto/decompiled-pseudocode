/*
 * XREFs of PiPnpRtlInit @ 0x140825E70
 * Callers:
 *     PnpBootPhaseComplete @ 0x140827E8C (PnpBootPhaseComplete.c)
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x1402201F8 (CmIsStateSeparationEnabled.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 *     _PnpCtxSetNtPlugPlayRoutine @ 0x140825FD0 (_PnpCtxSetNtPlugPlayRoutine.c)
 *     PiDrvDbInit @ 0x140826000 (PiDrvDbInit.c)
 *     _PnpCtxOpenMachine @ 0x140827888 (_PnpCtxOpenMachine.c)
 *     _PnpCtxRegisterMachineNode @ 0x140A22DB0 (_PnpCtxRegisterMachineNode.c)
 */

__int64 __fastcall PiPnpRtlInit(unsigned int a1)
{
  int v2; // ebx
  int v4; // ecx
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // r9d
  HANDLE Handle; // [rsp+58h] [rbp+10h] BYREF

  Handle = 0LL;
  if ( a1 )
    return (unsigned int)PiDrvDbInit(a1);
  qword_140C45698 = (__int64)&PiPnpRtlActiveOperations;
  PiPnpRtlActiveOperations = (__int64)&PiPnpRtlActiveOperations;
  v2 = ExInitializeResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
  if ( v2 >= 0 )
  {
    v2 = ExInitializeResourceLite(&PiPnpRtlActiveOperationsLock);
    if ( v2 >= 0 )
    {
      v2 = PnpCtxOpenMachine(v4, 0, v5, 0);
      if ( v2 >= 0 )
      {
        if ( !CmIsStateSeparationEnabled()
          || (*(_QWORD *)&PiPnpRtlCtx ? (v11 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) : (v11 = 0LL),
              (int)SysCtxRegOpenKey(v11, 2147483650LL, (__int64)L"DEVICES", 0, 0x2000000u, (__int64)&Handle) < 0
           || (v2 = PnpCtxRegisterMachineNode(v6, (unsigned int)L"DEVICES", 2, v12, (__int64)Handle),
               ZwClose(Handle),
               v2 >= 0)) )
        {
          v2 = PnpCtxSetNtPlugPlayRoutine(v6, 1LL, PiPnpRtlGetDeviceNtPropertyRoutine);
          if ( v2 >= 0 )
          {
            v2 = PnpCtxSetNtPlugPlayRoutine(v7, 2LL, PiPnpRtlGetDeviceStatus);
            if ( v2 >= 0 )
            {
              v2 = PnpCtxSetNtPlugPlayRoutine(v8, 3LL, PiPnpRtlGetDeviceRelatedDeviceRoutine);
              if ( v2 >= 0 )
              {
                v2 = PnpCtxSetNtPlugPlayRoutine(v9, 4LL, PiPnpRtlGetDeviceRelationsList);
                if ( v2 >= 0 )
                {
                  v2 = PnpCtxSetNtPlugPlayRoutine(v10, 5LL, PiPnpRtlGetDeviceInterfaceEnabled);
                  if ( v2 >= 0 )
                  {
                    _InterlockedExchange64(
                      (volatile __int64 *)(*(_QWORD *)&PiPnpRtlCtx + 488LL),
                      (__int64)PiPnpRtlObjectActionCallback);
                    _InterlockedExchange64(
                      (volatile __int64 *)(*(_QWORD *)&PiPnpRtlCtx + 504LL),
                      (__int64)PiPnpRtlCmActionCallback);
                    _InterlockedExchange64(
                      (volatile __int64 *)(*(_QWORD *)&PiPnpRtlCtx + 496LL),
                      (__int64)PiPnpRtlObjectEventCallback);
                    return (unsigned int)PiDrvDbInit(a1);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v2;
}
