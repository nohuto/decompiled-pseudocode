/*
 * XREFs of ACPIAmliEvaluateDsm @ 0x1C0099BE8
 * Callers:
 *     ACPIEvaluateDsmEmcaMethodOnRootBus @ 0x1C00102D4 (ACPIEvaluateDsmEmcaMethodOnRootBus.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0011910 (ACPIThermalGetSensorDevice.c)
 *     AcpiEvaluateDsmMethodOnPciRootBus @ 0x1C0098240 (AcpiEvaluateDsmMethodOnPciRootBus.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C0099B08 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIThermalStartDevice @ 0x1C009A220 (ACPIThermalStartDevice.c)
 *     ACPIThermalWorker @ 0x1C009A7E0 (ACPIThermalWorker.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1C00B0BC0 (ACPIPepInitializePlatformNotificationSupport.c)
 *     ACPIPepPlatformEntryExitNotify @ 0x1C00B0E68 (ACPIPepPlatformEntryExitNotify.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C00B3EBC (PnpiUpdateForceActiveBothInterrupts.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B8AC (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B8E0 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x1C0020AF0 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0032180 (memset.c)
 */

__int64 __fastcall ACPIAmliEvaluateDsm(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 *v9; // rbp
  int v10; // ebx
  PVOID PoolWithTag; // rsi
  _OWORD *v13; // rdi

  v7 = a4;
  v8 = a3;
  v9 = AMLIGetNamedChild(a1, 1297302623);
  if ( v9 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x41706341u);
    if ( PoolWithTag )
    {
      v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x52706341u);
      if ( v13 )
      {
        memset(PoolWithTag, 0, 0xA0uLL);
        *v13 = 0LL;
        v13[1] = 0LL;
        *((_QWORD *)v13 + 4) = 0LL;
        *((_WORD *)PoolWithTag + 1) = 3;
        *((_DWORD *)PoolWithTag + 6) = 16;
        *((_QWORD *)PoolWithTag + 4) = a2;
        *((_QWORD *)PoolWithTag + 7) = v8;
        *((_WORD *)PoolWithTag + 21) = 1;
        *((_WORD *)PoolWithTag + 41) = 1;
        *((_QWORD *)PoolWithTag + 12) = v7;
        *((_WORD *)PoolWithTag + 61) = 4;
        *((_DWORD *)PoolWithTag + 36) = 48;
        *((_QWORD *)PoolWithTag + 19) = a5;
        v10 = AMLIEvalNameSpaceObject((unsigned __int64 *)v9, (__int64)v13, 4, PoolWithTag);
        if ( v10 >= 0 )
        {
          if ( (_DWORD)v7 || *((_WORD *)v13 + 1) == 3 )
          {
            *a6 = v13;
            v10 = 0;
          }
          else
          {
            v10 = -1073741823;
          }
        }
      }
      else
      {
        v10 = -1073741670;
      }
      ExFreePoolWithTag(PoolWithTag, 0x41706341u);
      if ( v10 < 0 && v13 )
        ExFreePoolWithTag(v13, 0x52706341u);
    }
    else
    {
      v10 = -1073741670;
    }
    AMLIDereferenceHandleEx((__int64)v9);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v10;
}
