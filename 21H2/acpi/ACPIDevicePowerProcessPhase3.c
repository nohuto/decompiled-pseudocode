/*
 * XREFs of ACPIDevicePowerProcessPhase3 @ 0x1C00136BC
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C0020030 (ACPIDevicePowerDpc.c)
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C001467C (AMLIAsyncEvalObject.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C00147A8 (ACPIIsPowerNodeMissingDependencies.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00199A8 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D78C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qsL @ 0x1C001D830 (WPP_RECORDER_SF_qsL.c)
 *     ACPIDeviceCompletePhase3Off @ 0x1C002D5C0 (ACPIDeviceCompletePhase3Off.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 */

__int64 ACPIDevicePowerProcessPhase3()
{
  unsigned int v0; // edi
  char v1; // bp
  char v2; // r9
  char v3; // r12
  __int64 *v4; // r13
  char v5; // cl
  __int64 v6; // rbx
  _QWORD *v7; // r9
  __int32 v8; // ecx
  _QWORD *v9; // r8
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  const char *v15; // r15
  __int64 (__fastcall *v16)(); // r14
  int v17; // edx
  unsigned int v18; // edi
  __int64 v19; // rax
  __int64 *v20; // rsi
  __int64 v21; // rbx
  unsigned int v22; // eax
  int v23; // edx
  char v25; // [rsp+80h] [rbp+8h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      10,
      67,
      (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids);
  v0 = 0;
  v1 = 0;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  do
  {
LABEL_4:
    if ( Phase3PendingOffWorkCount )
    {
      v2 = 1;
      v25 = 1;
    }
    else
    {
      Phase3CurrentOffResourceOrder = -1;
      v2 = 0;
      v25 = 0;
    }
    if ( Phase3PendingOnWorkCount )
    {
      v3 = 1;
    }
    else
    {
      v3 = 0;
      Phase3CurrentOnResourceOrder = 0;
    }
    if ( !Phase3PendingOnWorkCount && !Phase3PendingOffWorkCount )
      v1 = 1;
    v4 = (__int64 *)AcpiPowerNodeList;
    ++Phase3PendingOnWorkCount;
    v5 = 0;
    if ( (__int64 *)AcpiPowerNodeList != &AcpiPowerNodeList )
    {
      while ( 1 )
      {
        v6 = (__int64)v4;
        v4 = (__int64 *)*v4;
        if ( v3 && *(unsigned __int8 *)(v6 + 40) > (unsigned int)Phase3CurrentOnResourceOrder )
        {
LABEL_59:
          v5 = 0;
          break;
        }
        if ( v2
          && *(unsigned __int8 *)(v6 + 40) > (unsigned int)Phase3CurrentOffResourceOrder
          && _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 64), 1, 1) == 3 )
        {
          v5 = 1;
          break;
        }
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 64), 4, 3) != 3 )
          goto LABEL_56;
        v1 = 0;
        v7 = *(_QWORD **)(v6 + 48);
        v8 = 0;
        while ( v7 != (_QWORD *)(v6 + 48) )
        {
          v9 = v7;
          v10 = *(v7 - 1);
          v7 = (_QWORD *)*v7;
          if ( _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 512), 0, 0) && *((_BYTE *)v9 - 16) )
            goto LABEL_31;
          v11 = *(_DWORD *)(v10 + 504);
          if ( v11 == *((_DWORD *)v9 - 5) )
          {
            if ( v11 == 4 )
            {
              if ( (*(_DWORD *)(v10 + 8) & 0x800LL) != 0 && (*(_DWORD *)(v10 + 960) & 0x10000000) == 0
                || *(_BYTE *)(v10 + 625) )
              {
                goto LABEL_31;
              }
            }
            else
            {
              if ( v11 == 1 )
                *(_BYTE *)(v10 + 625) = 0;
LABEL_31:
              ++v8;
            }
          }
        }
        _InterlockedExchange((volatile __int32 *)(v6 + 24), v8);
        v12 = *(_QWORD *)(v6 + 16);
        if ( (v12 & 0x440) == 0 && ((v12 & 0x2220) != 0 || v8) )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 64), 1, 4);
          ++Phase3PendingOnWorkCount;
          *(_DWORD *)(v6 + 68) = 0;
          KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
          v13 = *(_QWORD *)(v6 + 16) & 0x2000LL;
          if ( (*(_QWORD *)(v6 + 16) & 0x2000) != 0 )
            v14 = *(_QWORD *)(v6 + 88);
          else
            v14 = *(_QWORD *)(v6 + 72);
          v15 = "_RST";
          if ( !v13 )
            v15 = "_ON";
          v16 = ACPIDeviceCompletePhase3Reset;
          if ( !v13 )
            v16 = ACPIDeviceCompletePhase3On;
          if ( (unsigned __int8)ACPIIsPowerNodeMissingDependencies(v6) )
          {
            v18 = -1073741661;
          }
          else
          {
            v18 = AMLIAsyncEvalObject(v14, 0, 0, 0, (__int64)v16, v6);
            v19 = *(_QWORD *)(v6 + 16);
            if ( (v19 & 0x2000) != 0 )
              *(_QWORD *)(v6 + 16) = v19 & 0xFFFFFFFFFFFFDFFFuLL;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qsL(
              WPP_GLOBAL_Control->DeviceExtension,
              v17,
              10,
              68,
              (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids,
              v6,
              (__int64)v15,
              v18);
          if ( v18 != 259 )
            ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64))v16)(v14, v18, 0LL, v6);
          KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
          v2 = v25;
          if ( v18 == 259 )
          {
            v0 = 0;
            if ( !v3 )
            {
              v3 = 1;
              Phase3CurrentOnResourceOrder = *(unsigned __int8 *)(v6 + 40);
            }
          }
          else
          {
            v0 = 0;
          }
        }
        else
        {
          v2 = v25;
        }
