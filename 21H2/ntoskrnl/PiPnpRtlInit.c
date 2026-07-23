/*
 * XREFs of PiPnpRtlInit @ 0x1407A3550
 * Callers:
 *     PnpBootPhaseComplete @ 0x1407A33F4 (PnpBootPhaseComplete.c)
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x1402486E8 (CmIsStateSeparationEnabled.c)
 *     ExInitializeResourceLite @ 0x1402C1550 (ExInitializeResourceLite.c)
 *     _PnpCtxRegCloseKey @ 0x1406306B4 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegOpenKey @ 0x14063562C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxSetNtPlugPlayRoutine @ 0x1407A36DC (_PnpCtxSetNtPlugPlayRoutine.c)
 *     PiDrvDbInit @ 0x1407A370C (PiDrvDbInit.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x1407A45FC (PiDrvDbEnumDriverStoreNodes.c)
 *     _PnpCtxOpenMachine @ 0x1407A475C (_PnpCtxOpenMachine.c)
 *     _PnpCtxRegisterMachineNode @ 0x140974B58 (_PnpCtxRegisterMachineNode.c)
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
  int v11; // ecx
  int v12; // r9d
  __int64 v13; // rcx
  int v14; // [rsp+50h] [rbp+8h] BYREF
  void *v15; // [rsp+58h] [rbp+10h] BYREF

  v14 = 0;
  v15 = 0LL;
  if ( a1 )
    return (unsigned int)PiDrvDbInit(a1);
  qword_140C44278 = (__int64)&PiPnpRtlActiveOperations;
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
          || (int)PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, -2147483646, (int)L"DEVICES", 0, 0x2000000, (__int64)&v15) < 0
          || (v2 = PnpCtxRegisterMachineNode(v11, (unsigned int)L"DEVICES", 2, v12, (__int64)v15),
              PnpCtxRegCloseKey(v13, v15),
              v2 >= 0) )
        {
          v2 = PiDrvDbEnumDriverStoreNodes(PiPnpRtlRegisterDriverMachineNodeCallback, &v14);
          if ( v2 >= 0 )
          {
            v2 = v14;
            if ( v14 >= 0 )
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
    }
  }
  return (unsigned int)v2;
}
