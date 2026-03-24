/*
 * XREFs of ACPIWakeRemoveDevicesAndUpdate @ 0x1C0026398
 * Callers:
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1C00255F0 (ACPIDeviceIrpWaitWakeRequestPending.c)
 *     ACPIWakeEmptyRequestQueue @ 0x1C00257CC (ACPIWakeEmptyRequestQueue.c)
 *     ACPIRootPowerCallBack @ 0x1C0031590 (ACPIRootPowerCallBack.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C00502C0 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1C0051B40 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 *     OSNotifyDeviceWake @ 0x1C0058CEC (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0058F78 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C0059198 (OSNotifyDeviceWakeByInterrupt.c)
 * Callees:
 *     ACPIGpeIndexToGpeRegister @ 0x1C001A108 (ACPIGpeIndexToGpeRegister.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001DBF4 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIWriteGpeEnableRegister @ 0x1C002662C (ACPIWriteGpeEnableRegister.c)
 *     ACPIWriteGpeStatusRegister @ 0x1C0026890 (ACPIWriteGpeStatusRegister.c)
 *     ACPIGpeIndexToByteIndex @ 0x1C002697C (ACPIGpeIndexToByteIndex.c)
 *     memset @ 0x1C0032480 (memset.c)
 */

void __fastcall ACPIWakeRemoveDevicesAndUpdate(__int64 a1, __int64 a2)
{
  char v4; // bp
  __int64 *v5; // rdx
  unsigned __int16 *v6; // rdx
  unsigned int i; // r10d
  __int64 v8; // r9
  __int64 *v9; // rsi
  __int64 v10; // rbx
  unsigned int v11; // eax
  int v12; // edi
  __int64 v13; // rbx
  unsigned __int8 v14; // cl
  _BYTE *v15; // rax
  unsigned int v16; // ebx
  _QWORD *v17; // rax
  void **v18; // rcx
  __int64 **v19; // rax
  __int64 v20; // rax
  const char *v21; // rcx

  v4 = *((_BYTE *)AcpiInformation + 133);
  KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  if ( !v4 )
  {
    v6 = (unsigned __int16 *)AcpiInformation;
    for ( i = 0; i < *((unsigned __int16 *)AcpiInformation + 51); v6 = (unsigned __int16 *)AcpiInformation )
    {
      v8 = i++;
      *((_BYTE *)GpeCurEnable + v8) &= *((_BYTE *)GpeSpecialHandler + v8) | (unsigned __int8)~(*((_BYTE *)GpeWakeEnable
                                                                                               + v8) | *((_BYTE *)GpeWakeHandler + v8));
    }
    memset(GpeWakeEnable, 0, v6[51]);
  }
  v9 = (__int64 *)AcpiPowerWaitWakeList;
  while ( v9 != &AcpiPowerWaitWakeList )
  {
    v5 = v9;
    v9 = (__int64 *)*v9;
    v10 = v5[5];
    if ( v10 == a1 )
    {
      _InterlockedExchange64((volatile __int64 *)(v5[25] + 104), 0LL);
      if ( !*(_BYTE *)(v5[25] + 68) )
      {
        v17 = (_QWORD *)*v5;
        if ( *(__int64 **)(*v5 + 8) != v5
          || (v18 = (void **)v5[1], *v18 != v5)
          || (*v18 = v17, v17[1] = v18, v19 = *(__int64 ***)(a2 + 8), *v19 != (__int64 *)a2) )
        {
          __fastfail(3u);
        }
        *v5 = a2;
        v5[1] = (__int64)v19;
        *v19 = v5;
        *(_QWORD *)(a2 + 8) = v5;
        *((_DWORD *)v5 + 14) &= ~0x40u;
        *((_DWORD *)v5 + 27) |= 2u;
      }
    }
    else if ( !v4 && (*(_QWORD *)(v10 + 960) & 0x500000000LL) == 0 && *((_DWORD *)v5 + 26) >= AcpiMostRecentSleepState )
    {
      if ( *(_BYTE *)((unsigned int)ACPIGpeIndexToByteIndex(*(unsigned int *)(v10 + 464)) + GpeMap) )
      {
        v20 = *(_QWORD *)(v10 + 8);
        v5 = (__int64 *)&unk_1C00701BA;
        v21 = (const char *)&unk_1C00701BA;
        if ( (v20 & 0x200000000000LL) != 0 )
        {
          v5 = *(__int64 **)(v10 + 568);
          if ( (v20 & 0x400000000000LL) != 0 )
            v21 = *(const char **)(v10 + 576);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0x11u,
            0x18u,
            (__int64)&WPP_78661b2d78ff34e38fc1910a80efa3ce_Traceguids,
            *(_DWORD *)(v10 + 464),
            v10,
            (const char *)v5,
            v21);
      }
      else
      {
        v11 = ACPIGpeIndexToGpeRegister(*(unsigned int *)(v10 + 464));
        v5 = (__int64 *)GpeWakeEnable;
        v12 = 1 << (*(_BYTE *)(v10 + 464) & 7);
        v13 = v11;
        v14 = *((_BYTE *)GpeWakeEnable + v11);
        if ( (v14 & (unsigned __int8)v12) == 0 )
        {
          *((_BYTE *)GpeWakeEnable + v11) = v12 | v14;
          ACPIWriteGpeStatusRegister(v11);
          if ( ((unsigned __int8)v12 & *((_BYTE *)GpeEnable + v13)) != 0 )
          {
            if ( ((unsigned __int8)v12 & *((_BYTE *)GpeSpecialHandler + v13)) == 0 )
            {
              v15 = GpeWakeHandler;
              goto LABEL_16;
            }
          }
          else if ( ((unsigned __int8)v12 & *((_BYTE *)GpeCurEnable + v13)) == 0 )
          {
            *((_BYTE *)GpeIsLevel + v13) |= v12;
            v15 = GpeCurEnable;
LABEL_16:
            v15[v13] |= v12;
          }
        }
      }
    }
  }
  if ( !v4 )
  {
    v16 = 0;
    if ( *((_WORD *)AcpiInformation + 51) )
    {
      do
      {
        if ( AcpiPowerLeavingS0 )
        {
          v5 = (__int64 *)GpeCurEnable;
          *((_BYTE *)GpeCurEnable + v16) &= ~*((_BYTE *)GpeWakeEnable + v16);
        }
        else
        {
          *((_BYTE *)GpeCurEnable + v16) |= *((_BYTE *)GpeWakeEnable + v16) & (unsigned __int8)~*((_BYTE *)GpePending
                                                                                                + v16);
        }
        LOBYTE(v5) = *((_BYTE *)GpeCurEnable + v16);
        ACPIWriteGpeEnableRegister(v16++, v5);
        v5 = (__int64 *)*((unsigned __int16 *)AcpiInformation + 51);
      }
      while ( v16 < (unsigned int)v5 );
    }
  }
  KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
}