LABEL_56:
        if ( v4 == &AcpiPowerNodeList )
          goto LABEL_59;
      }
    }
    if ( !--Phase3PendingOnWorkCount )
    {
      v3 = 0;
      Phase3CurrentOnResourceOrder = 0;
    }
    if ( v3 )
      goto LABEL_89;
  }
  while ( v4 != &AcpiPowerNodeList && !v5 );
  while ( 1 )
  {
    ++Phase3PendingOffWorkCount;
    v20 = (__int64 *)qword_1C00821B8;
    while ( v20 != &AcpiPowerNodeList )
    {
      v21 = (__int64)v20;
      v20 = (__int64 *)v20[1];
      v22 = *(unsigned __int8 *)(v21 + 40);
      if ( v22 <= Phase3CurrentOffResourceOrder )
      {
        if ( v2 && v22 < Phase3CurrentOffResourceOrder )
          break;
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 64), 1, 4) == 4 )
        {
          ++Phase3PendingOffWorkCount;
          v1 = 0;
          *(_DWORD *)(v21 + 68) = 0;
          KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
          if ( (unsigned __int8)ACPIIsPowerNodeMissingDependencies(v21) )
          {
            v0 = -1073741661;
          }
          else if ( (AcpiOverrideAttributes & 0x4000000) == 0 || !AcpiKsrInProgress )
          {
            v0 = AMLIAsyncEvalObject(*(_QWORD *)(v21 + 80), 0, 0, 0, (__int64)ACPIDeviceCompletePhase3Off, v21);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v23) = 4;
            WPP_RECORDER_SF_qD(
              WPP_GLOBAL_Control->DeviceExtension,
              v23,
              10,
              69,
              (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids,
              v21,
              v0);
          }
          if ( v0 != 259 )
            ACPIDeviceCompletePhase3Off(*(_QWORD *)(v21 + 80), v0, 0LL, v21);
          KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
          if ( v0 == 259 )
          {
            v2 = 1;
            Phase3CurrentOffResourceOrder = *(unsigned __int8 *)(v21 + 40);
            v25 = 1;
          }
          else
          {
            v2 = v25;
          }
          v0 = 0;
        }
      }
    }
    if ( !--Phase3PendingOffWorkCount )
    {
      Phase3CurrentOffResourceOrder = -1;
      v2 = 0;
      v25 = 0;
    }
    if ( v2 )
      break;
    if ( v20 == &AcpiPowerNodeList )
    {
      if ( !v1 )
        goto LABEL_4;
      break;
    }
  }
LABEL_89:
  if ( Phase3PendingOnWorkCount > 0 || Phase3PendingOffWorkCount > 0 )
    v1 = 0;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  return v1 == 0 ? 0x103 : 0;
}
